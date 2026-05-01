/*
 * XREFs of ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x180469420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z @ 0x180462DAC (--0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z.c)
 *     ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1804630D8 (--1CAutoAppTransitionRequest@@UEAA@XZ.c)
 *     ?TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18046F514 (-TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImm.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::OnOutgoingTransitionCompleted(struct IAppTransitionManager **this)
{
  unsigned int v2; // ebx
  struct IAppLayoutOperation **v3; // rsi
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v4; // r9
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF
  void *ppvOut; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  ppvOut = 0LL;
  v3 = this + 16;
  if ( this[16]
    && (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut),
        IUnknown_QueryService(
          (IUnknown *)*(this - 23),
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &ppvOut) >= 0) )
  {
    CAutoAppTransitionRequest::CAutoAppTransitionRequest((CAutoAppTransitionRequest *)v6, this[24]);
    CAutoAppTransitionRequest::TriggerAppTransitionAnimation(
      (CAutoAppTransitionRequest *)v6,
      *v3,
      (struct IImmersiveMonitor *)ppvOut,
      v4);
    (*(void (__fastcall **)(struct IAppTransitionManager *))(*(_QWORD *)this[29] + 64LL))(this[29]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v3);
    CAutoAppTransitionRequest::~CAutoAppTransitionRequest((CAutoAppTransitionRequest *)v6);
  }
  else
  {
    v2 = -2147418113;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v2;
}
