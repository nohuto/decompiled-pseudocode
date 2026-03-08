/*
 * XREFs of _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C022D974
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0007574 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0079D90 (INPUTDEST_FROM_PWND.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

_OWORD *__fastcall anonymous_namespace_::GetRawMouseInputDestination(_OWORD *a1)
{
  __int64 PtiFromInputDest; // rdi
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _DWORD v11[30]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1);
  if ( PtiFromInputDest && qword_1C02D6608 && (unsigned int)qword_1C02D6608(PtiFromInputDest) )
  {
    v3 = INPUTDEST_FROM_PWND(v11, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(PtiFromInputDest + 424) + 824LL) + 64LL));
    v4 = v3[1];
    *a1 = *v3;
    v5 = v3[2];
    a1[1] = v4;
    v6 = v3[3];
    a1[2] = v5;
    v7 = v3[4];
    a1[3] = v6;
    v8 = v3[5];
    a1[4] = v7;
    v9 = v3[6];
    a1[5] = v8;
    a1[6] = v9;
  }
  return a1;
}
