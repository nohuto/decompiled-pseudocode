__int64 __fastcall SepAdjustPrivileges(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        int *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v10; // r12d
  unsigned int v11; // r14d
  __int64 result; // rax
  int v14; // esi
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // r9
  __int64 v19; // r8
  char v20; // r10
  int v21; // r11d
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  signed int i; // edx
  int v35; // r8d
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int16 v41; // [rsp+38h] [rbp-D0h] BYREF
  bool v42; // [rsp+3Ah] [rbp-CEh] BYREF
  unsigned int v43; // [rsp+3Ch] [rbp-CCh]
  _QWORD Buf1[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h]
  unsigned int v46; // [rsp+68h] [rbp-A0h]
  int v47; // [rsp+6Ch] [rbp-9Ch]
  __int64 v48; // [rsp+70h] [rbp-98h]
  _BYTE *v49; // [rsp+78h] [rbp-90h]
  int *v50; // [rsp+80h] [rbp-88h]
  _QWORD v51[54]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v52[54]; // [rsp+238h] [rbp+130h] BYREF

  v10 = 0;
  v11 = 0;
  v50 = a7;
  HIDWORD(Buf1[0]) = 0;
  v42 = 0;
  LOBYTE(Buf1[0]) = 0;
  v43 = 0;
  v41 = a2;
  v45 = 0LL;
  v46 = a4;
  v49 = a9;
  *(_OWORD *)&Buf1[1] = 0LL;
  memset(v51, 0, sizeof(v51));
  memset(v52, 0, sizeof(v52));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1, (__int64)&Buf1[1]);
  result = RtlSidDominates((_DWORD *)Buf1[1], SeHighMandatorySid, (bool *)&v41 + 1);
  v47 = result;
  v14 = result;
  if ( (int)result < 0 )
    return result;
  if ( !HIBYTE(v41) )
  {
    result = RtlSidDominates((_DWORD *)Buf1[1], SeMediumMandatorySid, &v42);
    v47 = result;
    v14 = result;
    if ( (int)result < 0 )
      return result;
    v31 = LOBYTE(Buf1[0]);
    if ( !v42 )
      v31 = 1;
    LODWORD(Buf1[0]) = v31;
  }
  if ( a3 )
  {
    for ( i = 0; (unsigned int)i <= 0x24; ++i )
    {
      if ( ((1LL << i) & *(_QWORD *)(a1 + 72)) != 0 )
      {
        if ( (_BYTE)v41 )
        {
          v35 = -(((1LL << i) & *(_QWORD *)(a1 + 80)) != 0);
          Buf1[1] = i;
          v36 = 2 - v35;
          v45 = i;
          v37 = v11++;
          v38 = 3 * v37;
          *(_QWORD *)((char *)v51 + 4 * v38) = i;
          *((_DWORD *)&v51[1] + v38) = v36;
          if ( a6 )
          {
            v39 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(a6 + 4 * v39 + 4) = i;
            *(_DWORD *)(a6 + 4 * v39 + 12) = v36;
          }
          v40 = *(_QWORD *)(a1 + 72);
          _bittestandreset64(&v40, (unsigned int)i);
          *(_QWORD *)(a1 + 72) = v40;
        }
        ++*a8;
      }
    }
    goto LABEL_37;
  }
  if ( !v46 )
  {
LABEL_37:
    v23 = 0;
    goto LABEL_16;
  }
  v16 = v46;
  Buf1[1] = v46;
  do
  {
    v17 = *a5;
    v18 = *(_QWORD *)(a1 + 64);
    if ( !_bittest64(&v18, v17) )
      goto LABEL_13;
    ++HIDWORD(Buf1[0]);
    v19 = *(_QWORD *)(a1 + 72);
    v45 = *(_QWORD *)a5;
    v20 = v45;
    v21 = ((v19 & (1LL << v20)) != 0 ? 2 : 0) | (((1LL << v20) & *(_QWORD *)(a1 + 80)) != 0);
    v22 = a5[2];
    LODWORD(v48) = v22;
    if ( (v22 & 4) == 0 )
    {
      if ( _bittest64(&v19, (unsigned int)v17) || (v22 & 2) == 0 )
      {
        if ( (_bittest64(&v19, (unsigned int)v17) & ((v48 & 2) == 0)) == 0 )
        {
LABEL_12:
          v16 = Buf1[1];
          goto LABEL_13;
        }
        if ( !(_BYTE)v41 )
        {
LABEL_27:
          ++*a8;
          goto LABEL_12;
        }
        if ( a6 )
        {
          v28 = 3LL * (unsigned int)*a8;
          *(_QWORD *)(a6 + 4 * v28 + 4) = v45;
          *(_DWORD *)(a6 + 4 * v28 + 12) = v21;
        }
        v29 = 3LL * v11;
        *(_QWORD *)((char *)v51 + 4 * v29) = v45;
        *((_DWORD *)&v51[1] + v29) = v21;
        ++v11;
        v26 = *(_QWORD *)(a1 + 72) & ~(1LL << v20);
LABEL_26:
        *(_QWORD *)(a1 + 72) = v26;
        goto LABEL_27;
      }
      if ( !(_BYTE)v41 )
        goto LABEL_27;
      if ( a6 )
      {
        v30 = 3LL * (unsigned int)*a8;
        *(_QWORD *)(a6 + 4 * v30 + 4) = v45;
        *(_DWORD *)(a6 + 4 * v30 + 12) = v21;
      }
      v24 = v43;
      v25 = 3LL * v43;
      *(_QWORD *)((char *)v52 + 4 * v25) = v45;
      *((_DWORD *)&v52[1] + v25) = v21;
      v43 = v24 + 1;
      if ( HIBYTE(v41) )
      {
LABEL_25:
        v26 = *(_QWORD *)(a1 + 72) | (1LL << v20);
        goto LABEL_26;
      }
      if ( v42 )
      {
        v32 = 0x1120160684LL;
        if ( !_bittest64(&v32, *a5) )
          goto LABEL_25;
      }
      else
      {
        if ( !LOBYTE(Buf1[0]) )
          goto LABEL_27;
        if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
          v33 = 0x200800000LL;
        else
          v33 = 0x202800000LL;
        if ( ((1LL << *a5) & v33) != 0 )
          goto LABEL_25;
      }
      ++v10;
      goto LABEL_27;
    }
    v16 = Buf1[1];
    if ( (_BYTE)v41 )
    {
      *(_QWORD *)(a1 + 72) = v19 & ~(1LL << v45);
      *(_DWORD *)(a1 + 200) |= 0x800u;
      *(_QWORD *)(a1 + 64) = v18 & ~(1LL << v20);
    }
LABEL_13:
    a5 += 3;
    Buf1[1] = --v16;
  }
  while ( v16 );
  v14 = v47;
  if ( HIDWORD(Buf1[0]) < v46 || (v23 = v43, v10) )
  {
    v14 = 262;
    v23 = v43;
  }
LABEL_16:
  if ( *a8 && (_BYTE)v41 )
  {
    *v49 = 1;
    SepAdtTokenRightAdjusted(a1, (unsigned int)v51, v11, (unsigned int)v52, v23, v14 >= 0);
  }
  if ( a6 )
  {
    if ( *a8 > 1u )
      v27 = 12 * *a8 + 4;
    else
      v27 = 16;
    *v50 = v27;
  }
  return (unsigned int)v14;
}
