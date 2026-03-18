/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x140304BB4
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8950 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8D10 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x14031D728 (ExpShutdownWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KiDeregisterObjectWaitBlock @ 0x14033C230 (KiDeregisterObjectWaitBlock.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(char *Object)
{
  if ( (*((_DWORD *)Object + 102) & 0x400) != 0
    && (unsigned __int8)KiDeregisterObjectWaitBlock(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL), Object + 616) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 102) &= ~0x400u;
  }
  *((_DWORD *)Object + 102) &= ~0x200u;
}
