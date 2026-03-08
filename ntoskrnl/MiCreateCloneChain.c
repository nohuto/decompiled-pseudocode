/*
 * XREFs of MiCreateCloneChain @ 0x14066143C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A45CF4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14034CCC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateCloneChain(struct _KPROCESS *a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r14
  _KPROCESS *Process; // rdi
  volatile LONG *SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // r13
  _QWORD *v11; // rcx
  _QWORD *i; // rbx
  _QWORD *Pool; // rax
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v10 = v9;
  v11 = (_QWORD *)Process[1].Affinity.StaticBitmap[12];
  i = 0LL;
  while ( v11 )
  {
    i = v11;
    v11 = (_QWORD *)*v11;
  }
  while ( i )
  {
    if ( i[6] )
    {
      Pool = MiAllocatePool(64, 0x70uLL, 0x64436D4Du);
      if ( !Pool )
      {
        v4 = -1073741670;
        break;
      }
      *Pool = v5;
      v5 = Pool;
      Pool[8] = i[8];
      v6 += i[8];
    }
    v14 = (_QWORD **)i[1];
    v15 = i;
    if ( v14 )
    {
      v16 = *v14;
      for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
        i = v16;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v15 )
          break;
        v15 = i;
      }
    }
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v10);
  if ( v4 < 0 || v6 && (v4 = PsChargeProcessNonPagedPoolQuota(a1, v6), v4 < 0) )
  {
    if ( v5 )
    {
      do
      {
        v17 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v17;
      }
      while ( v17 );
    }
    v5 = 0LL;
  }
  result = (unsigned int)v4;
  *a2 = v5;
  return result;
}
