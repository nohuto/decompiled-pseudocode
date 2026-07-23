/*
 * XREFs of RtlpCombineAcls @ 0x1800729E4
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1800777AC (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        ACL **a7,
        _DWORD *a8)
{
  unsigned __int8 *v8; // r11
  unsigned int v9; // ebx
  unsigned __int8 *v10; // rsi
  ULONG v14; // edi
  ACL *v15; // r15
  _DWORD *v17; // rdx
  unsigned int v18; // ecx
  unsigned __int8 *v19; // r8
  unsigned int j; // r10d
  ULONG v21; // esi
  ACL *Heap; // rax
  NTSTATUS Acl; // edi
  char *v24; // rsi
  unsigned __int16 *v25; // rbp
  unsigned int jj; // r14d
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r13
  unsigned __int8 *v30; // r13
  unsigned __int8 *v31; // r14
  unsigned __int8 *v32; // r8
  unsigned int i; // r10d
  unsigned __int8 v34; // al
  unsigned __int8 *v35; // r8
  unsigned int k; // r10d
  unsigned __int8 *v37; // r8
  unsigned int m; // r10d
  unsigned __int8 *v39; // r8
  unsigned int n; // r10d
  unsigned __int8 *v41; // r8
  unsigned int ii; // r10d
  unsigned __int16 *v43; // r14
  unsigned int v44; // ebp
  unsigned __int8 v45; // al
  __int64 v46; // rax
  unsigned __int16 *v47; // rbp
  unsigned int v48; // r14d
  __int64 v49; // rax
  unsigned __int16 *v50; // rbp
  unsigned int v51; // r14d
  __int64 v52; // rax
  unsigned __int16 *v53; // rbp
  unsigned int v54; // r14d
  __int64 v55; // rax
  unsigned __int16 *v56; // rbp
  __int64 v57; // rax
  PVOID FirstFree; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 *v59; // [rsp+70h] [rbp+18h]
  unsigned __int8 *v60; // [rsp+78h] [rbp+20h]

  v60 = a4;
  v59 = a3;
  v8 = a5;
  v9 = 0;
  v10 = a6;
  FirstFree = 0LL;
  v14 = 2;
  v15 = 0LL;
  if ( !a1 && !a2 && !a3 && !a4 && !a5 && !a6 )
  {
    *a7 = 0LL;
    return 0LL;
  }
  v17 = a8;
  v18 = 8;
  if ( a1 )
  {
    v32 = a1 + 8;
    for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v32 += *((unsigned __int16 *)v32 + 1) )
    {
      v34 = *v32;
      if ( *v32 >= 2u && (v34 <= 3u || v34 > 6u && (v34 <= 8u || (unsigned __int8)(v34 - 13) <= 3u)) )
      {
        if ( v18 + *((unsigned __int16 *)v32 + 1) < v18 )
          goto LABEL_131;
        v18 += *((unsigned __int16 *)v32 + 1);
        if ( v17 )
          *v17 |= 8u;
        if ( *a1 > v14 )
          v14 = *a1;
      }
      ++i;
    }
  }
  if ( a2 )
  {
    v19 = a2 + 8;
    for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v19 += *((unsigned __int16 *)v19 + 1) )
    {
      if ( *v19 == 17 )
      {
        if ( v18 + *((unsigned __int16 *)v19 + 1) < v18 )
          goto LABEL_131;
        v18 += *((unsigned __int16 *)v19 + 1);
        if ( v17 )
          *v17 |= 0x10u;
        if ( *a2 > v14 )
          v14 = *a2;
      }
      ++j;
    }
  }
  if ( v8 )
  {
    v35 = v8 + 8;
    for ( k = 0; k < *((unsigned __int16 *)v8 + 2); v35 += *((unsigned __int16 *)v35 + 1) )
    {
      if ( *v35 == 20 )
      {
        if ( v18 + *((unsigned __int16 *)v35 + 1) < v18 )
          goto LABEL_131;
        v18 += *((unsigned __int16 *)v35 + 1);
        if ( v17 )
          *v17 |= 0x80u;
        if ( *v8 > v14 )
          v14 = *v8;
      }
      ++k;
    }
  }
  if ( v10 )
  {
    v37 = v10 + 8;
    for ( m = 0; m < *((unsigned __int16 *)v10 + 2); v37 += *((unsigned __int16 *)v37 + 1) )
    {
      if ( *v37 == 21 )
      {
        if ( v18 + *((unsigned __int16 *)v37 + 1) < v18 )
          goto LABEL_131;
        v18 += *((unsigned __int16 *)v37 + 1);
        if ( v17 )
          *v17 |= 0x100u;
        if ( *v10 > v14 )
          v14 = *v10;
      }
      ++m;
    }
  }
  if ( a3 )
  {
    v39 = a3 + 8;
    for ( n = 0; n < *((unsigned __int16 *)a3 + 2); v39 += *((unsigned __int16 *)v39 + 1) )
    {
      if ( *v39 == 18 )
      {
        if ( v18 + *((unsigned __int16 *)v39 + 1) < v18 )
          goto LABEL_131;
        v18 += *((unsigned __int16 *)v39 + 1);
        if ( v17 )
          *v17 |= 0x20u;
        if ( *a3 > v14 )
          v14 = *a3;
      }
      ++n;
    }
  }
  if ( a4 )
  {
    v41 = a4 + 8;
    for ( ii = 0; ii < *((unsigned __int16 *)a4 + 2); v41 += *((unsigned __int16 *)v41 + 1) )
    {
      if ( *v41 == 19 )
      {
        if ( v18 + *((unsigned __int16 *)v41 + 1) < v18 )
          goto LABEL_131;
        v18 += *((unsigned __int16 *)v41 + 1);
        if ( v17 )
          *v17 |= 0x40u;
        if ( *a4 > v14 )
          v14 = *a4;
      }
      ++ii;
    }
  }
  if ( v18 + 3 < v18 )
  {
LABEL_131:
    Acl = -1073741675;
  }
  else
  {
    v21 = (v18 + 3) & 0xFFFFFFFC;
    Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v21);
    v15 = Heap;
    if ( Heap )
    {
      Acl = RtlCreateAcl(Heap, v21, v14);
      if ( Acl >= 0 )
      {
        if ( RtlFirstFreeAce(v15, &FirstFree) )
        {
          if ( a1 && (v43 = (unsigned __int16 *)(a1 + 8), v44 = 0, *((_WORD *)a1 + 2)) )
          {
            v24 = (char *)FirstFree;
            do
            {
              v45 = *(_BYTE *)v43;
              if ( *(_BYTE *)v43 >= 2u && (v45 <= 3u || v45 > 6u && (v45 <= 8u || (unsigned __int8)(v45 - 13) <= 3u)) )
              {
                memmove(v24, v43, v43[1]);
                ++v15->AceCount;
                v46 = v43[1];
                v24 += v46;
              }
              else
              {
                LOWORD(v46) = v43[1];
              }
              ++v44;
              v43 = (unsigned __int16 *)((char *)v43 + (unsigned __int16)v46);
            }
            while ( v44 < *((unsigned __int16 *)a1 + 2) );
          }
          else
          {
            v24 = (char *)FirstFree;
          }
          if ( a2 )
          {
            v25 = (unsigned __int16 *)(a2 + 8);
            for ( jj = 0;
                  jj < *((unsigned __int16 *)a2 + 2);
                  v25 = (unsigned __int16 *)((char *)v25 + (unsigned __int16)v27) )
            {
              if ( *(_BYTE *)v25 == 17 )
              {
                memmove(v24, v25, v25[1]);
                ++v15->AceCount;
                v27 = v25[1];
                v24 += v27;
              }
              else
              {
                LOWORD(v27) = v25[1];
              }
              ++jj;
            }
          }
          v28 = (__int64)a5;
          if ( a5 )
          {
            v47 = (unsigned __int16 *)(a5 + 8);
            v48 = 0;
            if ( *((_WORD *)a5 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v47 == 20 )
                {
                  memmove(v24, v47, v47[1]);
                  ++v15->AceCount;
                  v49 = v47[1];
                  v24 += v49;
                }
                else
                {
                  LOWORD(v49) = v47[1];
                }
                ++v48;
                v47 = (unsigned __int16 *)((char *)v47 + (unsigned __int16)v49);
              }
              while ( v48 < *(unsigned __int16 *)(v28 + 4) );
            }
          }
          v29 = (__int64)a6;
          if ( a6 )
          {
            v50 = (unsigned __int16 *)(a6 + 8);
            v51 = 0;
            if ( *((_WORD *)a6 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v50 == 21 )
                {
                  memmove(v24, v50, v50[1]);
                  ++v15->AceCount;
                  v52 = v50[1];
                  v24 += v52;
                }
                else
                {
                  LOWORD(v52) = v50[1];
                }
                ++v51;
                v50 = (unsigned __int16 *)((char *)v50 + (unsigned __int16)v52);
              }
              while ( v51 < *(unsigned __int16 *)(v29 + 4) );
            }
          }
          v30 = v59;
          if ( v59 )
          {
            v53 = (unsigned __int16 *)(v59 + 8);
            v54 = 0;
            if ( *((_WORD *)v59 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v53 == 18 )
                {
                  memmove(v24, v53, v53[1]);
                  ++v15->AceCount;
                  v55 = v53[1];
                  v24 += v55;
                }
                else
                {
                  LOWORD(v55) = v53[1];
                }
                ++v54;
                v53 = (unsigned __int16 *)((char *)v53 + (unsigned __int16)v55);
              }
              while ( v54 < *((unsigned __int16 *)v30 + 2) );
            }
          }
          v31 = v60;
          if ( v60 )
          {
            v56 = (unsigned __int16 *)(v60 + 8);
            if ( *((_WORD *)v60 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v56 == 19 )
                {
                  memmove(v24, v56, v56[1]);
                  ++v15->AceCount;
                  v57 = v56[1];
                  v24 += v57;
                }
                else
                {
                  LOWORD(v57) = v56[1];
                }
                ++v9;
                v56 = (unsigned __int16 *)((char *)v56 + (unsigned __int16)v57);
              }
              while ( v9 < *((unsigned __int16 *)v31 + 2) );
            }
          }
          goto LABEL_37;
        }
        Acl = -1073741699;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
      v15 = 0LL;
    }
    else
    {
      Acl = -1073741801;
    }
  }
LABEL_37:
  *a7 = v15;
  return (unsigned int)Acl;
}
