/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x14058A314
 * Callers:
 *     RtlpFreeHeap @ 0x14058ADC4 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     ZwFreeVirtualMemory @ 0x1403FA940 (ZwFreeVirtualMemory.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405896C0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateUCREntry @ 0x14058A1D4 (RtlpCreateUCREntry.c)
 *     RtlpInsertFreeBlock @ 0x14058B5DC (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x14058B920 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x14058BA78 (RtlpRemoveUCRBlock.c)
 *     RtlpUpdateHeapRates @ 0x14058BE54 (RtlpUpdateHeapRates.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x140593B14 (RtlpHeapHandleError.c)
 */

unsigned __int64 __fastcall RtlpDeCommitFreeBlock(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // di
  __int64 v5; // rsi
  __int64 v6; // rbx
  char v7; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  _WORD *v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r12
  _WORD *v14; // r15
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _QWORD *i; // rdx
  _QWORD *v18; // rcx
  _WORD *v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  bool v26; // zf
  _QWORD *v27; // r13
  unsigned __int64 v28; // rax
  ULONG_PTR v29; // rcx
  unsigned __int64 result; // rax
  char *v31; // r14
  ULONG_PTR v32; // r15
  bool v33; // cc
  __int64 v34; // rdx
  char *v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  ULONG_PTR v39; // rax
  char *v40; // r15
  ULONG_PTR v41; // r14
  __int64 v42; // rdx
  PVOID BaseAddress; // [rsp+30h] [rbp-30h] BYREF
  __int64 v44; // [rsp+38h] [rbp-28h]
  __int64 v45; // [rsp+40h] [rbp-20h]
  _QWORD *v46; // [rsp+48h] [rbp-18h]
  char *v47; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v49; // [rsp+B0h] [rbp+50h] BYREF
  char v50; // [rsp+B8h] [rbp+58h]

  v50 = a4;
  v49 = a3;
  v4 = 0;
  v26 = RtlpHeapKey == *(_QWORD *)(a1 + 360);
  v5 = a2;
  v6 = a1;
  v47 = 0LL;
  v44 = 0LL;
  v7 = 0;
  v50 = 0;
  if ( !v26 || a3 < *(_QWORD *)(a1 + 176) )
    return RtlpInsertFreeBlock(a1, a2, a3);
  v8 = a3 + *(_QWORD *)(a1 + 192);
  if ( v8 < *(_QWORD *)(a1 + 184) || v8 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
  {
LABEL_79:
    a1 = v6;
    return RtlpInsertFreeBlock(a1, a2, a3);
  }
  v11 = (_WORD *)RtlpCoalesceFreeBlocks(a1, a2, &v49);
  if ( *(_BYTE *)(v5 + 14) )
  {
    v9 = (unsigned __int64)*(unsigned __int8 *)(v5 + 14) << 16;
    v12 = (v5 & 0xFFFFFFFFFFFF0000uLL) - v9 + 0x10000;
  }
  else
  {
    v12 = v6;
  }
  v13 = v49;
  v14 = &v11[8 * v49];
  if ( *((_BYTE *)v14 + 15) == 3 )
  {
    RtlpRemoveUCRBlock(v9, v14 + 8, v10, 1LL);
    v15 = *((_QWORD *)v14 + 7);
    v44 = *((_QWORD *)v14 + 6);
    v45 = v15;
    --*(_DWORD *)(v12 + 84);
    *(_DWORD *)(v12 + 80) -= *((_QWORD *)v14 + 7) >> 12;
    *(_QWORD *)(v6 + 576) += *((_QWORD *)v14 + 7);
    --*(_DWORD *)(v6 + 604);
    v16 = *((_QWORD *)v14 + 7);
    if ( v16 >= 0xFF000 )
    {
      *(_QWORD *)(v6 + 584) -= v16;
      v16 = *((_QWORD *)v14 + 7);
    }
    v50 = 1;
    v13 += (v16 >> 4) + 64;
    v7 = 1;
    v49 = v13;
  }
  else
  {
    v45 = 0LL;
  }
  if ( *(_WORD *)(v6 + 140) != v11[6] )
  {
    v35 = (char *)(((unsigned __int64)v11 + 4159) & 0xFFFFFFFFFFFFF000uLL);
    BaseAddress = v35;
    if ( v35 == (char *)(v11 + 40) )
    {
      v35 += 4096;
      BaseAddress = v35;
    }
    if ( v7 )
    {
      v36 = 8 * v13;
      v37 = (__int64)&v11[8 * v13];
    }
    else
    {
      v36 = 8 * v13;
      v37 = (__int64)&v11[8 * v13 - 16];
    }
    v38 = v37 & 0xFFFFFFFFFFFFF000uLL;
    if ( v38 < (unsigned __int64)v35 )
    {
      if ( RtlpHeapErrorHandlerThreshold >= 1 && v50 )
      {
        DbgPrint("(!TrailingUCR)");
        RtlpHeapHandleError();
      }
      goto LABEL_29;
    }
    v39 = v38 - (_QWORD)v35;
    RegionSize = v39;
    if ( *((_BYTE *)v14 + 15) != 3 && (!v39 || v39 < *(_QWORD *)(v6 + 176)) )
    {
LABEL_29:
      a3 = v13;
LABEL_30:
      a2 = (__int64)v11;
      goto LABEL_79;
    }
    if ( !v39
      || (++*(_DWORD *)(v6 + 612),
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) >= 0) )
    {
      if ( !v50 )
      {
        v40 = (char *)BaseAddress + RegionSize;
        *(_WORD *)((char *)BaseAddress + RegionSize + 12) = *(_WORD *)(v6 + 140);
        if ( &v11[v36] == (_WORD *)((char *)BaseAddress + RegionSize) )
        {
          if ( *(_DWORD *)(v6 + 124) )
          {
            v40[11] = v40[8] ^ v40[9] ^ v40[10];
            *((_DWORD *)v40 + 2) ^= *(_DWORD *)(v6 + 136);
          }
        }
        else
        {
          v40[15] = 0;
          v40[10] = 0;
          v41 = ((unsigned __int64)v11 + v36 * 2 - RegionSize - (_QWORD)BaseAddress) >> 4;
          v33 = RtlpHeapErrorHandlerThreshold < 1;
          *((_WORD *)v40 + 4) = v41;
          if ( !v33 && (unsigned __int16)v41 <= 1u )
          {
            DbgPrint("(LONG)FreeEntry->Size > 1");
            RtlpHeapHandleError();
          }
          v40[11] = 0;
          v42 = *(_QWORD *)(v12 + 40);
          if ( v42 != v12 )
          {
            if ( ((unsigned __int64)&v40[-v12] >> 16) + 1 >= 0xFE )
            {
              RtlpLogHeapFailure(3, v42, (_DWORD)v40, v12, 0LL, 0LL);
              LOWORD(v41) = *((_WORD *)v40 + 4);
            }
            v4 = ((unsigned int)((_DWORD)v40 - v12) >> 16) + 1;
          }
          v40[14] = v4;
          RtlpInsertFreeBlock(v6, v40, (unsigned __int16)v41);
        }
      }
      RtlpCreateUCREntry(v6, v12, (__int64)BaseAddress - 48, RegionSize, (unsigned __int64)v11, (__int64 *)&v47);
      a3 = (unsigned __int64)v47;
      goto LABEL_30;
    }
    RtlpUpdateHeapRates(v6, 3LL);
    v26 = v50 == 0;
LABEL_33:
    if ( !v26 )
    {
      RtlpCreateUCREntry(v25, v12, v44 - 48, v45, (unsigned __int64)v11, &v49);
      v13 = v49;
    }
    goto LABEL_29;
  }
  BaseAddress = v11;
  for ( i = *(_QWORD **)(v12 + 96); (_QWORD *)(v12 + 96) != i; i = (_QWORD *)*i )
  {
    v18 = i - 2;
    v19 = (_WORD *)(i[2] + i[3]);
    v46 = i - 2;
    if ( v19 == v11 )
      goto LABEL_19;
  }
  v18 = 0LL;
  v46 = 0LL;
LABEL_19:
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v18 )
  {
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError();
  }
  v20 = 8 * v13;
  if ( v7 )
  {
    v21 = (__int64)&v11[v20];
    v47 = (char *)&v11[v20];
  }
  else
  {
    v47 = (char *)&v11[v20];
    v21 = (__int64)&v11[v20 - 16];
  }
  RegionSize = (v21 & 0xFFFFFFFFFFFFF000uLL) - (_QWORD)v11;
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
    RtlpUpdateHeapRates(v6, 3LL);
    v26 = v7 == 0;
    goto LABEL_33;
  }
  v27 = v46;
  ++*(_DWORD *)(v6 + 612);
  v28 = v27[5];
  if ( v28 >= 0xFF000 )
    *(_QWORD *)(v6 + 584) -= v28;
  RtlpRemoveUCRBlock(v22, v27, v23, v24);
  v27[5] += RegionSize;
  RtlpInsertUCRBlock(v6, v27);
  *(_DWORD *)(v12 + 80) += RegionSize >> 12;
  v29 = RegionSize;
  *(_QWORD *)(v6 + 576) -= RegionSize;
  result = v27[5];
  if ( result >= 0xFF000 )
    *(_QWORD *)(v6 + 584) += result;
  if ( !v7 )
  {
    result = *(unsigned __int16 *)(v6 + 140);
    v31 = (char *)BaseAddress + v29;
    *(_WORD *)((char *)BaseAddress + v29 + 12) = result;
    if ( v47 != (char *)BaseAddress + RegionSize )
    {
      v31[15] = 0;
      v31[10] = 0;
      v32 = (v20 * 2 - RegionSize) >> 4;
      v33 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v31 + 4) = v32;
      if ( !v33 && (unsigned __int16)v32 <= 1u )
      {
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError();
      }
      v31[11] = 0;
      v34 = *(_QWORD *)(v12 + 40);
      if ( v34 != v12 )
      {
        if ( ((unsigned __int64)&v31[-v12] >> 16) + 1 >= 0xFE )
        {
          RtlpLogHeapFailure(3, v34, (_DWORD)v31, v12, 0LL, 0LL);
          LOWORD(v32) = *((_WORD *)v31 + 4);
        }
        v4 = ((unsigned int)((_DWORD)v31 - v12) >> 16) + 1;
      }
      v31[14] = v4;
      a2 = (__int64)v31;
      a3 = (unsigned __int16)v32;
      goto LABEL_79;
    }
    if ( *(_DWORD *)(v6 + 124) )
    {
      v31[11] = v31[8] ^ v31[9] ^ v31[10];
      result = *(unsigned int *)(v6 + 136);
      *((_DWORD *)v31 + 2) ^= result;
    }
  }
  return result;
}
