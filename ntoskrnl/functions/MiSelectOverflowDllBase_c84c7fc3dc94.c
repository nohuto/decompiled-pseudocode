__int64 __fastcall MiSelectOverflowDllBase(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  int v5; // r8d
  BOOL CanUseHighOverflowArea; // r9d
  unsigned __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 *v10; // rcx
  __int64 v11; // r14
  __int64 *v12; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  signed __int8 v16; // cf
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rax
  bool v20; // zf

  v3 = ((*(_DWORD *)(a1 + 8) << 12) + 0xFFFF) & 0xFFFF0000;
  v4 = (unsigned int)v3;
  CanUseHighOverflowArea = MiImageCanUseHighOverflowArea(a1, a2);
  v7 = CanUseHighOverflowArea ? 0x10000000LL : 0x4000000LL;
  if ( (unsigned int)v3 <= v7 )
  {
    v10 = &qword_140C653E0;
    if ( v5 == 3 )
      v10 = (__int64 *)&unk_140C65410;
    v11 = *v10;
    v12 = v10 + 1;
    if ( CanUseHighOverflowArea )
    {
      v11 = v10[2];
      v12 = v10 + 3;
    }
    CurrentThread = KeGetCurrentThread();
    v14 = v7 + v11;
    --CurrentThread->SpecialApcDisable;
    v15 = KeAbPreAcquire((__int64)&qword_140C653C0, 0LL);
    v16 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C653C0, 0LL);
    v17 = v15;
    if ( v16 )
      ExfAcquirePushLockExclusiveEx(&qword_140C653C0, v15, (__int64)&qword_140C653C0);
    if ( v17 )
      *(_BYTE *)(v17 + 18) = 1;
    v18 = *v12;
    if ( v4 > v14 - *v12 )
      v18 = v11;
    v19 = v4 + v18;
    if ( v4 + v18 == v14 )
      v19 = v11;
    *v12 = v19;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C653C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C653C0);
    KeAbPostRelease((ULONG_PTR)&qword_140C653C0);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return v18;
  }
  else
  {
    v8 = (unsigned __int8)ExGenRandom(1) << 16;
    if ( a2 < 0x1010000
      || (_DWORD)v3 && (unsigned int)v3 + a2 - 1 < a2
      || a2 + ((v3 - 1) & -(__int64)((_DWORD)v3 != 0)) > 0x7FFFFFFEFFFFLL )
    {
      return v8 + 0x10000LL;
    }
    else
    {
      return a2 - v8;
    }
  }
}
