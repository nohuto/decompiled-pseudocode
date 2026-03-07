__int64 __fastcall MmCreateShadowMapping(unsigned __int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 PfnLink; // rax
  _QWORD **v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rbx
  PEPROCESS v14; // rdi
  struct _KPROCESS *Process; // r15
  __int64 v16; // rax
  signed __int8 v17; // cf
  __int64 v18; // rsi
  char v19; // al
  bool v20; // zf
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v23[46]; // [rsp+40h] [rbp-C0h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v24; // [rsp+1B0h] [rbp+B0h] BYREF
  char v25; // [rsp+1E0h] [rbp+E0h] BYREF

  v22 = 0LL;
  memset(&v24, 0, sizeof(v24));
  memset(v23, 0, 0x168uLL);
  v4 = a2 + PteAddress - 1;
  MiInitializeLargePfnList(v23);
  LODWORD(v23[15]) = 12;
  v23[12] = MiSystemPartition;
  LODWORD(v23[16]) = 1;
  MiInitializeColorBase(PteAddress, 0, (__int64)&v23[42]);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v23, v5, 0, &v22) < 0 )
    return 0LL;
  v6 = v22;
  if ( v22 )
  {
    do
    {
      PfnLink = MiGetPfnLink(v6);
      if ( *v8 != &v23[9] )
        __fastfail(3u);
      v9[1] = v8;
      *v9 = &v23[9];
      *v8 = v9;
      ++v23[11];
      v23[10] = v9;
      v6 = PfnLink;
    }
    while ( PfnLink );
  }
  do
  {
    PteAddress = MiGetPteAddress(PteAddress);
    v10 = MiGetPteAddress(v4);
    *v11 = v10;
    v4 = v10;
    *(v11 - 1) = PteAddress;
  }
  while ( v12 != 1 );
  CurrentThread = KeGetCurrentThread();
  v14 = PsInitialSystemProcess;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v24);
  --CurrentThread->SpecialApcDisable;
  v16 = KeAbPreAcquire((__int64)&qword_140C65660, 0LL);
  v17 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65660, 0LL);
  v18 = v16;
  if ( v17 )
    ExfAcquirePushLockExclusiveEx(&qword_140C65660, v16, (__int64)&qword_140C65660);
  if ( v18 )
    *(_BYTE *)(v18 + 18) = 1;
  MiMakeShadowPageTableRange(PteAddress, v4, (unsigned int)&v25, 3, (__int64)v23);
  v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65660, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65660);
  KeAbPostRelease((ULONG_PTR)&qword_140C65660);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Process != v14 )
    KiUnstackDetachProcess(&v24);
  MiCleanupPageTablePages((__int64)v23);
  return 1LL;
}
