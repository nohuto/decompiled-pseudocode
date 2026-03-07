__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int64 *a5)
{
  __int64 v5; // rbp
  int v6; // ebx
  bool v7; // zf
  int v8; // r10d
  __int64 v9; // r11
  __int64 v11; // rcx
  unsigned int v12; // esi
  int ImageWowSubsystemIndex; // esi
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // r12
  unsigned int v18; // r15d
  __int16 v19; // r10
  __int64 started; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v29[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+80h] [rbp+8h]
  unsigned int v31; // [rsp+90h] [rbp+18h]

  v31 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0;
  v7 = (*(_BYTE *)(a1 + 14) & 0x40) == 0;
  v8 = a4;
  v9 = a2;
  v27 = 0LL;
  v28 = 0LL;
  if ( v7 )
  {
    v11 = *(_QWORD *)(a1 + 56);
    if ( (*(_BYTE *)(v11 + 51) & 0x10) != 0 && _bittest16((const signed __int16 *)(v11 + 44), 0xDu) )
      v12 = 2;
    else
      v12 = *(_QWORD *)(a1 + 32) <= 0xFFFFFFFFuLL;
LABEL_6:
    *(_DWORD *)(v5 + 92) ^= (*(_DWORD *)(v5 + 92) ^ (v12 << 20)) & 0x300000;
    goto LABEL_7;
  }
  ImageWowSubsystemIndex = MiGetImageWowSubsystemIndex(a1);
  if ( ImageWowSubsystemIndex != -1 )
  {
    v12 = ImageWowSubsystemIndex + 3;
    if ( v12 == 4 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v12 = 4;
LABEL_7:
  v14 = *(_QWORD *)(a1 + 56);
  LODWORD(v15) = *(_DWORD *)(a1 + 8);
  v30 = v14;
  if ( !(_DWORD)a3 )
  {
    if ( !dword_140C694FC )
      goto LABEL_9;
    v26 = ((unsigned int)dword_140C694FC >> 12) + ((dword_140C694FC & 0xFFF) != 0);
    if ( !v26 )
      goto LABEL_9;
    if ( v26 + (unsigned int)v15 >= (unsigned int)v15 )
    {
      LODWORD(v15) = v26 + v15;
      goto LABEL_9;
    }
    return 3221225503LL;
  }
  v23 = MiBytesToMapSystemImage((unsigned int)((_DWORD)v15 << 12));
  if ( !v23 )
    return 3221225503LL;
  a3 = v31;
  v15 = v23 >> 12;
LABEL_9:
  LODWORD(v16) = -1;
  if ( v8 )
  {
    LOWORD(v18) = 0;
    v21 = *(_QWORD *)(a1 + 32);
    goto LABEL_45;
  }
  v17 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(v9 + 40);
  v18 = (unsigned int)(v15 + 15) >> 4;
  if ( !(_DWORD)a3 )
  {
    v19 = 0x2000;
    if ( (*(_WORD *)(v14 + 44) & 0x2000) != 0 )
    {
      v29[0] = 0LL;
      LOBYTE(a3) = v12 != 4;
      if ( !dword_140D1D1E0 || !(unsigned int)MiImageCanUseHighOverflowArea(a1, v17, a3) )
      {
        if ( (_BYTE)a3 )
        {
          MiGetImageBitMapInfo(v12, v29, &v28, &v27);
          started = MiSelectRelocationStartHint(v29, (unsigned __int16)v18, v27, 0LL);
          v16 = started;
          if ( started != -1 )
            v16 = MiObtainRelocationBits(v29, (unsigned __int16)v18, started);
          if ( v16 != -1 )
          {
            v21 = v28 - ((v16 + (unsigned __int16)v18) << 16);
LABEL_18:
            *(_DWORD *)(v5 + 88) = v16;
            *(_WORD *)(v5 + 92) = v18;
LABEL_19:
            *(_DWORD *)(v5 + 92) = (v6 << 23) | *(_DWORD *)(v5 + 92) & 0xFF7FFFFF;
            *a5 = v21;
            return 0LL;
          }
          v14 = v30;
          v19 = 0x2000;
        }
      }
    }
    if ( (*(_DWORD *)(v5 + 92) & 0x800000) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 32);
      v6 = 1;
      goto LABEL_19;
    }
    if ( !v12 )
    {
      v6 = 1;
      v21 = ((unsigned int)ExGenRandom(1) % (131073 - (unsigned __int64)(unsigned __int16)v18) + 2146828288) << 16;
      goto LABEL_18;
    }
    if ( ((unsigned __int16)v19 & *(_WORD *)(v14 + 44)) == 0 )
    {
      v6 = 1;
      v25 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
      if ( v17 >= 0x1000000 )
        v21 = v17 - v25;
      else
        v21 = v25 + 0x10000;
      goto LABEL_18;
    }
    v21 = MiSelectOverflowDllBase(a1, v17, v12);
LABEL_45:
    v6 = 1;
    goto LABEL_18;
  }
  v24 = MiSelectSystemImageAddress((unsigned int)a3, (unsigned int)v15);
  v21 = v24;
  if ( v24 )
  {
    *(_WORD *)(v5 + 92) = v18;
    *(_DWORD *)(v5 + 88) = (unsigned __int64)(v24 + 0x800000000000LL) >> 16;
    MiSetControlAreaSystemVa(v5, v31);
    goto LABEL_19;
  }
  return 3221225626LL;
}
