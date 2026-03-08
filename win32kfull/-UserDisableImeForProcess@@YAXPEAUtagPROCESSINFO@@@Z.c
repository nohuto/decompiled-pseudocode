/*
 * XREFs of ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00D975C
 * Callers:
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D948C (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C00D96C0 (NtUserDisableThreadIme.c)
 * Callees:
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00D9794 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 */

void __fastcall UserDisableImeForProcess(struct tagPROCESSINFO *a1)
{
  struct tagTHREADINFO *i; // rbx

  *((_DWORD *)a1 + 3) |= 0x800000u;
  for ( i = (struct tagTHREADINFO *)*((_QWORD *)a1 + 40); i; i = (struct tagTHREADINFO *)*((_QWORD *)i + 83) )
    UserDisableImeForThread(i, 0);
}
