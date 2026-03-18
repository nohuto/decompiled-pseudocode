/*
 * XREFs of UnlockDesktopMenu @ 0x1C011EECC
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0099B78 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UnlockDesktopMenu(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = *a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 40LL) & 0x40) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    v2 = *a1;
  }
  *(_DWORD *)(*(_QWORD *)(v2 + 40) + 40LL) &= ~0x40u;
  v3 = *a1;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 40) + 44LL) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 88) + 16LL);
    if ( v4 )
    {
      v5 = *(unsigned int *)(*(_QWORD *)(v4 + 40) + 40LL);
      if ( (v5 & 0x40) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
        v3 = *a1;
      }
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 88) + 16LL) + 40LL);
      *(_DWORD *)(v6 + 40) &= ~0x40u;
    }
  }
  return HMAssignmentUnlock(a1);
}
