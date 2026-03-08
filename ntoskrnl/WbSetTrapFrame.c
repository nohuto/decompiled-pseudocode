/*
 * XREFs of WbSetTrapFrame @ 0x1406AF9A4
 * Callers:
 *     WbHeapExecuteCall @ 0x1406AF56C (WbHeapExecuteCall.c)
 *     sub_1406AFFB4 @ 0x1406AFFB4 (sub_1406AFFB4.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 *     WbSetWowTrapFrame @ 0x140A4AFE0 (WbSetWowTrapFrame.c)
 */

__int64 __fastcall WbSetTrapFrame(__int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int ContextThreadInternal; // edi
  struct _KTHREAD *v7; // rax
  bool v8; // zf
  __int16 v10; // ax

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30]
    && ((v10 = WORD2(Process[2].Affinity.StaticBitmap[20]), v10 == 332) || v10 == 452) )
  {
    return (unsigned int)WbSetWowTrapFrame(a1);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    *(_DWORD *)(a1 + 96) = 1048577;
    ContextThreadInternal = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), (int)a1 + 48, 0, 1, 1);
    if ( ContextThreadInternal >= 0 )
    {
      *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 16);
      ContextThreadInternal = PspSetContextThreadInternal(KeGetCurrentThread(), 3);
    }
    v7 = KeGetCurrentThread();
    v8 = v7->SpecialApcDisable++ == -1;
    if ( v8 && ($C71981A45BEB2B45F82C232A7085991E *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)ContextThreadInternal;
}
