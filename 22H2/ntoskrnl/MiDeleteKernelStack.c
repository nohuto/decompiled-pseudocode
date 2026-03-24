/*
 * XREFs of MiDeleteKernelStack @ 0x14033B750
 * Callers:
 *     MmDeleteKernelStack @ 0x1402AB200 (MmDeleteKernelStack.c)
 *     MiDeleteCachedKernelStack @ 0x14033B6EC (MiDeleteCachedKernelStack.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiDeleteValidSystemPage @ 0x1402A94B0 (MiDeleteValidSystemPage.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiDeleteKernelStack(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  _QWORD *v10; // r13
  unsigned __int64 v11; // r15
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r10
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  unsigned __int64 v18; // r8
  bool v19; // zf
  signed __int32 v20; // eax
  struct _LIST_ENTRY *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // [rsp+20h] [rbp-88h]
  _QWORD v28[8]; // [rsp+28h] [rbp-80h] BYREF
  int v29; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v30; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v31; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+20h]

  memset(v28, 0, 48);
  if ( (a2 & 1) != 0 )
    v4 = 18LL;
  else
    v4 = (unsigned __int8)byte_140C4EBBC;
  v5 = (unsigned int)(v4 + 1);
  v6 = (unsigned int)v4;
  v29 = v4 + 1;
  v32 = (unsigned int)v4;
  v7 = 0LL;
  v8 = 0LL;
  v9 = a1 - 8 * v4;
  v27 = (_QWORD *)v9;
  v10 = (_QWORD *)v9;
  v11 = v9 + 8 * v5;
  v12 = MiLockWorkingSetShared((__int64)&unk_140C4F500, a2, a3, a4);
  v30 = v12;
  if ( v9 >= v11 )
    goto LABEL_15;
  v13 = v9;
  do
  {
    if ( v7 )
    {
      if ( (v13 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal((__int64)&unk_140C4F500, v7);
    }
    v7 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)&unk_140C4F500, v7, 0LL);
LABEL_7:
    v14 = *(_QWORD *)v9;
    if ( MiPteInShadowRange(v13)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v25 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        v26 = v14 | 0x20;
        if ( (v25 & 0x20) == 0 )
          v26 = v14;
        v14 = v26;
        if ( (v25 & 0x42) != 0 )
          v14 = v26 | 0x42;
      }
    }
    v31 = v14;
    if ( (v14 & 1) != 0 )
    {
      if ( !v8 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v31)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          v21 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v21 )
          {
            v22 = *((_QWORD *)&v21->Flink + (((unsigned __int64)&v31 >> 3) & 0x1FF));
            v23 = v14 | 0x20;
            if ( (v22 & 0x20) == 0 )
              v23 = v14;
            v14 = v23;
            if ( (v22 & 0x42) != 0 )
              v14 = v23 | 0x42;
          }
        }
        v8 = *(_QWORD *)(qword_140C4E648
                       + 8 * ((*(_QWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 39) & 0x3FFLL));
      }
      MiDeleteValidSystemPage((__int64)&unk_140C4F500, v9, 0, (__int64)v28);
      ++v28[0];
    }
    v9 += 8LL;
    v13 = v9;
  }
  while ( v9 < v11 );
  v6 = v32;
  v10 = v27;
  if ( v7 )
    MiUnlockPageTableInternal((__int64)&unk_140C4F500, v7);
  v12 = v30;
  LODWORD(v5) = v29;
LABEL_15:
  MiUnlockWorkingSetShared((__int64)&unk_140C4F500, v12);
  if ( (ULONG_PTR *)v8 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFC8, -v6);
  v15 = v28[0];
  if ( (ULONG_PTR *)v8 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
    {
      v15 = v28[0];
    }
    else
    {
      v18 = v28[0];
      if ( (unsigned __int64)(v28[0] + CachedResidentAvailable) <= 0x100 )
      {
        do
        {
          if ( v18 >= 0x80000 )
            break;
          v20 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + v18,
                  CachedResidentAvailable);
          v19 = (_DWORD)CachedResidentAvailable == v20;
          LODWORD(CachedResidentAvailable) = v20;
          if ( v19 )
            goto LABEL_22;
          if ( v20 == -1 )
            break;
          v18 = v28[0];
        }
        while ( (unsigned __int64)(v28[0] + v20) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v15 = v28[0] + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v15 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7168), v15);
LABEL_22:
  MiReleasePtes((__int64)&unk_140C4EB58, v10, v5);
  MiReturnCommit(v8, v6 - v28[1]);
}
