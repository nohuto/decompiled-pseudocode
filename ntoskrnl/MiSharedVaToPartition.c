/*
 * XREFs of MiSharedVaToPartition @ 0x1402E21A4
 * Callers:
 *     MiCreateSharedZeroPages @ 0x14028A420 (MiCreateSharedZeroPages.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402B0EB0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     MiSessionLookupImage @ 0x14036C7B8 (MiSessionLookupImage.c)
 */

void *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  _KPROCESS *v10; // rcx
  _QWORD *CloneAddress; // rax
  __int64 **Address; // rax
  __int64 v13; // rdx
  __int64 **v14; // rdi
  __int64 v15; // rax
  char v16; // al
  _QWORD *v17; // rdx
  unsigned __int64 v18; // r8
  _KPROCESS *Process; // rcx
  __int64 v20; // rax

  if ( !byte_140C67A54 )
    return &MiSystemPartition;
  v7 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v8 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v8;
  if ( (v8 & 0x400) != 0 && MI_PROTO_FORMAT_COMBINED(v8) )
    return **(void ***)(((a3 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    v16 = *(_BYTE *)(a1 + 184) & 7;
    if ( v16 == 4 )
    {
      v17 = P;
      while ( v17 )
      {
        v18 = v17[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( a2 < v18 + v17[4] )
        {
          if ( a2 >= v18 )
            break;
          v17 = (_QWORD *)*v17;
        }
        else
        {
          v17 = (_QWORD *)v17[1];
        }
      }
      if ( !v17 )
        return (void *)v7;
      v15 = v17[6];
    }
    else
    {
      if ( v16 != 1 )
        return (void *)v7;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[1].Affinity.StaticBitmap[25] )
        return (void *)v7;
      if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        return (void *)v7;
      v20 = MiSessionLookupImage(a2);
      if ( !v20 )
        return (void *)v7;
      v15 = v20 + 80;
    }
LABEL_31:
    if ( *(_QWORD *)v15 )
      return *(void **)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)v15 + 60LL) & 0x3FF));
    return (void *)v7;
  }
  if ( (unsigned int)MiIsPrototypePteVadLookup(v9) )
    goto LABEL_13;
  v10 = KeGetCurrentThread()->ApcState.Process;
  if ( !v10[1].Affinity.StaticBitmap[12] || (CloneAddress = MiLocateCloneAddress((__int64)v10, a3)) == 0LL )
  {
    v7 = 0LL;
    goto LABEL_13;
  }
  v7 = *(_QWORD *)(CloneAddress[7] + 24LL);
  if ( !v7 )
  {
LABEL_13:
    MiLockVadTree(1LL);
    Address = MiLocateAddress(a2);
    LOBYTE(v13) = 17;
    v14 = Address;
    MiUnlockVadTree(1LL, v13);
    if ( !v14 )
      return (void *)v7;
    if ( ((_DWORD)v14[6] & 0x200000) != 0 )
      return (void *)v7;
    v15 = (__int64)v14[9];
    if ( !v15 )
      return (void *)v7;
    goto LABEL_31;
  }
  return (void *)v7;
}
