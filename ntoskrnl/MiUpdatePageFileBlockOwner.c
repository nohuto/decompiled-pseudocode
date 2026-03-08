/*
 * XREFs of MiUpdatePageFileBlockOwner @ 0x1406646BC
 * Callers:
 *     MiTransferPageFileOwnership @ 0x14029D878 (MiTransferPageFileOwnership.c)
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPageHashBugCheck @ 0x1406645D8 (MiPageHashBugCheck.c)
 *     MiWriteEntirePageHashEntry @ 0x14066481C (MiWriteEntirePageHashEntry.c)
 */

void __fastcall MiUpdatePageFileBlockOwner(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  volatile LONG *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // r10d
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0LL;
  if ( dword_140C692D0 )
  {
    v8 = (volatile LONG *)(a1 + 232);
    v9 = a4 | 1;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
    v10 = *(_QWORD *)(a1 + 216);
    if ( !v10 )
      goto LABEL_13;
    v11 = v10 + dword_140C692CC * a2;
    if ( (MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) == 0 )
      goto LABEL_13;
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 )
      goto LABEL_13;
    if ( *(_DWORD *)v11 == 1 )
    {
      if ( a5 )
      {
LABEL_13:
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        return;
      }
    }
    else if ( v12 == v9 && *(_DWORD *)(v11 + 4) == a2 )
    {
      goto LABEL_12;
    }
    ++dword_140C67BD0;
    if ( !dword_140C67BC4 )
    {
      MiWriteEntirePageHashEntry(&v14, v11);
      DWORD1(v14) = *(_DWORD *)(v11 + 4);
      *((_QWORD *)&v14 + 1) = v9;
      MiPageHashBugCheck(v13, a2, (unsigned int *)v11, (unsigned int *)&v14, 1);
    }
LABEL_12:
    LODWORD(v14) = *(_DWORD *)v11;
    *((_QWORD *)&v14 + 1) = a3 | 1;
    DWORD1(v14) = a2;
    MiWriteEntirePageHashEntry(v11, &v14);
    goto LABEL_13;
  }
}
