/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0068450
 * Callers:
 *     xxxCalcClientRect @ 0x1C0066538 (xxxCalcClientRect.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxGetSysMenuPtr @ 0x1C0067210 (xxxGetSysMenuPtr.c)
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 *     xxxMNCanClose @ 0x1C0068094 (xxxMNCanClose.c)
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
