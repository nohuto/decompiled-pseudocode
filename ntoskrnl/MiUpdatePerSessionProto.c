/*
 * XREFs of MiUpdatePerSessionProto @ 0x1402CF620
 * Callers:
 *     MiDereferenceSubsectionProtos @ 0x14075B80C (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14075B874 (MiCreatePerSessionProtos.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile LONG *v4; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 *v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v4 = (volatile LONG *)(a1 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( !a4 )
  {
    RtlAvlRemoveNode(a2 + 24, a3);
    goto LABEL_9;
  }
  v10 = *(__int64 **)(a2 + 24);
  LOBYTE(v9) = 0;
  if ( !v10 )
    goto LABEL_8;
  while ( *(_DWORD *)(a3 + 64) < *((_DWORD *)v10 + 16) )
  {
    v11 = (__int64 *)*v10;
    if ( !*v10 )
      goto LABEL_8;
LABEL_5:
    v10 = v11;
  }
  v11 = (__int64 *)v10[1];
  if ( v11 )
    goto LABEL_5;
  LOBYTE(v9) = 1;
LABEL_8:
  RtlAvlInsertNodeEx(a2 + 24, v10, v9, a3);
LABEL_9:
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
}
