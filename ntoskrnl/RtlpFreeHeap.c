/*
 * XREFs of RtlpFreeHeap @ 0x1405AAE88
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1402E0AF4 (RtlpFreeHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ZwFreeVirtualMemory @ 0x1404126D0 (ZwFreeVirtualMemory.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405A97B8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AA41C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1405AB78C (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405B28D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1405B2FB0 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x1405B30D4 (RtlpHeapAddListEntry.c)
 */

__int64 __fastcall RtlpFreeHeap(__int64 a1, int a2, __int64 a3)
{
  char v5; // r15
  int v7; // edx
  int v8; // r14d
  __int64 **v9; // rcx
  char v10; // al
  __int64 v11; // rsi
  unsigned __int16 v12; // r8
  bool v13; // zf
  unsigned __int64 v14; // r14
  _QWORD *v15; // rdi
  _QWORD *Entry; // r8
  int v17; // eax
  unsigned __int16 v18; // ax
  _QWORD *v19; // rdi
  __int64 *v20; // rax
  __int64 **v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  _DWORD *v24; // r8
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rdi
  _QWORD *v27; // r8
  int v28; // eax
  unsigned __int16 v29; // ax
  __int64 *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  char v37; // [rsp+30h] [rbp-78h]
  PVOID BaseAddress; // [rsp+50h] [rbp-58h] BYREF
  __int64 v39; // [rsp+58h] [rbp-50h]
  int v40; // [rsp+68h] [rbp-40h]
  int v41; // [rsp+78h] [rbp-30h]
  __int64 v42; // [rsp+C0h] [rbp+18h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+20h] BYREF

  RegionSize = 0LL;
  v5 = 0;
  v37 = 0;
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
    v37 = 1;
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
    v31 = a3 - 48;
    v32 = *(_QWORD *)(a3 - 48 + 32);
    BaseAddress = (PVOID)((a3 - 48) & 0xFFFFFFFFFFFF0000uLL);
    *(_QWORD *)(a1 + 592) -= v32;
    v33 = *(_QWORD *)(a3 - 48);
    v34 = *(__int64 **)(a3 - 48 + 8);
    v35 = *v34;
    v36 = *(_QWORD *)(v33 + 8);
    if ( *v34 == v36 && v35 == v31 )
    {
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, v31, v36, v35, 0LL);
    }
    if ( v5 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
      v5 = 0;
    }
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    goto LABEL_83;
  }
  RegionSize = *(unsigned __int16 *)(a3 + 8);
  v11 = RtlpCoalesceFreeBlocks(a1, a3, &RegionSize);
  v42 = v11;
  v12 = RegionSize;
  if ( RegionSize < *(_QWORD *)(a1 + 176) || RegionSize + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( RegionSize > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v11, RegionSize);
      goto LABEL_83;
    }
    v13 = v8 == 0;
    v14 = (unsigned __int16)RegionSize;
    if ( v13 )
    {
      *(_BYTE *)(v11 + 10) = 0;
      *(_BYTE *)(v11 + 15) = 0;
      v15 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v12);
      else
        Entry = (_QWORD *)*v15;
      while ( v15 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v17 = *((_DWORD *)Entry - 2);
          v40 = v17;
          if ( (v17 & *(_DWORD *)(a1 + 124)) != 0 )
            v40 = *(_DWORD *)(a1 + 136) ^ v17;
          v18 = v40;
          v11 = v42;
          v5 = v37;
        }
        else
        {
          v18 = *((_WORD *)Entry - 4);
        }
        if ( v14 <= v18 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v19 = (_QWORD *)(v11 + 16);
      v20 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v20 == Entry )
      {
        *v19 = Entry;
        *(_QWORD *)(v11 + 24) = v20;
        *v20 = (__int64)v19;
        Entry[1] = v19;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v20, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v11 + 8);
      v21 = *(__int64 ***)(a1 + 312);
      if ( !v21 )
        goto LABEL_71;
      v22 = *(unsigned __int16 *)(v11 + 8);
      while ( 1 )
      {
        v23 = *((unsigned int *)v21 + 2);
        if ( v22 < v23 )
          break;
        if ( !*v21 )
        {
          LODWORD(v22) = v23 - 1;
          break;
        }
        v21 = (__int64 **)*v21;
      }
LABEL_70:
      RtlpHeapAddListEntry(a1, (_DWORD)v21, v23, (_DWORD)v19, v22, *(unsigned __int16 *)(v11 + 8));
LABEL_71:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
        *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_83;
    }
    *(_BYTE *)(v11 + 10) &= 0xF0u;
    *(_BYTE *)(v11 + 15) = 0;
    if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_51:
      v26 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v27 = (_QWORD *)RtlpFindEntry(a1, v14);
      else
        v27 = (_QWORD *)*v26;
      while ( v26 != v27 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v28 = *((_DWORD *)v27 - 2);
          v41 = v28;
          if ( (v28 & *(_DWORD *)(a1 + 124)) != 0 )
            v41 = *(_DWORD *)(a1 + 136) ^ v28;
          v29 = v41;
          v11 = v42;
          v5 = v37;
        }
        else
        {
          v29 = *((_WORD *)v27 - 4);
        }
        if ( v14 <= v29 )
          break;
        v27 = (_QWORD *)*v27;
      }
      v19 = (_QWORD *)(v11 + 16);
      v30 = (__int64 *)v27[1];
      if ( (_QWORD *)*v30 == v27 )
      {
        *v19 = v27;
        *(_QWORD *)(v11 + 24) = v30;
        *v30 = (__int64)v19;
        v27[1] = v19;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v27, 0, *v30, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v11 + 8);
      v21 = *(__int64 ***)(a1 + 312);
      if ( !v21 )
        goto LABEL_71;
      v22 = *(unsigned __int16 *)(v11 + 8);
      while ( 1 )
      {
        v23 = *((unsigned int *)v21 + 2);
        if ( v22 < v23 )
          goto LABEL_70;
        if ( !*v21 )
        {
          LODWORD(v22) = v23 - 1;
          goto LABEL_70;
        }
        v21 = (__int64 **)*v21;
      }
    }
    v24 = (_DWORD *)(v11 + 32);
    v39 = v11 + 32;
    v25 = (16 * v14 - 32) >> 2;
    if ( v25 )
    {
      if ( ((unsigned __int8)v24 & 4) == 0 )
        goto LABEL_48;
      *v24 = -17891602;
      if ( --v25 )
      {
        v24 = (_DWORD *)(v11 + 36);
        v39 = v11 + 36;
LABEL_48:
        memset64(v24, 0xFEEEFEEEFEEEFEEEuLL, v25 >> 1);
        if ( (v25 & 1) != 0 )
          v24[v25 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v11 + 10) |= 4u;
    goto LABEL_51;
  }
  RtlpDeCommitFreeBlock(a1, v11, RegionSize);
LABEL_83:
  if ( v5 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return 1LL;
}
