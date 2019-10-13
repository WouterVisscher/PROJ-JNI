/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_kortforsyningen_proj_AuthorityFactory */

#ifndef _Included_org_kortforsyningen_proj_AuthorityFactory
#define _Included_org_kortforsyningen_proj_AuthorityFactory
#ifdef __cplusplus
extern "C" {
#endif
#undef org_kortforsyningen_proj_AuthorityFactory_ANY
#define org_kortforsyningen_proj_AuthorityFactory_ANY 0L
#undef org_kortforsyningen_proj_AuthorityFactory_PRIME_MERIDIAN
#define org_kortforsyningen_proj_AuthorityFactory_PRIME_MERIDIAN 1L
#undef org_kortforsyningen_proj_AuthorityFactory_ELLIPSOID
#define org_kortforsyningen_proj_AuthorityFactory_ELLIPSOID 2L
#undef org_kortforsyningen_proj_AuthorityFactory_DATUM
#define org_kortforsyningen_proj_AuthorityFactory_DATUM 3L
#undef org_kortforsyningen_proj_AuthorityFactory_GEODETIC_REFERENCE_FRAME
#define org_kortforsyningen_proj_AuthorityFactory_GEODETIC_REFERENCE_FRAME 4L
#undef org_kortforsyningen_proj_AuthorityFactory_VERTICAL_REFERENCE_FRAME
#define org_kortforsyningen_proj_AuthorityFactory_VERTICAL_REFERENCE_FRAME 5L
#undef org_kortforsyningen_proj_AuthorityFactory_UNIT_OF_MEASURE
#define org_kortforsyningen_proj_AuthorityFactory_UNIT_OF_MEASURE 6L
#undef org_kortforsyningen_proj_AuthorityFactory_COORDINATE_SYSTEM
#define org_kortforsyningen_proj_AuthorityFactory_COORDINATE_SYSTEM 7L
#undef org_kortforsyningen_proj_AuthorityFactory_CARTESIAN_CS
#define org_kortforsyningen_proj_AuthorityFactory_CARTESIAN_CS 8L
#undef org_kortforsyningen_proj_AuthorityFactory_SPHERICAL_CS
#define org_kortforsyningen_proj_AuthorityFactory_SPHERICAL_CS 9L
#undef org_kortforsyningen_proj_AuthorityFactory_ELLIPSOIDAL_CS
#define org_kortforsyningen_proj_AuthorityFactory_ELLIPSOIDAL_CS 10L
#undef org_kortforsyningen_proj_AuthorityFactory_VERTICAL_CS
#define org_kortforsyningen_proj_AuthorityFactory_VERTICAL_CS 11L
#undef org_kortforsyningen_proj_AuthorityFactory_TEMPORAL_CS
#define org_kortforsyningen_proj_AuthorityFactory_TEMPORAL_CS 12L
#undef org_kortforsyningen_proj_AuthorityFactory_COORDINATE_REFERENCE_SYSTEM
#define org_kortforsyningen_proj_AuthorityFactory_COORDINATE_REFERENCE_SYSTEM 13L
#undef org_kortforsyningen_proj_AuthorityFactory_GEODETIC_CRS
#define org_kortforsyningen_proj_AuthorityFactory_GEODETIC_CRS 14L
#undef org_kortforsyningen_proj_AuthorityFactory_GEOGRAPHIC_CRS
#define org_kortforsyningen_proj_AuthorityFactory_GEOGRAPHIC_CRS 15L
#undef org_kortforsyningen_proj_AuthorityFactory_VERTICAL_CRS
#define org_kortforsyningen_proj_AuthorityFactory_VERTICAL_CRS 16L
#undef org_kortforsyningen_proj_AuthorityFactory_TEMPORAL_CRS
#define org_kortforsyningen_proj_AuthorityFactory_TEMPORAL_CRS 17L
#undef org_kortforsyningen_proj_AuthorityFactory_ENGINEERING_CRS
#define org_kortforsyningen_proj_AuthorityFactory_ENGINEERING_CRS 18L
#undef org_kortforsyningen_proj_AuthorityFactory_PROJECTED_CRS
#define org_kortforsyningen_proj_AuthorityFactory_PROJECTED_CRS 19L
#undef org_kortforsyningen_proj_AuthorityFactory_COMPOUND_CRS
#define org_kortforsyningen_proj_AuthorityFactory_COMPOUND_CRS 20L
#undef org_kortforsyningen_proj_AuthorityFactory_CONVERSION
#define org_kortforsyningen_proj_AuthorityFactory_CONVERSION 21L
#undef org_kortforsyningen_proj_AuthorityFactory_COORDINATE_OPERATION
#define org_kortforsyningen_proj_AuthorityFactory_COORDINATE_OPERATION 22L
/*
 * Class:     org_kortforsyningen_proj_AuthorityFactory
 * Method:    newInstance
 * Signature: (Lorg/kortforsyningen/proj/Context;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_kortforsyningen_proj_AuthorityFactory_newInstance
  (JNIEnv *, jclass, jobject, jstring);

/*
 * Class:     org_kortforsyningen_proj_AuthorityFactory
 * Method:    getDescriptionText
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_kortforsyningen_proj_AuthorityFactory_getDescriptionText
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_kortforsyningen_proj_AuthorityFactory
 * Method:    createGeodeticObject
 * Signature: (ILjava/lang/String;)Lorg/kortforsyningen/proj/IdentifiableObject;
 */
JNIEXPORT jobject JNICALL Java_org_kortforsyningen_proj_AuthorityFactory_createGeodeticObject
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     org_kortforsyningen_proj_AuthorityFactory
 * Method:    createOperation
 * Signature: (Lorg/kortforsyningen/proj/NativeResource;Lorg/kortforsyningen/proj/NativeResource;DZ)Lorg/kortforsyningen/proj/Operation;
 */
JNIEXPORT jobject JNICALL Java_org_kortforsyningen_proj_AuthorityFactory_createOperation
  (JNIEnv *, jobject, jobject, jobject, jdouble, jboolean);

/*
 * Class:     org_kortforsyningen_proj_AuthorityFactory
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_kortforsyningen_proj_AuthorityFactory_release
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
