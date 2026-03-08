/*
 * XREFs of MiAttachSessionGlobal @ 0x1402D509C
 * Callers:
 *     MiAttachWorkingSet @ 0x1402D4FE4 (MiAttachWorkingSet.c)
 *     MiAttachToSessionForBaseImage @ 0x14063F7A4 (MiAttachToSessionForBaseImage.c)
 *     MiActOnPatchInAllSessions @ 0x140A31950 (MiActOnPatchInAllSessions.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiCompareTbFlushTimeStamp @ 0x1402D5158 (MiCompareTbFlushTimeStamp.c)
 *     MiAttachSingleProcessThreadToSession @ 0x1402D51CC (MiAttachSingleProcessThreadToSession.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 */

char __fastcall MiAttachSessionGlobal(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v5; // zf
  $C71981A45BEB2B45F82C232A7085991E *v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  BYTE1(CurrentThread[1].Queue) |= 0x80u;
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  MiAttachSingleProcessThreadToSession(a1);
  LOBYTE(v6) = MiCompareTbFlushTimeStamp(a2);
  if ( (_BYTE)v6 )
    LOBYTE(v6) = KeFlushTb(1LL, 0LL);
  --CurrentThread->SpecialApcDisable;
  BYTE1(CurrentThread[1].Queue) &= ~0x80u;
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 )
  {
    v6 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != v6 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery();
  }
  return (char)v6;
}
