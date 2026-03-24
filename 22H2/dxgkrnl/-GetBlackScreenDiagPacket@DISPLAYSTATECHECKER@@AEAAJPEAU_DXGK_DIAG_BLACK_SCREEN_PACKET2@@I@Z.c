/*
 * XREFs of ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02BB318
 * Callers:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02BADA8 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02BBFC4 (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004DEB4 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004DF10 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C004E060 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *a2,
        unsigned int a3)
{
  int BlackScreenDiagDataSize; // eax
  unsigned int v7; // ebp
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // r11
  char *v9; // r14
  __int64 v10; // r15
  unsigned int v11; // ecx
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r12
  __int64 v18; // r9
  __int64 v19; // r9
  char *v20; // r10
  unsigned int i; // r9d
  __int64 v22; // r10
  __int64 v23; // r8
  int v24; // edx
  unsigned int v25; // edx
  int v26; // ecx
  char *v27; // rcx

  if ( a3 < (unsigned int)DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this) )
    return 3221225507LL;
  BlackScreenDiagDataSize = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  *((_DWORD *)a2 + 10) = 0;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 1) = BlackScreenDiagDataSize;
  v7 = 0;
  *(_DWORD *)a2 = 44;
  *(_OWORD *)((char *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_DWORD *)a2 + 12) = (*(_DWORD *)this >> 8) & 1;
  *((_DWORD *)a2 + 13) = *((_DWORD *)this + 3514);
  for ( *(_OWORD *)((char *)a2 + 56) = *(_OWORD *)((char *)this + 20); v7 < *((_DWORD *)this + 3514); ++v7 )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v7);
    v9 = (char *)a2 + 1752 * v7 + 72;
    v10 = 0LL;
    *(_QWORD *)v9 = *((_QWORD *)DisplayAdapterDiagData + 1);
    *((_DWORD *)v9 + 2) = *((_DWORD *)DisplayAdapterDiagData + 240);
    *((_DWORD *)v9 + 3) = *((_DWORD *)DisplayAdapterDiagData + 489);
    *((_DWORD *)v9 + 4) = *((_DWORD *)DisplayAdapterDiagData + 4);
    v11 = *((_DWORD *)v9 + 5) & 0xFFFFFFF8 | *((_BYTE *)DisplayAdapterDiagData + 20) & 1;
    *((_DWORD *)v9 + 5) = v11;
    v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(8 * *((_BYTE *)DisplayAdapterDiagData + 3488))) & 8;
    *((_DWORD *)v9 + 5) = v12;
    for ( *((_DWORD *)v9 + 5) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(16
                                                                              * *((_BYTE *)DisplayAdapterDiagData + 3248))) & 0x10;
          (unsigned int)v10 < *((_DWORD *)DisplayAdapterDiagData + 240);
          *(_OWORD *)(v20 + 200) = *(_OWORD *)(v13 + 144) )
    {
      if ( (unsigned int)v10 >= 4 )
      {
        v13 = 64LL;
        v14 = 8LL;
        v15 = 12LL;
        v16 = 28LL;
        v17 = 32LL;
      }
      else
      {
        v13 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 128;
        v14 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 72;
        v15 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 76;
        v16 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 92;
        v17 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 96;
      }
      v18 = 192 * v10;
      *(_DWORD *)&v9[v18 + 24] = *(_DWORD *)v14;
      *(_DWORD *)&v9[v18 + 28] = *(_DWORD *)v15;
      *(_DWORD *)&v9[v18 + 32] = *(_DWORD *)v16;
      RtlStringCchCopyA(&v9[192 * v10 + 36], v14, (const char *)v17);
      v20 = &v9[v19];
      *(_OWORD *)(v20 + 56) = *(_OWORD *)v13;
      *(_OWORD *)(v20 + 72) = *(_OWORD *)(v13 + 16);
      *(_OWORD *)(v20 + 88) = *(_OWORD *)(v13 + 32);
      *(_OWORD *)(v20 + 104) = *(_OWORD *)(v13 + 48);
      *(_OWORD *)(v20 + 120) = *(_OWORD *)(v13 + 64);
      *(_OWORD *)(v20 + 136) = *(_OWORD *)(v13 + 80);
      *(_OWORD *)(v20 + 152) = *(_OWORD *)(v13 + 96);
      *(_OWORD *)(v20 + 168) = *(_OWORD *)(v13 + 112);
      *(_OWORD *)(v20 + 184) = *(_OWORD *)(v13 + 128);
      v10 = (unsigned int)(v10 + 1);
    }
    for ( i = 0; i < *((_DWORD *)DisplayAdapterDiagData + 489); *((_QWORD *)v27 + 12) = *(_QWORD *)(v22 + 240) )
    {
      if ( i >= 4 )
        v22 = 0LL;
      else
        v22 = (__int64)DisplayAdapterDiagData + 248 * i + 964;
      v23 = 240LL * i;
      *(_DWORD *)&v9[v23 + 792] = *(_DWORD *)v22;
      v24 = *(_DWORD *)&v9[v23 + 796] ^ (*(_DWORD *)&v9[v23 + 796] ^ *(unsigned __int8 *)(v22 + 4)) & 1;
      *(_DWORD *)&v9[v23 + 796] = v24;
      ++i;
      v25 = (*(_DWORD *)(v22 + 8) > 1u ? 4 : 0) | v24 & 0xFFFFFFFB;
      *(_DWORD *)&v9[v23 + 796] = v25;
      v26 = v25 ^ ((unsigned __int8)v25 ^ (unsigned __int8)(2 * *(_BYTE *)(v22 + 5))) & 2;
      *(_DWORD *)&v9[v23 + 796] = v26;
      *(_DWORD *)&v9[v23 + 796] = v26 ^ ((unsigned __int8)v26 ^ (unsigned __int8)(8 * *(_BYTE *)(v22 + 6))) & 8;
      v27 = &v9[v23 + 800];
      *(_OWORD *)v27 = *(_OWORD *)(v22 + 16);
      *((_OWORD *)v27 + 1) = *(_OWORD *)(v22 + 32);
      *((_OWORD *)v27 + 2) = *(_OWORD *)(v22 + 48);
      *((_OWORD *)v27 + 3) = *(_OWORD *)(v22 + 64);
      *((_OWORD *)v27 + 4) = *(_OWORD *)(v22 + 80);
      *((_OWORD *)v27 + 5) = *(_OWORD *)(v22 + 96);
      *((_OWORD *)v27 + 6) = *(_OWORD *)(v22 + 112);
      v27 += 128;
      *((_OWORD *)v27 - 1) = *(_OWORD *)(v22 + 128);
      *(_OWORD *)v27 = *(_OWORD *)(v22 + 144);
      *((_OWORD *)v27 + 1) = *(_OWORD *)(v22 + 160);
      *((_OWORD *)v27 + 2) = *(_OWORD *)(v22 + 176);
      *((_OWORD *)v27 + 3) = *(_OWORD *)(v22 + 192);
      *((_OWORD *)v27 + 4) = *(_OWORD *)(v22 + 208);
      *((_OWORD *)v27 + 5) = *(_OWORD *)(v22 + 224);
    }
  }
  return 0LL;
}
