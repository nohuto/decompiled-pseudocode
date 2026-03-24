/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C0017990
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0017954 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C0019108 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C001918C (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082F38 (--1SURFREF@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0169FEC (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026C9D0 (--0SURFREF@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026CC04 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C02756F4 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C02762F4 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
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
  char v25; // r14
  DYNAMICMODECHANGESHARELOCK *v26; // rcx
  __int64 DisplayDC; // rax
  unsigned int v28; // esi
  ULONG64 v29; // r8
  _QWORD *v30; // rdx
  _QWORD *v31; // rdx
  DYNAMICMODECHANGESHARELOCK *v32; // rcx
  DYNAMICMODECHANGESHARELOCK *v34; // rcx
  FLONG flGreen; // [rsp+20h] [rbp-508h]
  char v36; // [rsp+30h] [rbp-4F8h] BYREF
  char v37[7]; // [rsp+31h] [rbp-4F7h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-4F0h]
  ULONG cColors; // [rsp+40h] [rbp-4E8h]
  ULONG *pulColors; // [rsp+48h] [rbp-4E0h]
  unsigned int v41; // [rsp+50h] [rbp-4D8h]
  struct tagSIZE v42; // [rsp+58h] [rbp-4D0h]
  HSURF hsurf; // [rsp+60h] [rbp-4C8h]
  __int64 v44; // [rsp+68h] [rbp-4C0h]
  ULONG64 v45; // [rsp+70h] [rbp-4B8h]
  _QWORD v46[2]; // [rsp+78h] [rbp-4B0h] BYREF
  volatile void *Address[2]; // [rsp+88h] [rbp-4A0h]
  HDC v48[2]; // [rsp+98h] [rbp-490h]
  __int128 v49; // [rsp+A8h] [rbp-480h]
  __int64 v50; // [rsp+B8h] [rbp-470h]
  _BYTE v51[32]; // [rsp+C0h] [rbp-468h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-448h]
  HANDLE v53; // [rsp+E8h] [rbp-440h]
  _BYTE v54[1024]; // [rsp+F0h] [rbp-438h] BYREF

  v45 = a1;
  v1 = 0LL;
  v44 = 0LL;
  v2 = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  v3 = a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v3;
  *(_OWORD *)v48 = *(_OWORD *)(v3 + 16);
  v49 = *(_OWORD *)(v3 + 32);
  v50 = *(_QWORD *)(v3 + 48);
  v42 = (struct tagSIZE)__PAIR64__((unsigned int)v48[0], HIDWORD(Address[1]));
  v4 = LODWORD(v48[0]);
  if ( SHIDWORD(Address[1]) <= 0 || SLODWORD(v48[0]) <= 0 )
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
  v6 = (_OWORD *)v49;
  if ( (_QWORD)v49 )
  {
    if ( (__int64)v49 + 1024 < (unsigned __int64)v49 || (__int64)v49 + 1024 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = v54;
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
    v9 = (ULONG *)v54;
  }
  else
  {
    v9 = (ULONG *)&unk_1C02E7DC0;
  }
  pulColors = v9;
  cColors = 256;
  v10 = 0;
  v11 = 0;
  flBlue = 0;
LABEL_25:
  v13 = v4 * ((unsigned __int64)v48[0] >> 32);
  v14 = -1;
  if ( v13 <= 0xFFFFFFFF )
    v14 = v4 * HIDWORD(v48[0]);
  LODWORD(Length) = v14;
  v41 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v15 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v53 = v15;
  if ( !v15 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v36);
  MDCOBJA::MDCOBJA((MDCOBJA *)v46, v48[1]);
  if ( !v46[0] )
  {
    MmUnsecureVirtualMemory(v15);
    XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v46);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v34);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v46[0] + 48LL);
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
    LockedBitmap = EngCreateLockedBitmap(v42, HIDWORD(v48[0]), v5, 1u, (void *)Address[0]);
    v24 = LockedBitmap;
    if ( LockedBitmap )
      v2 = LockedBitmap->hsurf;
    else
      v2 = 0LL;
    hsurf = v2;
    DxEngSetPaletteState(v20, v22, v23);
    if ( v2 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v37);
      SURFREF::SURFREF((SURFREF *)v51);
      SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v51, v2);
      if ( (unsigned int)SURFREF::bValid((SURFREF *)v51) )
      {
        v25 = 1;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v52 + 24), v20);
        *(_QWORD *)(v52 + 224) = v15;
        *(_DWORD *)(v52 + 112) |= 0x100000u;
        *(_DWORD *)(v52 + 112) |= 0x4000u;
        *(_DWORD *)(v52 + 112) |= 0x200u;
      }
      else
      {
        v25 = 0;
      }
      SURFREF::~SURFREF((SURFREF *)v51);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v26);
      if ( v25 )
      {
        DisplayDC = GreCreateDisplayDC(Length, 1LL);
        v1 = DisplayDC;
        v44 = DisplayDC;
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
    v28 = v41;
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
    v28 = -1073741801;
  }
  v29 = v45;
  v30 = (_QWORD *)(v45 + 40);
  if ( v45 + 40 >= MmUserProbeAddress )
    v30 = (_QWORD *)MmUserProbeAddress;
  *v30 = v1;
  v31 = (_QWORD *)(v29 + 48);
  if ( v29 + 48 >= MmUserProbeAddress )
    v31 = (_QWORD *)MmUserProbeAddress;
  *v31 = v2;
  if ( v20 )
    EngDeletePalette(v20);
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v46);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v32);
  return v28;
}
