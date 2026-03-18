/*
 * XREFs of PsChangeQuantumTable @ 0x14068F5DC
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x14020C520 (MmIsThisAnNtAsSystem.c)
 *     PspUnlockProcessListShared @ 0x14020C7B0 (PspUnlockProcessListShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeSetQuantumProcess @ 0x1402EC4D0 (KeSetQuantumProcess.c)
 *     PspComputeQuantum @ 0x14079D40C (PspComputeQuantum.c)
 */

unsigned __int8 __fastcall PsChangeQuantumTable(char a1, char a2)
{
  unsigned int v3; // eax
  int v5; // eax
  char *v6; // rbx
  int v7; // edi
  unsigned __int8 result; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rdx
  __int64 *i; // rbx
  char v12; // al
  __int64 v13; // r8

  v3 = a2 & 3;
  if ( v3 >= 2 )
    v3 = 2;
  PsPrioritySeparation = v3;
  v5 = a2 & 0xC;
  if ( v5 == 4 )
  {
    v6 = (char *)&PspVariableQuantums;
  }
  else if ( v5 == 8 )
  {
    v6 = PspFixedQuantums;
  }
  else
  {
    v6 = PspFixedQuantums;
    if ( !MmIsThisAnNtAsSystem() )
      v6 = (char *)&PspVariableQuantums;
  }
  v7 = a2 & 0x30;
  if ( v7 == 16 || v7 != 32 && MmIsThisAnNtAsSystem() )
    v6 += 3;
  PspForegroundQuantum = *(_WORD *)v6;
  result = v6[2];
  PspUseJobSchedulingClasses = v6 == byte_140A37D6B;
  byte_140D3CBEE = result;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
    {
      LOBYTE(v10) = *((_BYTE *)i + 754);
      v12 = PspComputeQuantum(i - 137, v10);
      KeSetQuantumProcess(v13, v12);
    }
    return (unsigned __int8)PspUnlockProcessListShared((__int64)CurrentThread);
  }
  return result;
}
