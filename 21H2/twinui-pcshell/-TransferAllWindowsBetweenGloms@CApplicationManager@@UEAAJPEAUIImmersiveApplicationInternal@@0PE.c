/*
 * XREFs of ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x1801C3BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1801B36F0 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1801B67C8 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x1801C3D7C (-TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiv.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1801C5294 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     WPP_SF_qSd @ 0x1801C9EB8 (WPP_SF_qSd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::TransferAllWindowsBetweenGloms(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *),
        struct IImmersiveApplicationInternal *a3,
        const struct TransferWindowOptions *a4)
{
  CImmersiveAppFinderByApplication *v8; // rax
  __int64 v9; // r8
  bool v10; // bl
  bool v11; // bl
  char v13; // bl
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+38h] [rbp-30h] BYREF
  char v19; // [rsp+48h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v8 = CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)&v20, a2);
  v10 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
               (__int64)this + 464,
               v8,
               v9,
               &v17) < 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  if ( v10 )
  {
    do
    {
      v18 = 0LL;
      v19 = 1;
      v11 = (int)CApplicationManager::TransferWindowBetweenGlomsWorker(
                   (CApplicationManager *)((char *)this - 240),
                   (const struct CTaskWindowFinder *)&v18,
                   (struct IImmersiveApplicationInternal *)a2,
                   a3,
                   a4) >= 0;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18 + 1);
    }
    while ( v11 );
    if ( (((__int64 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[35])(a2) & 1) != 0 )
      CApplicationManager::_ForgetApplicationNoLock((char *)this - 240, a2, 0LL);
    return 0LL;
  }
  else
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v13 = ((__int64 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[20])(a2);
      v14 = ((__int64 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[3])(a2);
      WPP_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 2), v15, v16, (_DWORD)a2, v14, v13);
    }
    return 2147947423LL;
  }
}
