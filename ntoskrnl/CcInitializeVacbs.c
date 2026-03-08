/*
 * XREFs of CcInitializeVacbs @ 0x140B725CC
 * Callers:
 *     CcInitializeCacheManager @ 0x140B3EB44 (CcInitializeCacheManager.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 */

__int64 *CcInitializeVacbs()
{
  __int64 *result; // rax

  CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources = 0;
  CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources = 0;
  CcVacbArrays = (__int64)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x2800uLL, 0x61566343u);
  if ( !CcVacbArrays )
    KeBugCheckEx(0x34u, 0x9045CuLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  result = &CcVacbFreeList;
  CcMinimumFreeHighPriorityVacbs = 128;
  qword_140C5F718 = (__int64)&CcVacbFreeList;
  CcVacbFreeList = (__int64)&CcVacbFreeList;
  return result;
}
