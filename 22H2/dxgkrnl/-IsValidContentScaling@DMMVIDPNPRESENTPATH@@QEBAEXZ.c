/*
 * XREFs of ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006F54
 * Callers:
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C019A94C (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 * Callees:
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0009840 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0015E0C (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsValidContentScaling(DMMVIDPNPRESENTPATH *this)
{
  unsigned __int8 v3; // al
  __int64 v4; // rcx

  if ( *((_DWORD *)this + 28) == 254 || !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(this) )
    return 1;
  v3 = DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(this);
  v4 = *((int *)this + 28);
  if ( !v3 )
  {
    if ( (_DWORD)v4 == 1 )
      WdLogSingleEntry1(3LL, v4);
    return 1;
  }
  if ( (((_DWORD)v4 - 1) & 0xFFFFFFFB) == 0 )
    return 1;
  WdLogSingleEntry1(2LL, *((int *)this + 28));
  return 0;
}
