__int64 __fastcall SepCaptureTokenSecurityAttributesInformation(
        unsigned __int64 a1,
        _DWORD *a2,
        int a3,
        char a4,
        char a5,
        unsigned __int64 **a6)
{
  unsigned __int16 *v7; // rsi
  signed int v8; // edi
  void *v9; // r13
  unsigned __int64 *Pool2; // rax
  unsigned __int64 *v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned int i; // r15d
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned int v19; // edx
  __int64 v20; // r15
  unsigned int v21; // r10d
  int v22; // eax
  char v24; // dl
  unsigned int j; // r13d
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rax
  unsigned int v29; // r15d
  unsigned int v30; // r13d
  unsigned int v31; // r15d
  void *v32; // rcx
  char v33; // [rsp+20h] [rbp-88h]
  int v34; // [rsp+24h] [rbp-84h]
  unsigned int v35; // [rsp+2Ch] [rbp-7Ch]
  PVOID P; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-70h]
  int v38; // [rsp+3Ch] [rbp-6Ch]
  void *v39; // [rsp+40h] [rbp-68h]
  __int64 v40; // [rsp+48h] [rbp-60h]
  int v41; // [rsp+50h] [rbp-58h]
  void *v42; // [rsp+58h] [rbp-50h]
  unsigned __int16 *v43; // [rsp+60h] [rbp-48h]
  unsigned __int64 *v44; // [rsp+68h] [rbp-40h]
  __int64 v45; // [rsp+70h] [rbp-38h]
  PCUNICODE_STRING v46; // [rsp+78h] [rbp-30h]
  int v50; // [rsp+C8h] [rbp+20h]

  v7 = 0LL;
  v43 = 0LL;
  v37 = 0;
  v41 = 0;
  v33 = 0;
  v8 = 0;
  v9 = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  v35 = 0;
  v38 = 0;
  P = 0LL;
  if ( !a4 )
    return 3221225659LL;
  Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, 16LL, 1950442835LL);
  v11 = Pool2;
  v44 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_OWORD *)Pool2 = 0LL;
  if ( a4 != 1 )
    goto LABEL_78;
  if ( !a2 || !a3 || *a2 == 1 )
    v33 = 1;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  *(_WORD *)Pool2 = *(_WORD *)a1;
  *((_WORD *)Pool2 + 1) = *(_WORD *)(a1 + 2);
  v12 = *(unsigned int *)(a1 + 4);
  *((_DWORD *)Pool2 + 1) = v12;
  if ( !(_DWORD)v12 )
  {
    *a6 = Pool2;
    return 0LL;
  }
  Pool2[1] = *(_QWORD *)(a1 + 8);
  v13 = 40 * v12;
  v45 = v13;
  v14 = 0xFFFFFFFFLL;
  if ( v13 <= 0xFFFFFFFF )
    v14 = (unsigned int)v13;
  v8 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
  {
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v8;
  }
  v7 = (unsigned __int16 *)ExAllocatePool2(256LL, (unsigned int)v14, 1950442835LL);
  v43 = v7;
  if ( !v7 )
  {
    ExFreePoolWithTag(v11, 0);
    return 3221225626LL;
  }
  if ( (_DWORD)v14 )
  {
    v15 = v11[1];
    if ( (v15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v15 + v14 > 0x7FFFFFFF0000LL || v15 + v14 < v15 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(v7, (const void *)v11[1], (unsigned int)v14);
  for ( i = 0; ; ++i )
  {
    v9 = 0LL;
    v39 = 0LL;
    v42 = 0LL;
    if ( i >= *((_DWORD *)v11 + 1) )
      break;
    v40 = 5LL * i;
    if ( !v7[20 * i] )
    {
      v8 = -1073741811;
      v9 = 0LL;
      v39 = 0LL;
      v42 = 0LL;
      goto LABEL_70;
    }
    v9 = (void *)ExAllocatePool2(256LL, v7[20 * i], 1950442835LL);
    v39 = v9;
    v42 = v9;
    if ( !v9 )
    {
      v8 = -1073741670;
      goto LABEL_70;
    }
    v17 = v7[4 * v40];
    if ( (_WORD)v17 )
    {
      v18 = *(_QWORD *)&v7[4 * v40 + 4];
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v18 + v17 > 0x7FFFFFFF0000LL || v18 + v17 < v18 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v9, *(const void **)&v7[4 * v40 + 4], v7[4 * v40]);
    *(_QWORD *)&v7[4 * v40 + 4] = v9;
    v41 = ++v37;
    v42 = 0LL;
  }
  v19 = 0;
  v34 = 0;
  while ( v19 < *((_DWORD *)v11 + 1) )
  {
    v20 = 5LL * v19;
    v21 = *(_DWORD *)&v7[20 * v19 + 12];
    if ( v21 )
    {
      switch ( v7[20 * v19 + 8] )
      {
        case 1u:
        case 2u:
LABEL_41:
          v22 = SepCaptureInt64Array(*(void **)&v7[20 * v19 + 16]);
          break;
        case 3u:
          v22 = SepCaptureUnicodeStringArray(*(_QWORD *)&v7[20 * v19 + 16], v21, 1, (ULONGLONG *)&P);
          break;
        case 4u:
          v22 = SepCaptureFqbnArray(*(void **)&v7[20 * v19 + 16]);
          break;
        default:
          if ( v7[20 * v19 + 8] != 5 )
          {
            if ( v7[20 * v19 + 8] == 6 )
              goto LABEL_41;
            if ( v7[20 * v19 + 8] != 16 )
            {
              v8 = -1073741637;
LABEL_45:
              if ( v8 < 0 )
                goto LABEL_70;
              v38 = ++v35;
              P = 0LL;
              goto LABEL_33;
            }
          }
          v22 = SepCaptureOctetStringArray(*(void **)&v7[20 * v19 + 16]);
          break;
      }
      v8 = v22;
      if ( v22 >= 0 )
        *(_QWORD *)&v7[4 * v20 + 16] = P;
      v19 = v34;
      goto LABEL_45;
    }
    if ( !a5 )
    {
      v8 = -1073741811;
      goto LABEL_70;
    }
    *(_QWORD *)&v7[20 * v19 + 16] = 0LL;
    v38 = ++v35;
LABEL_33:
    v34 = ++v19;
  }
  if ( v8 >= 0 )
  {
    v11[1] = (unsigned __int64)v7;
    if ( !v33 && a3 != *((_DWORD *)v11 + 1) )
      v8 = -1073741811;
  }
LABEL_70:
  v24 = v33;
  if ( v8 < 0 )
    goto LABEL_92;
  for ( j = 0; j < *((_DWORD *)v11 + 1); ++j )
  {
    v26 = j;
    v40 = j;
    if ( v24 || (v27 = a2[j], v40 = j, v27 == 2) || (v40 = j, v27 == 4) )
    {
      v28 = 0LL;
      while ( 1 )
      {
        v50 = v28;
        if ( (unsigned int)v28 >= 4 )
          break;
        v45 = 3 * v28;
        v46 = (PCUNICODE_STRING)&v7[20 * v26];
        if ( !RtlCompareUnicodeString(v46, (PCUNICODE_STRING)&SepValidAttributesTypes[3 * v28], 1u) )
        {
          if ( v46[1].Length != LODWORD(SepValidAttributesTypes[v45 + 2]) )
            v8 = -1073741811;
          if ( LODWORD(v46[1].Buffer) < HIDWORD(SepValidAttributesTypes[v45 + 2]) )
            v8 = -1073741811;
          break;
        }
        v28 = (unsigned int)(v50 + 1);
        v26 = v40;
      }
    }
    v24 = v33;
  }
  v9 = v39;
LABEL_78:
  if ( v8 < 0 )
  {
LABEL_92:
    if ( v7 )
    {
      v29 = 0;
      v30 = v37;
      while ( v29 < v30 )
        ExFreePoolWithTag(*(PVOID *)&v7[20 * v29++ + 4], 0);
      v31 = 0;
      v9 = v39;
      while ( v31 < v35 )
      {
        v32 = *(void **)&v7[20 * v31 + 16];
        if ( v32 )
          ExFreePoolWithTag(v32, 0);
        ++v31;
      }
      ExFreePoolWithTag(v7, 0);
      v11 = v44;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    *a6 = v11;
  }
  return (unsigned int)v8;
}
