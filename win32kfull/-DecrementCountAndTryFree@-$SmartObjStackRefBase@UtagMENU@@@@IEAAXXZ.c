/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00A8678
 * Callers:
 *     NtUserCreateWindowEx @ 0x1C0042320 (NtUserCreateWindowEx.c)
 *     xxxMNCanClose @ 0x1C00A4C44 (xxxMNCanClose.c)
 *     xxxGetSysMenuPtr @ 0x1C00A4DFC (xxxGetSysMenuPtr.c)
 *     MNLookUpItem @ 0x1C00A75F0 (MNLookUpItem.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     xxxInsertMenuItem @ 0x1C00A7ADC (xxxInsertMenuItem.c)
 *     xxxCalcClientRect @ 0x1C00AAA20 (xxxCalcClientRect.c)
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
