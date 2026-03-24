/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140377C04
 * Callers:
 *     KeDisconnectInterrupt @ 0x1403767A4 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x1403769B0 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14037723C (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x14038BED4 (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C00780[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
