/*
 * XREFs of WbGetTrapFrame @ 0x140642100
 * Callers:
 *     WbHeapExecuteCall @ 0x140642458 (WbHeapExecuteCall.c)
 * Callees:
 *     PspGetContextThreadInternal @ 0x14063CC44 (PspGetContextThreadInternal.c)
 *     WbGetWowTrapFrame @ 0x140963CBC (WbGetWowTrapFrame.c)
 */

__int64 __fastcall WbGetTrapFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  int ContextThreadInternal; // ecx
  __int16 v7; // ax

  v4 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( v4 && ((v7 = *(_WORD *)(v4 + 8), v7 == 332) || v7 == 452) )
  {
    return (unsigned int)WbGetWowTrapFrame(a1);
  }
  else
  {
    *(_DWORD *)(a1 + 96) = 1048577;
    ContextThreadInternal = PspGetContextThreadInternal((__int64)KeGetCurrentThread(), a1 + 48, 0, 1, 1);
    if ( ContextThreadInternal >= 0 )
    {
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 296);
      *(_QWORD *)a2 = *(_QWORD *)(a1 + 200);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 116);
    }
  }
  return (unsigned int)ContextThreadInternal;
}
