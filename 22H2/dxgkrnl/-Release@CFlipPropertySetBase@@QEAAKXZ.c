/*
 * XREFs of ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C0080304
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C0080480 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C00805D0 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C0080760 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x1C0080B90 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C00815A0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C00816A0 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x1C0081990 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C0081E88 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenI.c)
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x1C0084860 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x1C0084978 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C00851F0 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C0085680 (--1CFlipResource@@MEAA@XZ.c)
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x1C00880E8 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C00889B0 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x1C00889F8 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0088BD0 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipPropertySetBase::Release(CFlipPropertySetBase *this)
{
  bool v1; // zf
  unsigned int v2; // ebx

  v1 = (*((_DWORD *)this + 2))-- == 1;
  v2 = *((_DWORD *)this + 2);
  if ( v1 )
    (**(void (__fastcall ***)(CFlipPropertySetBase *, __int64))this)(this, 1LL);
  return v2;
}
