/*
 * XREFs of KeAndGroupAffinityEx @ 0x140374E80
 * Callers:
 *     HalpInterruptSendIpi @ 0x1402201D0 (HalpInterruptSendIpi.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140307180 (KeQueryLogicalProcessorRelationship.c)
 *     HalRequestSoftwareInterrupt @ 0x14035E9C0 (HalRequestSoftwareInterrupt.c)
 *     PnpSetDeviceAffinityThread @ 0x140361540 (PnpSetDeviceAffinityThread.c)
 *     PpmEventDomainPerfStateChange @ 0x140399F08 (PpmEventDomainPerfStateChange.c)
 *     HalSendNMI @ 0x1404BDCC0 (HalSendNMI.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408F3BB8 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndGroupAffinityEx(_WORD *a1, __int64 a2, char *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx
  char v7; // [rsp+0h] [rbp-28h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *(_DWORD *)(a3 + 10) = 0;
    *((_WORD *)a3 + 7) = 0;
    *((_WORD *)a3 + 4) = *(_WORD *)(a2 + 8);
  }
  else
  {
    a3 = &v7;
  }
  v4 = *(unsigned __int16 *)(a2 + 8);
  if ( *a1 <= (unsigned __int16)v4 )
    v5 = 0LL;
  else
    v5 = *(_QWORD *)a2 & *(_QWORD *)&a1[4 * v4 + 4];
  *(_QWORD *)a3 = v5;
  LOBYTE(v3) = v5 != 0;
  return v3;
}
