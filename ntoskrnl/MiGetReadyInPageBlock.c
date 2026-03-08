/*
 * XREFs of MiGetReadyInPageBlock @ 0x140A2E670
 * Callers:
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 * Callees:
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiGetInPageSupportBlock @ 0x14028A054 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x14028A110 (MiInitializeInPageSupport.c)
 */

__int64 MiGetReadyInPageBlock()
{
  __int64 VadEvent; // rsi
  __int64 v1; // rbx
  PSLIST_ENTRY v2; // rdi

  VadEvent = MiLocateVadEvent();
  v1 = *(_QWORD *)(VadEvent + 8);
  while ( *(_DWORD *)(v1 + 176) != 1 )
  {
    v2 = MiGetInPageSupportBlock(0, 0LL);
    if ( v2 )
    {
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v1);
      *(_QWORD *)(VadEvent + 8) = v2;
      v1 = (__int64)v2;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v1, 0, 0LL);
  return v1;
}
