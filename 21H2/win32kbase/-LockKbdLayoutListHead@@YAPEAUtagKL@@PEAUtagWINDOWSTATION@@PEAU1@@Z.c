/*
 * XREFs of ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C0050938
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C004E28C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C01E4154 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 */

struct tagKL *__fastcall LockKbdLayoutListHead(struct tagWINDOWSTATION *a1, struct tagKL *a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[1] = (__int64 *)a2;
  if ( a1 )
  {
    v2 = (__int64 *)((char *)a1 + 72);
    v3 = 1LL;
  }
  else
  {
    v2 = &gspklWinstaLessSessionLayouts;
    v3 = 0LL;
  }
  v5[0] = v2;
  return (struct tagKL *)HMAssignmentLock(v5, v3);
}
