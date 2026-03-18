/*
 * XREFs of _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01FA990
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C003AD68 (INPUTDEST_FROM_PWND.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0041A94 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

_OWORD *__fastcall anonymous_namespace_::GetRawMouseInputDestination(_OWORD *a1)
{
  __int64 v2; // r8
  __int64 PtiFromInputDest; // rdi
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _DWORD v12[30]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL, v2);
  if ( PtiFromInputDest && qword_1C029BD50 && (unsigned int)qword_1C029BD50(PtiFromInputDest) )
  {
    v4 = INPUTDEST_FROM_PWND(v12, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(PtiFromInputDest + 424) + 832LL) + 64LL));
    v5 = v4[1];
    *a1 = *v4;
    v6 = v4[2];
    a1[1] = v5;
    v7 = v4[3];
    a1[2] = v6;
    v8 = v4[4];
    a1[3] = v7;
    v9 = v4[5];
    a1[4] = v8;
    v10 = v4[6];
    a1[5] = v9;
    a1[6] = v10;
  }
  return a1;
}
