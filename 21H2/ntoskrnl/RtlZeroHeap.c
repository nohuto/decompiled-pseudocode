/*
 * XREFs of RtlZeroHeap @ 0x140915A90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlpHeapExceptionFilter @ 0x140593684 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405937F0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x140593EC4 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x140593FE8 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405942B8 (RtlpHeapRemoveListEntry.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  char *v5; // rax
  char *v6; // r13
  ULONG_PTR v7; // r15
  unsigned __int8 v8; // cl
  ULONG_PTR v9; // rdi
  __int64 v10; // r14
  __int64 *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // r12
  _QWORD **v19; // r14
  _QWORD *Entry; // r8
  int v21; // ecx
  unsigned __int16 v22; // ax
  _QWORD *v23; // r14
  __int64 *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rdx
  _DWORD *v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // [rsp+30h] [rbp-98h]
  ULONG_PTR v34; // [rsp+40h] [rbp-88h]
  ULONG_PTR v35; // [rsp+68h] [rbp-60h]
  int v36; // [rsp+88h] [rbp-40h]

  v3 = 0LL;
  v33 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)Flags) & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)HeapHandle + 44), 1u);
    v33 = 1;
  }
  v5 = (char *)HeapHandle + 288;
  v6 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_6:
  if ( v6 != v5 )
  {
    v7 = *((_QWORD *)v6 + 5);
    v34 = v7;
    while ( 1 )
    {
      if ( v7 >= *((_QWORD *)v6 + 6) )
      {
        v6 = *(char **)v6;
        v5 = (char *)HeapHandle + 288;
        goto LABEL_6;
      }
      if ( !v3 )
        goto LABEL_12;
      if ( *((_DWORD *)HeapHandle + 31) )
        break;
LABEL_15:
      v3 = (_BYTE *)v7;
      v8 = *(_BYTE *)(v7 + 10);
      if ( (v8 & 1) != 0 )
        goto LABEL_66;
      v9 = v7;
      v35 = v7;
      if ( (v8 & 8) != 0 )
      {
        v10 = *(_QWORD *)(v7 + 16);
        v11 = *(__int64 **)(v7 + 24);
        v12 = *v11;
        v13 = *(_QWORD *)(v10 + 8);
        if ( *v11 == v13 && v12 == v7 + 16 )
        {
          *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v7 + 8);
          v14 = *((_QWORD *)HeapHandle + 39);
          if ( v14 )
          {
            v15 = *(unsigned __int16 *)(v7 + 8);
            while ( 1 )
            {
              v16 = *(unsigned int *)(v14 + 8);
              if ( v15 < v16 )
              {
                v17 = *(unsigned __int16 *)(v7 + 8);
                goto LABEL_25;
              }
              if ( !*(_QWORD *)v14 )
                break;
              v14 = *(_QWORD *)v14;
            }
            v17 = v16 - 1;
LABEL_25:
            RtlpHeapRemoveListEntry((ULONG_PTR)HeapHandle, v14, v15, (__int64 *)(v7 + 16), v17, v15);
          }
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          v18 = *(unsigned __int16 *)(v7 + 8);
          *(_BYTE *)(v7 + 10) = 0;
          *(_BYTE *)(v7 + 15) = 0;
          v19 = (_QWORD **)((char *)HeapHandle + 336);
          if ( *((_QWORD *)HeapHandle + 39) )
            Entry = (_QWORD *)RtlpFindEntry((__int64)HeapHandle, (unsigned int)v18);
          else
            Entry = *v19;
          while ( v19 != Entry )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v21 = *((_DWORD *)Entry - 2);
              LOWORD(v36) = v21;
              if ( (v21 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v36 = v21 ^ *((_DWORD *)HeapHandle + 34);
              v22 = v36;
              v7 = v34;
              v9 = v35;
            }
            else
            {
              v22 = *((_WORD *)Entry - 4);
            }
            if ( v18 <= v22 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          v23 = (_QWORD *)(v9 + 16);
          v24 = (__int64 *)Entry[1];
          if ( (_QWORD *)*v24 == Entry )
          {
            *v23 = Entry;
            *(_QWORD *)(v9 + 24) = v24;
            *v24 = (__int64)v23;
            Entry[1] = v23;
          }
          else
          {
            RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)Entry, 0LL, *v24, 0LL);
          }
          *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v9 + 8);
          v25 = *((_QWORD *)HeapHandle + 39);
          if ( v25 )
          {
            v26 = *(unsigned __int16 *)(v9 + 8);
            while ( 1 )
            {
              v27 = *(unsigned int *)(v25 + 8);
              if ( v26 < v27 )
              {
                v28 = *(unsigned __int16 *)(v9 + 8);
                goto LABEL_47;
              }
              if ( !*(_QWORD *)v25 )
                break;
              v25 = *(_QWORD *)v25;
            }
            v28 = v27 - 1;
LABEL_47:
            RtlpHeapAddListEntry((__int64)HeapHandle, v25, v26, v9 + 16, v28, v26);
          }
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
            *(_DWORD *)(v9 + 8) ^= *((_DWORD *)HeapHandle + 34);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, (ULONG_PTR)HeapHandle, v7 + 16, v13, v12, 0LL);
        }
        v3 = 0LL;
      }
      else
      {
        v29 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
        v30 = (_DWORD *)(v7 + 32);
        if ( ((v8 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v31 = v29 >> 2;
          if ( !v31 )
            goto LABEL_66;
          if ( ((unsigned __int8)v30 & 4) != 0 )
          {
            *v30 = -17891602;
            if ( !--v31 )
              goto LABEL_66;
            v30 = (_DWORD *)(v7 + 36);
          }
          memset64(v30, 0xFEEEFEEEFEEEFEEEuLL, v31 >> 1);
          if ( (v31 & 1) != 0 )
            v30[v31 - 1] = -17891602;
        }
        else
        {
          v32 = v29 >> 2;
          if ( !v32 )
            goto LABEL_66;
          if ( ((unsigned __int8)v30 & 4) != 0 )
          {
            *v30 = 0;
            if ( !--v32 )
              goto LABEL_66;
            v30 = (_DWORD *)(v7 + 36);
          }
          memset(v30, 0, 8 * (v32 >> 1));
          if ( (v32 & 1) != 0 )
            v30[v32 - 1] = 0;
        }
LABEL_66:
        if ( *(_BYTE *)(v7 + 15) == 3 )
          v7 += *(_QWORD *)(v7 + 56) + 64LL;
        else
          v7 += 16LL * *(unsigned __int16 *)(v7 + 8);
        v34 = v7;
      }
    }
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
LABEL_12:
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      *(_DWORD *)(v7 + 8) ^= *((_DWORD *)HeapHandle + 34);
      if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
        RtlpAnalyzeHeapFailure((ULONG_PTR)HeapHandle, v7);
    }
    goto LABEL_15;
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v33 )
    ExReleaseResourceLite(*((PERESOURCE *)HeapHandle + 44));
  return 0;
}
