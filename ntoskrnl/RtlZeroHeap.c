/*
 * XREFs of RtlZeroHeap @ 0x1409BAEE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     RtlpHeapExceptionFilter @ 0x1405B276C (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405B28D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1405B2FB0 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x1405B30D4 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405B33A0 (RtlpHeapRemoveListEntry.c)
 */

__int64 __fastcall RtlZeroHeap(ULONG_PTR a1, unsigned __int8 a2, __int64 Entry)
{
  _BYTE *v4; // r14
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  ULONG_PTR v8; // r15
  _BYTE *v9; // r13
  unsigned __int8 v10; // cl
  __int64 *v11; // r14
  __int64 v12; // r12
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r12
  __int64 *v20; // rdi
  int v21; // eax
  unsigned __int16 v22; // ax
  __int64 *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  char v30; // [rsp+30h] [rbp-A8h]
  __int64 *v31; // [rsp+40h] [rbp-98h]
  ULONG_PTR v32; // [rsp+48h] [rbp-90h]
  ULONG_PTR v33; // [rsp+60h] [rbp-78h]
  int v34; // [rsp+90h] [rbp-48h]
  _QWORD *v35; // [rsp+F8h] [rbp+20h]

  v4 = 0LL;
  v30 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return 0LL;
  if ( ((*(_BYTE *)(a1 + 116) | a2) & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v30 = 1;
  }
  v6 = (_QWORD *)(a1 + 288);
  v7 = *(_QWORD **)(a1 + 288);
LABEL_6:
  v35 = v7;
  if ( v7 != v6 )
  {
    v8 = v7[5];
    v32 = v8;
    while ( 1 )
    {
      if ( v8 >= v7[6] )
      {
        v7 = (_QWORD *)*v7;
        v6 = (_QWORD *)(a1 + 288);
        goto LABEL_6;
      }
      if ( v4 )
      {
        if ( !*(_DWORD *)(a1 + 124) )
          goto LABEL_15;
        v4[11] = v4[8] ^ v4[9] ^ v4[10];
        *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v8);
      }
LABEL_15:
      v4 = (_BYTE *)v8;
      v9 = (_BYTE *)(v8 + 8);
      v10 = *(_BYTE *)(v8 + 10);
      if ( (v10 & 1) != 0 )
        goto LABEL_65;
      v33 = v8;
      if ( (v10 & 8) == 0 )
      {
        v27 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        Entry = v8 + 32;
        if ( ((v10 >> 2) & ((*(_BYTE *)(a1 + 112) & 0x40) != 0)) != 0 )
        {
          v28 = v27 >> 2;
          if ( v28 )
          {
            if ( (Entry & 4) != 0 )
            {
              *(_DWORD *)Entry = -17891602;
              if ( --v28 )
              {
                Entry = v8 + 36;
                goto LABEL_57;
              }
            }
            else
            {
LABEL_57:
              memset64((void *)Entry, 0xFEEEFEEEFEEEFEEEuLL, v28 >> 1);
              if ( (v28 & 1) != 0 )
                *(_DWORD *)(Entry + 4 * v28 - 4) = -17891602;
            }
          }
        }
        else
        {
          v29 = v27 >> 2;
          if ( v29 )
          {
            if ( (Entry & 4) != 0 )
            {
              *(_DWORD *)Entry = 0;
              if ( !--v29 )
                goto LABEL_65;
              Entry = v8 + 36;
            }
            memset((void *)Entry, 0, 8 * (v29 >> 1));
            if ( (v29 & 1) != 0 )
              *(_DWORD *)(Entry + 4 * v29 - 4) = 0;
          }
        }
LABEL_65:
        if ( *(_BYTE *)(v8 + 15) == 3 )
          v8 += *(_QWORD *)(v8 + 56) + 64LL;
        else
          v8 += 16LL * *(unsigned __int16 *)v9;
        v32 = v8;
        goto LABEL_51;
      }
      v11 = (__int64 *)(v8 + 16);
      v12 = *(_QWORD *)(v8 + 16);
      v13 = *(__int64 **)(v8 + 24);
      v31 = v13;
      v14 = *v13;
      v15 = *(_QWORD *)(v12 + 8);
      if ( *v13 == v15 && (__int64 *)v14 == v11 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
        v16 = *(_QWORD *)(a1 + 312);
        if ( v16 )
        {
          v17 = *(unsigned __int16 *)v9;
          while ( 1 )
          {
            v18 = *(unsigned int *)(v16 + 8);
            if ( v17 < v18 )
              break;
            if ( !*(_QWORD *)v16 )
            {
              LODWORD(v17) = v18 - 1;
              break;
            }
            v16 = *(_QWORD *)v16;
          }
          RtlpHeapRemoveListEntry(a1, v16, Entry, (__int64 *)(v8 + 16), v17, *(unsigned __int16 *)v9);
          v13 = v31;
        }
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        v19 = *(unsigned __int16 *)v9;
        *(_BYTE *)(v8 + 10) = 0;
        *(_BYTE *)(v8 + 15) = 0;
        v20 = (__int64 *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = RtlpFindEntry(a1, (unsigned int)v19);
        else
          Entry = *v20;
        while ( v20 != (__int64 *)Entry )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v21 = *(_DWORD *)(Entry - 8);
            LOWORD(v34) = v21;
            if ( (v21 & *(_DWORD *)(a1 + 124)) != 0 )
              v34 = *(_DWORD *)(a1 + 136) ^ v21;
            v22 = v34;
            v8 = v32;
          }
          else
          {
            v22 = *(_WORD *)(Entry - 8);
          }
          if ( v19 <= v22 )
            break;
          Entry = *(_QWORD *)Entry;
        }
        v23 = *(__int64 **)(Entry + 8);
        if ( *v23 == Entry )
        {
          *v11 = Entry;
          v11[1] = (__int64)v23;
          *v23 = (__int64)v11;
          *(_QWORD *)(Entry + 8) = v11;
        }
        else
        {
          RtlpLogHeapFailure(13, 0LL, Entry, 0LL, *v23, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)v9;
        v24 = *(_QWORD *)(a1 + 312);
        if ( v24 )
        {
          v25 = *(unsigned __int16 *)v9;
          while ( 1 )
          {
            v26 = *(unsigned int *)(v24 + 8);
            if ( v25 < v26 )
              break;
            if ( !*(_QWORD *)v24 )
            {
              LODWORD(v25) = v26 - 1;
              break;
            }
            v24 = *(_QWORD *)v24;
          }
          RtlpHeapAddListEntry(a1, v24, Entry, (__int64)v11, v25, *(unsigned __int16 *)v9);
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v33 + 11) = *v9 ^ v9[1] ^ v9[2];
          *(_DWORD *)v9 ^= *(_DWORD *)(a1 + 136);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v8 + 16, v15, v14, 0LL);
      }
      v4 = 0LL;
LABEL_51:
      v7 = v35;
    }
  }
  if ( v4 && *(_DWORD *)(a1 + 124) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v30 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return 0LL;
}
