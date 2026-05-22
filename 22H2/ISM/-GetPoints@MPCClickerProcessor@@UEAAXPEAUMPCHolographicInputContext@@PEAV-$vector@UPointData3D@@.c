/*
 * XREFs of ?GetPoints@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x180198690
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x1800752D0 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

__int64 __fastcall MPCClickerProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // xmm0_8
  __int128 v6; // xmm1
  int v7; // eax
  __int64 v8; // xmm0_8
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v17; // [rsp+20h] [rbp-79h] BYREF
  int v18; // [rsp+30h] [rbp-69h]
  int v19; // [rsp+34h] [rbp-65h]
  __int64 v20; // [rsp+38h] [rbp-61h]
  int v21; // [rsp+40h] [rbp-59h]
  __int64 v22; // [rsp+44h] [rbp-55h]
  int v23; // [rsp+4Ch] [rbp-4Dh]
  __int64 v24; // [rsp+50h] [rbp-49h]
  int v25; // [rsp+58h] [rbp-41h]
  __int16 v26; // [rsp+6Ch] [rbp-2Dh]
  __int128 v27; // [rsp+70h] [rbp-29h]
  __int128 v28; // [rsp+80h] [rbp-19h]
  __int128 v29; // [rsp+90h] [rbp-9h]
  __int128 v30; // [rsp+A0h] [rbp+7h]
  __int128 v31; // [rsp+B0h] [rbp+17h]
  __int128 v32; // [rsp+C0h] [rbp+27h]

  memset_0(&v17, 0, 0xB8uLL);
  v5 = *(_QWORD *)(a1 + 4648);
  v6 = *(_OWORD *)(a1 + 120);
  HIDWORD(v17) = *(_DWORD *)(a1 + 4612);
  v7 = *(_DWORD *)(a1 + 4656);
  *(_QWORD *)&v17 = v5;
  v8 = *(_QWORD *)(a1 + 4672);
  DWORD2(v17) = v7;
  v9 = *(_DWORD *)(a1 + 4616);
  v22 = v8;
  v10 = *(_OWORD *)(a1 + 104);
  v19 = v9;
  v28 = v6;
  v11 = *(_OWORD *)(a1 + 152);
  v20 = 0LL;
  v27 = v10;
  v12 = *(_OWORD *)(a1 + 136);
  v21 = 0;
  v13 = *(_DWORD *)(a1 + 4680);
  v29 = v12;
  v14 = *(_OWORD *)(a1 + 168);
  v23 = v13;
  v30 = v11;
  v15 = *(_OWORD *)(a1 + 184);
  v18 = 2;
  v31 = v14;
  v26 = 256;
  v24 = 0LL;
  v25 = 0;
  v32 = v15;
  return std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v17);
}
