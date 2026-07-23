/*
 * XREFs of PspGetMemoryPartitionImplicit @ 0x14067DC04
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x14069CA30 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     PsGetEffectiveServerSilo @ 0x1402F7010 (PsGetEffectiveServerSilo.c)
 *     PspUnlockJobChain @ 0x14067FD70 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x14067FEA0 (PspLockJobChain.c)
 */

__int64 __fastcall PspGetMemoryPartitionImplicit(__int64 a1, __int16 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // r15
  __int64 EffectiveServerSilo; // rbx
  __int64 v9; // rax

  v5 = 0;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(a1, CurrentThread, 0LL);
  if ( (a2 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  }
  else
  {
    for ( EffectiveServerSilo = a1; EffectiveServerSilo; EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1072) )
    {
      if ( (*(_DWORD *)(EffectiveServerSilo + 256) & 0x1000) == 0
        && ((*(_DWORD *)(EffectiveServerSilo + 256) & 0x800) == 0 || (a2 & 1) == 0) )
      {
        break;
      }
    }
    if ( (a2 & 1) != 0 && EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1320) & 0x40000000) == 0 )
    {
      v5 = -1073741790;
      goto LABEL_11;
    }
  }
  if ( EffectiveServerSilo )
  {
    v9 = *(_QWORD *)(EffectiveServerSilo + 1560);
    if ( v9 == -1 )
    {
      v5 = -1073740682;
    }
    else
    {
      if ( v9 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(EffectiveServerSilo + 1560), 0x624A7350u);
        v9 = *(_QWORD *)(EffectiveServerSilo + 1560);
      }
      *a3 = v9;
    }
  }
LABEL_11:
  PspUnlockJobChain(a1, CurrentThread, 0LL);
  return v5;
}
