/*
 * XREFs of SmscpNotifySmOfFailure @ 0x140018808
 * Callers:
 *     SmscMain @ 0x140003F5C (SmscMain.c)
 * Callees:
 *     memset_0 @ 0x140011B7F (memset_0.c)
 */

void __noreturn SmscpNotifySmOfFailure()
{
  int v0; // ebx
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v2[40]; // [rsp+30h] [rbp-168h] BYREF
  int v3; // [rsp+58h] [rbp-140h]
  int v4; // [rsp+60h] [rbp-138h]

  Interval.QuadPart = -50000000LL;
  v0 = *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL);
  while ( 1 )
  {
    memset_0(v2, 0, 0x148uLL);
    v4 = v0;
    v3 = 6;
    RtlSendMsgToSm(SmpApiConnectionPort, v2);
    NtDelayExecution(0, &Interval);
  }
}
