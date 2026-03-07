__int64 __fastcall MonitorGetAdvancedColorParams(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r8
  __m128i v11; // xmm1
  unsigned __int64 v12; // xmm0_8
  bool v13; // zf
  int v14; // ecx
  int v15; // edx
  int v16; // r9d
  __int64 v17; // rdx
  unsigned int v18; // ecx
  bool v19; // cl
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  int v22; // ecx
  __int64 v23; // rcx
  unsigned int v24; // edx
  unsigned int v25; // edx
  __int64 v26; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v26, a1);
  v8 = v26;
  if ( v26 )
  {
    v10 = *(_QWORD *)(v26 + 224);
    if ( a2[1] )
    {
      v20 = *(__m128i *)(v10 + 344);
      *(_WORD *)a4 = 0;
      v21 = *(__m128i *)(v10 + 360);
      *(_QWORD *)a3 = v20.m128i_i64[0];
      *(_QWORD *)(a3 + 8) = _mm_srli_si128(v20, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 16) = v21.m128i_i32[0];
      *(_DWORD *)(a3 + 20) = v21.m128i_i32[1];
      *(_QWORD *)(a3 + 24) = _mm_srli_si128(v21, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(v10 + 376);
      v22 = *(_DWORD *)(v10 + 380);
      *(_DWORD *)(a3 + 36) = v22;
      *(_DWORD *)(a3 + 40) = v22;
      v19 = 0;
    }
    else
    {
      v11 = *(__m128i *)(v10 + 252);
      v12 = _mm_srli_si128(*(__m128i *)(v10 + 236), 8).m128i_u64[0];
      *(_QWORD *)a3 = *(_QWORD *)(v10 + 236);
      *(_QWORD *)(a3 + 8) = v12;
      *(_DWORD *)(a3 + 16) = v11.m128i_i32[0];
      *(_DWORD *)(a3 + 20) = v11.m128i_i32[1];
      v11.m128i_i64[0] = _mm_srli_si128(v11, 8).m128i_u64[0];
      *(_DWORD *)(a3 + 24) = v11.m128i_i32[0];
      v13 = *a2 == 0;
      *(_DWORD *)(a3 + 28) = v11.m128i_i32[1];
      if ( v13 )
      {
        v14 = *(_DWORD *)(v10 + 320);
        v15 = *(_DWORD *)(v10 + 316);
        v16 = *(_DWORD *)(v10 + 312);
      }
      else
      {
        v14 = *(_DWORD *)(v10 + 332);
        v15 = *(_DWORD *)(v10 + 328);
        v16 = *(_DWORD *)(v10 + 324);
      }
      *(_DWORD *)(a3 + 32) = v16;
      *(_DWORD *)(a3 + 36) = v15;
      *(_DWORD *)(a3 + 40) = v14;
      v17 = *(_QWORD *)(v10 + 228);
      v18 = *(_DWORD *)(v10 + 336) - 1;
      *(_BYTE *)a4 = 0;
      *(_BYTE *)(a4 + 1) = v18 <= 2;
      *(_BYTE *)(a4 + 4) = *(_BYTE *)(v10 + 268);
      *(_BYTE *)(a4 + 2) = BYTE6(v17) != 0;
      v13 = *(_BYTE *)(v10 + 341) == 0;
      *(_BYTE *)(a4 + 3) = HIBYTE(v17) != 0;
      v19 = !v13;
    }
    *(_BYTE *)(a4 + 5) = v19;
    v23 = *(_QWORD *)(v8 + 224);
    v24 = *(_DWORD *)(v23 + 388);
    if ( v24 )
      v25 = v24 / 0x3E8;
    else
      v25 = *(_DWORD *)(v23 + 316) / 0x2710u;
    *(_DWORD *)(a3 + 44) = v25;
    v9 = 0;
  }
  else
  {
    v9 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>(&v26);
  return v9;
}
