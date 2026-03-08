/*
 * XREFs of AuthzBasepCopyoutSecurityAttributeValues @ 0x1402D60E8
 * Callers:
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1402D5E70 (AuthzBasepCopyoutSecurityAttributes.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall AuthzBasepCopyoutSecurityAttributeValues(
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
  unsigned __int64 v12; // r8
  char *v13; // r9
  _QWORD *v14; // r10
  unsigned int v15; // r11d
  _QWORD *i; // rdx
  __int64 v17; // rcx
  int v19; // ecx
  unsigned __int64 v20; // rbp
  __int64 *v21; // r15
  __int64 *v22; // r14
  unsigned int v23; // r13d
  size_t v24; // r8
  char *v25; // r12
  __int64 v26; // rax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned __int64 v30; // rbp
  __int64 *v31; // r15
  __int64 *v32; // r14
  unsigned int v33; // r13d
  size_t v34; // r8
  char *v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  __int64 *v38; // rbp
  __int64 *v39; // r15
  unsigned int v40; // r13d
  size_t v41; // r8
  char *v42; // r12
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
      v19 = v11 - 1;
      if ( v19 )
      {
        v27 = v19 - 1;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( !v29 )
              goto LABEL_4;
            if ( v29 != 10 )
              return (unsigned int)-1073741811;
          }
          v30 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v13 = (char *)(v30 + 16LL * *(unsigned int *)(a1 + 60));
          if ( (unsigned __int64)v13 <= v6 )
          {
            v31 = (__int64 *)(a1 + 72);
            *(_QWORD *)(a2 + 32) = v30;
            v32 = *(__int64 **)(a1 + 72);
            v33 = 0;
            while ( v32 != v31 )
            {
              v34 = *((unsigned int *)v32 + 12);
              v35 = &v13[v34];
              if ( (unsigned __int64)&v13[v34] > v6 )
                return (unsigned int)-2147483643;
              v36 = 2LL * v33;
              *(_QWORD *)(v30 + 8 * v36) = v13;
              *(_DWORD *)(v30 + 8 * v36 + 8) = v34;
              memmove(v13, (const void *)v32[5], v34);
              v32 = (__int64 *)*v32;
              v13 = v35;
              ++v33;
            }
            goto LABEL_8;
          }
        }
        else
        {
          v37 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v13 = (char *)(v37 + 24LL * *(unsigned int *)(a1 + 60));
          if ( (unsigned __int64)v13 <= v6 )
          {
            v38 = (__int64 *)(a1 + 72);
            *(_QWORD *)(a2 + 32) = v37;
            v39 = *(__int64 **)(a1 + 72);
            v40 = 0;
            while ( v39 != v38 )
            {
              v41 = *((unsigned __int16 *)v39 + 24);
              v42 = &v13[v41];
              if ( (unsigned __int64)&v13[v41] > v6 )
                return (unsigned int)-2147483643;
              v43 = 3LL * v40;
              *(_QWORD *)(v37 + 8 * v43) = v39[5];
              *(_WORD *)(v37 + 8 * v43 + 8) = v41;
              *(_WORD *)(v37 + 8 * v43 + 10) = v41;
              *(_QWORD *)(v37 + 8 * v43 + 16) = v13;
              memmove(v13, (const void *)v39[7], v41);
              v39 = (__int64 *)*v39;
              v13 = v42;
              ++v40;
            }
            goto LABEL_8;
          }
        }
      }
      else
      {
        v20 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v13 = (char *)(v20 + 16LL * *(unsigned int *)(a1 + 60));
        if ( (unsigned __int64)v13 <= v6 )
        {
          v21 = (__int64 *)(a1 + 72);
          *(_QWORD *)(a2 + 32) = v20;
          v22 = *(__int64 **)(a1 + 72);
          v23 = 0;
          while ( v22 != v21 )
          {
            v24 = *((unsigned __int16 *)v22 + 20);
            v25 = &v13[v24];
            if ( (unsigned __int64)&v13[v24] > v6 )
              return (unsigned int)-2147483643;
            v26 = 2LL * v23;
            *(_WORD *)(v20 + 8 * v26) = v24;
            *(_WORD *)(v20 + 8 * v26 + 2) = v24;
            *(_QWORD *)(v20 + 8 * v26 + 8) = v13;
            memmove(v13, (const void *)v22[6], v24);
            v22 = (__int64 *)*v22;
            v13 = v25;
            ++v23;
          }
          goto LABEL_8;
        }
      }
      return (unsigned int)-2147483643;
    }
  }
LABEL_4:
  v12 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v13 = (char *)(v12 + 8LL * *(unsigned int *)(a1 + 60));
  if ( (unsigned __int64)v13 > v6 )
    return (unsigned int)-2147483643;
  v14 = (_QWORD *)(a1 + 72);
  *(_QWORD *)(a2 + 32) = v12;
  v15 = 0;
  for ( i = (_QWORD *)*v14; i != v14; i = (_QWORD *)*i )
  {
    v17 = v15++;
    *(_QWORD *)(v12 + 8 * v17) = i[5];
  }
LABEL_8:
  *a5 = &v13[-a3];
  return v5;
}
