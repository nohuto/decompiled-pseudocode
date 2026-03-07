__int64 __fastcall MiCreateHardwareEnclave(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  __int64 VmPartition; // rsi
  int v13; // ebx
  unsigned __int16 IdealNodeNumberThread; // ax
  __int64 EnclavePages; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned __int64 ValidPte; // rbx
  int v20; // r12d
  __int64 v21; // r8
  bool v22; // zf
  int v23; // ecx
  __int16 v24; // ax
  __int64 v25; // rax
  signed __int8 v26; // cf
  __int64 v27; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  int v30; // [rsp+20h] [rbp-58h]
  int v31; // [rsp+80h] [rbp+8h] BYREF
  int v32; // [rsp+84h] [rbp+Ch]
  __int64 v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v32 = HIDWORD(a1);
  CurrentThread = KeGetCurrentThread();
  v31 = 0;
  Process = CurrentThread->ApcState.Process;
  v9 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v10 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF;
  VmPartition = MiGetVmPartition((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  if ( !ExAcquireRundownProtection_0(&stru_140C69548) )
    return 3221225738LL;
  if ( !a3 || (v13 = MiReserveEnclavePages(a2, VmPartition, (a3 >> 12) + ((a3 & 0xFFF) != 0)), v13 >= 0) )
  {
    IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
    EnclavePages = MiAllocateEnclavePages(VmPartition, IdealNodeNumberThread, 0, 1LL);
    v16 = EnclavePages;
    if ( !EnclavePages )
    {
      v13 = -1073741801;
      goto LABEL_36;
    }
    MiSetPfnBlink(EnclavePages, 0LL, 0);
    v17 = *(_QWORD *)(a2 + 80);
    v18 = 0xAAAAAAAAAAAAAAABuLL * ((v16 + 0x220000000000LL) >> 4);
    MiInitializeEnclavePfn(v18, v17, 4);
    ValidPte = MiMakeValidPte(v17, v18, -1610612732);
    v20 = 0;
    if ( MiPteInShadowRange(v17) )
    {
      if ( MiPteHasShadow() )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v22 = (ValidPte & 1) == 0;
          goto LABEL_13;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v22 = (ValidPte & 1) == 0;
LABEL_13:
        if ( !v22 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v17 = ValidPte;
    if ( v20 )
      MiWritePteShadow(v17, ValidPte, v21);
    v23 = (*(_DWORD *)(a2 + 72) & 1) << 8;
    if ( !Process[1].Affinity.StaticBitmap[30]
      || (v24 = WORD2(Process[2].Affinity.StaticBitmap[20]), v24 != 332) && v24 != 452 )
    {
      LOWORD(v23) = v23 | 1;
    }
    v13 = KeCreateEnclave((__int64)(v17 << 25) >> 16, v9, v10 - v9 + 1, v33, v30, v23, &v31, a5);
    if ( v13 >= 0 )
    {
      if ( (v31 & 2) != 0 )
        *(_DWORD *)(a2 + 64) |= 4u;
      *(_QWORD *)(a2 + 112) = Process;
      --CurrentThread->SpecialApcDisable;
      v25 = KeAbPreAcquire((__int64)&qword_140C69540, 0LL);
      v26 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C69540, 0LL);
      v27 = v25;
      if ( v26 )
        ExfAcquirePushLockExclusiveEx(&qword_140C69540, v25, (__int64)&qword_140C69540);
      if ( v27 )
        *(_BYTE *)(v27 + 18) = 1;
      v28 = (_QWORD *)qword_140C69538;
      v29 = (_QWORD *)(a2 + 120);
      if ( *(__int64 **)qword_140C69538 != &qword_140C69530 )
        __fastfail(3u);
      v29[1] = qword_140C69538;
      *v29 = &qword_140C69530;
      *v28 = v29;
      qword_140C69538 = (__int64)v29;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C69540, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C69540);
      KeAbPostRelease((ULONG_PTR)&qword_140C69540);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v13 = 0;
    }
  }
LABEL_36:
  ExReleaseRundownProtection_0(&stru_140C69548);
  return (unsigned int)v13;
}
