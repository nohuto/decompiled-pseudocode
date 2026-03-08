/*
 * XREFs of ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C00D3A04
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0086700 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C0213FA8 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 */

struct tagKL *__fastcall LockKbdLayoutListHead(struct tagWINDOWSTATION *a1, struct tagKL *a2)
{
  __int64 *v2; // rax
  int v3; // edx
  __int64 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = (__int64 *)a2;
  if ( a1 )
  {
    v2 = (__int64 *)((char *)a1 + 72);
    v3 = 1;
  }
  else
  {
    v2 = &gspklWinstaLessSessionLayouts;
    v3 = 0;
  }
  v5[0] = v2;
  return (struct tagKL *)HMAssignmentLock(v5, v3);
}
