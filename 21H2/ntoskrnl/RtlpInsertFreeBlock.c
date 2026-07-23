/*
 * XREFs of RtlpInsertFreeBlock @ 0x14058B5DC
 * Callers:
 *     RtlpCreateSplitBlock @ 0x140589AB0 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A314 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14058A8E4 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x14058ADC4 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x14058B330 (RtlpInitializeHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x140593B14 (RtlpHeapHandleError.c)
 *     RtlpFindEntry @ 0x140593EC4 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x140593FE8 (RtlpHeapAddListEntry.c)
 */

void __fastcall RtlpInsertFreeBlock(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  char v9; // al
  _QWORD *v10; // r14
  unsigned __int16 v11; // r12
  char v12; // cl
  __int64 v13; // rdx
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
    v3 = a2;
    v5 = *(unsigned __int16 *)(a2 + 12);
    v4 = a3;
    LOWORD(v5) = *(_WORD *)(a1 + 140) ^ v5;
    if ( !(_WORD)v5
      && RtlpHeapErrorHandlerThreshold >= 1
      && (*(_BYTE *)(v3 + 10) & 8) == 0
      && ((v3 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v3 )
    {
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))",
        v5,
        a3,
        0LL);
      RtlpHeapHandleError();
    }
    v7 = *(unsigned __int8 *)(v3 + 14);
    if ( (_BYTE)v7 )
      v8 = (v3 & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
    else
      v8 = a1;
    v9 = *(_BYTE *)(v3 + 10);
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
      *(_BYTE *)(v3 + 10) = v12;
      *(_WORD *)(v3 + 12) = v5 ^ *(_WORD *)(a1 + 140);
      v13 = *(_QWORD *)(v8 + 40);
      if ( v13 == v8 )
      {
        LOBYTE(v14) = 0;
      }
      else
      {
        v14 = ((v3 - v8) >> 16) + 1;
        if ( v14 >= 0xFE )
          RtlpLogHeapFailure(3, v13, v3, v8, 0LL, 0LL);
      }
      *(_BYTE *)(v3 + 10) &= 0xF0u;
      *(_BYTE *)(v3 + 14) = v14;
      *(_WORD *)(v3 + 8) = v11;
      *(_BYTE *)(v3 + 11) = 0;
      *(_BYTE *)(v3 + 15) = 0;
      if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      {
        v15 = (_DWORD *)(v3 + 32);
        v16 = (16 * (unsigned __int64)v11 - 32) >> 2;
        if ( v16 )
        {
          if ( ((unsigned __int8)v15 & 4) != 0 )
          {
            --v16;
            *v15 = -17891602;
            v15 = (_DWORD *)(v3 + 36);
          }
          memset64(v15, 0xFEEEFEEEFEEEFEEEuLL, v16 >> 1);
          if ( (v16 & 1) != 0 )
            v15[v16 - 1] = -17891602;
        }
        *(_BYTE *)(v3 + 10) |= 4u;
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
      v22 = (_QWORD *)(v3 + 16);
      if ( (_QWORD *)*v21 == Entry )
      {
        *v22 = Entry;
        *(_QWORD *)(v3 + 24) = v21;
        *v21 = (__int64)v22;
        Entry[1] = v22;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v21, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v3 + 8);
      v23 = *(__int64 **)(a1 + 312);
      if ( v23 )
      {
        for ( i = *((unsigned int *)v23 + 2); ; i = *((unsigned int *)v25 + 2) )
        {
          if ( *(unsigned __int16 *)(v3 + 8) < i )
          {
            v26 = *(unsigned __int16 *)(v3 + 8);
            goto LABEL_50;
          }
          v25 = (__int64 *)*v23;
          if ( !*v23 )
            break;
          v23 = (__int64 *)*v23;
        }
        v26 = *((_DWORD *)v23 + 2) - 1;
LABEL_50:
        RtlpHeapAddListEntry(a1, (_DWORD)v23, (_DWORD)Entry, v3 + 16, v26, *(unsigned __int16 *)(v3 + 8));
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v3 + 11) = *(_BYTE *)(v3 + 8) ^ *(_BYTE *)(v3 + 9) ^ *(_BYTE *)(v3 + 10);
        *(_DWORD *)(v3 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v4 -= v11;
      LOWORD(v5) = v11;
      v3 += 16LL * v11;
      if ( v3 >= *(_QWORD *)(v8 + 72) )
        break;
      v9 = v28;
      v10 = (_QWORD *)(a1 + 336);
      if ( !v4 )
      {
        *(_WORD *)(v3 + 12) = v11 ^ *(_WORD *)(a1 + 140);
        return;
      }
    }
  }
}
