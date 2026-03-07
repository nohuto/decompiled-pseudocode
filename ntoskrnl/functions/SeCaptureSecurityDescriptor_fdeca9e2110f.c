__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, int a3, char a4, _QWORD *a5)
{
  unsigned int v7; // r15d
  unsigned int v8; // r9d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _BYTE *v12; // r12
  _BYTE *v13; // rdx
  unsigned __int16 *v14; // r13
  unsigned __int16 *v15; // rsi
  unsigned int v16; // r14d
  unsigned int v17; // r10d
  unsigned int v18; // r9d
  unsigned int v19; // ebx
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned int v23; // ebx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  int v27; // r9d
  SIZE_T v28; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v30; // rdi
  __int64 v31; // rbx
  char v32; // r13
  int v33; // ecx
  int v34; // ebx
  unsigned __int64 v36; // r13
  __int64 v37; // rax
  unsigned int v38; // ecx
  size_t Size; // [rsp+20h] [rbp-C8h]
  unsigned int v40; // [rsp+2Ch] [rbp-BCh]
  int v41; // [rsp+30h] [rbp-B8h]
  unsigned int v42; // [rsp+34h] [rbp-B4h]
  unsigned int v43; // [rsp+38h] [rbp-B0h]
  void *v44; // [rsp+48h] [rbp-A0h]
  void *v45[2]; // [rsp+50h] [rbp-98h]
  unsigned __int64 v46; // [rsp+60h] [rbp-88h]
  unsigned __int16 *v47; // [rsp+68h] [rbp-80h]
  unsigned __int16 *Src; // [rsp+70h] [rbp-78h]
  int v49; // [rsp+78h] [rbp-70h]
  unsigned int v50; // [rsp+7Ch] [rbp-6Ch]
  unsigned int v51; // [rsp+80h] [rbp-68h]
  __int128 v52; // [rsp+88h] [rbp-60h]
  unsigned int v53; // [rsp+F0h] [rbp+8h]

  HIDWORD(v45[0]) = 0;
  v7 = 0;
  LOBYTE(v49) = 0;
  Size = 0LL;
  LOBYTE(v41) = 0;
  v53 = 0;
  if ( !a1 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v52 = *(_OWORD *)a1;
    v8 = *(_DWORD *)(a1 + 16);
    v9 = *(_QWORD *)a1;
    if ( (WORD1(*(_OWORD *)a1) & 0x8000u) == 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    LODWORD(Size) = 0;
    LOBYTE(v41) = 0;
    v53 = 0;
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    v52 = *(_OWORD *)a1;
    v8 = *(_DWORD *)(a1 + 16);
    v9 = *(_QWORD *)a1;
  }
  if ( (_BYTE)v52 != 1 )
    return 3221225560LL;
  LOBYTE(v45[0]) = 1;
  BYTE1(v45[0]) = BYTE1(v9);
  v10 = v9 >> 16;
  WORD1(v45[0]) = WORD1(v9) & 0x7FFF;
  if ( (v9 & 0x80000000) == 0 )
  {
    v12 = *(_BYTE **)(a1 + 8);
  }
  else
  {
    v11 = HIDWORD(v9);
    if ( (_DWORD)v11 )
      v12 = (_BYTE *)(a1 + v11);
    else
      v12 = 0LL;
  }
  v45[1] = v12;
  if ( (v10 & 0x8000u) == 0LL )
  {
    v13 = *(_BYTE **)(a1 + 16);
  }
  else if ( DWORD2(v52) )
  {
    v13 = (_BYTE *)(a1 + DWORD2(v52));
  }
  else
  {
    v13 = 0LL;
  }
  v44 = v13;
  v46 = (unsigned __int64)v13;
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x8000u) == 0LL )
    {
      v14 = *(unsigned __int16 **)(a1 + 24);
    }
    else if ( HIDWORD(v52) )
    {
      v14 = (unsigned __int16 *)(a1 + HIDWORD(*((_QWORD *)&v52 + 1)));
    }
    else
    {
      v14 = 0LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v47 = v14;
  if ( (v10 & 4) != 0 )
  {
    if ( (v10 & 0x8000u) == 0LL )
    {
      v15 = *(unsigned __int16 **)(a1 + 32);
    }
    else if ( v8 )
    {
      v15 = (unsigned __int16 *)(a1 + v8);
    }
    else
    {
      v15 = 0LL;
    }
  }
  else
  {
    v15 = 0LL;
  }
  Src = v15;
  v40 = 0;
  v42 = 0;
  v16 = 0;
  v43 = 0;
  v17 = 0;
  v50 = 0;
  v18 = 0;
  v19 = 0;
  v51 = 0;
  if ( (BYTE2(v45[0]) & 0x10) != 0 && v14 )
  {
    if ( a2 )
    {
      v36 = (unsigned __int64)(v14 + 1);
      if ( v36 >= 0x7FFFFFFF0000LL )
        v36 = 0x7FFFFFFF0000LL;
      v37 = *(unsigned __int16 *)v36;
      v38 = *(unsigned __int16 *)v36;
      v40 = v38;
      v42 = v38;
      if ( *(_WORD *)v36 )
      {
        if ( ((unsigned __int8)v47 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = v47;
        if ( (unsigned __int64)v47 + v37 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)v47 + v37) < v47 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v14 = v47;
      }
      v44 = v13;
      v16 = 0;
      LODWORD(Size) = 0;
      LOBYTE(v41) = 0;
      v53 = 0;
    }
    else
    {
      v38 = v14[1];
      v40 = v38;
      v42 = v38;
    }
    v17 = (v38 + 3) & 0xFFFFFFFC;
    v50 = v17;
    if ( v17 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v14 = 0LL;
    v47 = 0LL;
  }
  if ( (BYTE2(v45[0]) & 4) != 0 && v15 )
  {
    if ( a2 )
    {
      v20 = (unsigned __int64)(v15 + 1);
      if ( v20 >= 0x7FFFFFFF0000LL )
        v20 = 0x7FFFFFFF0000LL;
      v21 = *(unsigned __int16 *)v20;
      v16 = *(unsigned __int16 *)v20;
      v43 = v16;
      if ( *(_WORD *)v20 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = Src;
        if ( (unsigned __int64)Src + v21 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)Src + v21) < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v15 = Src;
      }
      v14 = v47;
      v44 = v13;
      v40 = v42;
      LODWORD(Size) = 0;
      LOBYTE(v41) = 0;
      v53 = 0;
    }
    else
    {
      v16 = v15[1];
      v43 = v16;
    }
    v7 = (v16 + 3) & 0xFFFFFFFC;
    if ( v7 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v15 = 0LL;
    Src = 0LL;
  }
  if ( v12 )
  {
    if ( a2 )
    {
      v22 = (unsigned __int64)(v12 + 1);
      if ( v22 >= 0x7FFFFFFF0000LL )
        v22 = 0x7FFFFFFF0000LL;
      v49 = *(unsigned __int8 *)v22;
      v23 = 4 * v49 + 8;
      LODWORD(Size) = v23;
      HIDWORD(Size) = v23;
      if ( 4 * v49 == -8 )
      {
        v12 = v45[1];
      }
      else
      {
        if ( ((__int64)v45[1] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = v45[1];
        v24 = (unsigned __int64)v45[1] + v23;
        if ( v24 > 0x7FFFFFFF0000LL || (void *)v24 < v45[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v15 = Src;
      v14 = v47;
      v44 = v13;
      v40 = v42;
      v16 = v43;
      LOBYTE(v41) = 0;
      v53 = 0;
    }
    else
    {
      LOBYTE(v49) = v12[1];
      v23 = 4 * (unsigned __int8)v49 + 8;
      HIDWORD(Size) = v23;
      LODWORD(Size) = v23;
    }
    v19 = (v23 + 3) & 0xFFFFFFFC;
    v51 = v19;
  }
  if ( v13 )
  {
    if ( a2 )
    {
      v25 = (unsigned __int64)(v13 + 1);
      if ( v25 >= 0x7FFFFFFF0000LL )
        v25 = 0x7FFFFFFF0000LL;
      v41 = *(unsigned __int8 *)v25;
      v53 = 4 * v41 + 8;
      if ( 4 * v41 == -8 )
      {
        v44 = (void *)v46;
      }
      else
      {
        if ( (v46 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v44 = (void *)v46;
        v26 = v46 + (unsigned int)(4 * v41 + 8);
        if ( v26 > 0x7FFFFFFF0000LL || v26 < v46 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v15 = Src;
      v14 = v47;
      v12 = v45[1];
      v40 = v42;
      v16 = v43;
      LODWORD(Size) = HIDWORD(Size);
      v27 = 4 * v41 + 8;
    }
    else
    {
      LOBYTE(v41) = v13[1];
      v27 = 4 * (unsigned __int8)v41 + 8;
      v53 = v27;
    }
    v18 = (v27 + 3) & 0xFFFFFFFC;
  }
  v28 = v17 + 20 + v7 + v18 + v19;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a3 | 0x400), v28, 0x63536553u);
  v30 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)v28);
  *(_OWORD *)v30 = *(_OWORD *)v45;
  v30[4] = v46;
  v31 = (__int64)(v30 + 5);
  *((_WORD *)v30 + 1) |= 0x8000u;
  if ( (BYTE2(v45[0]) & 0x10) != 0 && v14 )
  {
    memmove(v30 + 5, v14, v40);
    v32 = a2;
    if ( a2 && !SepCheckAcl((__int64)(v30 + 5), v40) )
      goto LABEL_124;
    v30[3] = 20;
    *((_WORD *)v30 + 11) = v50;
    v31 += v50;
  }
  else
  {
    v30[3] = 0;
    v32 = a2;
  }
  if ( (BYTE2(v45[0]) & 4) != 0 && v15 )
  {
    memmove((void *)v31, v15, v16);
    if ( !v32 || v16 >= 8 && v16 == *(unsigned __int16 *)(v31 + 2) && RtlValidAcl(v31) )
    {
      v30[4] = v31 - (_DWORD)v30;
      *(_WORD *)(v31 + 2) = v7;
      v31 += v7;
      goto LABEL_86;
    }
LABEL_124:
    ExFreePoolWithTag(v30, 0);
    return 3221225591LL;
  }
  v30[4] = 0;
LABEL_86:
  if ( !v12 )
  {
    v33 = 0;
    goto LABEL_90;
  }
  memmove((void *)v31, v12, (unsigned int)Size);
  *(_BYTE *)(v31 + 1) = v49;
  if ( !v32 || RtlValidSid((PSID)v31) )
  {
    v33 = v31 - (_DWORD)v30;
    v31 += v51;
LABEL_90:
    v30[1] = v33;
    if ( !v44 )
    {
      v34 = 0;
      goto LABEL_94;
    }
    memmove((void *)v31, v44, v53);
    *(_BYTE *)(v31 + 1) = v41;
    if ( !v32 || RtlValidSid((PSID)v31) )
    {
      v34 = v31 - (_DWORD)v30;
LABEL_94:
      v30[2] = v34;
      *a5 = v30;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v30, 0);
  return 3221225592LL;
}
