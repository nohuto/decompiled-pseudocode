/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C0017990
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0017954 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C00191A8 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C001922C (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082FC8 (--1SURFREF@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C016A84C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026CF90 (--0SURFREF@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026D1C4 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C0275CD4 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C02768D4 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  __int64 v1; // r12
  HSURF v2; // rbx
  ULONG64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // r13d
  _OWORD *v6; // rdx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  ULONG *v9; // rax
  int v10; // r14d
  int v11; // r15d
  FLONG flBlue; // esi
  unsigned __int64 v13; // rcx
  int v14; // eax
  HANDLE v15; // rax
  void *v16; // rdi
  FLONG v17; // r9d
  ULONG *v18; // r14
  ULONG v19; // r15d
  HPALETTE Palette; // rax
  HPALETTE v21; // rsi
  __int64 LockedBitmap; // rax
  unsigned int v23; // edx
  unsigned __int64 v24; // r8
  SURFOBJ *v25; // r14
  char v26; // r15
  DYNAMICMODECHANGESHARELOCK *v27; // rcx
  __int64 DisplayDC; // rax
  unsigned int v29; // edi
  ULONG64 v30; // r8
  _QWORD *v31; // rdx
  _QWORD *v32; // rdx
  DYNAMICMODECHANGESHARELOCK *v33; // rcx
  DYNAMICMODECHANGESHARELOCK *v35; // rcx
  FLONG flGreen; // [rsp+20h] [rbp-508h]
  char v37; // [rsp+30h] [rbp-4F8h] BYREF
  char v38[3]; // [rsp+31h] [rbp-4F7h] BYREF
  ULONG cColors; // [rsp+34h] [rbp-4F4h]
  ULONG *pulColors; // [rsp+38h] [rbp-4F0h]
  SIZE_T Length; // [rsp+40h] [rbp-4E8h]
  unsigned int v42; // [rsp+48h] [rbp-4E0h]
  unsigned __int64 v43; // [rsp+50h] [rbp-4D8h]
  HSURF hsurf; // [rsp+58h] [rbp-4D0h]
  __int64 v45; // [rsp+60h] [rbp-4C8h]
  volatile void *Address[2]; // [rsp+68h] [rbp-4C0h]
  HDC v47[2]; // [rsp+78h] [rbp-4B0h]
  __int128 v48; // [rsp+88h] [rbp-4A0h]
  __int64 v49; // [rsp+98h] [rbp-490h]
  HANDLE v50; // [rsp+A0h] [rbp-488h]
  ULONG64 v51; // [rsp+A8h] [rbp-480h]
  _QWORD v52[2]; // [rsp+B0h] [rbp-478h] BYREF
  _BYTE v53[32]; // [rsp+C0h] [rbp-468h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-448h]
  _BYTE v55[1024]; // [rsp+F0h] [rbp-438h] BYREF

  v51 = a1;
  v1 = 0LL;
  v45 = 0LL;
  v2 = 0LL;
  hsurf = 0LL;
  Length = 0LL;
  v3 = a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)v3;
  *(_OWORD *)v47 = *(_OWORD *)(v3 + 16);
  v48 = *(_OWORD *)(v3 + 32);
  v49 = *(_QWORD *)(v3 + 48);
  v43 = __PAIR64__((unsigned int)v47[0], HIDWORD(Address[1]));
  v4 = LODWORD(v47[0]);
  if ( SHIDWORD(Address[1]) <= 0 || SLODWORD(v47[0]) <= 0 )
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
    v10 = 16711680;
    flBlue = 255;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) == 23 )
  {
    flBlue = 31;
    v5 = 4;
    v10 = 63488;
    v11 = 2016;
    goto LABEL_25;
  }
  if ( SLODWORD(Address[1]) <= 25 )
  {
    flBlue = 31;
    v5 = 4;
    v10 = 31744;
    v11 = 992;
    goto LABEL_25;
  }
  if ( LODWORD(Address[1]) != 41 )
    return 3221225485LL;
  v5 = 3;
  v6 = (_OWORD *)v48;
  if ( (_QWORD)v48 )
  {
    if ( (__int64)v48 + 1024 < (unsigned __int64)v48 || (__int64)v48 + 1024 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = v55;
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
    v9 = (ULONG *)v55;
  }
  else
  {
    v9 = (ULONG *)&unk_1C02E8DC0;
  }
  pulColors = v9;
  cColors = 256;
  v10 = 0;
  v11 = 0;
  flBlue = 0;
LABEL_25:
  v13 = v4 * ((unsigned __int64)v47[0] >> 32);
  v14 = -1;
  if ( v13 <= 0xFFFFFFFF )
    v14 = v4 * HIDWORD(v47[0]);
  LODWORD(Length) = v14;
  v42 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v15 = (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage()
      ? (HANDLE)GrepSecureVirtualMemory(Address[0], Length, 4LL)
      : MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v50 = v15;
  v16 = v15;
  if ( !v15 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v37);
  MDCOBJA::MDCOBJA((MDCOBJA *)v52, v47[1]);
  if ( !v52[0] )
  {
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      GrepUnsecureVirtualMemory(v16);
    else
      MmUnsecureVirtualMemory(v16);
    XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v52);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v35);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v52[0] + 48LL);
  flGreen = v11;
  v17 = v10;
  v18 = pulColors;
  v19 = cColors;
  Palette = EngCreatePalette((unsigned int)(v5 > 3) + 1, cColors, pulColors, v17, flGreen, flBlue);
  v21 = Palette;
  pulColors = (ULONG *)Palette;
  if ( Palette )
  {
    if ( v19 == 256 && !v18 )
      DxEngSyncPaletteTableWithDevice(Palette, (HDEV)Length);
    LockedBitmap = EngCreateLockedBitmap(v43, HIDWORD(v47[0]), v5, 1LL, Address[0]);
    v25 = (SURFOBJ *)LockedBitmap;
    if ( LockedBitmap )
      v2 = *(HSURF *)(LockedBitmap + 8);
    else
      v2 = 0LL;
    hsurf = v2;
    DxEngSetPaletteState(v21, v23, v24);
    if ( v2 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v38);
      SURFREF::SURFREF((SURFREF *)v53);
      SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v53, v2);
      if ( (unsigned int)SURFREF::bValid((SURFREF *)v53) )
      {
        v26 = 1;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v54 + 24), v21);
        *(_QWORD *)(v54 + 224) = v16;
        *(_DWORD *)(v54 + 112) |= 0x100000u;
        *(_DWORD *)(v54 + 112) |= 0x4000u;
        *(_DWORD *)(v54 + 112) |= 0x200u;
      }
      else
      {
        v26 = 0;
      }
      SURFREF::~SURFREF((SURFREF *)v53);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v27);
      if ( v26 )
      {
        DisplayDC = GreCreateDisplayDC(Length, 1LL);
        v1 = DisplayDC;
        v45 = DisplayDC;
        if ( DisplayDC )
        {
          hbmSelectBitmap(DisplayDC, v2, 0LL, 1LL);
          GreSetBitmapOwner(v2, 2147483650LL);
        }
      }
      EngUnlockSurface(v25);
    }
  }
  if ( v1 )
  {
    v29 = v42;
  }
  else
  {
    if ( v2 )
    {
      EngDeleteSurface(v2);
      v2 = 0LL;
      hsurf = 0LL;
    }
    else if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
    {
      GrepUnsecureVirtualMemory(v16);
    }
    else
    {
      MmUnsecureVirtualMemory(v16);
    }
    v29 = -1073741801;
  }
  v30 = v51;
  v31 = (_QWORD *)(v51 + 40);
  if ( v51 + 40 >= MmUserProbeAddress )
    v31 = (_QWORD *)MmUserProbeAddress;
  *v31 = v1;
  v32 = (_QWORD *)(v30 + 48);
  if ( v30 + 48 >= MmUserProbeAddress )
    v32 = (_QWORD *)MmUserProbeAddress;
  *v32 = v2;
  if ( v21 )
    EngDeletePalette(v21);
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v52);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v33);
  return v29;
}
