/*
 * XREFs of SepCaptureTokenSecurityAttributesInformation @ 0x140600F9C
 * Callers:
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140600E20 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     NtCreateTokenEx @ 0x1406CC0B0 (NtCreateTokenEx.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     SepCaptureInt64Array @ 0x140601584 (SepCaptureInt64Array.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     SepCaptureUnicodeStringArray @ 0x1406F0C70 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SepCaptureFqbnArray @ 0x140920D14 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x140920F4C (SepCaptureOctetStringArray.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesInformation(
        unsigned __int64 a1,
        _DWORD *a2,
        int a3,
        char a4,
        char a5,
        _QWORD *a6)
{
  unsigned __int16 *v7; // rsi
  signed int v8; // edi
  PVOID v9; // r13
  _OWORD *PoolWithTag; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  unsigned int i; // r12d
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rdx
  unsigned __int16 v22; // ax
  int v23; // eax
  __int64 v25; // rax
  unsigned int v26; // r14d
  unsigned __int64 v27; // rcx
  unsigned int v28; // r12d
  unsigned int v29; // r13d
  unsigned int v30; // r12d
  unsigned int v31; // r14d
  char v32; // [rsp+20h] [rbp-98h]
  int v33; // [rsp+28h] [rbp-90h]
  PVOID P; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-80h]
  unsigned int v36; // [rsp+3Ch] [rbp-7Ch]
  __int64 v37; // [rsp+40h] [rbp-78h]
  PVOID v38; // [rsp+48h] [rbp-70h]
  int v39; // [rsp+50h] [rbp-68h]
  int v40; // [rsp+54h] [rbp-64h]
  PVOID v41; // [rsp+58h] [rbp-60h]
  _OWORD *v42; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v43; // [rsp+68h] [rbp-50h]
  unsigned __int64 v44; // [rsp+70h] [rbp-48h]
  __int64 v45; // [rsp+78h] [rbp-40h]
  int v49; // [rsp+D8h] [rbp+20h]

  v7 = 0LL;
  v43 = 0LL;
  v35 = 0;
  v39 = 0;
  v32 = 0;
  v8 = 0;
  v9 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  v36 = 0;
  v40 = 0;
  P = 0LL;
  if ( !a4 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74416553u);
  v42 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( !a2 || !a3 || *a2 == 1 )
    v32 = 1;
  *PoolWithTag = 0LL;
  if ( a4 != 1 )
    goto LABEL_76;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  *(_WORD *)PoolWithTag = *(_WORD *)a1;
  *((_WORD *)PoolWithTag + 1) = *(_WORD *)(a1 + 2);
  v11 = *(unsigned int *)(a1 + 4);
  *((_DWORD *)PoolWithTag + 1) = v11;
  if ( !(_DWORD)v11 )
  {
    *a6 = PoolWithTag;
    return 0LL;
  }
  *((_QWORD *)PoolWithTag + 1) = *(_QWORD *)(a1 + 8);
  v12 = 40 * v11;
  v44 = v12;
  v13 = 0xFFFFFFFFLL;
  if ( v12 <= 0xFFFFFFFF )
    v13 = (unsigned int)v12;
  v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v12 > 0xFFFFFFFF )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v8;
  }
  v7 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x74416553u);
  v43 = v7;
  if ( !v7 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  if ( (_DWORD)v13 )
  {
    v14 = *((_QWORD *)PoolWithTag + 1);
    if ( (v14 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v14 + v13 > 0x7FFFFFFF0000LL || v14 + v13 < v14 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(v7, *((const void **)PoolWithTag + 1), (unsigned int)v13);
  for ( i = 0; ; ++i )
  {
    v9 = 0LL;
    v38 = 0LL;
    v41 = 0LL;
    if ( i >= *((_DWORD *)PoolWithTag + 1) )
      break;
    v37 = 5LL * i;
    if ( !v7[20 * i] )
    {
      v8 = -1073741811;
      v9 = 0LL;
      v38 = 0LL;
      v41 = 0LL;
      goto LABEL_69;
    }
    v9 = ExAllocatePoolWithTag(PagedPool, v7[20 * i], 0x74416553u);
    v38 = v9;
    v41 = v9;
    if ( !v9 )
    {
      v8 = -1073741670;
      goto LABEL_69;
    }
    v16 = v7[4 * v37];
    if ( (_WORD)v16 )
    {
      v17 = *(_QWORD *)&v7[4 * v37 + 4];
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v17 + v16 > 0x7FFFFFFF0000LL || v17 + v16 < v17 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        LOWORD(v16) = v7[4 * v37];
      }
    }
    memmove(v9, *(const void **)&v7[4 * v37 + 4], (unsigned __int16)v16);
    *(_QWORD *)&v7[4 * v37 + 4] = v9;
    v39 = ++v35;
    v41 = 0LL;
  }
  v18 = 0;
  v33 = 0;
  v19 = 4LL;
  while ( v18 < *((_DWORD *)PoolWithTag + 1) )
  {
    v20 = 5LL * v18;
    v21 = *(unsigned int *)&v7[20 * v18 + 12];
    if ( (_DWORD)v21 )
    {
      v22 = v7[20 * v18 + 8];
      if ( !v22 )
        goto LABEL_68;
      if ( v22 <= 2u )
        goto LABEL_41;
      switch ( v22 )
      {
        case 3u:
          LOBYTE(v19) = 1;
          v23 = SepCaptureUnicodeStringArray(*(_QWORD *)&v7[20 * v18 + 16], v21, v19, &P);
          goto LABEL_42;
        case 4u:
          v23 = SepCaptureFqbnArray(*(void **)&v7[20 * v18 + 16]);
LABEL_42:
          v8 = v23;
          if ( v23 >= 0 )
            *(_QWORD *)&v7[4 * v20 + 16] = P;
          v18 = v33;
          v19 = 4LL;
          break;
        case 5u:
          goto LABEL_66;
        case 6u:
LABEL_41:
          v23 = SepCaptureInt64Array(*(void **)&v7[20 * v18 + 16]);
          goto LABEL_42;
        case 0x10u:
LABEL_66:
          v23 = SepCaptureOctetStringArray(*(void **)&v7[20 * v18 + 16]);
          goto LABEL_42;
        default:
LABEL_68:
          v8 = -1073741637;
          break;
      }
      if ( v8 < 0 )
        goto LABEL_69;
      v40 = ++v36;
      P = 0LL;
      goto LABEL_33;
    }
    if ( !a5 )
    {
      v8 = -1073741811;
      goto LABEL_69;
    }
    *(_QWORD *)&v7[20 * v18 + 16] = 0LL;
LABEL_33:
    v33 = ++v18;
  }
  if ( v8 >= 0 )
  {
    *((_QWORD *)PoolWithTag + 1) = v7;
    if ( !v32 && a3 != *((_DWORD *)PoolWithTag + 1) )
      v8 = -1073741811;
  }
LABEL_69:
  if ( v8 < 0 )
    goto LABEL_91;
  v25 = 0LL;
  v26 = *((_DWORD *)PoolWithTag + 1);
  while ( 1 )
  {
    v49 = v25;
    if ( (unsigned int)v25 >= v26 )
      break;
    if ( v32 || ((a2[v25] - 2) & 0xFFFFFFFD) == 0 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        LODWORD(v37) = v27;
        if ( (unsigned int)v27 >= 4 )
          break;
        v44 = v27;
        v45 = (unsigned int)v25;
        if ( !RtlCompareUnicodeString(
                (PCUNICODE_STRING)&v7[20 * (unsigned int)v25],
                (PCUNICODE_STRING)&SepValidAttributesTypes[3 * v27],
                1u) )
        {
          if ( v7[20 * v45 + 8] != LODWORD(SepValidAttributesTypes[3 * v44 + 2]) )
            v8 = -1073741811;
          if ( *(_DWORD *)&v7[20 * v45 + 12] < HIDWORD(SepValidAttributesTypes[3 * v44 + 2]) )
            v8 = -1073741811;
          LODWORD(v25) = v49;
          break;
        }
        v27 = (unsigned int)(v37 + 1);
        LODWORD(v25) = v49;
      }
    }
    v25 = (unsigned int)(v25 + 1);
  }
  PoolWithTag = v42;
  v9 = v38;
LABEL_76:
  if ( v8 < 0 )
  {
LABEL_91:
    if ( v7 )
    {
      v28 = 0;
      v29 = v35;
      while ( v28 < v29 )
        ExFreePoolWithTag(*(PVOID *)&v7[20 * v28++ + 4], 0);
      v30 = 0;
      v9 = v38;
      v31 = v36;
      while ( v30 < v31 )
        ExFreePoolWithTag(*(PVOID *)&v7[20 * v30++ + 16], 0);
      ExFreePoolWithTag(v7, 0);
      PoolWithTag = v42;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    *a6 = PoolWithTag;
  }
  return (unsigned int)v8;
}
