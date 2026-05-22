/*
 * XREFs of ?GetPoints@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x180195AD0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x1800752D0 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

__int64 __fastcall MPCMouseProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  int v6; // xmm1_4
  int v7; // xmm0_4
  unsigned int v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v16; // [rsp+20h] [rbp-79h] BYREF
  int v17; // [rsp+30h] [rbp-69h]
  int v18; // [rsp+34h] [rbp-65h]
  __int64 v19; // [rsp+38h] [rbp-61h]
  int v20; // [rsp+40h] [rbp-59h]
  int v21; // [rsp+44h] [rbp-55h]
  int v22; // [rsp+48h] [rbp-51h]
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

  memset_0(&v16, 0, 0xB8uLL);
  v5 = *(_DWORD *)(a1 + 6252);
  v6 = *(_DWORD *)(a1 + 6260);
  *(_QWORD *)&v16 = *(_QWORD *)(a1 + 6244);
  v21 = *(_DWORD *)(a1 + 6256);
  v7 = *(_DWORD *)(a1 + 6264);
  *((_QWORD *)&v16 + 1) = v5 | 0x200000000LL;
  v8 = *(_DWORD *)(a1 + 6228);
  v23 = v7;
  v9 = *(_OWORD *)(a1 + 104);
  v22 = v6;
  v10 = *(_OWORD *)(a1 + 120);
  v18 = (v8 >> 4) & 7;
  v27 = v9;
  v11 = *(_OWORD *)(a1 + 136);
  v28 = v10;
  v12 = *(_OWORD *)(a1 + 152);
  v17 = 3;
  v29 = v11;
  v13 = *(_OWORD *)(a1 + 168);
  v19 = 0LL;
  v30 = v12;
  v14 = *(_OWORD *)(a1 + 184);
  v20 = 0;
  v31 = v13;
  v26 = 256;
  v24 = 0LL;
  v25 = 0;
  v32 = v14;
  return std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v16);
}
