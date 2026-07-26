/*
 * XREFs of ndisIfCreateNetworkBlock @ 0x1C0034EA0
 * Callers:
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C0034BDC (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B5770 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     ndisCompareGuid @ 0x1C002BFF4 (ndisCompareGuid.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C003A054 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisIfCreateNetworkBlock(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  unsigned int v6; // ebx
  __int128 *v8; // r12
  const wchar_t *v10; // rcx
  __int64 v11; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rsi
  __int128 v14; // xmm0
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int64 *i; // r14
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // edx
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 **v24; // rcx
  __int64 *v25; // rax
  int v27; // eax
  int v28; // eax
  __int64 j; // rcx

  v4 = 0LL;
  v6 = 0;
  v8 = (__int128 *)a2;
  v10 = (const wchar_t *)&WPP_26d5752112ac3cd786e6296fc2fada98_Traceguids;
  v11 = 4LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_26d5752112ac3cd786e6296fc2fada98_Traceguids,
      a1,
      a2);
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 || !v8 || !ndisIsValidIfStringParts(v10, *(unsigned __int16 *)(a3 + 12)) )
  {
    v6 = -1073741811;
    goto LABEL_19;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x268uLL, 0x6669444Eu);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v6 = -1073741670;
    goto LABEL_19;
  }
  memset(PoolWithTag, 0, 0x268uLL);
  v14 = *v8;
  v13[6] = a1;
  *((_DWORD *)v13 + 19) = 1;
  *((_OWORD *)v13 + 2) = v14;
  v13[8] = v13 + 7;
  v13[7] = v13 + 7;
  v15 = v13 + 10;
  do
  {
    *v15 = *(_OWORD *)a3;
    v15[1] = *(_OWORD *)(a3 + 16);
    v15[2] = *(_OWORD *)(a3 + 32);
    v15[3] = *(_OWORD *)(a3 + 48);
    v15[4] = *(_OWORD *)(a3 + 64);
    v15[5] = *(_OWORD *)(a3 + 80);
    v15[6] = *(_OWORD *)(a3 + 96);
    v15 += 8;
    v16 = *(_OWORD *)(a3 + 112);
    a3 += 128LL;
    *(v15 - 1) = v16;
    --v11;
  }
  while ( v11 );
  *v15 = *(_OWORD *)a3;
  for ( i = (__int64 *)qword_1C00E5B48; i != &qword_1C00E5B48; i = (__int64 *)*i )
  {
    v27 = ndisCompareGuid((__int64)v8, (__int64)(i + 4));
    if ( !v27 )
    {
      v6 = -1073741270;
LABEL_41:
      ExFreePoolWithTag(v13, 0);
      goto LABEL_19;
    }
    if ( v27 < 0 )
      break;
  }
  v18 = *((_DWORD *)v13 + 22);
  if ( v18 )
  {
    if ( v18 >= 0x7FFFFFF )
    {
      v6 = -1073741811;
      goto LABEL_41;
    }
    goto LABEL_16;
  }
  v19 = dword_1C00E4798;
  if ( !byte_1C00E7211 )
  {
    v20 = dword_1C00E4798 ^ (dword_1C00E4798 ^ (dword_1C00E4798 + 1)) & 0xFFFFFFF;
    dword_1C00E4798 = v20;
    if ( (v20 & 0xFFFFFFF) != 0xFFFFFFF )
    {
      v21 = v20 & 0xFFFFFFF;
      goto LABEL_15;
    }
    byte_1C00E7211 = 1;
    v19 = v20 & 0xF0000000 | 0x7FFFFFF;
    dword_1C00E4798 = v19;
  }
  v21 = v19 & 0xFFFFFFF;
LABEL_32:
  if ( ++v21 == 0xFFFFFFF )
  {
    v21 = 0xFFFFFFF;
    v28 = v19 & 0xF0000000 | 0xFFFFFFE;
  }
  else
  {
    for ( j = qword_1C00E5B48; (__int64 *)j != &qword_1C00E5B48; j = *(_QWORD *)j )
    {
      if ( v21 == *(_DWORD *)(j + 88) )
        goto LABEL_32;
    }
    v28 = (v21 ^ v19) & 0xFFFFFFF ^ v19;
  }
  dword_1C00E4798 = v28;
LABEL_15:
  *((_DWORD *)v13 + 22) = v21;
  if ( v21 == 0xFFFFFFF )
  {
    v6 = -1073741670;
    goto LABEL_41;
  }
LABEL_16:
  v22 = i[1];
  ++dword_1C00E4FB8;
  v23 = *(_QWORD *)v22;
  if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22
    || (*v13 = v23,
        v13[1] = v22,
        *(_QWORD *)(v23 + 8) = v13,
        v24 = (__int64 **)(a1 + 24),
        *(_QWORD *)v22 = v13,
        v25 = v13 + 2,
        a2 = *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a2 + 8) != a1 + 24) )
  {
    __fastfail(3u);
  }
  *v25 = a2;
  v13[3] = v24;
  *(_QWORD *)(a2 + 8) = v25;
  *v24 = v25;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v4 = v13;
LABEL_19:
  *a4 = v4;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_26d5752112ac3cd786e6296fc2fada98_Traceguids,
      a1,
      (char)v8,
      (char)v4,
      v6);
  return v6;
}
