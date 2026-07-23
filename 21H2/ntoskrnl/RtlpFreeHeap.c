/*
 * XREFs of RtlpFreeHeap @ 0x14058ADC4
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1402236E4 (RtlpFreeHeapInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ZwFreeVirtualMemory @ 0x1403FA940 (ZwFreeVirtualMemory.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405896C0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A314 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14058B5DC (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405937F0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x140593EC4 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x140593FE8 (RtlpHeapAddListEntry.c)
 */

__int64 __fastcall RtlpFreeHeap(__int64 a1, int a2, __int64 a3)
{
  char v5; // r15
  int v7; // edx
  int v8; // r14d
  __int64 **v9; // rcx
  char v10; // al
  __int64 v11; // rsi
  char v12; // r9
  unsigned __int16 v13; // r8
  bool v14; // zf
  unsigned __int64 v15; // r14
  _QWORD *v16; // rdi
  _QWORD *Entry; // r8
  int v18; // ecx
  unsigned __int16 v19; // ax
  _QWORD *v20; // rdi
  __int64 *v21; // rax
  __int64 **v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  int v25; // eax
  _DWORD *v26; // r8
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rdi
  _QWORD *v29; // r8
  int v30; // ecx
  unsigned __int16 v31; // ax
  __int64 *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r9
  char v39; // [rsp+30h] [rbp-78h]
  PVOID BaseAddress; // [rsp+50h] [rbp-58h] BYREF
  __int64 v41; // [rsp+58h] [rbp-50h]
  int v42; // [rsp+68h] [rbp-40h]
  int v43; // [rsp+78h] [rbp-30h]
  __int64 v44; // [rsp+C0h] [rbp+18h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+20h] BYREF

  RegionSize = 0LL;
  v5 = 0;
  v39 = 0;
  BaseAddress = 0LL;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v7 = *(_DWORD *)(a1 + 116) | a2;
  v8 = v7 & 0x3C010F60;
  if ( (v7 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 + 11) != (*(_BYTE *)(a3 + 8) ^ (unsigned __int8)(*(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3);
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v5 = 1;
    v39 = 1;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 + 11) != (*(_BYTE *)(a3 + 8) ^ (unsigned __int8)(*(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3);
    }
    v9 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(a3 + 8) < (unsigned __int64)*((unsigned int *)v9 + 2) )
        break;
      v9 = (__int64 **)*v9;
    }
    while ( v9 );
  }
  v10 = *(_BYTE *)(a3 + 10);
  if ( (v10 & 8) != 0 )
    *(_BYTE *)(a3 + 10) = v10 & 0xF7;
  if ( *(_BYTE *)(a3 + 15) == 4 )
  {
    v33 = a3 - 48;
    v34 = *(_QWORD *)(a3 - 48 + 32);
    BaseAddress = (PVOID)((a3 - 48) & 0xFFFFFFFFFFFF0000uLL);
    *(_QWORD *)(a1 + 592) -= v34;
    v35 = *(_QWORD *)(a3 - 48);
    v36 = *(__int64 **)(a3 - 48 + 8);
    v37 = *v36;
    v38 = *(_QWORD *)(v35 + 8);
    if ( *v36 == v38 && v37 == v33 )
    {
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, v33, v38, v37, 0LL);
    }
    if ( v5 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
      v5 = 0;
    }
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    goto LABEL_84;
  }
  RegionSize = *(unsigned __int16 *)(a3 + 8);
  v11 = RtlpCoalesceFreeBlocks(a1, a3, &RegionSize);
  v44 = v11;
  v13 = RegionSize;
  if ( RegionSize < *(_QWORD *)(a1 + 176) || RegionSize + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( RegionSize > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v11, RegionSize);
      goto LABEL_84;
    }
    v14 = v8 == 0;
    v15 = (unsigned __int16)RegionSize;
    if ( v14 )
    {
      *(_BYTE *)(v11 + 10) = 0;
      *(_BYTE *)(v11 + 15) = 0;
      v16 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v13);
      else
        Entry = (_QWORD *)*v16;
      while ( v16 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v18 = *((_DWORD *)Entry - 2);
          v42 = v18;
          if ( (v18 & *(_DWORD *)(a1 + 124)) != 0 )
            v42 = v18 ^ *(_DWORD *)(a1 + 136);
          v19 = v42;
          v11 = v44;
          v5 = v39;
        }
        else
        {
          v19 = *((_WORD *)Entry - 4);
        }
        if ( v15 <= v19 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v20 = (_QWORD *)(v11 + 16);
      v21 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v21 == Entry )
      {
        *v20 = Entry;
        *(_QWORD *)(v11 + 24) = v21;
        *v21 = (__int64)v20;
        Entry[1] = v20;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v21, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v11 + 8);
      v22 = *(__int64 ***)(a1 + 312);
      if ( !v22 )
        goto LABEL_72;
      v23 = *(unsigned __int16 *)(v11 + 8);
      while ( 1 )
      {
        v24 = *((unsigned int *)v22 + 2);
        if ( v23 < v24 )
        {
          v25 = *(unsigned __int16 *)(v11 + 8);
          goto LABEL_71;
        }
        if ( !*v22 )
          break;
        v22 = (__int64 **)*v22;
      }
      v25 = v24 - 1;
LABEL_71:
      RtlpHeapAddListEntry(a1, (_DWORD)v22, v24, (_DWORD)v20, v25, v23);
LABEL_72:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
        *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_84;
    }
    *(_BYTE *)(v11 + 10) &= 0xF0u;
    *(_BYTE *)(v11 + 15) = 0;
    if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_51:
      v28 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v29 = (_QWORD *)RtlpFindEntry(a1, v15);
      else
        v29 = (_QWORD *)*v28;
      while ( v28 != v29 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v30 = *((_DWORD *)v29 - 2);
          v43 = v30;
          if ( (v30 & *(_DWORD *)(a1 + 124)) != 0 )
            v43 = v30 ^ *(_DWORD *)(a1 + 136);
          v31 = v43;
          v11 = v44;
          v5 = v39;
        }
        else
        {
          v31 = *((_WORD *)v29 - 4);
        }
        if ( v15 <= v31 )
          break;
        v29 = (_QWORD *)*v29;
      }
      v20 = (_QWORD *)(v11 + 16);
      v32 = (__int64 *)v29[1];
      if ( (_QWORD *)*v32 == v29 )
      {
        *v20 = v29;
        *(_QWORD *)(v11 + 24) = v32;
        *v32 = (__int64)v20;
        v29[1] = v20;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v29, 0, *v32, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v11 + 8);
      v22 = *(__int64 ***)(a1 + 312);
      if ( !v22 )
        goto LABEL_72;
      v23 = *(unsigned __int16 *)(v11 + 8);
      while ( 1 )
      {
        v24 = *((unsigned int *)v22 + 2);
        if ( v23 < v24 )
        {
          v25 = *(unsigned __int16 *)(v11 + 8);
          goto LABEL_71;
        }
        if ( !*v22 )
          break;
        v22 = (__int64 **)*v22;
      }
      v25 = v24 - 1;
      goto LABEL_71;
    }
    v26 = (_DWORD *)(v11 + 32);
    v41 = v11 + 32;
    v27 = (16 * v15 - 32) >> 2;
    if ( v27 )
    {
      if ( ((unsigned __int8)v26 & 4) == 0 )
        goto LABEL_48;
      *v26 = -17891602;
      if ( --v27 )
      {
        v26 = (_DWORD *)(v11 + 36);
        v41 = v11 + 36;
LABEL_48:
        memset64(v26, 0xFEEEFEEEFEEEFEEEuLL, v27 >> 1);
        if ( (v27 & 1) != 0 )
          v26[v27 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v11 + 10) |= 4u;
    goto LABEL_51;
  }
  RtlpDeCommitFreeBlock(a1, v11, RegionSize, v12);
LABEL_84:
  if ( v5 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return 1LL;
}
