/*
 * XREFs of ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C013AE1C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001D14C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C000F69C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C001E92C (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C001ED70 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C013AF74 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C014A7F8 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C014A834 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014AA04 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C014D158 (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C016EEB6 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0291CEC (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0291D34 (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

__int64 __fastcall MAPPER::bFoundForcedMatch(MAPPER *this, struct _UNIVERSAL_FONT_ID *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  struct PFE *PFEFromUFIInternal; // rsi
  __int64 *v6; // r15
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // r10
  int v10; // r9d
  struct PFF *v12; // rax
  _QWORD *v13; // rax
  int *v14; // r11
  int v15; // r10d
  int v16; // r10d
  int v17; // r11d
  int v18; // eax
  int v20; // r14d
  int v21; // edx
  unsigned int v22; // eax
  int v23; // r10d
  int v24; // r11d
  int v25; // r10d
  unsigned int v26; // r11d
  _QWORD v27[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v28; // [rsp+30h] [rbp-10h]
  struct PFT *v29; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  if ( !*(_DWORD *)a2 )
    return 0LL;
  if ( *(_DWORD *)a2 == 1 )
  {
    v29 = gpPFTDevice;
    v12 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v29, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( !v12 )
      return 0LL;
    v13 = (_QWORD *)((char *)v12 + 112);
    if ( !v13 )
      return 0LL;
    v27[0] = v13;
    v27[1] = *v13;
    v28 = 0LL;
    PFEFromUFIInternal = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v27);
    if ( !PFEFromUFIInternal )
      return 0LL;
    v15 = *v14;
    do
    {
      if ( *((_DWORD *)PFEFromUFIInternal + 21) == v15
        && *((_DWORD *)PFEFromUFIInternal + 22) == v14[1]
        && (*((_DWORD *)PFEFromUFIInternal + 3) & 2) == 0 )
      {
        break;
      }
      PFEFromUFIInternal = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v27);
    }
    while ( PFEFromUFIInternal );
  }
  else
  {
    PFEFromUFIInternal = ppfeGetPFEFromUFIInternal(a2, 0, 1);
  }
  if ( PFEFromUFIInternal )
  {
    *((_DWORD *)this + 48) = 1;
    v6 = (__int64 *)((char *)this + 256);
    *((_DWORD *)this + 49) = 1;
    *((_DWORD *)this + 47) = 0;
    v7 = *((_QWORD *)PFEFromUFIInternal + 4);
    *((_QWORD *)this + 32) = v7;
    v8 = *(_DWORD *)(v7 + 48);
    if ( (v8 & 0x3000010) == 0 )
    {
      v4 = *((unsigned int *)this + 63);
      v16 = (v4 & 2) != 0 ? *(__int16 *)(v7 + 56) : *(__int16 *)(v7 + 60) + *(__int16 *)(v7 + 62);
      v17 = *((_DWORD *)this + 41);
      if ( v16 < v17 )
      {
        LOBYTE(v4) = (*((_DWORD *)this + 63) & 0x8000) == 0;
        if ( ((unsigned __int8)v4 & ((v8 & 0x100000) != 0)) != 0 && v17 > 7 * v16 / 4 )
        {
          LODWORD(v29) = 0;
          if ( !(unsigned int)MAPPER::bWin31BitmapHeightScaling((MAPPER *)v4, v17, v16, (int *)&v29) )
            return v2;
          v18 = (int)v29;
          v4 = 8LL;
          v7 = *v6;
          if ( (unsigned int)v29 > 8 )
            v18 = 8;
          *((_DWORD *)this + 49) = v18;
        }
      }
    }
    v9 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v9 + 20) )
    {
      if ( (*(_BYTE *)(v7 + 52) & 1) == 0 )
      {
        if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
          *((_DWORD *)this + 47) |= 0x4000u;
      }
    }
    v10 = *((_DWORD *)this + 63);
    if ( (v10 & 0x200000) == 0
      && *(unsigned __int16 *)(v7 + 46) - *((_DWORD *)this + 43) < 0
      && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v7 + 46) > 150
      && IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
    {
      *((_DWORD *)this + 47) |= 0x2000u;
    }
    if ( (*(_DWORD *)(v7 + 48) & 0x2000010) != 0 )
    {
LABEL_10:
      v2 = 1;
      **((_DWORD **)this + 27) = *((_DWORD *)this + 47);
      **((_QWORD **)this + 28) = *((_QWORD *)this + 24);
      *(_BYTE *)(*((_QWORD *)this + 29) + 3LL) = 1;
      *((_DWORD *)this + 63) |= 0x1000000u;
      *((_QWORD *)this + 25) = PFEFromUFIInternal;
      return v2;
    }
    v20 = *(__int16 *)(v7 + 76);
    *((_DWORD *)this + 48) = 1;
    if ( *(_DWORD *)(v9 + 4) )
    {
      if ( (v10 & 4) == 0 )
      {
        MAPPER::bCalculateWishCell(this);
        v7 = *v6;
        v10 = *((_DWORD *)this + 63);
      }
      LOBYTE(v4) = (*(_DWORD *)(v7 + 48) & 0x100000) != 0;
      if ( ((unsigned __int8)v4 & ((v10 & 0x8000) == 0)) == 0 )
        goto LABEL_10;
      v21 = *((_DWORD *)this + 42);
      if ( v21 <= v20 )
        goto LABEL_10;
      LODWORD(v29) = 0;
      if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v4, v21, v20, (int *)&v29) )
        return v2;
      v22 = (unsigned int)v29;
    }
    else
    {
      if ( (v10 & 0x8000) != 0 || (*(_DWORD *)(v7 + 48) & 0x100000) == 0 )
        goto LABEL_10;
      v23 = *(_DWORD *)(v7 + 128);
      v24 = *(_DWORD *)(v7 + 132);
      LODWORD(v29) = 0;
      v31 = 0;
      v30 = 0;
      if ( v23 == v24 && *((_DWORD *)this + 61) == *((_DWORD *)this + 62) )
      {
        v22 = *((_DWORD *)this + 49);
        if ( v22 == 1 )
          goto LABEL_10;
      }
      else
      {
        if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>(
                             (unsigned int)(100 * *((_DWORD *)this + 62)),
                             *((unsigned int *)this + 61),
                             &v29)
          || (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * v25), v26, &v30)
          || (unsigned int)SafeDivide<long,long,long>(v30, *((unsigned int *)this + 49), &v31) )
        {
          return v2;
        }
        if ( (unsigned int)v29 <= (3 * v31) >> 1 )
          goto LABEL_10;
        if ( !v31 )
          return v2;
        v22 = (unsigned int)v29 / v31;
      }
    }
    if ( v22 > 5 )
      v22 = 5;
    *((_DWORD *)this + 48) = v22;
    goto LABEL_10;
  }
  return 0LL;
}
