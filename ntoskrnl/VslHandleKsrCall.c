/*
 * XREFs of VslHandleKsrCall @ 0x140549084
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VslHandleKsrCall(__int64 a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 result; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // [rsp+20h] [rbp-19h] BYREF
  __int128 v14; // [rsp+30h] [rbp-9h]
  __int128 v15; // [rsp+40h] [rbp+7h]
  __int128 v16; // [rsp+50h] [rbp+17h]
  __int128 v17; // [rsp+60h] [rbp+27h]
  __int128 v18; // [rsp+70h] [rbp+37h]

  v2 = *(_OWORD *)(a1 + 24);
  v13 = *(_OWORD *)(a1 + 8);
  v3 = *(_OWORD *)(a1 + 40);
  v14 = v2;
  v4 = *(_OWORD *)(a1 + 56);
  v15 = v3;
  v5 = *(_OWORD *)(a1 + 72);
  v16 = v4;
  v6 = *(_OWORD *)(a1 + 88);
  v17 = v5;
  v18 = v6;
  result = ((__int64 (__fastcall *)(__int128 *))VslpKsrCallback)(&v13);
  v8 = v14;
  *(_OWORD *)(a1 + 8) = v13;
  v9 = v15;
  *(_OWORD *)(a1 + 24) = v8;
  v10 = v16;
  *(_OWORD *)(a1 + 40) = v9;
  v11 = v17;
  *(_OWORD *)(a1 + 56) = v10;
  v12 = v18;
  *(_OWORD *)(a1 + 72) = v11;
  *(_OWORD *)(a1 + 88) = v12;
  return result;
}
