/*
 * XREFs of RtlCreateRetpolineRelocationInformation @ 0x14036BA3C
 * Callers:
 *     MiCreateRetpolineRelocationInformation @ 0x1407F5B50 (MiCreateRetpolineRelocationInformation.c)
 * Callees:
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x14036BCD8 (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 *     RtlSizeOfRetpolineRelocationEntry @ 0x14036BD84 (RtlSizeOfRetpolineRelocationEntry.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlSizeOfRetpolineIndirectFixup @ 0x14046760A (RtlSizeOfRetpolineIndirectFixup.c)
 */

__int64 __fastcall RtlCreateRetpolineRelocationInformation(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        void *a8,
        unsigned int a9)
{
  unsigned __int64 v11; // r10
  size_t v13; // r8
  size_t v14; // rsi
  unsigned int v15; // r8d
  char *v16; // r14
  unsigned __int8 v17; // cl
  _DWORD *v18; // r12
  unsigned __int64 v19; // r9
  _DWORD *v20; // r13
  unsigned __int64 v21; // r10
  _DWORD *v22; // rdx
  unsigned __int64 v23; // r11
  __int64 v24; // rax
  int v25; // r15d
  int v26; // esi
  unsigned int v27; // ebx
  char *v28; // rdi
  char *v29; // rdi
  _WORD *v30; // rax
  char *v31; // rcx
  __int16 v32; // r10
  char *v33; // rcx
  char *v34; // rdx
  char *v35; // r8
  char *v36; // r9
  unsigned int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  char *v42; // r8
  unsigned int v43; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v44; // [rsp+34h] [rbp-4Ch]
  _DWORD *v45; // [rsp+38h] [rbp-48h]
  _DWORD *v46; // [rsp+40h] [rbp-40h]
  _DWORD *v47; // [rsp+48h] [rbp-38h]
  _DWORD *v48; // [rsp+50h] [rbp-30h]
  unsigned __int64 v49; // [rsp+58h] [rbp-28h]
  unsigned __int64 v50; // [rsp+60h] [rbp-20h]
  unsigned __int64 v51; // [rsp+68h] [rbp-18h]
  char *v52; // [rsp+70h] [rbp-10h]
  void *v53; // [rsp+78h] [rbp-8h]
  __int64 v55; // [rsp+C8h] [rbp+48h] BYREF

  v11 = (unsigned __int64)a1 >> 12;
  v13 = 4 * (a2 + 3 * v11);
  if ( (unsigned int)a7 < v13 )
    return 3221225507LL;
  v14 = 8 * v11;
  if ( a9 < 8 * v11 )
    return 3221225507LL;
  memset(a6, 0, v13);
  memset(a8, 0, v14);
  v15 = 0;
  v16 = 0LL;
  v48 = 0LL;
  v17 = 0;
  v44 = 0;
  if ( a3 )
  {
    v18 = (_DWORD *)(a3 + 12);
    v19 = a3 + 12 + *(unsigned int *)(a3 + 8);
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
  }
  v49 = v19;
  if ( a4 )
  {
    v20 = (_DWORD *)(a4 + 12);
    v21 = a4 + 12 + *(unsigned int *)(a4 + 8);
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  v50 = v21;
  if ( a5 )
  {
    v22 = (_DWORD *)(a5 + 12);
    v23 = a5 + 12 + *(unsigned int *)(a5 + 8);
  }
  else
  {
    v22 = 0LL;
    v23 = 0LL;
  }
  v51 = v23;
  v45 = v22;
  if ( a1 )
  {
    do
    {
      if ( (unsigned __int64)v18 < v19 && *v18 == v15 )
      {
        v24 = (unsigned int)v18[1];
        v46 = v18;
        v18 = (_DWORD *)((char *)v18 + v24);
        v25 = v24 - 8;
      }
      else
      {
        v46 = 0LL;
        v25 = 0;
      }
      LODWORD(a7) = v25;
      if ( (unsigned __int64)v20 < v21 && *v20 == v15 )
      {
        v39 = (unsigned int)v20[1];
        v47 = v20;
        v20 = (_DWORD *)((char *)v20 + v39);
        v26 = v39 - 8;
      }
      else
      {
        v47 = 0LL;
        v26 = 0;
      }
      LODWORD(v55) = v26;
      if ( (unsigned __int64)v22 < v23 && *v22 == v15 )
      {
        v40 = (unsigned int)v22[1];
        v48 = v22;
        v22 = (_DWORD *)((char *)v22 + v40);
        v45 = v22;
        v27 = v40 - 8;
      }
      else
      {
        v27 = 0;
      }
      v43 = v27;
      if ( v17 || v25 || v26 || v27 )
      {
        v28 = a6;
        v53 = a6;
        v52 = a6;
        *((_WORD *)a6 + 3) = v17;
        if ( v17 )
        {
          v38 = RtlSizeOfRetpolineRelocationEntry(v17);
          memmove(v28 + 8, v16, v38);
        }
        v16 = v28 + 12;
        v29 = v28 + 12;
        if ( v25 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v16, (__int64)&a7);
          LOWORD(v25) = a7;
          v29 += (unsigned int)a7;
        }
        if ( v26 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v29, (__int64)&v55);
          LOWORD(v26) = v55;
          v29 += (unsigned int)v55;
        }
        if ( v27 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v29, (__int64)&v43);
          LOWORD(v27) = v43;
          v29 += v43;
        }
        v30 = a6;
        v31 = v52;
        a6 = v29;
        *v30 = v25;
        v30[1] = v26;
        v30[2] = v27;
        v32 = 4095;
        v33 = &v31[(unsigned __int16)v25];
        v34 = &v33[(unsigned __int16)v26 + 12];
        v35 = v33 + 12;
        v36 = &v34[(unsigned __int16)v27];
        while ( v16 < v35 )
        {
          if ( (*(_DWORD *)v16 & 0xFFFu) + 12 > 0x1000 )
          {
            v17 = 3;
            goto LABEL_34;
          }
          v16 += 4;
        }
        while ( v35 < v34 )
        {
          v41 = RtlSizeOfRetpolineIndirectFixup(v35);
          if ( (unsigned int)(unsigned __int16)(v32 & *(_WORD *)v42) + v41 > 0x1000 )
          {
            v17 = 4;
            v16 = v42;
            goto LABEL_34;
          }
          v35 = v42 + 2;
        }
        while ( 1 )
        {
          if ( v34 >= v36 )
          {
            v17 = 0;
            v16 = 0LL;
            goto LABEL_34;
          }
          if ( (unsigned int)(unsigned __int16)(v32 & *(_WORD *)v34) + 6 > 0x1000 )
            break;
          v34 += 2;
        }
        v17 = 5;
        v16 = v34;
LABEL_34:
        v15 = v44;
        v21 = v50;
        v23 = v51;
        *((_QWORD *)a8 + ((unsigned __int64)v44 >> 12)) = v53;
        v22 = v45;
        v19 = v49;
      }
      v15 += 4096;
      v44 = v15;
    }
    while ( v15 < a1 );
  }
  return 0LL;
}
