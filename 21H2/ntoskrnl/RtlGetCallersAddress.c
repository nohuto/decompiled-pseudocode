/*
 * XREFs of RtlGetCallersAddress @ 0x140588B70
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402C1720 (RtlCaptureStackBackTrace.c)
 */

void __cdecl RtlGetCallersAddress(PVOID *CallersAddress, PVOID *CallersCaller)
{
  USHORT v4; // ax
  void *v5; // r9
  void *v6; // r8
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  v4 = RtlCaptureStackBackTrace(2u, 2u, (PVOID *)&v7, 0LL);
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 )
    v6 = (void *)v7;
  if ( v4 >= 2u )
    v5 = (void *)*((_QWORD *)&v7 + 1);
  *CallersAddress = v6;
  *CallersCaller = v5;
}
