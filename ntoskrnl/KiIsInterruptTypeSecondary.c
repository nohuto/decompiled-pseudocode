/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140290340
 * Callers:
 *     KeDisconnectInterrupt @ 0x14028E38C (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x14028E5A8 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14028FA54 (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x1403D1EFC (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
