/*
 * XREFs of NtGdiDdDDICreateDCFromMemory @ 0x1C0006F30
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0007358 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C0007394 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C0007418 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C012FB74 (--1DCOBJA@@QEAA@XZ.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C0270FC8 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDICreateDCFromMemory(ULONG64 a1)
{
  __int64 v1; // r15
  HSURF v2; // rdi
  ULONG64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // r12d
  int v6; // r14d
  int v7; // ebx
  FLONG v8; // esi
  unsigned __int64 v9; // rcx
  int v10; // eax
  HANDLE v11; // r13
  int v12; // r8d
  ULONG *v13; // rbx
  ULONG v14; // r14d
  HPALETTE Palette; // rax
  HPALETTE v16; // rsi
  struct _SURFOBJ *LockedBitmap; // rax
  unsigned int v18; // edx
  unsigned __int64 v19; // r8
  SURFOBJ *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rbx
  char v23; // r12
  __int64 DisplayDC; // rax
  unsigned int v25; // ebx
  ULONG64 v26; // r8
  _QWORD *v27; // rdx
  _QWORD *v28; // rdx
  _OWORD *v30; // rdx
  _OWORD *v31; // rax
  __int64 v32; // rcx
  ULONG *v33; // rax
  FLONG flGreen; // [rsp+20h] [rbp-4E8h]
  FLONG flBlue; // [rsp+28h] [rbp-4E0h]
  char v36[8]; // [rsp+30h] [rbp-4D8h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-4D0h]
  ULONG cColors; // [rsp+40h] [rbp-4C8h]
  ULONG *pulColors; // [rsp+48h] [rbp-4C0h]
  unsigned int v40; // [rsp+50h] [rbp-4B8h]
  HSURF hsurf; // [rsp+58h] [rbp-4B0h]
  struct tagSIZE v42; // [rsp+60h] [rbp-4A8h]
  __int64 v43; // [rsp+68h] [rbp-4A0h]
  ULONG64 v44; // [rsp+70h] [rbp-498h]
  _QWORD v45[2]; // [rsp+78h] [rbp-490h] BYREF
  volatile void *Address[2]; // [rsp+88h] [rbp-480h]
  HDC v47[2]; // [rsp+98h] [rbp-470h]
  __int128 v48; // [rsp+A8h] [rbp-460h]
  __int64 v49; // [rsp+B8h] [rbp-450h]
  HANDLE v50; // [rsp+C0h] [rbp-448h]
  _BYTE v51[1024]; // [rsp+D0h] [rbp-438h] BYREF

  v44 = a1;
  v1 = 0LL;
  v43 = 0LL;
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
  v42 = (struct tagSIZE)__PAIR64__((unsigned int)v47[0], HIDWORD(Address[1]));
  v4 = LODWORD(v47[0]);
  if ( SHIDWORD(Address[1]) <= 0 || SLODWORD(v47[0]) <= 0 )
    return 3221225485LL;
  cColors = 0;
  pulColors = 0LL;
  switch ( LODWORD(Address[1]) )
  {
    case 0x14:
      v5 = 5;
      goto LABEL_8;
    case 0x15:
    case 0x16:
      v5 = 6;
LABEL_8:
      v6 = 65280;
      v7 = 255;
      v8 = 16711680;
      break;
    case 0x17:
      v8 = 63488;
      v7 = 31;
      v5 = 4;
      v6 = 2016;
      break;
    case 0x18:
    case 0x19:
      v8 = 31744;
      v7 = 31;
      v5 = 4;
      v6 = 992;
      break;
    case 0x29:
      v5 = 3;
      v30 = (_OWORD *)v48;
      if ( (_QWORD)v48 )
      {
        if ( (__int64)v48 + 1024 < (unsigned __int64)v48 || (__int64)v48 + 1024 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v31 = v51;
        v32 = 8LL;
        do
        {
          *v31 = *v30;
          v31[1] = v30[1];
          v31[2] = v30[2];
          v31[3] = v30[3];
          v31[4] = v30[4];
          v31[5] = v30[5];
          v31[6] = v30[6];
          v31 += 8;
          *(v31 - 1) = v30[7];
          v30 += 8;
          --v32;
        }
        while ( v32 );
        v33 = (ULONG *)v51;
      }
      else
      {
        v33 = (ULONG *)&unk_1C03296F0;
      }
      pulColors = v33;
      cColors = 256;
      v8 = 0;
      v6 = 0;
      v7 = 0;
      break;
    default:
      return 3221225485LL;
  }
  v9 = v4 * ((unsigned __int64)v47[0] >> 32);
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = v4 * HIDWORD(v47[0]);
  LODWORD(Length) = v10;
  v40 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v9 > 0xFFFFFFFF )
    return 3221225485LL;
  ProbeForWrite(Address[0], Length, 4u);
  v11 = MmSecureVirtualMemory((PVOID)Address[0], Length, 4u);
  v50 = v11;
  if ( !v11 )
    return 3221225485LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
  MDCOBJA::MDCOBJA((MDCOBJA *)v45, v47[1], v12);
  if ( !v45[0] )
  {
    MmUnsecureVirtualMemory(v11);
    DCOBJA::~DCOBJA((DCOBJA *)v45);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
    return 3221225485LL;
  }
  Length = *(_QWORD *)(v45[0] + 48LL);
  flBlue = v7;
  flGreen = v6;
  v13 = pulColors;
  v14 = cColors;
  Palette = EngCreatePalette((unsigned int)(v5 > 3) + 1, cColors, pulColors, v8, flGreen, flBlue);
  v16 = Palette;
  pulColors = (ULONG *)Palette;
  if ( Palette )
  {
    if ( v14 == 256 && !v13 )
      DxEngSyncPaletteTableWithDevice(Palette, (HDEV)Length);
    LockedBitmap = EngCreateLockedBitmap(v42, HIDWORD(v47[0]), v5, 1u, (void *)Address[0]);
    v20 = LockedBitmap;
    if ( LockedBitmap )
      v2 = LockedBitmap->hsurf;
    else
      v2 = 0LL;
    hsurf = v2;
    DxEngSetPaletteState(v16, v18, v19);
    if ( v2 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
      LOBYTE(v21) = 5;
      v22 = HmgShareLockCheckIgnoreStockBit(v2, v21);
      if ( v22 )
      {
        v23 = 1;
        DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v22 + 24), v16);
        *(_QWORD *)(v22 + 224) = v11;
        *(_DWORD *)(v22 + 112) |= 0x104200u;
      }
      else
      {
        v23 = 0;
      }
      if ( v22 )
        DEC_SHARE_REF_CNT(v22);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
      if ( v23 )
      {
        DisplayDC = GreCreateDisplayDC(Length, 1LL);
        v1 = DisplayDC;
        v43 = DisplayDC;
        if ( DisplayDC )
        {
          hbmSelectBitmap(DisplayDC, v2, 0LL, 1LL);
          GreSetBitmapOwner(v2, 2147483650LL);
        }
      }
      EngUnlockSurface(v20);
    }
  }
  if ( v1 )
  {
    v25 = v40;
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
      MmUnsecureVirtualMemory(v11);
    }
    v25 = -1073741801;
  }
  v26 = v44;
  v27 = (_QWORD *)(v44 + 40);
  if ( v44 + 40 >= MmUserProbeAddress )
    v27 = (_QWORD *)MmUserProbeAddress;
  *v27 = v1;
  v28 = (_QWORD *)(v26 + 48);
  if ( v26 + 48 >= MmUserProbeAddress )
    v28 = (_QWORD *)MmUserProbeAddress;
  *v28 = v2;
  if ( v16 )
    EngDeletePalette(v16);
  DCOBJA::~DCOBJA((DCOBJA *)v45);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
  return v25;
}
