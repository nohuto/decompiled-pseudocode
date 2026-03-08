/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x140367ED0
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x1402037D0 (ExpShutdownWorkerFactory.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140340900 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140340CC0 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KiDeregisterObjectWaitBlock @ 0x1402D33F0 (KiDeregisterObjectWaitBlock.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(__int64 *Object)
{
  if ( (Object[51] & 0x400) != 0
    && (unsigned __int8)KiDeregisterObjectWaitBlock(*(volatile signed __int32 **)(Object[2] + 8), Object + 77) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 102) &= ~0x400u;
  }
  *((_DWORD *)Object + 102) &= ~0x200u;
}
