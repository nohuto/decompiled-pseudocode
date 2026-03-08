/*
 * XREFs of MiDeleteCloneZombies @ 0x1402FBC3C
 * Callers:
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiInsertClone @ 0x140662B2C (MiInsertClone.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x140A46058 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14066192C (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteCloneZombies(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  KIRQL v6; // si
  __int64 SharedVm; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx

  if ( *(_WORD *)(*(_QWORD *)(a1 + 1680) + 352LL) )
  {
    v5 = a1 + 1664;
    if ( (_DWORD)a2 )
    {
      v6 = 17;
    }
    else
    {
      SharedVm = MiGetSharedVm(a1 + 1664, a2, a3, a4);
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
    }
    v8 = (_QWORD *)MiDeleteDeferredCloneDescriptors(a1);
    if ( v6 != 17 )
      MiUnlockWorkingSetExclusive(v5, v6);
    if ( v8 )
    {
      do
      {
        v9 = (_QWORD *)*v8;
        ExFreePoolWithTag(v8, 0);
        v8 = v9;
      }
      while ( v9 );
    }
  }
}
