/*
 * XREFs of ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C0224A1C
 * Callers:
 *     _CheckMenuItem @ 0x1C0224C40 (_CheckMenuItem.c)
 *     xxxEnableMenuItem @ 0x1C0224CA0 (xxxEnableMenuItem.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00A75F0 (MNLookUpItem.c)
 */

__int64 __fastcall MenuItemState(__int64 a1, unsigned int a2, int a3, int a4, _QWORD *a5)
{
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r8
  unsigned int v12; // edx

  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
    v7 = **(_QWORD **)a1;
  v9 = MNLookUpItem(v7, a2, a3 & 0x400, a5);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v11 = *(_QWORD *)v9;
  v12 = *(_DWORD *)(*(_QWORD *)v9 + 4LL);
  result = a4 & v12;
  *(_DWORD *)(v11 + 4) = v12 ^ a4 & (a3 ^ result);
  return result;
}
