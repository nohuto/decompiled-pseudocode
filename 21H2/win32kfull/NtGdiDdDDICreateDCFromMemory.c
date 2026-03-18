/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C0091B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C (--1SURFREF@@QEAA@XZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0091AE4 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C009212C (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C00921B0 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C015DC5C (--1MDCOBJA@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C02735E0 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  __int64 v1; // r15
  HSURF v2; // rbx
  ULONG64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // r12d
  _OWORD *v6; // rdx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  ULONG *v9; // rax
  int v10; // esi
  int v11; // r14d
  FLONG flBlue; // edi
  unsigned __int64 v13; // rcx
  int v14; // eax
  HANDLE v15; // r13
  FLONG v16; // r9d
  ULONG *v17; // rsi
  ULONG v18; // r14d
  HPALETTE Palette; // rax
  HPALETTE v20; // rdi
  struct _SURFOBJ *LockedBitmap; // rax
  unsigned int v22; // edx
  unsigned __int64 v23; // r8
  SURFOBJ *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // r14
  __int64 DisplayDC; // rax
  unsigned int v29; // esi
  ULONG64 v30; // r8
  _QWORD *v31; // rdx
  _QWORD *v32; // rdx
  FLONG flGreen; // [rsp+20h] [rbp-4E8h]
  char v35[8]; // [rsp+30h] [rbp-4D8h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-4D0h]
  ULONG cColors; // [rsp+40h] [rbp-4C8h]
  ULONG *pulColors; // [rsp+48h] [rbp-4C0h]
  unsigned int v39; // [rsp+50h] [rbp-4B8h]
  struct tagSIZE v40; // [rsp+58h] [rbp-4B0h]
  HSURF hsurf; // [rsp+60h] [rbp-4A8h]
  __int64 v42; // [rsp+68h] [rbp-4A0h]
  volatile void *Address[2]; // [rsp+70h] [rbp-498h] BYREF
  HDC v44[2]; // [rsp+80h] [rbp-488h]
  __int128 v45; // [rsp+90h] [rbp-478h]
  __int64 v46; // [rsp+A0h] [rbp-468h]
  ULONG64 v47; // [rsp+A8h] [rbp-460h]
  _QWORD v48[4]; // [rsp+B0h] [rbp-458h] BYREF
  _BYTE v49[1024]; // [rsp+D0h] [rbp-438h] BYREF

  v47 = a1;
  v1 = 0LL;
  v42 = 0LL;
  v2 = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  v3 = a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v3;
  *(_OWORD *)v44 = *(_OWORD *)(v3 + 16);
  v45 = *(_OWORD *)(v3 + 32);
  v46 = *(_QWORD *)(v3 + 48);
  v40 = (struct tagSIZE)__PAIR64__((unsigned int)v44[0], HIDWORD(Address[1]));
  v4 = LODWORD(v44[0]);
  if ( SHIDWORD(Address[1]) <= 0 || SLODWORD(v44[0]) <= 0 )
    return 3221225485LL;
  cColors = 0;
  pulColors = 0LL;
  if ( LODWORD(Address[1]) == 20 )
  {
    v5 = 5;
    goto LABEL_24;
  }
  if ( SLODWORD(Address[1]) <= 20 )
    return 3221225485LL;
  if ( SLODWORD(Address[1]) <= 22 )
  {
    v5 = 6;
LABEL_24:
    v11 = 65280;
    flBlue = 255;
    v10 = 16711680;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) == 23 )
  {
    v10 = 63488;
    flBlue = 31;
    v5 = 4;
    v11 = 2016;
    goto LABEL_25;
  }
  if ( SLODWORD(Address[1]) <= 25 )
  {
    v10 = 31744;
    flBlue = 31;
    v5 = 4;
    v11 = 992;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) != 41 )
    return 3221225485LL;
  v5 = 3;
  v6 = (_OWORD *)v45;
  if ( (_QWORD)v45 )
  {
    if ( (__int64)v45 + 1024 < (unsigned __int64)v45 || (__int64)v45 + 1024 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = v49;
    v8 = 8LL;
    do
    {
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v7[3] = v6[3];
      v7[4] = v6[4];
      v7[5] = v6[5];
      v7[6] = v6[6];
      v7 += 8;
      *(v7 - 1) = v6[7];
      v6 += 8;
      --v8;
    }
    while ( v8 );
    v9 = (ULONG *)v49;
  }
  else
  {
    v9 = (ULONG *)&unk_1C02E6500;
  }
  pulColors = v9;
  cColors = 256;
  v10 = 0;
  v11 = 0;
  flBlue = 0;
LABEL_25:
  v13 = v4 * ((unsigned __int64)v44[0] >> 32);
  v14 = -1;
  if ( v13 <= 0xFFFFFFFF )
    v14 = v4 * HIDWORD(v44[0]);
  LODWORD(Length) = v14;
  v39 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v15 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v48[2] = v15;
  if ( !v15 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v35);
  MDCOBJA::MDCOBJA((MDCOBJA *)v48, v44[1]);
  if ( !v48[0] )
  {
    MmUnsecureVirtualMemory(v15);
    MDCOBJA::~MDCOBJA((MDCOBJA *)v48);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v35);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v48[0] + 48LL);
  flGreen = v11;
  v16 = v10;
  v17 = pulColors;
  v18 = cColors;
  Palette = EngCreatePalette((unsigned int)(v5 > 3) + 1, cColors, pulColors, v16, flGreen, flBlue);
  v20 = Palette;
  pulColors = (ULONG *)Palette;
  if ( Palette )
  {
    if ( v18 == 256 && !v17 )
      DxEngSyncPaletteTableWithDevice(Palette, (HDEV)Length);
    LockedBitmap = EngCreateLockedBitmap(v40, HIDWORD(v44[0]), v5, 1u, (void *)Address[0]);
    v24 = LockedBitmap;
    if ( LockedBitmap )
      v2 = LockedBitmap->hsurf;
    else
      v2 = 0LL;
    hsurf = v2;
    DxEngSetPaletteState(v20, v22, v23);
    if ( v2 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v35);
      SURFREF::SURFREF((SURFREF *)Address);
      LOBYTE(v25) = 5;
      v26 = HmgShareLockCheckIgnoreStockBit(v2, v25);
      *(_QWORD *)&v45 = v26;
      if ( v26 )
      {
        v27 = 1;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v26 + 24), v20);
        *(_QWORD *)(v45 + 224) = v15;
        *(_DWORD *)(v45 + 112) |= 0x100000u;
        *(_DWORD *)(v45 + 112) |= 0x4000u;
        *(_DWORD *)(v45 + 112) |= 0x200u;
      }
      else
      {
        v27 = 0;
      }
      SURFREF::~SURFREF((SURFREF *)Address);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v35);
      if ( v27 )
      {
        DisplayDC = GreCreateDisplayDC(Length, 1LL);
        v1 = DisplayDC;
        v42 = DisplayDC;
        if ( DisplayDC )
        {
          hbmSelectBitmap(DisplayDC, v2, 0LL, 1LL);
          GreSetBitmapOwner(v2, 2147483650LL);
        }
      }
      EngUnlockSurface(v24);
    }
  }
  if ( v1 )
  {
    v29 = v39;
  }
  else
  {
    if ( v2 )
    {
      EngDeleteSurface(v2);
      v2 = 0LL;
      hsurf = 0LL;
    }
    else
    {
      MmUnsecureVirtualMemory(v15);
    }
    v29 = -1073741801;
  }
  v30 = v47;
  v31 = (_QWORD *)(v47 + 40);
  if ( v47 + 40 >= MmUserProbeAddress )
    v31 = (_QWORD *)MmUserProbeAddress;
  *v31 = v1;
  v32 = (_QWORD *)(v30 + 48);
  if ( v30 + 48 >= MmUserProbeAddress )
    v32 = (_QWORD *)MmUserProbeAddress;
  *v32 = v2;
  if ( v20 )
    EngDeletePalette(v20);
  MDCOBJA::~MDCOBJA((MDCOBJA *)v48);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v35);
  return v29;
}
