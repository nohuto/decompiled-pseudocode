/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1409B8828
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1409B8350 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140246920 (RtlStringCbLengthW.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rax
  int v8; // ecx
  NTSTATUS i; // edi
  unsigned int v10; // r11d
  unsigned int v11; // edx
  unsigned int v12; // r10d
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned int v18; // r11d
  unsigned int v19; // r10d
  int v20; // r11d
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ebp
  unsigned int v26; // ebp
  _DWORD *v27; // r10
  unsigned int v28; // r12d
  __int64 v29; // rbx
  unsigned int v30; // ebp
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // r12d
  void *v34; // r10
  __int64 v35; // r11
  int v36; // ebx
  __int64 v37; // rcx
  size_t pcbLength; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  pcbLength = 0LL;
  LODWORD(v7) = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(_DWORD *)(a1 + 16);
  if ( v8 )
  {
    v7 = 4LL * (unsigned int)(v8 - 1);
    if ( v7 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  if ( (unsigned int)v7 >= 0xFFFFFFEC )
    return (unsigned int)-1073741675;
  i = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)a1, 0xFFFFuLL, &pcbLength);
  if ( i < 0 )
    return (unsigned int)i;
  v11 = pcbLength + 2;
  if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
    return (unsigned int)-1073741675;
  v12 = v10 + v11;
  if ( v10 + v11 < v10 )
    return (unsigned int)-1073741675;
  if ( *(_WORD *)(a1 + 8) == 1 || *(_WORD *)(a1 + 8) == 2 )
    goto LABEL_28;
  if ( *(_WORD *)(a1 + 8) == 3 )
  {
    v18 = 0;
    v13 = v12;
    v16 = pcbLength + 2;
    if ( *(_DWORD *)(a1 + 16) )
    {
      while ( 1 )
      {
        v16 = v11;
        i = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * v18), 0xFFFFuLL, &pcbLength);
        if ( i < 0 )
          return (unsigned int)i;
        v21 = pcbLength + 2;
        if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
          return (unsigned int)-1073741675;
        v13 = v21 + v19;
        if ( v21 + v19 < v19 )
          return (unsigned int)-1073741675;
        v18 = v20 + 1;
        v11 = v16;
        if ( v18 >= *(_DWORD *)(a1 + 16) )
          goto LABEL_31;
      }
    }
    goto LABEL_31;
  }
  if ( *(_WORD *)(a1 + 8) != 5 )
  {
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) != 16 )
      {
        v13 = v10 + v11;
LABEL_30:
        v16 = pcbLength + 2;
        goto LABEL_31;
      }
      goto LABEL_16;
    }
LABEL_28:
    v22 = 8LL * *(unsigned int *)(a1 + 16);
    if ( v22 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    v13 = v12 + v22;
    if ( v13 < v12 )
      return (unsigned int)-1073741675;
    goto LABEL_30;
  }
LABEL_16:
  v14 = *(_DWORD *)(a1 + 16);
  v15 = 0;
  v13 = v10 + v11;
  v16 = pcbLength + 2;
  if ( v14 )
  {
    while ( 1 )
    {
      v16 = v11;
      v17 = v12 + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v15 + 8);
      if ( v17 < v12 )
        break;
      v13 = v17 + 4;
      if ( v17 + 4 < v17 )
        break;
      ++v15;
      v12 = v17 + 4;
      v11 = v16;
      if ( v15 >= v14 )
        goto LABEL_31;
    }
    return (unsigned int)-1073741675;
  }
LABEL_31:
  if ( v13 + 3 < v13 )
    return (unsigned int)-1073741675;
  v23 = (v13 + 3) & 0xFFFFFFFC;
  if ( *a3 < v23 )
  {
    *a3 = v23;
    return (unsigned int)-1073741789;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  *a3 = v23;
  memset(a2, 0, v23);
  *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
  *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
  a2[2] = *(_DWORD *)(a1 + 12);
  a2[3] = *(_DWORD *)(a1 + 16);
  v24 = *(_DWORD *)(a1 + 16);
  v25 = 4 * v24 + 16;
  if ( !v24 )
    v25 = 20;
  *a2 = v25;
  memmove((char *)a2 + v25, *(const void **)a1, v16);
  v26 = v16 + v25;
  v27 = (unsigned int *)((char *)a2 + v26);
  if ( *(_WORD *)(a1 + 8) == 1 || *(_WORD *)(a1 + 8) == 2 )
    goto LABEL_52;
  if ( *(_WORD *)(a1 + 8) != 3 )
  {
    if ( *(_WORD *)(a1 + 8) == 5 )
      goto LABEL_43;
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) == 16 )
      {
LABEL_43:
        v28 = 0;
        for ( i = 0; v28 < *(_DWORD *)(a1 + 16); v27 = (unsigned int *)((char *)a2 + v26) )
        {
          a2[v28 + 4] = v26;
          v29 = 2LL * v28;
          v30 = v26 + 4;
          *v27 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v28 + 8);
          v31 = *(_QWORD *)(a1 + 24);
          v32 = *(_DWORD *)(v31 + 16LL * v28 + 8);
          if ( v32 )
            memmove((char *)a2 + v30, *(const void **)(v31 + 16LL * v28), v32);
          ++v28;
          v26 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8 * v29 + 8) + v30;
        }
        return (unsigned int)i;
      }
      return (unsigned int)-1073741811;
    }
LABEL_52:
    i = 0;
    if ( *(_DWORD *)(a1 + 16) )
    {
      do
      {
        v37 = v3++;
        a2[v37 + 4] = v26;
        v26 += 8;
        *(_QWORD *)v27 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v37);
        v27 = (unsigned int *)((char *)a2 + v26);
      }
      while ( v3 < *(_DWORD *)(a1 + 16) );
    }
    return (unsigned int)i;
  }
  v33 = 0;
  for ( i = 0; v33 < *(_DWORD *)(a1 + 16); ++v33 )
  {
    a2[v33 + 4] = v26;
    i = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * v33), 0xFFFFuLL, &pcbLength);
    if ( i < 0 )
      break;
    v36 = pcbLength + 2;
    memmove(v34, *(const void **)(*(_QWORD *)(a1 + 24) + 8 * v35), (unsigned int)(pcbLength + 2));
    v26 += v36;
  }
  return (unsigned int)i;
}
