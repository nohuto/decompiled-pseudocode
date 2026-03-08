/*
 * XREFs of WbGetTrapFrame @ 0x1406AF738
 * Callers:
 *     WbHeapExecuteCall @ 0x1406AF56C (WbHeapExecuteCall.c)
 * Callees:
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 *     WbGetWowTrapFrame @ 0x140A4AD58 (WbGetWowTrapFrame.c)
 */

__int64 __fastcall WbGetTrapFrame(__int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rcx
  int ContextThreadInternal; // ecx
  __int16 v7; // ax

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30]
    && ((v7 = WORD2(Process[2].Affinity.StaticBitmap[20]), v7 == 332) || v7 == 452) )
  {
    return (unsigned int)WbGetWowTrapFrame(a1);
  }
  else
  {
    *(_DWORD *)(a1 + 96) = 1048577;
    ContextThreadInternal = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), (int)a1 + 48, 0, 1, 1);
    if ( ContextThreadInternal >= 0 )
    {
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 296);
      *(_QWORD *)a2 = *(_QWORD *)(a1 + 200);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 116);
    }
  }
  return (unsigned int)ContextThreadInternal;
}
