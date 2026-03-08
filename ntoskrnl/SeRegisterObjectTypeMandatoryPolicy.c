/*
 * XREFs of SeRegisterObjectTypeMandatoryPolicy @ 0x14037D9FC
 * Callers:
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 *     SepTokenInitialization @ 0x140B49514 (SepTokenInitialization.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall SeRegisterObjectTypeMandatoryPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  char v6; // bp
  unsigned int v7; // eax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rcx
  char v13; // di

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v7 = 0;
  if ( !SepMandatoryObjectTypePolicyCount )
    goto LABEL_7;
  v8 = SepMandatoryObjectTypePolicy;
  while ( a1 != *v8 )
  {
    ++v7;
    v8 += 3;
    if ( v7 >= SepMandatoryObjectTypePolicyCount )
      goto LABEL_5;
  }
  v6 = 1;
LABEL_5:
  if ( v7 >= 0x20 )
  {
    v5 = -1073741823;
    goto LABEL_14;
  }
  if ( v6 )
  {
    v9 = v7;
  }
  else
  {
LABEL_7:
    v9 = v7;
    ++SepMandatoryObjectTypePolicyCount;
    v10 = 3LL * v7;
    *(_QWORD *)&SepMandatoryObjectTypePolicy[2 * v10] = a1;
    SepMandatoryObjectTypePolicy[2 * v10 + 4] = 0;
    SepMandatoryObjectTypePolicy[2 * v10 + 2] = 0;
  }
  v11 = 3 * v9;
  SepMandatoryObjectTypePolicy[2 * v11 + 2] |= 1u;
  v12 = &SepMandatoryObjectTypePolicy[6 * v9];
  SepMandatoryObjectTypePolicy[2 * v11 + 3] = a2;
  if ( (a2 & 1) != 0 )
    v12[4] |= 0x100u;
  if ( (a2 & 2) != 0 )
    v12[4] |= 0x200u;
  if ( (a2 & 4) != 0 )
    v12[4] |= 0x400u;
LABEL_14:
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
