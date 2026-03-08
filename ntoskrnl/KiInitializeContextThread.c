/*
 * XREFs of KiInitializeContextThread @ 0x140237E9C
 * Callers:
 *     KiStartIdleThread @ 0x14037F474 (KiStartIdleThread.c)
 *     KeInitThread @ 0x140A845D0 (KeInitThread.c)
 * Callees:
 *     KiSetSwitchingNpxState @ 0x1402381AC (KiSetSwitchingNpxState.c)
 *     KxContextToKframes @ 0x1402D7DC0 (KxContextToKframes.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlLocateExtendedFeature2 @ 0x14045BC40 (RtlLocateExtendedFeature2.c)
 *     RtlLocateSupervisorFeature @ 0x1405AD630 (RtlLocateSupervisorFeature.c)
 */

__int64 __fastcall KiInitializeContextThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _OWORD *ExtendedFeature2; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  _QWORD *v15; // rbx
  _QWORD *v16; // r13
  __int64 v17; // r11
  __int64 result; // rax
  _QWORD *v19; // [rsp+30h] [rbp-528h]
  __int64 v20; // [rsp+38h] [rbp-520h]
  _BYTE v21[48]; // [rsp+40h] [rbp-518h] BYREF
  int v22; // [rsp+70h] [rbp-4E8h]
  __int16 v23; // [rsp+78h] [rbp-4E0h]
  __int16 v24; // [rsp+82h] [rbp-4D6h]

  v2 = *(_QWORD *)(a1 + 40);
  ExtendedFeature2 = 0LL;
  v5 = (v2 - (unsigned int)KiXSaveAreaLength) & 0xFFFFFFFFFFFFFFC0uLL;
  v7 = v5;
  if ( (_DWORD)KiIptSaveAreaLength )
    *(_QWORD *)(a1 + 1112) = v5 + MEMORY[0xFFFFF78000000718];
  v8 = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(a1 + 1064) & 0x40000;
  if ( v8 )
    v5 = *(_QWORD *)(a1 + 96);
  v9 = (_QWORD *)(v7 - 80);
  memset(v9, 0, v2 - (_QWORD)v9);
  *v9 = v2;
  v9[1] = v2 - (unsigned int)KeKernelStackSize;
  *(_DWORD *)(v5 + 24) = 8064;
  v20 = *(_QWORD *)(a2 + 32);
  if ( v20 )
  {
    v11 = 9LL;
    v12 = v21;
    v13 = *(_OWORD **)(a2 + 32);
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      v14 = v13[7];
      v13 += 8;
      *(v12 - 1) = v14;
      --v11;
    }
    while ( v11 );
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v22 = v22 & 6 | 0x100001;
    v15 = v9 - 90;
    v19 = v9 - 50;
    v23 = 51;
    v16 = v9 - 98;
    v24 = 43;
    memset(v9 - 90, 0, 0x140uLL);
    memset(v9 - 50, 0, 0x190uLL);
    *((_BYTE *)v9 - 357) = 1;
    KxContextToKframes((_DWORD)v9 - 400, (_DWORD)v9 - 720, (unsigned int)v21, v22, 1);
    *v15 = *(_QWORD *)(a2 + 24);
    v15[1] = *(_QWORD *)(a2 + 16);
    v15[2] = *(_QWORD *)(a2 + 8);
    v15[39] = &KiStartUserThreadReturn;
    *(v9 - 91) = &KiStartUserThread;
    *(_WORD *)v5 = 639;
    *((_DWORD *)v9 - 89) = 8064;
    if ( (KeFeatureBits & 0x800000) != 0 )
      *(_QWORD *)(v5 + 512) = 1LL;
    KiSetSwitchingNpxState(a1, 0LL, v8);
    v17 = v20;
    *(_BYTE *)(a1 + 562) = 1;
  }
  else
  {
    v16 = v9 - 14;
    *(v9 - 6) = *(_QWORD *)(a2 + 24);
    LOBYTE(v10) = 1;
    *(v9 - 5) = *(_QWORD *)(a2 + 16);
    *(v9 - 4) = *(_QWORD *)(a2 + 8);
    *(v9 - 7) = KxStartSystemThread;
    v19 = 0LL;
    *(v9 - 1) = 0LL;
    KiSetSwitchingNpxState(a1, v10, v8);
    *(_BYTE *)(a1 + 562) = (*(_BYTE *)(a2 + 60) & 0x10) != 0;
  }
  result = (__int64)(v19 + 16);
  *((_BYTE *)v16 + 40) = 1;
  v16[6] = v19 + 16;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    result = MEMORY[0xFFFFF780000003EC];
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      result = 0x8000000000000003uLL;
      *(_QWORD *)(v5 + 520) = 0x8000000000000003uLL;
      if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
      {
        if ( (*(_DWORD *)(v17 + 48) & 0x100040) == 0x100040 )
          ExtendedFeature2 = (_OWORD *)RtlLocateExtendedFeature2(v17 + 1232, 11LL, 0xFFFFF780000003D8uLL, 0LL);
        *(_QWORD *)(v5 + 512) |= 0x800uLL;
        *(_QWORD *)(v5 + 520) |= 0x800uLL;
        result = RtlLocateSupervisorFeature(v5 + 512, 11LL, 0LL);
        *(_OWORD *)result = *ExtendedFeature2;
      }
    }
  }
  *(_QWORD *)(a1 + 40) = v9;
  *(_QWORD *)(a1 + 88) = v16;
  *(_QWORD *)(a1 + 96) = v5;
  return result;
}
