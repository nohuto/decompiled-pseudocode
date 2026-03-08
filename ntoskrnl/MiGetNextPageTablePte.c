/*
 * XREFs of MiGetNextPageTablePte @ 0x140224090
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiReleaseWalkLocks @ 0x1402D45CC (MiReleaseWalkLocks.c)
 *     MiIsPdeOrAboveAccessible @ 0x1402E21F4 (MiIsPdeOrAboveAccessible.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MiFlushAllFilesystemPages @ 0x140626E68 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiGetNextPageTablePte(int *a1, __int64 *a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  int v7; // ebx
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  void (__fastcall *v13)(int *); // rax
  ULONG_PTR BugCheckParameter4; // rdi
  int v15; // eax
  ULONG_PTR v16; // rsi
  __int64 v17; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = (unsigned __int64)a2;
  if ( a3 == 3 )
    v6 = MI_READ_PTE_LOCK_FREE(a2);
  else
    v6 = *a2;
  v17 = v6;
  if ( !v6 )
    return !(_DWORD)v3 && (*a1 & 1) != 0;
  if ( (v6 & 1) == 0 )
  {
    if ( (int)v3 >= 1 )
    {
      if ( !(unsigned int)MiIsPdeOrAboveAccessible(v4) )
        goto LABEL_28;
    }
    else if ( !(_DWORD)v3 )
    {
      return 1LL;
    }
    if ( (*a1 & 0x80u) == 0 )
    {
      v12 = *((_QWORD *)a1 + 2);
      if ( v12 )
        MiFlushTbList(v12);
      v13 = (void (__fastcall *)(int *))*((_QWORD *)a1 + 20);
      if ( v13 )
        v13(a1);
      if ( (a1[1] & 1) == 0 )
        MiReleaseWalkLocks(a1);
      BugCheckParameter4 = (__int64)(v4 << 25) >> 16;
      MiGetLeafVa(BugCheckParameter4);
      v15 = MmAccessFault(2uLL, BugCheckParameter4);
      v16 = v15;
      if ( v15 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 1uLL, v16, (ULONG_PTR)KeGetCurrentThread()->ApcState.Process, BugCheckParameter4);
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( v4 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( (v6 & 0x80u) != 0LL )
  {
LABEL_28:
    if ( (*a1 & 0x40) == 0 )
      return 1LL;
    v11 = *((_QWORD *)a1 + 21);
    for ( *(_DWORD *)v11 = v3; (_DWORD)v3; LODWORD(v3) = v3 - 1 )
      v4 = (__int64)(v4 << 25) >> 16;
    if ( v4 < ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
      v4 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(v11 + 8) = v4;
    return 3LL;
  }
  v7 = *a1;
  if ( (*a1 & 0x200) != 0
    && qword_140C693D8 != (PVOID)qword_140C693E0
    && (PVOID)(((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFFLL) == *(&qword_140C693D8 + v3) )
  {
    return 0LL;
  }
  if ( (int)v3 > ((*((unsigned __int8 *)a1 + 4) >> 2) & 7) )
    return 2LL;
  if ( (v7 & 0x40) == 0 )
    return 1LL;
  v9 = *((_QWORD *)a1 + 21);
  if ( (v7 & 4) != 0 )
  {
    MiLockPageTableInternal(*((_QWORD *)a1 + 3), v4, 0LL);
    MiUnlockPageTableInternal(*((_QWORD *)a1 + 3), ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *((_QWORD *)a1 + 6) = v4;
  }
  v10 = (__int64)(v4 << 25) >> 16;
  if ( v10 < ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    v10 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(v9 + 8) = v10;
  return 3LL;
}
