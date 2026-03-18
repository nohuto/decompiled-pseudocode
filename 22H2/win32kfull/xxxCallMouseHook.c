/*
 * XREFs of xxxCallMouseHook @ 0x1C000E574
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PhkFirstValid @ 0x1C0071984 (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 */

_BOOL8 __fastcall xxxCallMouseHook(unsigned int a1, __int64 a2, int a3)
{
  __int64 v4; // r8
  int v6; // ebx
  struct tagHOOK *Valid; // rax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int)-a3;
  v9 = 0;
  v6 = (_DWORD)v4 == 0 ? 3 : 0;
  Valid = (struct tagHOOK *)PhkFirstValid(gptiCurrent, 7LL, v4);
  return xxxCallHook2(Valid, v6, a1, a2, &v9, 0) != 0;
}
