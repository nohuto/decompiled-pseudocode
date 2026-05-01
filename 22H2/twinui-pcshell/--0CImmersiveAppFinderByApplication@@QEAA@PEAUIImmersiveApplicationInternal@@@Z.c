/*
 * XREFs of ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1801B6618
 * Callers:
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801B9170 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x1801C3A20 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1801C4020 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1801C8A54 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1801C8B2C (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     ?HandleDestruction@CImmersiveWindowManager@@UEAA?AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveApplicationInternal@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1801CE710 (-HandleDestruction@CImmersiveWindowManager@@UEAA-AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveAppli.c)
 *     ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1801CED90 (-_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@.c)
 *     ?_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1801CEE94 (-_RemoveApplication@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CImmersiveAppFinderByApplication *__fastcall CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
        CImmersiveAppFinderByApplication *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *))
{
  void (__fastcall *v4)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *); // rbx

  *(_QWORD *)this = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  v4((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, this);
  return this;
}
