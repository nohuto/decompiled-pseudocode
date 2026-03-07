unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2, _DWORD *a3)
{
  char v4; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  int v11; // r11d
  int v12; // r13d
  __int64 v13; // r8
  int v14; // r12d
  unsigned int v16; // esi
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int v22; // [rsp+30h] [rbp-148h] BYREF
  __int64 v23; // [rsp+38h] [rbp-140h]
  int v24; // [rsp+40h] [rbp-138h]
  int v25; // [rsp+44h] [rbp-134h]
  __int64 PteAddress; // [rsp+48h] [rbp-130h]
  int v27; // [rsp+50h] [rbp-128h]
  int v28; // [rsp+58h] [rbp-120h]
  int v29; // [rsp+60h] [rbp-118h]
  unsigned __int64 v30; // [rsp+68h] [rbp-110h]
  __int64 v31[10]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v32[14]; // [rsp+C0h] [rbp-B8h] BYREF

  v4 = a2;
  v28 = a2;
  v22 = 0;
  memset(v32, 0, sizeof(v32));
  memset(v31, 0, sizeof(v31));
  *a3 = 1;
  v6 = MiSectionControlArea(a1);
  v30 = v6;
  v7 = MiBytesToMapSystemImage((unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 8LL) << 12));
  if ( !v7 )
    return 0LL;
  v8 = v7 >> 12;
  v27 = v7 >> 12;
  v10 = MiImageSuitableForSystem(v6, &v22);
  if ( v10 && MiFindDataTableEntryBySection(v9) )
  {
    *a3 = 0;
    v11 = 1;
  }
  if ( !v10
    || v11 == 1
    || (v4 & 2) != 0
    || (v12 = v4 & 1, (v4 & 1) != 0) && (unsigned int)MiGetSystemRegionType(v10) != 1
    || (v4 & 1) == 0 && (unsigned int)MiGetSystemRegionType(v10) == 1 )
  {
    v12 = v4 & 1;
    v29 = v12;
    v16 = v12 + 1;
    LODWORD(PteAddress) = v16;
    if ( v22 )
      goto LABEL_17;
    v25 = MiMapImageInSystemSpace((__int64 *)v6, 3, (__int64)v31);
    if ( v25 < 0 )
      return 0LL;
    v23 = v31[0];
    v24 = 0;
    v18 = RtlImageNtHeader(v31[0]);
    LODWORD(v23) = *(_DWORD *)(v23 + 60);
    v24 = v23;
    LOWORD(v32[6]) = *(_WORD *)(v18 + 24);
    LODWORD(v32[1]) = *(_DWORD *)(v18 + 60);
    HIDWORD(v32[1]) = *(_DWORD *)(v18 + 56);
    LODWORD(v32[2]) = *(_DWORD *)(v18 + 80);
    if ( LOWORD(v32[6]) == 523 )
    {
      v19 = *(_DWORD *)(v18 + 128);
      HIDWORD(v32[2]) = v19;
      v32[0] = *(_QWORD *)(v18 + 48);
      LODWORD(v32[3]) = *(_DWORD *)(v18 + 84);
      HIDWORD(v32[3]) = *(_DWORD *)(v18 + 40);
      v32[4] = *(_QWORD *)(v18 + 96);
      v32[5] = *(_QWORD *)(v18 + 104);
      WORD1(v32[6]) = *(_WORD *)(v18 + 92);
      HIDWORD(v32[6]) = *(_DWORD *)(v18 + 72);
      LODWORD(v32[7]) = *(_DWORD *)(v18 + 64);
      WORD2(v32[7]) = *(_WORD *)(v18 + 94);
      LODWORD(v32[8]) = *(_DWORD *)(v18 + 88);
      HIDWORD(v32[8]) = *(_DWORD *)(v18 + 28);
      v32[13] = 0LL;
      if ( *(_DWORD *)(v18 + 132) > 6u && *(_DWORD *)(v18 + 184) )
        v32[13] = *(_QWORD *)(v18 + 184);
      if ( *(_DWORD *)(v18 + 132) > 0xCu )
        v32[9] = *(_QWORD *)(v18 + 232);
      if ( *(_DWORD *)(v18 + 132) <= 0xEu )
      {
        v32[10] = 0LL;
      }
      else
      {
        v32[10] = *(_QWORD *)(v18 + 248);
        if ( *(_DWORD *)(v18 + 248) && *(_DWORD *)(v18 + 252) )
          HIDWORD(v32[2]) = v19 | 1;
      }
      if ( *(_DWORD *)(v18 + 132) <= 5u )
        v32[11] = 0LL;
      else
        v32[11] = *(_QWORD *)(v18 + 176);
      if ( *(_DWORD *)(v18 + 132) > 0xAu )
      {
        LODWORD(v32[12]) = *(_DWORD *)(v18 + 216);
        v20 = *(_DWORD *)(v18 + 220);
LABEL_56:
        HIDWORD(v32[12]) = v20;
LABEL_58:
        MiUnmapImageInSystemSpace((__int64)v31);
        if ( v25 < 0 )
          return 0LL;
        if ( (int)MiRelocateImage(*(_QWORD *)v6, (__int64)v32, v23, v16, -1LL, 1) < 0 )
          return 0LL;
        MiImageSuitableForSystem(v6, &v22);
        if ( !v22 && (*(_BYTE *)(v6 + 62) & 0xC) == 0 )
          return 0LL;
LABEL_17:
        v17 = MiSelectSystemImageAddress(v16, (unsigned int)v8);
        v10 = v17;
        if ( !v17 )
          return 0LL;
        PteAddress = MiGetPteAddress(v17);
        if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v8, v4 & 0x20) >= 0 )
        {
          v14 = 1;
          if ( (unsigned int)MiAddPrivateFixupEntryForSystemImage((_DWORD *)v6, v10) )
            goto LABEL_13;
          MiReleasePrivilegedPtes(PteAddress, (unsigned int)v8);
        }
LABEL_66:
        MiReturnSystemImageAddress(v10, (unsigned int)((_DWORD)v8 << 12));
        return 0LL;
      }
    }
    else
    {
      v21 = *(_DWORD *)(v18 + 112);
      HIDWORD(v32[2]) = v21;
      v32[0] = *(unsigned int *)(v18 + 52);
      LODWORD(v32[3]) = *(_DWORD *)(v18 + 84);
      HIDWORD(v32[3]) = *(_DWORD *)(v18 + 40);
      v32[4] = *(unsigned int *)(v18 + 96);
      v32[5] = *(unsigned int *)(v18 + 100);
      WORD1(v32[6]) = *(_WORD *)(v18 + 92);
      HIDWORD(v32[6]) = *(_DWORD *)(v18 + 72);
      LODWORD(v32[7]) = *(_DWORD *)(v18 + 64);
      WORD2(v32[7]) = *(_WORD *)(v18 + 94);
      LODWORD(v32[8]) = *(_DWORD *)(v18 + 88);
      HIDWORD(v32[8]) = *(_DWORD *)(v18 + 28);
      v32[13] = 0LL;
      if ( *(_DWORD *)(v18 + 116) > 6u && *(_DWORD *)(v18 + 168) )
        v32[13] = *(_QWORD *)(v18 + 168);
      if ( *(_DWORD *)(v18 + 116) > 0xCu )
        v32[9] = *(_QWORD *)(v18 + 216);
      if ( *(_DWORD *)(v18 + 116) <= 0xEu )
      {
        v32[10] = 0LL;
      }
      else
      {
        v32[10] = *(_QWORD *)(v18 + 232);
        if ( *(_DWORD *)(v18 + 232) && *(_DWORD *)(v18 + 236) )
          HIDWORD(v32[2]) = v21 | 1;
      }
      if ( *(_DWORD *)(v18 + 116) <= 5u )
        v32[11] = 0LL;
      else
        v32[11] = *(_QWORD *)(v18 + 160);
      if ( *(_DWORD *)(v18 + 116) > 0xAu )
      {
        LODWORD(v32[12]) = *(_DWORD *)(v18 + 200);
        v20 = *(_DWORD *)(v18 + 204);
        goto LABEL_56;
      }
    }
    v32[12] = 0LL;
    goto LABEL_58;
  }
  PteAddress = MiGetPteAddress(v10);
  if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v8, v4 & 0x20) < 0 )
    return 0LL;
  v14 = 0;
LABEL_13:
  if ( !v12 || (int)MiSessionInsertImage(v10, (__int64 *)v6, v13) >= 0 )
    return v10;
  if ( v14 == 1 )
    MiFreePrivateFixupEntryForSystemImage(v10, 1);
  MiReleasePrivilegedPtes(PteAddress, (unsigned int)v8);
  if ( v14 == 1 )
    goto LABEL_66;
  return 0LL;
}
