/*
 * XREFs of ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F89E0
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02F9D90 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C004B548 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F8E90 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rbp
  __int64 v9; // rax
  __int64 v10; // r9
  void (__fastcall ***v11)(_QWORD, __int64); // rdi
  int v12; // r14d
  _BYTE v13[16]; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+8Ch] [rbp+14h]

  v14 = HIDWORD(a2);
  v5 = a3;
  if ( *(_QWORD *)(a1 + 72) )
  {
    v9 = operator new[](0x28uLL, 0x4B677844u, 256LL);
    v11 = (void (__fastcall ***)(_QWORD, __int64))v9;
    if ( v9 )
    {
      LOBYTE(v10) = 1;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_QWORD *)v9 = &SetElement::`vftable';
      *(_QWORD *)(v9 + 24) = a2;
      *(_DWORD *)(v9 + 32) = v5;
      v12 = DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v9, a1, 0LL, v10, a5);
      if ( v12 >= 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(a1 + 16), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
        if ( !Set<DXGTARGETENTRY>::Add(a1 + 80, (__int64)v11) )
          (**v11)(v11, 1LL);
        if ( v13[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
        return 0LL;
      }
      else
      {
        (**v11)(v11, 1LL);
        WdLogSingleEntry3(2LL, v5, v14, (unsigned int)a2);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to assigned display manager object to target 0x%I64x on adapter 0x%I64x-%I64x",
          v5,
          v14,
          (unsigned int)a2,
          0LL,
          0LL);
        return (unsigned int)v12;
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, 121LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate DXGTARGETENTRY",
        121LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 114LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DispMgr object called after being invalidated.",
      114LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 2147483685LL;
  }
}
