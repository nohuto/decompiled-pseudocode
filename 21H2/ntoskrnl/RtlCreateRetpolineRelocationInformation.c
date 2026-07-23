/*
 * XREFs of RtlCreateRetpolineRelocationInformation @ 0x1402A3C98
 * Callers:
 *     MiCreateRetpolineRelocationInformation @ 0x1406C22D8 (MiCreateRetpolineRelocationInformation.c)
 * Callees:
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x1402A3F14 (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 *     RtlSizeOfRetpolineRelocationEntry @ 0x1402A3FBC (RtlSizeOfRetpolineRelocationEntry.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlSizeOfRetpolineIndirectFixup @ 0x1405904B8 (RtlSizeOfRetpolineIndirectFixup.c)
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
  char *v15; // rsi
  unsigned int v16; // r8d
  unsigned __int8 v17; // cl
  _DWORD *v18; // r12
  unsigned __int64 v19; // r9
  _DWORD *v20; // r13
  unsigned __int64 v21; // r10
  _DWORD *v22; // rdx
  unsigned __int64 v23; // r11
  int v24; // r15d
  int v25; // r14d
  unsigned int v26; // ebx
  __int64 v28; // rax
  char *v29; // rdi
  char *v30; // rdi
  _WORD *v31; // r10
  __int16 v32; // r11
  char *v33; // rdx
  unsigned __int64 v34; // r8
  char *v35; // r9
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  char *v40; // r8
  unsigned int v41; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-4Ch]
  _DWORD *v43; // [rsp+38h] [rbp-48h]
  _DWORD *v44; // [rsp+40h] [rbp-40h]
  _DWORD *v45; // [rsp+48h] [rbp-38h]
  _DWORD *v46; // [rsp+50h] [rbp-30h]
  unsigned __int64 v47; // [rsp+58h] [rbp-28h]
  unsigned __int64 v48; // [rsp+60h] [rbp-20h]
  unsigned __int64 v49; // [rsp+68h] [rbp-18h]
  __int64 v51; // [rsp+C8h] [rbp+48h] BYREF

  v11 = (unsigned __int64)a1 >> 12;
  v13 = 4 * (a2 + 3 * v11);
  if ( (unsigned int)a7 < v13 )
    return 3221225507LL;
  v14 = 8 * v11;
  if ( a9 < 8 * v11 )
    return 3221225507LL;
  memset(a6, 0, v13);
  memset(a8, 0, v14);
  v15 = 0LL;
  v16 = 0;
  v46 = 0LL;
  v17 = 0;
  v42 = 0;
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
  v47 = v19;
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
  v48 = v21;
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
  v49 = v23;
  v43 = v22;
  if ( a1 )
  {
    do
    {
      if ( (unsigned __int64)v18 < v19 && *v18 == v16 )
      {
        v28 = (unsigned int)v18[1];
        v44 = v18;
        v18 = (_DWORD *)((char *)v18 + v28);
        v24 = v28 - 8;
      }
      else
      {
        v44 = 0LL;
        v24 = 0;
      }
      LODWORD(a7) = v24;
      if ( (unsigned __int64)v20 < v21 && *v20 == v16 )
      {
        v37 = (unsigned int)v20[1];
        v45 = v20;
        v20 = (_DWORD *)((char *)v20 + v37);
        v25 = v37 - 8;
      }
      else
      {
        v45 = 0LL;
        v25 = 0;
      }
      LODWORD(v51) = v25;
      if ( (unsigned __int64)v22 < v23 && *v22 == v16 )
      {
        v38 = (unsigned int)v22[1];
        v46 = v22;
        v22 = (_DWORD *)((char *)v22 + v38);
        v43 = v22;
        v26 = v38 - 8;
      }
      else
      {
        v26 = 0;
      }
      v41 = v26;
      if ( v17 || v24 || v25 || v26 )
      {
        v29 = a6;
        *((_WORD *)a6 + 3) = v17;
        if ( v17 )
        {
          v36 = RtlSizeOfRetpolineRelocationEntry(v17);
          memmove(v29 + 8, v15, v36);
        }
        v15 = v29 + 12;
        v30 = v29 + 12;
        if ( v24 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v15, (__int64)&a7);
          LOWORD(v24) = a7;
          v30 += (unsigned int)a7;
        }
        if ( v25 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v30, (__int64)&v51);
          LOWORD(v25) = v51;
          v30 += (unsigned int)v51;
        }
        if ( v26 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v30, (__int64)&v41);
          LOWORD(v26) = v41;
          v30 += v41;
        }
        v31 = a6;
        a6 = v30;
        *v31 = v24;
        v31[1] = v25;
        v31[2] = v26;
        v32 = 4095;
        v33 = (char *)v31 + (unsigned __int16)v24 + (unsigned __int16)v25 + 12;
        v34 = (unsigned __int64)v31 + (unsigned __int16)v24 + 12;
        v35 = &v33[(unsigned __int16)v26];
        while ( (unsigned __int64)v15 < v34 )
        {
          if ( (*(_DWORD *)v15 & 0xFFFu) + 12 > 0x1000 )
          {
            v17 = 3;
            goto LABEL_39;
          }
          v15 += 4;
        }
        while ( v34 < (unsigned __int64)v33 )
        {
          v39 = RtlSizeOfRetpolineIndirectFixup(v34);
          if ( (unsigned int)(unsigned __int16)(v32 & *(_WORD *)v40) + v39 > 0x1000 )
          {
            v17 = 4;
            v15 = v40;
            goto LABEL_39;
          }
          v34 = (unsigned __int64)(v40 + 2);
        }
        while ( 1 )
        {
          if ( v33 >= v35 )
          {
            v17 = 0;
            v15 = 0LL;
            goto LABEL_39;
          }
          if ( (unsigned int)(unsigned __int16)(v32 & *(_WORD *)v33) + 6 > 0x1000 )
            break;
          v33 += 2;
        }
        v17 = 5;
        v15 = v33;
LABEL_39:
        v16 = v42;
        v19 = v47;
        v23 = v49;
        *((_QWORD *)a8 + ((unsigned __int64)v42 >> 12)) = v31;
        v22 = v43;
        v21 = v48;
      }
      v16 += 4096;
      v42 = v16;
    }
    while ( v16 < a1 );
  }
  return 0LL;
}
