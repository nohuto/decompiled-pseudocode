/*
 * XREFs of RtlpInsertFreeBlock @ 0x1405AB78C
 * Callers:
 *     RtlpCreateSplitBlock @ 0x1405A9BA8 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AA41C (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405AA9D8 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405AAE88 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1405AB4DC (RtlpInitializeHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1405B2C0C (RtlpHeapHandleError.c)
 *     RtlpFindEntry @ 0x1405B2FB0 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x1405B30D4 (RtlpHeapAddListEntry.c)
 */

void __fastcall RtlpInsertFreeBlock(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbx
  __int16 v6; // cx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  char v9; // al
  _QWORD *v10; // r14
  unsigned __int16 v11; // r12
  char v12; // dl
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  _DWORD *v15; // r8
  unsigned __int64 v16; // rdx
  _QWORD *Entry; // r8
  int v18; // ecx
  int v19; // eax
  unsigned __int16 v20; // ax
  __int64 *v21; // rax
  _QWORD *v22; // r14
  __int64 *v23; // rdx
  unsigned __int64 i; // rax
  __int64 *v25; // rax
  int v26; // ecx
  int v27; // [rsp+38h] [rbp-30h]
  char v28; // [rsp+80h] [rbp+18h]

  if ( a3 )
  {
    v4 = a3;
    v5 = a2;
    v6 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
    if ( !v6
      && RtlpHeapErrorHandlerThreshold >= 1
      && (*(_BYTE *)(a2 + 10) & 8) == 0
      && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
    {
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))",
        a2,
        a3,
        0LL);
      RtlpHeapHandleError();
    }
    v7 = *(unsigned __int8 *)(a2 + 14);
    if ( (_BYTE)v7 )
      v8 = (a2 & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
    else
      v8 = a1;
    v9 = *(_BYTE *)(a2 + 10);
    v10 = (_QWORD *)(a1 + 336);
    v28 = v9;
    while ( 1 )
    {
      if ( v4 <= 0xFF00 )
      {
        v11 = v4;
      }
      else
      {
        v11 = -272;
        if ( v4 != 65281 )
          v11 = -256;
      }
      v12 = 0;
      if ( v4 <= 0xFF00 )
        v12 = v9;
      *(_BYTE *)(v5 + 10) = v12;
      *(_WORD *)(v5 + 12) = *(_WORD *)(a1 + 140) ^ v6;
      v13 = *(_QWORD *)(v8 + 40);
      if ( v13 == v8 )
      {
        LOBYTE(v14) = 0;
      }
      else
      {
        v14 = ((v5 - v8) >> 16) + 1;
        if ( v14 >= 0xFE )
        {
          RtlpLogHeapFailure(3, v13, v5, v8, 0LL, 0LL);
          v12 = *(_BYTE *)(v5 + 10);
        }
      }
      *(_BYTE *)(v5 + 14) = v14;
      *(_BYTE *)(v5 + 10) = v12 & 0xF0;
      *(_WORD *)(v5 + 8) = v11;
      *(_BYTE *)(v5 + 11) = 0;
      *(_BYTE *)(v5 + 15) = 0;
      if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      {
        v15 = (_DWORD *)(v5 + 32);
        v16 = (16 * (unsigned __int64)v11 - 32) >> 2;
        if ( v16 )
        {
          if ( ((unsigned __int8)v15 & 4) != 0 )
          {
            --v16;
            *v15 = -17891602;
            v15 = (_DWORD *)(v5 + 36);
          }
          memset64(v15, 0xFEEEFEEEFEEEFEEEuLL, v16 >> 1);
          if ( (v16 & 1) != 0 )
            v15[v16 - 1] = -17891602;
        }
        *(_BYTE *)(v5 + 10) |= 4u;
      }
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v11);
      else
        Entry = (_QWORD *)*v10;
      if ( v10 != Entry )
      {
        v18 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v18 )
          {
            v19 = *((_DWORD *)Entry - 2);
            v18 = *(_DWORD *)(a1 + 124);
            LOWORD(v27) = v19;
            if ( (v18 & v19) != 0 )
              v27 = *(_DWORD *)(a1 + 136) ^ v19;
            v20 = v27;
          }
          else
          {
            v20 = *((_WORD *)Entry - 4);
          }
          if ( v11 <= (unsigned __int64)v20 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        while ( v10 != Entry );
      }
      v21 = (__int64 *)Entry[1];
      v22 = (_QWORD *)(v5 + 16);
      if ( (_QWORD *)*v21 == Entry )
      {
        *v22 = Entry;
        *(_QWORD *)(v5 + 24) = v21;
        *v21 = (__int64)v22;
        Entry[1] = v22;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v21, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v5 + 8);
      v23 = *(__int64 **)(a1 + 312);
      if ( v23 )
      {
        for ( i = *((unsigned int *)v23 + 2); ; i = *((unsigned int *)v25 + 2) )
        {
          if ( *(unsigned __int16 *)(v5 + 8) < i )
          {
            v26 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_50;
          }
          v25 = (__int64 *)*v23;
          if ( !*v23 )
            break;
          v23 = (__int64 *)*v23;
        }
        v26 = *((_DWORD *)v23 + 2) - 1;
LABEL_50:
        RtlpHeapAddListEntry(a1, (_DWORD)v23, (_DWORD)Entry, v5 + 16, v26, *(unsigned __int16 *)(v5 + 8));
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v5 + 11) = *(_BYTE *)(v5 + 8) ^ *(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10);
        *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v4 -= v11;
      v6 = v11;
      v5 += 16LL * v11;
      if ( v5 >= *(_QWORD *)(v8 + 72) )
        break;
      v9 = v28;
      v10 = (_QWORD *)(a1 + 336);
      if ( !v4 )
      {
        *(_WORD *)(v5 + 12) = *(_WORD *)(a1 + 140) ^ v11;
        return;
      }
    }
  }
}
