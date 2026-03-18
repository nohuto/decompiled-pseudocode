/*
 * XREFs of ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C004D97C
 * Callers:
 *     ?Initialize@FxCallbackMutexLock@@UEAAXPEAVFxObject@@@Z @ 0x1C004DA70 (-Initialize@FxCallbackMutexLock@@UEAAXPEAVFxObject@@@Z.c)
 *     ?Initialize@FxCallbackSpinLock@@UEAAXPEAVFxObject@@@Z @ 0x1C004DAB0 (-Initialize@FxCallbackSpinLock@@UEAAXPEAVFxObject@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C00317F0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?Initialize@FxVerifierLock@@AEAAJXZ @ 0x1C00322A0 (-Initialize@FxVerifierLock@@AEAAJXZ.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C004D3D4 (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 */

__int64 __fastcall FxVerifierLock::CreateAndInitialize(
        FxVerifierLock **VerifierLock,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *ParentObject,
        unsigned __int8 UseMutex)
{
  FX_POOL **v8; // rax
  FxVerifierLock *v9; // rax
  FxVerifierLock *v10; // rbx
  int v11; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v8 = FxPoolAllocator(
         FxDriverGlobals,
         &FxDriverGlobals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0xB0uLL,
         FxDriverGlobals->Tag,
         retaddr);
  if ( v8 )
  {
    FxVerifierLock::FxVerifierLock((FxVerifierLock *)v8, FxDriverGlobals, ParentObject, UseMutex);
    v10 = v9;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11 = FxVerifierLock::Initialize(v10);
    if ( v11 >= 0 )
      *VerifierLock = v10;
    else
      FxVerifierLock::`scalar deleting destructor'(v10);
  }
  else
  {
    v11 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxVerifierLock_hpp_Traceguids_0, -1073741670);
  }
  return (unsigned int)v11;
}
