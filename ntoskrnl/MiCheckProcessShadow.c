/*
 * XREFs of MiCheckProcessShadow @ 0x14025F210
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiQueryAddressSpan @ 0x14031E2D0 (MiQueryAddressSpan.c)
 *     MmCheckProcessShadow @ 0x1403CA630 (MmCheckProcessShadow.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiCheckRelevantKernelShadows @ 0x1403CA158 (MiCheckRelevantKernelShadows.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckProcessShadow(__int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // r14
  bool v6; // zf
  __int64 v7; // rdx
  int v8; // r15d
  __int64 v9; // rbp
  ULONG_PTR v10; // r10
  int v11; // r11d
  unsigned __int64 Process; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // r9
  ULONG_PTR v17; // rcx
  ULONG_PTR v18; // r9
  ULONG_PTR BugCheckParameter4; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax

  if ( (MiFlags & 0x600000) == 0 || (*(_BYTE *)(a1 + 184) & 7) != 0 || *(_BYTE *)(a1 - 752) == 1 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) != 0 )
  {
    v6 = (*(_DWORD *)(a1 - 540) & 0x4000000) == 0;
    v5 = *(_QWORD *)(a1 + 264);
  }
  else
  {
    if ( (__rdtsc() & 0x3FF0) != 0 )
      return 0xFFFFFFFFLL;
    v5 = *(_QWORD *)(a1 + 264);
    v6 = v5 == 0;
  }
  if ( v6 || !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) == 0 )
  {
    if ( !(unsigned int)MiWorkingSetIsContended(a1) )
    {
      v8 = a2 & 1;
      if ( (a2 & 1) == 0 || (unsigned int)MiLockPageTableInternal(a1, v7, 1LL) )
        goto LABEL_15;
    }
    return 0xFFFFFFFFLL;
  }
  v8 = a2 & 1;
  if ( (a2 & 1) != 0 )
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
LABEL_15:
  v9 = 0LL;
  v10 = 0xFFFFF6FB7DBED000uLL;
  v11 = 256;
  Process = 0x8000000000000000uLL;
  v13 = 0xCFFFFFFFFFFFFFFFuLL;
  do
  {
    v14 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v21 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
        v22 = v14 | 0x20;
        if ( (v21 & 0x20) == 0 )
          v22 = *(_QWORD *)v10;
        v14 = v22;
        if ( (v21 & 0x42) != 0 )
          v14 = v22 | 0x42;
      }
      Process = 0x8000000000000000uLL;
    }
    v15 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v23 )
        {
          v24 = *((_QWORD *)&v23->Flink + ((v5 >> 3) & 0x1FF));
          v25 = v15 | 0x20;
          if ( (v24 & 0x20) == 0 )
            v25 = *(_QWORD *)v5;
          v15 = v25;
          if ( (v24 & 0x42) != 0 )
            v15 = v25 | 0x42;
        }
        v13 = 0xCFFFFFFFFFFFFFFFuLL;
      }
      Process = 0x8000000000000000uLL;
    }
    if ( (v14 & 1) != 0 )
    {
      v18 = v14 & 0xCFFFFFFFFFFFFFDFuLL | 0x20;
      if ( !HIBYTE(word_140C6697C) )
        v15 |= 0x8000000000000000uLL;
      BugCheckParameter4 = v15 | 0x20;
      if ( v18 != BugCheckParameter4 )
      {
        if ( (a2 & 8) == 0 )
          KeBugCheckEx(0x1Au, 0x3600uLL, v10, v18, BugCheckParameter4);
        goto LABEL_34;
      }
    }
    else if ( v15 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3601uLL, v10, v15, v15);
      goto LABEL_34;
    }
    v10 += 8LL;
    v5 += 8LL;
    ++v9;
    --v11;
  }
  while ( v11 );
  if ( (v10 & 0xFFF) == 0 )
    goto LABEL_33;
  while ( 1 )
  {
    v16 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Process )
      {
        v26 = *(_QWORD *)(Process + 8 * ((v10 >> 3) & 0x1FF));
        Process = v16 | 0x20;
        if ( (v26 & 0x20) == 0 )
          Process = *(_QWORD *)v10;
        v16 = Process;
        if ( (v26 & 0x42) != 0 )
          v16 = Process | 0x42;
      }
    }
    v17 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 912) != 1 && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v13 = *(_QWORD *)(Process + 1928);
        if ( v13 )
        {
          v27 = *(_QWORD *)(v13 + 8 * ((v5 >> 3) & 0x1FF));
          v13 = v17 | 0x20;
          if ( (v27 & 0x20) == 0 )
            v13 = *(_QWORD *)v5;
          v17 = v13;
          if ( (v27 & 0x42) != 0 )
            v17 = v13 | 0x42;
        }
      }
    }
    if ( (v16 & 1) != 0 && (v16 & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3604uLL, v10, v16, v17);
      goto LABEL_32;
    }
    if ( (v17 & 1) != 0 && (v17 & 4) != 0 )
      break;
    v10 += 8LL;
    v5 += 8LL;
    ++v9;
    if ( (v10 & 0xFFF) == 0 )
      goto LABEL_32;
  }
  if ( (a2 & 8) == 0 )
    KeBugCheckEx(0x1Au, 0x3605uLL, v10, v16, v17);
LABEL_32:
  if ( (v10 & 0xFFF) == 0 )
LABEL_33:
    v9 = 0xFFFFFFFFLL;
LABEL_34:
  if ( v8 )
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
  if ( v9 == 0xFFFFFFFFLL && (a2 & 0x10) != 0 )
    return MiCheckRelevantKernelShadows(a2, Process, v13);
  return v9;
}
