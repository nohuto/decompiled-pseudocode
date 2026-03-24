/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C011C384
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C011C26C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C002BAA0 (Win32FreeToPagedLookasideList.c)
 */

__int64 (*__fastcall SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(__int64 *a1))(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))*a1;
  if ( (_UNKNOWN *)*a1 != &gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = (__int64 (*)(void))*a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = (__int64 (*)(void))*a1;
      if ( *(_BYTE *)(*a1 + 12) )
        return Win32FreeToPagedLookasideList((__int64)gpStackRefLookAside, *a1);
    }
  }
  return result;
}
