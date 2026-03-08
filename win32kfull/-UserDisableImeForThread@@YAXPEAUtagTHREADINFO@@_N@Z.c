/*
 * XREFs of ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00D9794
 * Callers:
 *     NtUserDisableThreadIme @ 0x1C00D96C0 (NtUserDisableThreadIme.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00D975C (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 */

void __fastcall UserDisableImeForThread(struct tagTHREADINFO *a1, char a2)
{
  unsigned __int64 *v2; // rax

  *((_DWORD *)a1 + 122) |= 0x2000000u;
  v2 = (unsigned __int64 *)*((_QWORD *)a1 + 98);
  if ( v2 )
  {
    if ( a2 )
      xxxDestroyWindow(*((__int64 **)a1 + 98));
    else
      PostEventMessageEx(a1, *((struct tagQ **)a1 + 54), 8u, 0LL, 0, *v2, 0LL, 0LL);
  }
}
