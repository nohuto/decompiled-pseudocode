/*
 * XREFs of PerfInfoLogSysCallEntry @ 0x1405FC7B0
 * Callers:
 *     KiSystemCall64 @ 0x14042B100 (KiSystemCall64.c)
 *     KiTrackSystemCallEntry @ 0x140972BA0 (KiTrackSystemCallEntry.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallEntry(__int64 a1)
{
  __int64 CurrentServerSilo; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v4 = a1;
  v5 = &v4;
  v7 = 0;
  v6 = 8;
  CurrentServerSilo = PsGetCurrentServerSilo();
  EtwTraceSiloKernelEvent(CurrentServerSilo, (__int64)&v5, 1u, 0x40000040u, 0xF33u, 0x501802u);
  return a1;
}
