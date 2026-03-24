/*
 * XREFs of ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01AACA4
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0008658 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C00093C0 (xxxActivateKeyboardLayout.c)
 * Callees:
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C000A864 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 */

void __fastcall ReorderKeyboardLayouts(struct tagWINDOWSTATION *a1, struct tagKL *a2)
{
  __int64 v2; // r8

  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
      return;
    v2 = *((_QWORD *)a1 + 9);
  }
  else
  {
    v2 = gspklWinstaLessSessionLayouts;
  }
  if ( v2 )
  {
    if ( a2 != (struct tagKL *)v2 )
    {
      *(_QWORD *)(*((_QWORD *)a2 + 3) + 16LL) = *((_QWORD *)a2 + 2);
      *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = *((_QWORD *)a2 + 3);
      *((_QWORD *)a2 + 2) = v2;
      *((_QWORD *)a2 + 3) = *(_QWORD *)(v2 + 24);
      *(_QWORD *)(*(_QWORD *)(v2 + 24) + 16LL) = a2;
      *(_QWORD *)(v2 + 24) = a2;
      LockKbdLayoutListHead(a1, a2);
    }
  }
}
