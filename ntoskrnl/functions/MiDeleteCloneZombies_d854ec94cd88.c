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
