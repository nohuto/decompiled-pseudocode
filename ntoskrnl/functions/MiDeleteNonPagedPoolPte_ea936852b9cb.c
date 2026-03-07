__int64 __fastcall MiDeleteNonPagedPoolPte(_QWORD *BugCheckParameter2, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  int v7; // esi
  __int64 v8; // r9
  int i; // eax
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  _DWORD *v13; // r15
  __int64 v14; // rdx
  int v15; // r13d
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  ULONG_PTR LeafVa; // rax
  ULONG_PTR BugCheckParameter4; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // [rsp+78h] [rbp+10h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  v3 = *a2;
  v7 = MiPteInShadowRange(a2);
  if ( v7
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v25 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)a2 >> 3) & 0x1FF));
      v26 = v3 | 0x20;
      if ( (v25 & 0x20) == 0 )
        v26 = v3;
      v3 = v26;
      if ( (v25 & 0x42) != 0 )
        v3 = v26 | 0x42;
    }
  }
  v28 = v3;
  if ( (v3 & 1) != 0 && a3 <= 1 )
  {
    v8 = 1LL;
    for ( i = a3; i; --i )
      v8 <<= 9;
    v10 = BugCheckParameter2[21];
    if ( (v3 & 0x80u) == 0LL )
    {
      v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v28) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v12 = 0x8000000000000000uLL;
      if ( a3 == 1 )
      {
        if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
          || !(unsigned int)MiEvictPageTableLock(&unk_140C69CC0, a2, ZeroPte, 2LL) )
        {
          return 0LL;
        }
        v13 = (_DWORD *)(v10 + 204);
LABEL_12:
        v15 = *(_DWORD *)(v10 + 208);
        if ( !v15 )
          *(_QWORD *)(v10 + 216) = MiGetContainingPageTable(a2, v14, v12);
        *(_DWORD *)(v10 + 208) = v15 + 1;
        v27 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v27);
            while ( *(__int64 *)(v11 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
          v13 = (_DWORD *)(v10 + 204);
        }
        if ( (*v13 & 2) == 0 )
        {
          if ( *(_WORD *)(v11 + 32) != 1 )
            MiBadRefCount(v11, v14, v12);
          *(_BYTE *)(v11 + 34) = *(_BYTE *)(v11 + 34) & 0xF8 | 5;
        }
        if ( a3 )
        {
          *(_QWORD *)v11 = *(_QWORD *)(v10 + 192);
          *(_QWORD *)(v10 + 192) = v11;
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiInsertRecursiveTbFlushEntries(v10, (unsigned int)a3, a2);
          return 0LL;
        }
        if ( (*v13 & 2) == 0 )
        {
          *(_QWORD *)v11 = *(_QWORD *)(v10 + 184);
          *(_QWORD *)(v10 + 184) = v11;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v16 = (*(_DWORD *)(v10 + 200) & 0x40000000) == 0;
        v28 = 0LL;
        if ( !v16 )
          goto LABEL_24;
        MiInitializeTbFlushStamps(&v28, v14, v12);
        v19 = v28;
        if ( v7 )
        {
          if ( (unsigned int)MiPteHasShadow(v17, v28, v18) )
          {
            if ( !HIBYTE(word_140C6697C) && (v19 & 1) != 0 )
              v19 |= 0x8000000000000000uLL;
            *a2 = v19;
            MiWritePteShadow(a2, v19);
            goto LABEL_24;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v19 & 1) != 0 )
          {
            v19 |= 0x8000000000000000uLL;
          }
        }
        *a2 = v19;
LABEL_24:
        v20 = v28;
        if ( qword_140C657C0 && (v28 & 0x10) == 0 )
          v20 = v28 & ~qword_140C657C0;
        if ( (v20 & 0xFFFFFFFF00000000uLL) == 0 )
          MiInsertTbFlushEntry(v10, (__int64)((_QWORD)a2 << 25) >> 16, 1LL);
        return 0LL;
      }
      v13 = (_DWORD *)(v10 + 204);
      if ( (*(_DWORD *)(v10 + 204) & 1) == 0 )
        return 0LL;
      v14 = ZeroPte;
      if ( v7 )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFFFFFFFLL, ZeroPte, 0x8000000000000000uLL) )
        {
          if ( !HIBYTE(word_140C6697C) && (v14 & 1) != 0 )
            v14 |= v12;
          *a2 = v14;
          MiWritePteShadow(a2, v14);
          goto LABEL_10;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v14 & 1) != 0 )
        {
          v14 |= v12;
        }
      }
      *a2 = v14;
LABEL_10:
      if ( (*(_BYTE *)(v11 + 35) & 0x10) == 0 )
        ++*(_DWORD *)(v10 + 212);
      goto LABEL_12;
    }
    if ( (*(_DWORD *)(v10 + 204) & 1) != 0 )
    {
      LeafVa = MiGetLeafVa(a2);
      if ( LeafVa < BugCheckParameter2[4] || LeafVa + (BugCheckParameter4 << 12) - 1 > BugCheckParameter2[5] )
        KeBugCheckEx(0x1Au, 0x5306uLL, (ULONG_PTR)BugCheckParameter2, LeafVa, BugCheckParameter4);
      MiDecommitLargePoolVa(LeafVa, a2, BugCheckParameter4);
      *(_DWORD *)(v10 + 212) += 512;
    }
  }
  return 0LL;
}
