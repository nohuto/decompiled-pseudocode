/*
 * XREFs of ?GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x180189F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x1800752D0 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079E78 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

void __fastcall MPCVoiceProcessor::GetPoints(__int64 a1, __int64 a2, __int64 a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v6; // rax
  __int64 v7; // xmm0_8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  int v15; // [rsp+28h] [rbp-D8h]
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h]
  _OWORD v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+80h] [rbp-80h] BYREF
  int v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+94h] [rbp-6Ch]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+A0h] [rbp-60h]
  __int128 v24; // [rsp+A4h] [rbp-5Ch]
  __int64 v25; // [rsp+B4h] [rbp-4Ch]
  __int16 v26; // [rsp+CCh] [rbp-34h]
  __int128 v27; // [rsp+D0h] [rbp-30h]
  __int128 v28; // [rsp+E0h] [rbp-20h]
  __int128 v29; // [rsp+F0h] [rbp-10h]
  __int128 v30; // [rsp+100h] [rbp+0h]
  __int128 v31; // [rsp+110h] [rbp+10h]
  __int128 v32; // [rsp+120h] [rbp+20h]
  __int128 v33; // [rsp+438h] [rbp+338h]
  __int128 v34; // [rsp+448h] [rbp+348h]
  __int128 v35; // [rsp+458h] [rbp+358h]
  __int128 v36; // [rsp+468h] [rbp+368h]

  if ( *(_BYTE *)(a1 + 4608) )
  {
    if ( *(_BYTE *)(a1 + 4516) )
    {
      Instance = MPCHolographicInputManager::GetInstance();
      memcpy_0(&v19, Instance, 0x8F0uLL);
      v18[0] = v33;
      v18[1] = v34;
      v18[2] = v35;
      v18[3] = v36;
      v6 = MPCHolographicInputManager::GetInstance();
      v7 = *((_QWORD *)v6 + 28);
      LODWORD(v6) = *((_DWORD *)v6 + 58);
      v14 = v7;
      v15 = (int)v6;
      Windows::Foundation::Numerics::transform((float *)&v16, (float *)&v14, (float *)v18);
      v8 = *(_OWORD *)(a1 + 120);
      *(_QWORD *)&v19 = v16;
      v24 = 0LL;
      *((_QWORD *)&v19 + 1) = v17 | 0x300000000LL;
      v9 = *(_OWORD *)(a1 + 104);
      v28 = v8;
      v10 = *(_OWORD *)(a1 + 152);
      v20 = 7;
      v27 = v9;
      v11 = *(_OWORD *)(a1 + 136);
      v21 = 1;
      v30 = v10;
      v12 = *(_OWORD *)(a1 + 184);
      v22 = 0LL;
      v29 = v11;
      v13 = *(_OWORD *)(a1 + 168);
      v23 = 0;
      v26 = 0;
      v31 = v13;
      v25 = 0LL;
      v32 = v12;
      std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v19);
      v21 = 0;
      std::vector<PointData3D>::emplace_back<PointData3D const &>(a3, &v19);
      *(_BYTE *)(a1 + 4608) = 0;
    }
  }
}
