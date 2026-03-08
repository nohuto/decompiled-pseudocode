/*
 * XREFs of ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0084B2C
 * Callers:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C007F164 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x1C0085808 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C0085918 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C00860E8 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C0087B98 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPoolBufferResource::AddUsageReference(PRKEVENT *this)
{
  struct DXGGLOBAL *Global; // rax

  if ( !*((_DWORD *)this + 22) )
  {
    KeResetEvent(this[9]);
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, PRKEVENT *, _QWORD))(*((_QWORD *)Global + 38069) + 232LL))(
      HIDWORD(this[7][13].Header.WaitListHead.Blink),
      this,
      0LL);
  }
  ++*((_DWORD *)this + 22);
}
