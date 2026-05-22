/*
 * XREFs of ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x180076310
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801940AC (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801955A8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B304 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _lambda_1cf1076a08bcf2b31845fef2d52883fe_::operator() @ 0x180040524 (_lambda_1cf1076a08bcf2b31845fef2d52883fe_--operator().c)
 *     _lambda_d1db62bca444676ba3e89218570a4177_::operator() @ 0x180040624 (_lambda_d1db62bca444676ba3e89218570a4177_--operator().c)
 *     _alloca_probe @ 0x18004B180 (_alloca_probe.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x180078910 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BD31C (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectInteractionState(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  const char *v9; // r9
  bool v11; // zf
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // edi
  unsigned int v15; // esi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int64 WindowIdFromViewId; // rax
  unsigned int v18; // r8d
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v24[3]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v25[3]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v26[2032]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v27[2032]; // [rsp+8B0h] [rbp+7B0h] BYREF
  _BYTE v28[2032]; // [rsp+10A0h] [rbp+FA0h] BYREF
  _BYTE v29[64]; // [rsp+1890h] [rbp+1790h] BYREF
  int v30; // [rsp+18D0h] [rbp+17D0h]
  _BYTE Src[2032]; // [rsp+2080h] [rbp+1F80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+28B8h] [rbp+27B8h]

  v23 = a5;
  if ( !*(_BYTE *)(a1 + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      682LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a5 + 32LL))(a5) )
  {
    v11 = *(_BYTE *)(a1 + 2368) == 0;
    v22[1] = (__int64)&v23;
    v21 = a1;
    v22[0] = a1;
    if ( !v11 )
    {
      if ( a2 != 1 )
        goto LABEL_13;
      v12 = *(_OWORD *)(a4 + 88);
      v24[0] = *(_OWORD *)(a4 + 72);
      v13 = *(_OWORD *)(a4 + 104);
      v24[1] = v12;
      v24[2] = v13;
      lambda_1cf1076a08bcf2b31845fef2d52883fe_::operator()((__int64)&v21, (__int64)Src, 4u, 1, a3, v24);
      memcpy_0(v26, Src, sizeof(v26));
      lambda_d1db62bca444676ba3e89218570a4177_::operator()(v22, (__int64)v26);
    }
    if ( a2 == 1 )
    {
      *(_BYTE *)(a1 + 2368) = 1;
      _InterlockedExchange(
        &MPCInputInfoHelper::m_nextArtificialSpectrumId,
        (MPCInputInfoHelper::m_nextArtificialSpectrumId + 1294967296) % 0x3B9AC9FFu - 1294967295);
      *(_DWORD *)(a1 + 2372) = MPCInputInfoHelper::m_nextArtificialSpectrumId;
      if ( !*(_BYTE *)(a4 + 1) && *(_BYTE *)(a4 + 72) )
      {
        v14 = *(_DWORD *)(a4 + 32);
        v15 = *(_DWORD *)(a4 + 284);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v15);
        MPCHolographicInputManager::RequestForegroundChange(a1, WindowIdFromViewId, v15, a3, 512, 0LL, v14 == 0);
      }
      v18 = 2;
LABEL_17:
      v19 = *(_OWORD *)(a4 + 88);
      v25[0] = *(_OWORD *)(a4 + 72);
      v20 = *(_OWORD *)(a4 + 104);
      v25[1] = v19;
      v25[2] = v20;
      lambda_1cf1076a08bcf2b31845fef2d52883fe_::operator()((__int64)&v21, (__int64)v29, v18, a2, a3, v25);
      if ( v30 == 3 )
      {
        v30 = 6;
        memcpy_0(v27, v29, sizeof(v27));
        lambda_d1db62bca444676ba3e89218570a4177_::operator()(v22, (__int64)v27);
        v30 = 3;
      }
      memcpy_0(v28, v29, sizeof(v28));
      lambda_d1db62bca444676ba3e89218570a4177_::operator()(v22, (__int64)v28);
      return 0LL;
    }
LABEL_13:
    *(_BYTE *)(a1 + 2368) = 0;
    if ( a2 )
    {
      if ( a2 != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          789LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v9);
        JUMPOUT(0x1800765D9LL);
      }
      v18 = 4;
    }
    else
    {
      v18 = 3;
    }
    goto LABEL_17;
  }
  return 0LL;
}
