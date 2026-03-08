/*
 * XREFs of ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C003E7BC
 * Callers:
 *     DxgkCompleteFStateTransitionCB @ 0x1C0048150 (DxgkCompleteFStateTransitionCB.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003FF7C (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C0051530 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0054968 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::CompleteFStateTransitionCB(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rcx

  if ( *((_QWORD *)this + 379) )
  {
    v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1520);
    v5 = *((_QWORD *)this + 378) + 520LL * v4;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(
        &DxgkControlGuid_Context,
        &Dxgk_CompleteFStateTransitionCB,
        a3,
        this,
        (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1520));
    *(_BYTE *)(v5 + 359) = 0;
    PoFxCompleteIdleState(*((_QWORD *)this + 379), v4);
    v6 = *(_QWORD *)(v5 + 512);
    if ( v6 && !*(_DWORD *)(v5 + 344) )
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v6 + 136));
    if ( *(_DWORD *)(v5 + 208) == 7 )
      DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v5 + 4), *(_DWORD *)(v5 + 344), 0);
    if ( *((_QWORD *)this + 480)
      && (v4 == 1 || v4 == 4)
      && _InterlockedExchangeAdd((volatile signed __int32 *)this + 948, 0xFFFFFFFF) != 1 )
    {
      KeSetEvent((PRKEVENT)((char *)this + 3736), 0, 0);
    }
  }
}
