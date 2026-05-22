/*
 * XREFs of _lambda_1cf1076a08bcf2b31845fef2d52883fe_::operator() @ 0x180040524
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x180076310 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x1800898E4 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 */

__int64 __fastcall lambda_1cf1076a08bcf2b31845fef2d52883fe_::operator()(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _OWORD *a6)
{
  int v10; // eax
  int v11; // ecx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  memset_0((void *)a2, 0, 0x7F0uLL);
  *(_DWORD *)(a2 + 24) = 2032;
  v10 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, a3, 512LL, a5, a2);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      694LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x18004061BLL);
  }
  *(_DWORD *)(a2 + 824) = 1;
  v11 = *(_DWORD *)(*(_QWORD *)a1 + 2372LL);
  *(_DWORD *)(a2 + 968) = -1;
  *(_DWORD *)(a2 + 832) = a4;
  v12 = a6[1];
  *(_OWORD *)(a2 + 224) = *a6;
  *(_DWORD *)(a2 + 836) = a3;
  v13 = a6[2];
  result = a2;
  *(_OWORD *)(a2 + 240) = v12;
  *(_DWORD *)(a2 + 828) = v11;
  *(_OWORD *)(a2 + 256) = v13;
  *(_DWORD *)(a2 + 840) = 1065353216;
  *(_WORD *)(a2 + 732) = 0;
  *(_WORD *)(a2 + 764) = 0;
  return result;
}
