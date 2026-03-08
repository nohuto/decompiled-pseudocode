/*
 * XREFs of ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02F34DC
 * Callers:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02F2ED8 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02F42BC (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C00497A4 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049800 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAPEAVVIDPNTARGETINFO@@I@Z @ 0x1C0049998 (-GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAPEAVVIDPNTARGETINFO@@I@Z.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C00499E4 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
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
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // r12
  __int64 v21; // r9
  __int64 v22; // r9
  char *v23; // r10
  unsigned int i; // r9d
  struct VIDPNTARGETINFO *VidPnTargetInfo; // r8
  unsigned int v26; // r9d
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // ecx
  char *v32; // rcx

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
  *((_DWORD *)a2 + 13) = *((_DWORD *)this + 3522);
  for ( *(_OWORD *)((char *)a2 + 56) = *(_OWORD *)((char *)this + 20); v7 < *((_DWORD *)this + 3522); ++v7 )
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
    v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(16 * *((_BYTE *)DisplayAdapterDiagData + 3248))) & 0x10;
    *((_DWORD *)v9 + 5) = v13;
    v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(32 * *((_BYTE *)DisplayAdapterDiagData + 3504))) & 0x20;
    *((_DWORD *)v9 + 5) = v14;
    v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(*((_BYTE *)DisplayAdapterDiagData + 3505) << 6)) & 0x40;
    *((_DWORD *)v9 + 5) = v15;
    for ( *((_DWORD *)v9 + 5) = v15 ^ (v15 ^ (*((unsigned __int8 *)DisplayAdapterDiagData + 3506) << 7)) & 0x80;
          (unsigned int)v10 < *((_DWORD *)DisplayAdapterDiagData + 240);
          *(_OWORD *)(v23 + 200) = *(_OWORD *)(v16 + 144) )
    {
      if ( (unsigned int)v10 >= 4 )
      {
        v16 = 64LL;
        v17 = 8LL;
        v18 = 12LL;
        v19 = 28LL;
        v20 = 32LL;
      }
      else
      {
        v16 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 128;
        v17 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 72;
        v18 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 76;
        v19 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 92;
        v20 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v10 + 96;
      }
      v21 = 192 * v10;
      *(_DWORD *)&v9[v21 + 24] = *(_DWORD *)v17;
      *(_DWORD *)&v9[v21 + 28] = *(_DWORD *)v18;
      *(_DWORD *)&v9[v21 + 32] = *(_DWORD *)v19;
      RtlStringCchCopyA(&v9[192 * v10 + 36], v17, (const char *)v20);
      v23 = &v9[v22];
      *(_OWORD *)(v23 + 56) = *(_OWORD *)v16;
      *(_OWORD *)(v23 + 72) = *(_OWORD *)(v16 + 16);
      *(_OWORD *)(v23 + 88) = *(_OWORD *)(v16 + 32);
      *(_OWORD *)(v23 + 104) = *(_OWORD *)(v16 + 48);
      *(_OWORD *)(v23 + 120) = *(_OWORD *)(v16 + 64);
      *(_OWORD *)(v23 + 136) = *(_OWORD *)(v16 + 80);
      *(_OWORD *)(v23 + 152) = *(_OWORD *)(v16 + 96);
      *(_OWORD *)(v23 + 168) = *(_OWORD *)(v16 + 112);
      *(_OWORD *)(v23 + 184) = *(_OWORD *)(v16 + 128);
      v10 = (unsigned int)(v10 + 1);
    }
    for ( i = 0; i < *((_DWORD *)DisplayAdapterDiagData + 489); *((_QWORD *)v32 + 12) = *((_QWORD *)VidPnTargetInfo + 30) )
    {
      VidPnTargetInfo = DISPLAYDIAGNOSTICADAPTERDATA::GetVidPnTargetInfo(DisplayAdapterDiagData, i);
      v27 = 240LL * v26;
      *(_DWORD *)&v9[v27 + 792] = *(_DWORD *)VidPnTargetInfo;
      v28 = *(_DWORD *)&v9[v27 + 796] ^ (*(_DWORD *)&v9[v27 + 796] ^ *((unsigned __int8 *)VidPnTargetInfo + 4)) & 1;
      *(_DWORD *)&v9[v27 + 796] = v28;
      i = v26 + 1;
      v29 = (*((_DWORD *)VidPnTargetInfo + 2) > 1u ? 4 : 0) | v28 & 0xFFFFFFFB;
      *(_DWORD *)&v9[v27 + 796] = v29;
      v30 = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(2 * *((_BYTE *)VidPnTargetInfo + 5))) & 2;
      *(_DWORD *)&v9[v27 + 796] = v30;
      v31 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(8 * *((_BYTE *)VidPnTargetInfo + 6))) & 8;
      *(_DWORD *)&v9[v27 + 796] = v31;
      *(_DWORD *)&v9[v27 + 796] = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(16 * *((_BYTE *)VidPnTargetInfo + 7))) & 0x10;
      v32 = &v9[v27 + 800];
      *(_OWORD *)v32 = *((_OWORD *)VidPnTargetInfo + 1);
      *((_OWORD *)v32 + 1) = *((_OWORD *)VidPnTargetInfo + 2);
      *((_OWORD *)v32 + 2) = *((_OWORD *)VidPnTargetInfo + 3);
      *((_OWORD *)v32 + 3) = *((_OWORD *)VidPnTargetInfo + 4);
      *((_OWORD *)v32 + 4) = *((_OWORD *)VidPnTargetInfo + 5);
      *((_OWORD *)v32 + 5) = *((_OWORD *)VidPnTargetInfo + 6);
      *((_OWORD *)v32 + 6) = *((_OWORD *)VidPnTargetInfo + 7);
      v32 += 128;
      *((_OWORD *)v32 - 1) = *((_OWORD *)VidPnTargetInfo + 8);
      *(_OWORD *)v32 = *((_OWORD *)VidPnTargetInfo + 9);
      *((_OWORD *)v32 + 1) = *((_OWORD *)VidPnTargetInfo + 10);
      *((_OWORD *)v32 + 2) = *((_OWORD *)VidPnTargetInfo + 11);
      *((_OWORD *)v32 + 3) = *((_OWORD *)VidPnTargetInfo + 12);
      *((_OWORD *)v32 + 4) = *((_OWORD *)VidPnTargetInfo + 13);
      *((_OWORD *)v32 + 5) = *((_OWORD *)VidPnTargetInfo + 14);
    }
  }
  return 0LL;
}
