/*
 * XREFs of ?TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x1801C3D7C
 * Callers:
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x1801C3BD0 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x1801C3D20 (-TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInter.c)
 * Callees:
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800609BC (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1801C8CDC (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::TransferWindowBetweenGlomsWorker(
        CApplicationManager *this,
        const struct CTaskWindowFinder *a2,
        struct IImmersiveApplicationInternal *a3,
        struct IImmersiveApplicationInternal *a4,
        const struct TransferWindowOptions *a5)
{
  unsigned int v9; // esi
  int v10; // ebx
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = -2147023728;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  if ( (unsigned __int8)CApplicationManager::_RemoveWindowFromGlom(this, a2, a3) )
  {
    v10 = 9;
    if ( a5 )
    {
      if ( *(_QWORD *)a5 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 32LL))(v12[0]) )
      {
        v10 = 10;
      }
      else if ( (*((_BYTE *)a5 + 8) & 1) != 0 )
      {
        v10 = 11;
      }
    }
    v9 = CApplicationManager::_AddViewToGlom((__int64)this, 0LL, a4, v10, v12[0], 0LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return v9;
}
