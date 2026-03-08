/*
 * XREFs of ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x180209210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@PEAW4PointerResult@@@Z @ 0x1801ABB50 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 */

__int64 __fastcall CInteraction::ProcessHandledInteractions(
        _QWORD *a1,
        __int64 a2,
        bool a3,
        int a4,
        struct ManipulationThreadTelemetryData *a5,
        _DWORD *a6)
{
  __int64 result; // rax
  struct IDCompositionInteractionStats *v11; // rsi

  result = 0LL;
  if ( a6 )
    *a6 = 1;
  if ( a1[26] )
  {
    v11 = (struct IDCompositionInteractionStats *)a1[208];
    if ( a3 )
    {
      if ( v11 )
        *((_DWORD *)a5 + 45) = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 120LL))(a1, *(unsigned int *)a5);
    }
    return CInteractionProcessor::ProcessHandledInteractions(
             (__int64)(a1 + 36),
             (struct IManipulationResource *)((a1[26] + 72LL) & ((unsigned __int128)-(__int128)(unsigned __int64)a1[26] >> 64)),
             a2,
             a3,
             a4,
             a5,
             v11,
             a6);
  }
  return result;
}
