/*
 * XREFs of MiReferenceCloneProto @ 0x14055B4D8
 * Callers:
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiLocateCloneAddress @ 0x14023E878 (MiLocateCloneAddress.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14055A8C4 (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14055B620 (MiReturnCrossPartitionCloneCharges.c)
 */

__int64 __fastcall MiReferenceCloneProto(
        __int64 a1,
        volatile signed __int64 *a2,
        char a3,
        _QWORD *a4,
        volatile signed __int64 **a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebp
  __int64 v14; // rbx

  CurrentThread = KeGetCurrentThread();
  *a5 = 0LL;
  CloneAddress = MiLocateCloneAddress((__int64)CurrentThread->ApcState.Process, (unsigned __int64)a2);
  if ( CloneAddress )
  {
    v13 = 0;
    v14 = *(_QWORD *)(CloneAddress[7] + 24LL);
    if ( *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v11 + 174)) != v14 )
    {
      if ( (a3 & 1) != 0 )
      {
        if ( !(unsigned int)MiChargeCommit(v14, 1uLL, 0) )
          return 0LL;
        v13 = 1;
      }
      if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v14, v10, v11, v12) )
      {
        if ( v13 )
          MiReturnCommit(v14, 1LL);
        return 0LL;
      }
      if ( _InterlockedIncrement64(a2 + 1) != 1 )
        MiReturnCrossPartitionCloneCharges(v14);
    }
    _InterlockedAdd64(a2 + 3, 1uLL);
    if ( (a3 & 1) != 0 )
    {
      if ( (_InterlockedIncrement64(a2 + 2) & 0x7FFFFFFFFFFFFFFLL) == 1 )
      {
        if ( v13 )
          ++*a4;
        else
          ++a4[1];
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 7624), 1uLL);
      }
      else
      {
        ++*a4;
        if ( v13 )
          MiReturnCommit(v14, 1LL);
      }
      *a5 = a2;
    }
  }
  return 1LL;
}
