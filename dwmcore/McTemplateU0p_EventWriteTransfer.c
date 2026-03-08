/*
 * XREFs of McTemplateU0p_EventWriteTransfer @ 0x18019F364
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800EDCB4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800F8A04 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18019B490 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18019CF0C (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C8A90 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C9630 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ??0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z @ 0x18024FA68 (--0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x18024FC68 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0p_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  v5 = &v8;
  v7 = 0;
  v6 = 8;
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 2u, &v4);
}
