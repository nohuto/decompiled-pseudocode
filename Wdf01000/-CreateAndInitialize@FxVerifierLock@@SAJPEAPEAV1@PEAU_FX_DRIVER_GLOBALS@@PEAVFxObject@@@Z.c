/*
 * XREFs of ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001B150
 * Callers:
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C0002D68 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00042E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001AABC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C001ACB0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?Initialize@FxVerifierLock@@AEAAJXZ @ 0x1C001B740 (-Initialize@FxVerifierLock@@AEAAJXZ.c)
 */

__int64 __fastcall FxVerifierLock::CreateAndInitialize(
        FxVerifierLock **VerifierLock,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *ParentObject)
{
  bool v3; // zf
  void *v7; // rax
  FX_POOL **v8; // rax
  FxVerifierLock *v9; // rax
  FxVerifierLock *v10; // rdi
  int v11; // ebx
  __m128i v13; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = FxDriverGlobals->FxPoolTrackingOn == 0;
  v13.m128i_i64[0] = 0LL;
  v13.m128i_i64[1] = 64LL;
  if ( v3 )
    v7 = 0LL;
  else
    v7 = retaddr;
  v8 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v13, 0xB0uLL, FxDriverGlobals->Tag, v7);
  if ( v8 && (FxVerifierLock::FxVerifierLock((FxVerifierLock *)v8, FxDriverGlobals, ParentObject), (v10 = v9) != 0LL) )
  {
    v11 = FxVerifierLock::Initialize(v9);
    if ( v11 >= 0 )
      *VerifierLock = v10;
    else
      FxVerifierLock::`scalar deleting destructor'(v10);
  }
  else
  {
    v11 = -1073741670;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, 0xC000009A);
  }
  return (unsigned int)v11;
}
