__int64 __fastcall MAPPER::bFoundForcedMatch(MAPPER *this, struct _UNIVERSAL_FONT_ID *a2)
{
  struct PFF *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  struct PFE *PFEFromUFI; // rdi
  int v8; // r10d
  char *v10; // r14
  __int64 v11; // r8
  int v12; // edx
  int v13; // r10d
  int v14; // r11d
  int v15; // eax
  __int64 v16; // r10
  int v17; // r9d
  int v18; // esi
  int v19; // edx
  int v20; // eax
  int v21; // r10d
  int v22; // r11d
  unsigned int v23; // r10d
  int v24; // r10d
  int v25; // r11d
  _QWORD v26[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v27; // [rsp+30h] [rbp-10h]
  int v28; // [rsp+88h] [rbp+48h] BYREF
  int v29; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+98h] [rbp+58h] BYREF

  if ( !*(_DWORD *)a2 )
    return 0LL;
  if ( *(_DWORD *)a2 == 1 )
  {
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v26);
    v4 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v26, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( !v4 )
      return 0LL;
    v5 = (_QWORD *)((char *)v4 + 112);
    if ( !v5 )
      return 0LL;
    v26[0] = v5;
    v26[1] = *v5;
    v27 = 0LL;
    PFEFromUFI = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v26);
    if ( !PFEFromUFI )
      return 0LL;
    v8 = *(_DWORD *)a2;
    while ( *((_DWORD *)PFEFromUFI + 21) != v8
         || *((_DWORD *)PFEFromUFI + 22) != *((_DWORD *)a2 + 1)
         || (*((_DWORD *)PFEFromUFI + 3) & 2) != 0 )
    {
      PFEFromUFI = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v26);
      if ( !PFEFromUFI )
        return 0LL;
    }
  }
  else
  {
    PFEFromUFI = ppfeGetPFEFromUFI(a2, 0, 1);
  }
  if ( !PFEFromUFI )
    return 0LL;
  *((_DWORD *)this + 48) = 1;
  v10 = (char *)this + 256;
  *((_DWORD *)this + 49) = 1;
  *((_DWORD *)this + 47) = 0;
  v11 = *((_QWORD *)PFEFromUFI + 4);
  *((_QWORD *)this + 32) = v11;
  v12 = *(_DWORD *)(v11 + 48);
  if ( (v12 & 0x3000010) == 0 )
  {
    v6 = *((unsigned int *)this + 63);
    v13 = (v6 & 2) != 0 ? *(__int16 *)(v11 + 56) : *(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62);
    v14 = *((_DWORD *)this + 41);
    if ( v13 < v14 )
    {
      LOBYTE(v6) = (*((_DWORD *)this + 63) & 0x8000) == 0;
      if ( ((unsigned __int8)v6 & ((v12 & 0x100000) != 0)) != 0 && v14 > 7 * v13 / 4 )
      {
        v28 = 0;
        if ( !(unsigned int)MAPPER::bWin31BitmapHeightScaling((MAPPER *)v6, v14, v13, &v28) )
          return 0LL;
        v15 = v28;
        v6 = 8LL;
        v11 = *(_QWORD *)v10;
        if ( (unsigned int)v28 > 8 )
          v15 = 8;
        *((_DWORD *)this + 49) = v15;
      }
    }
  }
  v16 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v16 + 20)
    && (*(_BYTE *)(v11 + 52) & 1) == 0
    && (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
  {
    *((_DWORD *)this + 47) |= 0x4000u;
  }
  v17 = *((_DWORD *)this + 63);
  if ( (v17 & 0x200000) == 0
    && *(unsigned __int16 *)(v11 + 46) - *((_DWORD *)this + 43) < 0
    && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v11 + 46) > 150
    && IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
  {
    *((_DWORD *)this + 47) |= 0x2000u;
  }
  if ( (*(_DWORD *)(v11 + 48) & 0x2000010) != 0 )
    goto LABEL_58;
  v18 = *(__int16 *)(v11 + 76);
  *((_DWORD *)this + 48) = 1;
  if ( *(_DWORD *)(v16 + 4) )
  {
    if ( (v17 & 4) == 0 )
      MAPPER::bCalculateWishCell(this);
    LOBYTE(v6) = (*(_DWORD *)(*(_QWORD *)v10 + 48LL) & 0x100000) != 0;
    if ( ((unsigned __int8)v6 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) == 0 )
      goto LABEL_58;
    v19 = *((_DWORD *)this + 42);
    if ( v19 <= v18 )
      goto LABEL_58;
    v28 = 0;
    if ( (unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v6, v19, v18, &v28) )
    {
      v20 = v28;
      if ( (unsigned int)v28 > 5 )
        v20 = 5;
      *((_DWORD *)this + 48) = v20;
      goto LABEL_58;
    }
    return 0LL;
  }
  if ( (v17 & 0x8000) == 0 && (*(_DWORD *)(v11 + 48) & 0x100000) != 0 )
  {
    v21 = *(_DWORD *)(v11 + 128);
    v22 = *(_DWORD *)(v11 + 132);
    v28 = 0;
    v30 = 0;
    v29 = 0;
    if ( v21 == v22 && *((_DWORD *)this + 61) == *((_DWORD *)this + 62) )
    {
      v23 = *((_DWORD *)this + 49);
      if ( v23 != 1 )
        goto LABEL_55;
    }
    else
    {
      if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>(
                           100 * *((_DWORD *)this + 62),
                           *((_DWORD *)this + 61),
                           &v28)
        || (unsigned int)SafeDivide<long,long,long>(100 * v24, v25, &v29)
        || (unsigned int)SafeDivide<long,long,long>(v29, *((_DWORD *)this + 49), (int *)&v30) )
      {
        return 0LL;
      }
      if ( v28 > (3 * v30) >> 1 )
      {
        if ( !v30 )
          return 0LL;
        v23 = v28 / v30;
LABEL_55:
        if ( v23 > 5 )
          v23 = 5;
        *((_DWORD *)this + 48) = v23;
      }
    }
  }
LABEL_58:
  MAPPER::vSetBest(this, PFEFromUFI, 1, 1u);
  return 1LL;
}
