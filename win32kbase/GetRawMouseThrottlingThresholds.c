/*
 * XREFs of GetRawMouseThrottlingThresholds @ 0x1C02179E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRawMouseThrottlingThresholds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-29h]
  __int128 v15; // [rsp+30h] [rbp-19h]
  __int128 v16; // [rsp+40h] [rbp-9h]
  __int128 v17; // [rsp+50h] [rbp+7h]
  __int128 v18; // [rsp+60h] [rbp+17h]
  __int128 v19; // [rsp+70h] [rbp+27h]

  v5 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3304);
  if ( v5 )
  {
    v6 = *(_OWORD *)(v5 + 1904);
    *(_OWORD *)a1 = *(_OWORD *)(v5 + 1888);
    v7 = *(_OWORD *)(v5 + 1920);
    *(_OWORD *)(a1 + 16) = v6;
    v8 = *(_OWORD *)(v5 + 1936);
    *(_OWORD *)(a1 + 32) = v7;
    v9 = *(_OWORD *)(v5 + 1952);
    *(_OWORD *)(a1 + 48) = v8;
    v10 = *(_OWORD *)(v5 + 1968);
    *(_OWORD *)(a1 + 64) = v9;
    v11 = *(_OWORD *)(v5 + 1984);
    *(_OWORD *)(a1 + 80) = v10;
    v12 = *(_QWORD *)(v5 + 2000);
  }
  else
  {
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v14 + 1) = 1LL;
    *(_QWORD *)&v14 = L"RawMouseThrottleEnabled";
    *((_QWORD *)&v15 + 1) = L"RawMouseThrottleForced";
    *(_QWORD *)&v17 = L"RawMouseThrottleDuration";
    *(_OWORD *)a1 = v14;
    *(_QWORD *)&v15 = 1LL;
    *((_QWORD *)&v16 + 1) = 1LL;
    *((_QWORD *)&v17 + 1) = 0x100000008LL;
    *(_OWORD *)(a1 + 16) = v15;
    *(_QWORD *)&v18 = 20LL;
    *(_OWORD *)(a1 + 32) = v16;
    *((_QWORD *)&v18 + 1) = L"RawMouseThrottleLeeway";
    *(_QWORD *)&v19 = 2LL;
    *(_OWORD *)(a1 + 48) = v17;
    *((_QWORD *)&v19 + 1) = 5LL;
    *(_OWORD *)(a1 + 64) = v18;
    v11 = 0x32uLL;
    *(_OWORD *)(a1 + 80) = v19;
    v12 = 0LL;
  }
  *(_OWORD *)(a1 + 96) = v11;
  result = a1;
  *(_QWORD *)(a1 + 112) = v12;
  return result;
}
