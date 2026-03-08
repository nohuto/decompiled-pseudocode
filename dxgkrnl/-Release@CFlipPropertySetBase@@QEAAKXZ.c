/*
 * XREFs of ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007F6D4
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C007F850 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C007F9A0 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C007FB30 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x1C007FF60 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C0080970 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C0080A70 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x1C0080D60 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00811E8 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenI.c)
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x1C0083AF0 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x1C0083C08 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0084480 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C00848C0 (--1CFlipResource@@MEAA@XZ.c)
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x1C0087328 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0087BF0 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x1C0087C38 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0087E10 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
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
