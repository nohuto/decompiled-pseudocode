/*
 * XREFs of MiDeleteKernelStack @ 0x14032D7F0
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x140236DFC (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStackEx @ 0x140318070 (MmDeleteKernelStackEx.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 */

void __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  __int64 *v8; // r12
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // al
  __int64 v11; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v13; // r10
  __int64 CachedResidentAvailable; // rdx
  unsigned __int64 v15; // r8
  bool v16; // zf
  signed __int32 v17; // eax
  __int64 v18; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v20; // rax
  __int64 *v21; // [rsp+20h] [rbp-88h]
  _OWORD v22[3]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v23; // [rsp+58h] [rbp-50h]
  int v24; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v25; // [rsp+B8h] [rbp+10h]
  __int64 v26; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+20h]

  v23 = 0LL;
  memset(v22, 0, sizeof(v22));
  if ( (a2 & 1) != 0 )
  {
    v2 = 18LL;
  }
  else if ( (a2 & 8) != 0 )
  {
    v2 = 3LL;
  }
  else
  {
    v2 = (unsigned __int8)byte_140C6813C;
  }
  v3 = (unsigned int)(v2 + 1);
  v4 = (unsigned int)v2;
  v24 = v2 + 1;
  v5 = 0LL;
  v27 = (unsigned int)v2;
  v6 = 0LL;
  v7 = a1 - 8 * v2;
  v21 = (__int64 *)v7;
  v8 = (__int64 *)v7;
  v9 = v7 + 8 * v3;
  v10 = MiLockWorkingSetShared(&unk_140C69B80);
  v25 = v10;
  if ( v7 >= v9 )
    goto LABEL_16;
  do
  {
    if ( v5 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal((__int64)&unk_140C69B80, v5);
    }
    v5 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)&unk_140C69B80, v5, 0);
LABEL_7:
    v11 = *(_QWORD *)v7;
    if ( MiPteInShadowRange(v7)
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v20 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
        if ( (v20 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v20 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
    }
    v26 = v11;
    if ( (v11 & 1) != 0 )
    {
      if ( !v6 )
        v6 = *(_QWORD *)(qword_140C67048
                       + 8
                       * ((*(_QWORD *)(48
                                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFFLL)
                                     - 0x220000000000LL
                                     + 40) >> 43) & 0x3FFLL));
      MiDeleteValidSystemPage((__int64)&unk_140C69B80, v7, 0, (__int64)v22);
      ++*(_QWORD *)&v22[0];
    }
    v7 += 8LL;
  }
  while ( v7 < v9 );
  v4 = v27;
  v8 = v21;
  LODWORD(v3) = v24;
  if ( v5 )
    MiUnlockPageTableInternal((__int64)&unk_140C69B80, v5);
  v10 = v25;
LABEL_16:
  MiUnlockWorkingSetShared((__int64)&unk_140C69B80, v10);
  if ( (_UNKNOWN *)v6 != &MiSystemPartition
    || (_InterlockedExchangeAdd64(&qword_140C69648, -v4),
        CurrentPrcb = KeGetCurrentPrcb(),
        v13 = *(_QWORD *)&v22[0],
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
    v13 = *(_QWORD *)&v22[0];
  }
  else
  {
    v15 = *(_QWORD *)&v22[0];
    if ( (unsigned __int64)(*(_QWORD *)&v22[0] + CachedResidentAvailable) <= 0x100 )
    {
      do
      {
        if ( v15 >= 0x80000 )
          break;
        v17 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + v15,
                CachedResidentAvailable);
        v16 = (_DWORD)CachedResidentAvailable == v17;
        LODWORD(CachedResidentAvailable) = v17;
        if ( v16 )
          goto LABEL_21;
        if ( v17 == -1 )
          break;
        v15 = *(_QWORD *)&v22[0];
      }
      while ( (unsigned __int64)(*(_QWORD *)&v22[0] + v17) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v13 = *(_QWORD *)&v22[0] + (int)CachedResidentAvailable - 192;
    }
  }
  if ( v13 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 17280), v13);
LABEL_21:
  MiReleasePtes((__int64)&unk_140C68088, v8, v3);
  MiReturnCommit(v6, v4 - *((_QWORD *)&v22[0] + 1), v18);
}
