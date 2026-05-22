/*
 * XREFs of ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800B9FCC
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B84B0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800B91B0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800B99E8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?CreateInputSink@MPCFocusTarget@@IEAAXXZ @ 0x1800BA15C (-CreateInputSink@MPCFocusTarget@@IEAAXXZ.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x1800BA830 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCFocusTarget::MPCFocusTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  const char *v10; // r9
  __int64 v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  MPCTarget::MPCTarget(a1, a3, a5, a6);
  *(_QWORD *)a1 = &MPCFocusTarget::`vftable'{for `IMPCTarget'};
  *(_QWORD *)(a1 + 8) = &MPCFocusTarget::`vftable'{for `RefCountedObject'};
  *(_QWORD *)(a1 + 64) = &MPCFocusTarget::`vftable';
  *(_QWORD *)(a1 + 72) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_BYTE *)(a1 + 88) = a7;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      24LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcfocustarget.cpp",
      v10);
    __debugbreak();
  }
  v11 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  MPCFocusTarget::CreateInputSink((MPCFocusTarget *)a1);
  return a1;
}
