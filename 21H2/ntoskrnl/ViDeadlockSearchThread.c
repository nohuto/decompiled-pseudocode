/*
 * XREFs of ViDeadlockSearchThread @ 0x1409E0DD8
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x1409DECB4 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x1409DED24 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockReleaseResource @ 0x1409DF338 (VfDeadlockReleaseResource.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1409E0F48 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x1409C72FC (VfUtilAddressRangeFit.c)
 */

_QWORD *__fastcall ViDeadlockSearchThread(unsigned __int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rbx
  _QWORD *v4; // r10
  __int64 v5; // r11
  _QWORD *result; // rax

  v2 = (a1 >> 12) % 0x3FF;
  v3 = (_QWORD *)(*((_QWORD *)ViDeadlockGlobals + 2050) + 16 * v2);
  if ( (_QWORD *)*v3 == v3
    || !(unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v2 + 2052, a1, a1 + 1) )
  {
    return 0LL;
  }
  while ( 1 )
  {
    result = v4 - 3;
    if ( *(v4 - 3) == v5 )
      break;
    v4 = (_QWORD *)*v4;
    if ( v4 == v3 )
      return 0LL;
  }
  return result;
}
