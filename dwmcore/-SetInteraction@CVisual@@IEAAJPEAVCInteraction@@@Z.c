/*
 * XREFs of ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E7D34
 * Callers:
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x1800E7CBC (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E7D34 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A504 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E7D34 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E7E28 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800E7FD8 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x1800E8084 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x1800E8150 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetInteraction(CVisual *this, struct CInteraction *a2)
{
  unsigned int v4; // edi
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  CVisual *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  v4 = 0;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  v6 = InteractionInternal;
  if ( a2 != InteractionInternal )
  {
    if ( InteractionInternal )
    {
      CVisual::NotifyMidManipulationUpdate(this, 1LL, this);
      CInteraction::SetVisual(v6, 0LL);
      CVisual::ClearInteraction(this);
    }
    if ( a2 )
    {
      v7 = *((_QWORD *)a2 + 14);
      if ( v7 )
      {
        v11 = *(CVisual **)(v7 + 16);
        if ( v11 )
        {
          v12 = CVisual::SetInteraction(v11, 0LL);
          v4 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xDAFu, 0LL);
            return v4;
          }
        }
      }
      v8 = CInteraction::SetVisual(a2, this);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xDB3u, 0LL);
        return v4;
      }
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)a2 + 8LL))(a2);
      CVisual::SetInteractionInternal(this, a2);
      CVisual::NotifyMidManipulationUpdate(this, 0LL, this);
    }
    CVisual::PropagateFlags((__int64)this, 0x10u);
    *((_BYTE *)this + 100) |= 0x20u;
  }
  return v4;
}
