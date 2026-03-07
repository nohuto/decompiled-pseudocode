char __fastcall PsCallImageNotifyRoutines(__int128 *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // r15
  _DWORD *v10; // r14
  union _RTL_RUN_ONCE *v11; // rbx
  __int64 v12; // rdi
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  void (__fastcall *Count)(__int128 *, __int64, _DWORD *); // rax
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  v18 = 0LL;
  if ( KeAreAllApcsDisabled() )
    NT_ASSERT("KeAreAllApcsDisabled() == 0");
  if ( FltMgrCallbacks
    && (*(int (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(FltMgrCallbacks + 24))(a4, 1024LL, &v17, &v18) >= 0 )
  {
    a1 = &v17;
  }
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 1088);
  v10 = a3 + 1;
  if ( (PerfGlobalGroupMask[0] & 4) != 0 )
    PerfLogImageLoad(a1, a2, a3 + 1);
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    *v10 |= 0x400u;
    v11 = &PspLoadImageNotifyRoutine;
    *a3 = 56LL;
    a3[6] = a4;
    v12 = 64LL;
    do
    {
      v13 = ExReferenceCallBackBlock((signed __int64 *)v11);
      v14 = v13;
      if ( v13 )
      {
        Count = (void (__fastcall *)(__int128 *, __int64, _DWORD *))v13[1].Count;
        if ( ((*v10 & 0x800) == 0 || (v14[2].Count & 1) != 0) && Count )
          Count(a1, v9, v10);
        ExDereferenceCallBackBlock((signed __int64 *)v11, v14);
      }
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  if ( v18 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
