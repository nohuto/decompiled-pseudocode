/*
 * XREFs of ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031CD0
 * Callers:
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C0005728 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00071B0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012F10 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014298 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C003167C (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C00317F0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?Initialize@FxVerifierLock@@AEAAJXZ @ 0x1C00322A0 (-Initialize@FxVerifierLock@@AEAAJXZ.c)
 */

__int64 __fastcall FxVerifierLock::CreateAndInitialize(
        FxVerifierLock **VerifierLock,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *ParentObject)
{
  FX_POOL **v6; // rax
  FxVerifierLock *v7; // rax
  FxVerifierLock *v8; // rbx
  int v9; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = FxPoolAllocator(
         FxDriverGlobals,
         &FxDriverGlobals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0xB0uLL,
         FxDriverGlobals->Tag,
         retaddr);
  if ( v6 )
  {
    FxVerifierLock::FxVerifierLock((FxVerifierLock *)v6, FxDriverGlobals, ParentObject);
    v8 = v7;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = FxVerifierLock::Initialize(v8);
    if ( v9 >= 0 )
      *VerifierLock = v8;
    else
      FxVerifierLock::`scalar deleting destructor'(v8);
  }
  else
  {
    v9 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
  }
  return (unsigned int)v9;
}
