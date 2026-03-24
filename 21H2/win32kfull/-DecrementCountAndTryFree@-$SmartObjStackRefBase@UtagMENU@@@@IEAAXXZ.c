/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C008AA9C
 * Callers:
 *     xxxCalcClientRect @ 0x1C004A8A0 (xxxCalcClientRect.c)
 *     xxxMNCanClose @ 0x1C0061560 (xxxMNCanClose.c)
 *     xxxGetMenuBarInfo @ 0x1C008AAD8 (xxxGetMenuBarInfo.c)
 *     NtUserCreateWindowEx @ 0x1C00BF540 (NtUserCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 != gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = *a1;
      if ( *(_BYTE *)(*a1 + 12) )
        return Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
    }
  }
  return result;
}
