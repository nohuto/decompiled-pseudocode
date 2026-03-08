/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x1405AA41C
 * Callers:
 *     RtlpFreeHeap @ 0x1405AAE88 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     ZwFreeVirtualMemory @ 0x1404126D0 (ZwFreeVirtualMemory.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405A97B8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateUCREntry @ 0x1405AA2DC (RtlpCreateUCREntry.c)
 *     RtlpInsertFreeBlock @ 0x1405AB78C (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1405ABAD4 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1405ABC2C (RtlpRemoveUCRBlock.c)
 *     RtlpUpdateHeapRates @ 0x1405AC014 (RtlpUpdateHeapRates.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1405B2C0C (RtlpHeapHandleError.c)
 */

unsigned __int64 __fastcall RtlpDeCommitFreeBlock(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // si
  bool v4; // zf
  __int64 v5; // r14
  __int64 v6; // rbx
  char v7; // r15
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  _WORD *v11; // r13
  __int64 v12; // r14
  __int64 v13; // rdi
  _WORD *v14; // r12
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _QWORD *i; // rcx
  _QWORD *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  ULONG_PTR v24; // rcx
  unsigned __int64 result; // rax
  char *v26; // r15
  __int64 v27; // rdi
  ULONG_PTR v28; // rdi
  bool v29; // cc
  __int64 v30; // rdx
  char *v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  ULONG_PTR v34; // rcx
  char *v35; // r15
  __int64 v36; // rdi
  ULONG_PTR v37; // rdi
  __int64 v38; // rdx
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  __int64 v40; // [rsp+38h] [rbp-18h]
  __int64 v41; // [rsp+40h] [rbp-10h]
  unsigned __int64 v42; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+40h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+50h] BYREF

  v44 = a3;
  v3 = 0;
  v4 = RtlpHeapKey == *(_QWORD *)(a1 + 360);
  v5 = a2;
  v6 = a1;
  v42 = 0LL;
  v40 = 0LL;
  v7 = 0;
  if ( !v4 || a3 < *(_QWORD *)(a1 + 176) )
    return RtlpInsertFreeBlock(a1, a2, a3);
  v8 = a3 + *(_QWORD *)(a1 + 192);
  if ( v8 < *(_QWORD *)(a1 + 184) || v8 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
  {
LABEL_78:
    a1 = v6;
    return RtlpInsertFreeBlock(a1, a2, a3);
  }
  v11 = (_WORD *)RtlpCoalesceFreeBlocks(a1, a2, &v44);
  if ( *(_BYTE *)(v5 + 14) )
  {
    v9 = (unsigned __int64)*(unsigned __int8 *)(v5 + 14) << 16;
    v12 = (v5 & 0xFFFFFFFFFFFF0000uLL) - v9 + 0x10000;
  }
  else
  {
    v12 = v6;
  }
  v13 = v44;
  v14 = &v11[8 * v44];
  if ( *((_BYTE *)v14 + 15) == 3 )
  {
    RtlpRemoveUCRBlock(v9, v14 + 8, v10, 1LL);
    v15 = *((_QWORD *)v14 + 7);
    v40 = *((_QWORD *)v14 + 6);
    v41 = v15;
    --*(_DWORD *)(v12 + 84);
    *(_DWORD *)(v12 + 80) -= *((_QWORD *)v14 + 7) >> 12;
    *(_QWORD *)(v6 + 576) += *((_QWORD *)v14 + 7);
    --*(_DWORD *)(v6 + 604);
    v16 = *((_QWORD *)v14 + 7);
    if ( v16 >= 0xFF000 )
      *(_QWORD *)(v6 + 584) -= v16;
    v13 += (*((_QWORD *)v14 + 7) >> 4) + 64LL;
    v7 = 1;
    v44 = v13;
  }
  else
  {
    v41 = 0LL;
  }
  if ( *(_WORD *)(v6 + 140) != v11[6] )
  {
    v31 = (char *)(((unsigned __int64)v11 + 4159) & 0xFFFFFFFFFFFFF000uLL);
    BaseAddress = v31;
    if ( v31 == (char *)(v11 + 40) )
    {
      v31 += 4096;
      BaseAddress = v31;
    }
    if ( v7 )
      v32 = (__int64)&v11[8 * v13];
    else
      v32 = (__int64)&v11[8 * v13 - 16];
    v33 = v32 & 0xFFFFFFFFFFFFF000uLL;
    if ( v33 < (unsigned __int64)v31 )
    {
      if ( RtlpHeapErrorHandlerThreshold >= 1 && v7 )
      {
        DbgPrint("(!TrailingUCR)");
        RtlpHeapHandleError();
      }
      goto LABEL_29;
    }
    v34 = v33 - (_QWORD)v31;
    RegionSize = v34;
    if ( *((_BYTE *)v14 + 15) == 3 )
    {
      if ( !v34 )
        goto LABEL_62;
    }
    else if ( !v34 || v34 < *(_QWORD *)(v6 + 176) )
    {
LABEL_29:
      a3 = v13;
LABEL_30:
      a2 = (__int64)v11;
      goto LABEL_78;
    }
    ++*(_DWORD *)(v6 + 612);
    if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) < 0 )
      goto LABEL_32;
LABEL_62:
    if ( !v7 )
    {
      v35 = (char *)BaseAddress + RegionSize;
      v36 = 8 * v13;
      *(_WORD *)((char *)BaseAddress + RegionSize + 12) = *(_WORD *)(v6 + 140);
      if ( &v11[v36] == (_WORD *)((char *)BaseAddress + RegionSize) )
      {
        if ( *(_DWORD *)(v6 + 124) )
        {
          v35[11] = v35[8] ^ v35[9] ^ v35[10];
          *((_DWORD *)v35 + 2) ^= *(_DWORD *)(v6 + 136);
        }
      }
      else
      {
        v35[15] = 0;
        v35[10] = 0;
        v37 = ((unsigned __int64)v11 + v36 * 2 - RegionSize - (_QWORD)BaseAddress) >> 4;
        v29 = RtlpHeapErrorHandlerThreshold < 1;
        *((_WORD *)v35 + 4) = v37;
        if ( !v29 && (unsigned __int16)v37 <= 1u )
        {
          DbgPrint("(LONG)FreeEntry->Size > 1");
          RtlpHeapHandleError();
        }
        v35[11] = 0;
        v38 = *(_QWORD *)(v12 + 40);
        if ( v38 != v12 )
        {
          if ( ((unsigned __int64)&v35[-v12] >> 16) + 1 >= 0xFE )
          {
            RtlpLogHeapFailure(3, v38, (_DWORD)v35, v12, 0LL, 0LL);
            LOWORD(v37) = *((_WORD *)v35 + 4);
          }
          v3 = ((unsigned int)((_DWORD)v35 - v12) >> 16) + 1;
        }
        v35[14] = v3;
        RtlpInsertFreeBlock(v6, v35, (unsigned __int16)v37);
      }
    }
    RtlpCreateUCREntry(v6, v12, (__int64)BaseAddress - 48, RegionSize, (unsigned __int64)v11, (__int64 *)&v42);
    a3 = v42;
    goto LABEL_30;
  }
  BaseAddress = v11;
  for ( i = *(_QWORD **)(v12 + 96); (_QWORD *)(v12 + 96) != i; i = (_QWORD *)*i )
  {
    v18 = i - 2;
    if ( (_WORD *)(i[2] + i[3]) == v11 )
      goto LABEL_19;
  }
  v18 = 0LL;
LABEL_19:
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v18 )
  {
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError();
  }
  if ( v7 )
    v19 = (__int64)&v11[8 * v13];
  else
    v19 = (__int64)&v11[8 * v13 - 16];
  RegionSize = (v19 & 0xFFFFFFFFFFFFF000uLL) - (_QWORD)v11;
  if ( !RegionSize )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      if ( v7 )
      {
        DbgPrint("(!TrailingUCR)");
        RtlpHeapHandleError();
      }
    }
    goto LABEL_29;
  }
  if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) < 0 )
  {
LABEL_32:
    RtlpUpdateHeapRates(v6, 3LL);
    if ( v7 )
    {
      RtlpCreateUCREntry(v22, v12, v40 - 48, v41, (unsigned __int64)v11, &v44);
      v13 = v44;
    }
    goto LABEL_29;
  }
  ++*(_DWORD *)(v6 + 612);
  v23 = v18[5];
  if ( v23 >= 0xFF000 )
    *(_QWORD *)(v6 + 584) -= v23;
  RtlpRemoveUCRBlock(v23, v18, v20, v21);
  v18[5] += RegionSize;
  RtlpInsertUCRBlock(v6, v18);
  *(_DWORD *)(v12 + 80) += RegionSize >> 12;
  v24 = RegionSize;
  *(_QWORD *)(v6 + 576) -= RegionSize;
  result = v18[5];
  if ( result >= 0xFF000 )
    *(_QWORD *)(v6 + 584) += result;
  if ( !v7 )
  {
    result = *(unsigned __int16 *)(v6 + 140);
    v26 = (char *)BaseAddress + v24;
    v27 = 8 * v13;
    *(_WORD *)((char *)BaseAddress + v24 + 12) = result;
    if ( &v11[v27] != (_WORD *)((char *)BaseAddress + RegionSize) )
    {
      v26[15] = 0;
      v26[10] = 0;
      v28 = (v27 * 2 - RegionSize) >> 4;
      v29 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v26 + 4) = v28;
      if ( !v29 && (unsigned __int16)v28 <= 1u )
      {
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError();
      }
      v26[11] = 0;
      v30 = *(_QWORD *)(v12 + 40);
      if ( v30 != v12 )
      {
        if ( ((unsigned __int64)&v26[-v12] >> 16) + 1 >= 0xFE )
        {
          RtlpLogHeapFailure(3, v30, (_DWORD)v26, v12, 0LL, 0LL);
          LOWORD(v28) = *((_WORD *)v26 + 4);
        }
        v3 = ((unsigned int)((_DWORD)v26 - v12) >> 16) + 1;
      }
      v26[14] = v3;
      a2 = (__int64)v26;
      a3 = (unsigned __int16)v28;
      goto LABEL_78;
    }
    if ( *(_DWORD *)(v6 + 124) )
    {
      v26[11] = v26[8] ^ v26[9] ^ v26[10];
      result = *(unsigned int *)(v6 + 136);
      *((_DWORD *)v26 + 2) ^= result;
    }
  }
  return result;
}
