/*
 * XREFs of AuthzBasepCopyoutClaimAttributeValues @ 0x140A571D4
 * Callers:
 *     AuthzBasepCopyoutClaimAttributes @ 0x140A57408 (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x14039301C (RtlStringCbCopyNW.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall AuthzBasepCopyoutClaimAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rbp
  wchar_t *v17; // r10
  __int64 *v18; // r15
  __int64 *v19; // r14
  unsigned int v20; // r13d
  size_t v21; // r8
  wchar_t *v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  __int64 v25; // r14
  __int64 v26; // r11
  unsigned int v27; // r12d
  size_t v28; // r9
  wchar_t *v29; // r15
  __int64 v30; // rcx
  __int64 *v31; // r11
  unsigned __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // r11
  unsigned int v35; // r12d
  size_t v36; // r9
  wchar_t *v37; // rbp
  __int64 *v38; // r11
  unsigned __int64 v39; // r8
  _QWORD *v40; // r11
  unsigned int v41; // r9d
  _QWORD *i; // rdx
  __int64 v43; // rcx

  v5 = 0;
  v6 = a3 + a4;
  if ( a3 + a4 < a3 )
    return (unsigned int)-2147483643;
  v9 = *(unsigned __int16 *)(a1 + 48);
  *a5 = 0LL;
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v32 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v17 = (wchar_t *)(v32 + 8LL * *(unsigned int *)(a1 + 60));
        if ( (unsigned __int64)v17 <= v6 )
        {
          v33 = a1 + 72;
          *(_QWORD *)(a2 + 24) = v32;
          v34 = *(_QWORD *)(a1 + 72);
          v35 = 0;
          while ( v34 != v33 )
          {
            v36 = *(unsigned __int16 *)(v34 + 40);
            v37 = (wchar_t *)((char *)v17 + v36 + 2);
            if ( (unsigned __int64)v37 > v6 )
              return (unsigned int)-2147483643;
            *(_QWORD *)(v32 + 8LL * v35) = v17;
            RtlStringCbCopyNW(v17, v36 + 2, *(STRSAFE_PCNZWCH *)(v34 + 48), v36);
            v34 = *v38;
            v17 = v37;
            ++v35;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v24 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v17 = (wchar_t *)(v24 + 16LL * *(unsigned int *)(a1 + 60));
        if ( (unsigned __int64)v17 <= v6 )
        {
          v25 = a1 + 72;
          *(_QWORD *)(a2 + 24) = v24;
          v26 = *(_QWORD *)(a1 + 72);
          v27 = 0;
          while ( v26 != v25 )
          {
            v28 = *(unsigned __int16 *)(v26 + 48);
            v29 = (wchar_t *)((char *)v17 + v28 + 2);
            if ( (unsigned __int64)v29 > v6 )
              return (unsigned int)-2147483643;
            v30 = 2LL * v27;
            *(_QWORD *)(v24 + 8 * v30) = *(_QWORD *)(v26 + 40);
            *(_QWORD *)(v24 + 8 * v30 + 8) = v17;
            RtlStringCbCopyNW(v17, v28 + 2, *(STRSAFE_PCNZWCH *)(v26 + 56), v28);
            v26 = *v31;
            v17 = v29;
            ++v27;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      }
      v14 = v13 - 1;
      if ( !v14 )
        goto LABEL_11;
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 10 )
          return (unsigned int)-1073741811;
LABEL_11:
        v16 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v17 = (wchar_t *)(v16 + 16LL * *(unsigned int *)(a1 + 60));
        if ( (unsigned __int64)v17 <= v6 )
        {
          v18 = (__int64 *)(a1 + 72);
          *(_QWORD *)(a2 + 24) = v16;
          v19 = *(__int64 **)(a1 + 72);
          v20 = 0;
          while ( v19 != v18 )
          {
            v21 = *((unsigned int *)v19 + 12);
            v22 = (wchar_t *)((char *)v17 + v21);
            if ( (unsigned __int64)v17 + v21 > v6 )
              return (unsigned int)-2147483643;
            v23 = 2LL * v20;
            *(_QWORD *)(v16 + 8 * v23) = v17;
            *(_DWORD *)(v16 + 8 * v23 + 8) = v21;
            memmove(v17, (const void *)v19[5], v21);
            v19 = (__int64 *)*v19;
            v17 = v22;
            ++v20;
          }
          goto LABEL_33;
        }
        return (unsigned int)-2147483643;
      }
    }
  }
  v39 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v17 = (wchar_t *)(v39 + 8LL * *(unsigned int *)(a1 + 60));
  if ( (unsigned __int64)v17 <= v6 )
  {
    v40 = (_QWORD *)(a1 + 72);
    *(_QWORD *)(a2 + 24) = v39;
    v41 = 0;
    for ( i = (_QWORD *)*v40; i != v40; i = (_QWORD *)*i )
    {
      v43 = v41++;
      *(_QWORD *)(v39 + 8 * v43) = i[5];
    }
LABEL_33:
    *a5 = (char *)v17 - a3;
    return v5;
  }
  return (unsigned int)-2147483643;
}
