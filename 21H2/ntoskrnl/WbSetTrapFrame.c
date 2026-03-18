/*
 * XREFs of WbSetTrapFrame @ 0x1407E3C20
 * Callers:
 *     WbHeapExecuteCall @ 0x1407E3070 (WbHeapExecuteCall.c)
 *     sub_1407E3F30 @ 0x1407E3F30 (sub_1407E3F30.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PspSetContextThreadInternal @ 0x1407043D0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     WbSetWowTrapFrame @ 0x140A0EE3C (WbSetWowTrapFrame.c)
 */

__int64 __fastcall WbSetTrapFrame(__int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int ContextThreadInternal; // edi
  struct _KTHREAD *v7; // rax
  __int16 v10; // ax

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30] )
  {
    v10 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v10 == 332 || v10 == 452 )
      return WbSetWowTrapFrame(a1);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  *(_DWORD *)(a1 + 96) = 1048577;
  ContextThreadInternal = PspGetContextThreadInternal((__int64)KeGetCurrentThread(), a1 + 48, 0, 1, 1);
  if ( ContextThreadInternal >= 0 )
  {
    *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 16);
    ContextThreadInternal = PspSetContextThreadInternal(KeGetCurrentThread(), a1 + 48, 0, 1, 3);
  }
  v7 = KeGetCurrentThread();
  if ( v7->SpecialApcDisable++ == -1
    && ($CEA84C04E3712D858E5667A507841A2A *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)ContextThreadInternal;
}
