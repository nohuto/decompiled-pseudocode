/*
 * XREFs of MiGetSystemAddressForImage @ 0x140696090
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSessionInsertImage @ 0x14020AE84 (MiSessionInsertImage.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14020B168 (MiFreePrivateFixupEntryForSystemImage.c)
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x14029F760 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403AB6D4 (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiImageSuitableForSystem @ 0x140696284 (MiImageSuitableForSystem.c)
 *     MiFindDataTableEntryBySection @ 0x1406962B4 (MiFindDataTableEntryBySection.c)
 *     MiBytesToMapSystemImage @ 0x140696AE4 (MiBytesToMapSystemImage.c)
 *     MiReservePrivilegedPtes @ 0x140696B28 (MiReservePrivilegedPtes.c)
 *     MiSelectSystemImageAddress @ 0x140696DA4 (MiSelectSystemImageAddress.c)
 *     MiReleasePrivilegedPtes @ 0x1406971C4 (MiReleasePrivilegedPtes.c)
 *     MiReturnSystemImageAddress @ 0x140698C68 (MiReturnSystemImageAddress.c)
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406ACB70 (MiUnmapImageInSystemSpace.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2, _DWORD *a3)
{
  char v4; // r12
  _BYTE *v6; // r15
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  int v10; // r11d
  int v11; // r13d
  __int64 v12; // r8
  int v13; // r12d
  unsigned int v15; // esi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // [rsp+30h] [rbp-148h] BYREF
  __int64 v22; // [rsp+38h] [rbp-140h]
  int v23; // [rsp+40h] [rbp-138h]
  int v24; // [rsp+44h] [rbp-134h]
  __int64 PteAddress; // [rsp+48h] [rbp-130h]
  int v26; // [rsp+50h] [rbp-128h]
  int v27; // [rsp+58h] [rbp-120h]
  int v28; // [rsp+60h] [rbp-118h]
  _BYTE *v29; // [rsp+68h] [rbp-110h]
  __int64 v30[10]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v31[14]; // [rsp+C0h] [rbp-B8h] BYREF

  v4 = a2;
  v27 = a2;
  v21 = 0;
  memset(v31, 0, sizeof(v31));
  memset(v30, 0, sizeof(v30));
  *a3 = 1;
  v6 = (_BYTE *)MiSectionControlArea(a1);
  v29 = v6;
  v7 = MiBytesToMapSystemImage((unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 8LL) << 12));
  if ( !v7 )
    return 0LL;
  v8 = v7 >> 12;
  v26 = v7 >> 12;
  v9 = MiImageSuitableForSystem(v6, &v21);
  if ( v9 && MiFindDataTableEntryBySection() )
  {
    *a3 = 0;
    v10 = 1;
  }
  if ( !v9
    || v10 == 1
    || (v4 & 2) != 0
    || (v11 = v4 & 1, (v4 & 1) != 0) && (unsigned int)MiGetSystemRegionType(v9) != 1
    || (v4 & 1) == 0 && (unsigned int)MiGetSystemRegionType(v9) == 1 )
  {
    v11 = v4 & 1;
    v28 = v11;
    v15 = v11 + 1;
    LODWORD(PteAddress) = v15;
    if ( v21 )
      goto LABEL_17;
    v24 = MiMapImageInSystemSpace(v6, 3LL, v30);
    if ( v24 < 0 )
      return 0LL;
    v22 = v30[0];
    v23 = 0;
    v17 = RtlImageNtHeader(v30[0]);
    LODWORD(v22) = *(_DWORD *)(v22 + 60);
    v23 = v22;
    LOWORD(v31[6]) = *(_WORD *)(v17 + 24);
    LODWORD(v31[1]) = *(_DWORD *)(v17 + 60);
    HIDWORD(v31[1]) = *(_DWORD *)(v17 + 56);
    LODWORD(v31[2]) = *(_DWORD *)(v17 + 80);
    if ( LOWORD(v31[6]) == 523 )
    {
      v18 = *(_DWORD *)(v17 + 128);
      HIDWORD(v31[2]) = v18;
      v31[0] = *(_QWORD *)(v17 + 48);
      LODWORD(v31[3]) = *(_DWORD *)(v17 + 84);
      HIDWORD(v31[3]) = *(_DWORD *)(v17 + 40);
      v31[4] = *(_QWORD *)(v17 + 96);
      v31[5] = *(_QWORD *)(v17 + 104);
      WORD1(v31[6]) = *(_WORD *)(v17 + 92);
      HIDWORD(v31[6]) = *(_DWORD *)(v17 + 72);
      LODWORD(v31[7]) = *(_DWORD *)(v17 + 64);
      WORD2(v31[7]) = *(_WORD *)(v17 + 94);
      LODWORD(v31[8]) = *(_DWORD *)(v17 + 88);
      HIDWORD(v31[8]) = *(_DWORD *)(v17 + 28);
      v31[13] = 0LL;
      if ( *(_DWORD *)(v17 + 132) > 6u && *(_DWORD *)(v17 + 184) )
        v31[13] = *(_QWORD *)(v17 + 184);
      if ( *(_DWORD *)(v17 + 132) > 0xCu )
        v31[9] = *(_QWORD *)(v17 + 232);
      if ( *(_DWORD *)(v17 + 132) <= 0xEu )
      {
        v31[10] = 0LL;
      }
      else
      {
        v31[10] = *(_QWORD *)(v17 + 248);
        if ( *(_DWORD *)(v17 + 248) && *(_DWORD *)(v17 + 252) )
          HIDWORD(v31[2]) = v18 | 1;
      }
      if ( *(_DWORD *)(v17 + 132) <= 5u )
        v31[11] = 0LL;
      else
        v31[11] = *(_QWORD *)(v17 + 176);
      if ( *(_DWORD *)(v17 + 132) > 0xAu )
      {
        LODWORD(v31[12]) = *(_DWORD *)(v17 + 216);
        v19 = *(_DWORD *)(v17 + 220);
LABEL_56:
        HIDWORD(v31[12]) = v19;
LABEL_58:
        MiUnmapImageInSystemSpace(v30);
        if ( v24 < 0 )
          return 0LL;
        if ( (int)MiRelocateImage(*(_QWORD *)v6, (unsigned int)v31, v22, v15, -1LL, 1) < 0 )
          return 0LL;
        MiImageSuitableForSystem(v6, &v21);
        if ( !v21 && (v6[62] & 0xC) == 0 )
          return 0LL;
LABEL_17:
        v16 = MiSelectSystemImageAddress(v15, (unsigned int)v8);
        v9 = v16;
        if ( !v16 )
          return 0LL;
        PteAddress = MiGetPteAddress(v16);
        if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v8, v4 & 0x20) >= 0 )
        {
          v13 = 1;
          if ( (unsigned int)MiAddPrivateFixupEntryForSystemImage(v6, v9) )
            goto LABEL_13;
          MiReleasePrivilegedPtes(PteAddress, (unsigned int)v8);
        }
LABEL_66:
        MiReturnSystemImageAddress(v9, (unsigned int)((_DWORD)v8 << 12));
        return 0LL;
      }
    }
    else
    {
      v20 = *(_DWORD *)(v17 + 112);
      HIDWORD(v31[2]) = v20;
      v31[0] = *(unsigned int *)(v17 + 52);
      LODWORD(v31[3]) = *(_DWORD *)(v17 + 84);
      HIDWORD(v31[3]) = *(_DWORD *)(v17 + 40);
      v31[4] = *(unsigned int *)(v17 + 96);
      v31[5] = *(unsigned int *)(v17 + 100);
      WORD1(v31[6]) = *(_WORD *)(v17 + 92);
      HIDWORD(v31[6]) = *(_DWORD *)(v17 + 72);
      LODWORD(v31[7]) = *(_DWORD *)(v17 + 64);
      WORD2(v31[7]) = *(_WORD *)(v17 + 94);
      LODWORD(v31[8]) = *(_DWORD *)(v17 + 88);
      HIDWORD(v31[8]) = *(_DWORD *)(v17 + 28);
      v31[13] = 0LL;
      if ( *(_DWORD *)(v17 + 116) > 6u && *(_DWORD *)(v17 + 168) )
        v31[13] = *(_QWORD *)(v17 + 168);
      if ( *(_DWORD *)(v17 + 116) > 0xCu )
        v31[9] = *(_QWORD *)(v17 + 216);
      if ( *(_DWORD *)(v17 + 116) <= 0xEu )
      {
        v31[10] = 0LL;
      }
      else
      {
        v31[10] = *(_QWORD *)(v17 + 232);
        if ( *(_DWORD *)(v17 + 232) && *(_DWORD *)(v17 + 236) )
          HIDWORD(v31[2]) = v20 | 1;
      }
      if ( *(_DWORD *)(v17 + 116) <= 5u )
        v31[11] = 0LL;
      else
        v31[11] = *(_QWORD *)(v17 + 160);
      if ( *(_DWORD *)(v17 + 116) > 0xAu )
      {
        LODWORD(v31[12]) = *(_DWORD *)(v17 + 200);
        v19 = *(_DWORD *)(v17 + 204);
        goto LABEL_56;
      }
    }
    v31[12] = 0LL;
    goto LABEL_58;
  }
  PteAddress = MiGetPteAddress(v9);
  if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v8, v4 & 0x20) < 0 )
    return 0LL;
  v13 = 0;
LABEL_13:
  if ( !v11 || (int)MiSessionInsertImage(v9, (__int64)v6, v12) >= 0 )
    return v9;
  if ( v13 == 1 )
    MiFreePrivateFixupEntryForSystemImage(v9, 1);
  MiReleasePrivilegedPtes(PteAddress, (unsigned int)v8);
  if ( v13 == 1 )
    goto LABEL_66;
  return 0LL;
}
