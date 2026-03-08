/*
 * XREFs of PspGetMemoryPartitionImplicit @ 0x140798000
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x14070D690 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140294DF0 (PsGetEffectiveServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PspUnlockJobChain @ 0x1406F8F60 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x1406F9018 (PspLockJobChain.c)
 */

__int64 __fastcall PspGetMemoryPartitionImplicit(__int64 a1, __int16 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // r15
  __int64 EffectiveServerSilo; // rbx
  int v9; // eax
  void *v10; // rcx

  v5 = 0;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(a1, (__int64)CurrentThread, 0);
  if ( (a2 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  }
  else
  {
    EffectiveServerSilo = a1;
    if ( a1 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(EffectiveServerSilo + 256);
        if ( (v9 & 0x1000) == 0 )
        {
          if ( (a2 & 1) == 0 )
            goto LABEL_5;
          if ( (v9 & 0x800) == 0 )
            break;
        }
        EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1288);
        if ( !EffectiveServerSilo )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      if ( (a2 & 1) == 0 )
        goto LABEL_5;
    }
    if ( EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1536) & 0x40000000) == 0 )
    {
      v5 = -1073741790;
      goto LABEL_10;
    }
  }
LABEL_5:
  if ( EffectiveServerSilo )
  {
    v10 = *(void **)(EffectiveServerSilo + 1776);
    if ( v10 == (void *)-1LL )
    {
      v5 = -1073740682;
    }
    else
    {
      if ( v10 )
        ObfReferenceObjectWithTag(v10, 0x624A7350u);
      *a3 = *(_QWORD *)(EffectiveServerSilo + 1776);
    }
  }
LABEL_10:
  PspUnlockJobChain(a1, (__int64)CurrentThread, 0);
  return v5;
}
