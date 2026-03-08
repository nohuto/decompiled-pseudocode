/*
 * XREFs of ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C0213FA8
 * Callers:
 *     xxxActivateKeyboardLayout @ 0x1C0082330 (xxxActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C00D3A04 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
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
