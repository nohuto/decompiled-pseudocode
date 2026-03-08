/*
 * XREFs of ExpTryEnterWorkerFactoryAwayMode @ 0x140367F28
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14038AA00 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeRegisterObjectNotification @ 0x14024F260 (KeRegisterObjectNotification.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

char __fastcall ExpTryEnterWorkerFactoryAwayMode(_QWORD *Object)
{
  __int64 v2; // rdi
  int v3; // ecx

  if ( *((_DWORD *)Object + 96) < *((_DWORD *)Object + 95) )
  {
    v2 = Object[2];
    if ( !*(_DWORD *)(v2 + 28) )
    {
      if ( !*((_DWORD *)Object + 101) )
        return 1;
      v3 = *((_DWORD *)Object + 102);
      *((_DWORD *)Object + 102) = v3 | 0x200;
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) )
        return 1;
      if ( (v3 & 0x400) == 0 )
      {
        *((_DWORD *)Object + 102) = v3 | 0x600;
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        KeRegisterObjectNotification(
          *(_QWORD *)(v2 + 8),
          (__int64)&ExpWorkerFactoryManagerQueue,
          (__int64)(Object + 77));
      }
    }
  }
  return 0;
}
