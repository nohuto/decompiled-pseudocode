/*
 * XREFs of VidSchiCheckConditionDeviceCommand @ 0x1C001602C
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00062E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0006850 (VidSchiScheduleCommandToRun.c)
 *     VidSchSubmitDeviceCommand @ 0x1C0015360 (VidSchSubmitDeviceCommand.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C003B3A4 (VidSchiProcessPrimariesTerminationList.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C001BCB2 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 */

__int64 __fastcall VidSchiCheckConditionDeviceCommand(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 156) && !*(_DWORD *)(a2 + 104) )
  {
    if ( (*(_BYTE *)(a2 + 25) & 1) != 0 )
      LOBYTE(v2) = !_VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(_VIDMM_GLOBAL_ALLOC_NONPAGED **)(a2 + 96));
    else
      return 1;
  }
  return v2;
}
