/*
 * XREFs of PsCallImageNotifyRoutines @ 0x140684E90
 * Callers:
 *     DbgkCreateThread @ 0x14063C210 (DbgkCreateThread.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiDriverLoadSucceeded @ 0x14075C804 (MiDriverLoadSucceeded.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14027BF80 (ExDereferenceCallBackBlock.c)
 *     KeAreAllApcsDisabled @ 0x14027C1F0 (KeAreAllApcsDisabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PerfLogImageLoad @ 0x1406845D8 (PerfLogImageLoad.c)
 */

_QWORD *__fastcall PsCallImageNotifyRoutines(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  _DWORD *v14; // r14
  _RTL_RUN_ONCE *v15; // rbx
  struct _EX_RUNDOWN_REF *v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rsi
  void (__fastcall *Count)(unsigned __int16 *, __int64, _DWORD *); // rax
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v21 = 0LL;
  if ( KeAreAllApcsDisabled() )
    __int2c();
  if ( FltMgrCallbacks
    && (*(int (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(FltMgrCallbacks + 24))(a4, 1024LL, &v20, &v21) >= 0 )
  {
    a1 = (unsigned __int16 *)&v20;
  }
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 1088);
  if ( (PerfGlobalGroupMask & 4) != 0 )
    PerfLogImageLoad(a1, a2, (int *)(a3 + 8));
  if ( (PspNotifyEnableMask & 1) != 0 )
  {
    *(_DWORD *)(a3 + 8) |= 0x400u;
    v13 = 64LL;
    v14 = (_DWORD *)(a3 + 8);
    *(_QWORD *)a3 = 56LL;
    *(_QWORD *)(a3 + 48) = a4;
    v15 = &PspLoadImageNotifyRoutine;
    do
    {
      v16 = ExReferenceCallBackBlock((signed __int64 *)v15);
      v17 = v16;
      if ( v16 )
      {
        Count = (void (__fastcall *)(unsigned __int16 *, __int64, _DWORD *))v16[1].Count;
        if ( ((*v14 & 0x800) == 0 || (v17[2].Count & 1) != 0) && Count )
          Count(a1, v9, v14);
        ExDereferenceCallBackBlock((signed __int64 *)v15, v17);
      }
      ++v15;
      --v13;
    }
    while ( v13 );
  }
  if ( v21 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
}
