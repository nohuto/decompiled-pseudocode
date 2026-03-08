/*
 * XREFs of PerfInfoLogSysCallExit @ 0x1405FC840
 * Callers:
 *     KiSystemCall64 @ 0x14042B100 (KiSystemCall64.c)
 *     KiTrackSystemCallExit @ 0x140972CC0 (KiTrackSystemCallExit.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallExit(__int64 a1)
{
  __int64 CurrentServerSilo; // rax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  int *v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v7 = 0;
  v5 = &v4;
  v4 = a1;
  v6 = 4;
  CurrentServerSilo = PsGetCurrentServerSilo();
  EtwTraceSiloKernelEvent(CurrentServerSilo, (__int64)&v5, 1u, 0x40000040u, 0xF34u, 0x501802u);
  return a1;
}
