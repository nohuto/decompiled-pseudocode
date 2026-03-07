char __fastcall PsChangeQuantumTable(char a1, char a2)
{
  unsigned int v3; // eax
  int v5; // eax
  BOOLEAN IsThisAnNtAsSystem; // al
  __int64 *v7; // rcx
  char *v8; // rbx
  int v9; // edi
  char result; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *i; // rbx
  char v13; // al
  __int64 v14; // r8

  v3 = a2 & 3;
  if ( v3 >= 2 )
    v3 = 2;
  PsPrioritySeparation = v3;
  v5 = a2 & 0xC;
  if ( (a2 & 0xC) != 0 )
  {
    if ( v5 == 4 )
    {
      v8 = (char *)&PspVariableQuantums;
      goto LABEL_7;
    }
    if ( v5 == 8 )
    {
      v8 = PspFixedQuantums;
      goto LABEL_7;
    }
  }
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v7 = (__int64 *)PspFixedQuantums;
  if ( !IsThisAnNtAsSystem )
    v7 = &PspVariableQuantums;
  v8 = (char *)v7;
LABEL_7:
  v9 = a2 & 0x30;
  if ( !v9 )
  {
LABEL_8:
    if ( !MmIsThisAnNtAsSystem() )
      goto LABEL_9;
    goto LABEL_22;
  }
  if ( v9 != 16 )
  {
    if ( v9 == 32 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_22:
  v8 += 3;
LABEL_9:
  PspForegroundQuantum = *(_WORD *)v8;
  result = v8[2];
  PspUseJobSchedulingClasses = v8 == &byte_140A74E0F;
  byte_140D54BEE = result;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
    {
      v13 = PspComputeQuantum((__int64)(i - 137), *((_BYTE *)i + 754));
      KeSetQuantumProcess(v14, v13);
    }
    return PspUnlockProcessListShared((__int64)CurrentThread);
  }
  return result;
}
