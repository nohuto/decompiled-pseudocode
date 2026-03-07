__int64 __fastcall CmpQueryKeyValueData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _DWORD *Size,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v8; // r10
  unsigned int v9; // r15d
  _DWORD *v10; // rdi
  unsigned __int16 v11; // dx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  unsigned int v15; // esi
  unsigned int v16; // esi
  int v18; // r9d
  unsigned int v19; // r9d
  unsigned int v20; // esi
  size_t v21; // r8
  unsigned int v22; // edx
  unsigned int v23; // r13d
  unsigned int v24; // ecx
  unsigned int v25; // r8d
  unsigned int i; // eax
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // edx
  int v30; // r9d
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // r8d
  unsigned int v34; // r8d
  unsigned int v35; // esi
  void *Src; // [rsp+48h] [rbp-60h] BYREF
  __int64 v37[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v38; // [rsp+60h] [rbp-48h]
  unsigned int v40; // [rsp+C0h] [rbp+18h]
  __int64 v41; // [rsp+C8h] [rbp+20h] BYREF

  v8 = a1;
  v9 = 0;
  Src = 0LL;
  LOBYTE(v41) = 0;
  v37[0] = 0xFFFFFFFFLL;
  v38 = *(_QWORD *)(a1 + 32);
  v10 = Size;
  v37[1] = a3;
  v11 = 2 * *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) == 0 )
    v11 = *(_WORD *)(a3 + 2);
  if ( a4 == 2 )
  {
    v12 = *(_DWORD *)(a3 + 4);
    v13 = v12 + 0x80000000;
    if ( v12 < 0x80000000 )
      v13 = *(_DWORD *)(a3 + 4);
    LODWORD(Size) = v13;
    v14 = 0;
    *a7 = v13 + 12;
    v15 = a6;
    if ( a6 < 0xC )
    {
      v14 = -1073741789;
    }
    else
    {
      *v10 = 0;
      v10[1] = *(_DWORD *)(a3 + 12);
      v10[2] = v13;
      v16 = v15 - 12;
      if ( v16 >= v13 )
        v16 = v13;
      else
        v14 = -2147483643;
      if ( v13 )
      {
        if ( v12 >= 0x80000000 )
        {
          Src = (void *)(a3 + 8);
        }
        else if ( !(unsigned __int8)CmpGetValueData(*(_QWORD *)(v8 + 32), (__int64)&Src, (__int64)&v41, (__int64)v37) )
        {
          v14 = -1073741670;
        }
        if ( Src )
          memmove(v10 + 3, Src, v16);
      }
    }
  }
  else if ( a4 )
  {
    v18 = a4 - 1;
    if ( v18 && (v30 = v18 - 2) != 0 )
    {
      if ( v30 == 1 )
      {
        v31 = *(_DWORD *)(a3 + 4);
        v32 = v31 + 0x80000000;
        if ( v31 < 0x80000000 )
          v32 = *(_DWORD *)(a3 + 4);
        LODWORD(Size) = v32;
        v14 = 0;
        *a7 = v32 + 8;
        v33 = a6;
        if ( a6 < 8 )
        {
          v14 = -1073741789;
        }
        else
        {
          *v10 = *(_DWORD *)(a3 + 12);
          v10[1] = v32;
          v34 = v33 - 8;
          v35 = v32;
          if ( v34 < v32 )
          {
            v35 = v34;
            v14 = -2147483643;
          }
          if ( v32 )
          {
            if ( v31 < 0x80000000 )
            {
              if ( !(unsigned __int8)CmpGetValueData(*(_QWORD *)(v8 + 32), (__int64)&Src, (__int64)&v41, (__int64)v37) )
                v14 = -1073741670;
            }
            else
            {
              Src = (void *)(a3 + 8);
            }
            if ( Src )
              memmove(v10 + 2, Src, v35);
          }
        }
      }
      else
      {
        v14 = -1073741811;
      }
    }
    else
    {
      v19 = *(_DWORD *)(a3 + 4);
      v40 = v19;
      if ( v19 >= 0x80000000 )
        v20 = v19 + 0x80000000;
      else
        v20 = *(_DWORD *)(a3 + 4);
      LODWORD(Size) = v20;
      v21 = v11;
      v22 = v20 + v11 + 20;
      v23 = 0;
      if ( v20 )
      {
        v23 = (v22 - v20 + 7) & 0xFFFFFFF8;
        if ( v23 > v22 - v20 )
          v22 = v23 + v20;
      }
      v14 = 0;
      *a7 = v22;
      v24 = a6;
      if ( a6 < 0x14 )
      {
        v14 = -1073741789;
      }
      else
      {
        *v10 = 0;
        v10[1] = *(_DWORD *)(a3 + 12);
        v10[3] = v20;
        v10[4] = v21;
        if ( v24 - 20 < (unsigned int)v21 )
        {
          v21 = v24 - 20;
          v14 = -2147483643;
        }
        if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        {
          v25 = (unsigned int)v21 >> 1;
          if ( v25 >= *(unsigned __int16 *)(a3 + 2) )
            v25 = *(unsigned __int16 *)(a3 + 2);
          for ( i = 0; i < v25; ++i )
            *((_WORD *)v10 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
        }
        else
        {
          memmove(v10 + 5, (const void *)(a3 + 20), v21);
          v19 = v40;
          v8 = a1;
        }
        if ( v20 )
        {
          if ( v19 >= 0x80000000 )
          {
            Src = (void *)(a3 + 8);
          }
          else
          {
            if ( !(unsigned __int8)CmpGetValueData(*(_QWORD *)(v8 + 32), (__int64)&Src, (__int64)&v41, (__int64)v37) )
              v14 = -1073741670;
            v20 = (unsigned int)Size;
          }
          v10[2] = v23;
          if ( a6 >= v23 )
            v9 = a6 - v23;
          if ( v9 >= v20 )
            v9 = v20;
          else
            v14 = -2147483643;
          if ( Src )
            memmove((char *)v10 + v23, Src, v9);
        }
        else
        {
          v10[2] = -1;
        }
      }
    }
  }
  else
  {
    v27 = v11;
    v14 = 0;
    *a7 = v11 + 12;
    v28 = a6;
    if ( a6 < 0xC )
    {
      v14 = -1073741789;
    }
    else
    {
      *v10 = 0;
      v10[1] = *(_DWORD *)(a3 + 12);
      v10[2] = v27;
      v29 = v28 - 12;
      if ( v29 < v27 )
      {
        v27 = v29;
        v14 = -2147483643;
      }
      if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        CmpCopyCompressedName((_WORD *)v10 + 6, v27, (unsigned __int8 *)(a3 + 20), *(unsigned __int16 *)(a3 + 2));
      else
        memmove(v10 + 3, (const void *)(a3 + 20), v27);
    }
  }
  if ( Src && Src != (void *)(a3 + 8) )
  {
    if ( (_BYTE)v41 == 1 )
    {
      ExFreePoolWithTag(Src, 0);
    }
    else if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v38, v37);
    }
    else
    {
      HvpReleaseCellPaged(v38, v37);
    }
  }
  return v14;
}
