/*
 * XREFs of NtReplyWaitReplyPort @ 0x140975750
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140716C88 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407CF500 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall NtReplyWaitReplyPort(void *a1, __int128 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  int v5; // ebx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      v5 = -1073741811;
    }
    else
    {
      if ( PreviousMode )
        AlpcpProbeForWriteMessageHeader((unsigned __int64)a2, 0);
      v5 = AlpcpProcessSynchronousRequest(
             (__int64)Object,
             131073,
             a2,
             0LL,
             (unsigned __int64)a2,
             0LL,
             0LL,
             0LL,
             PreviousMode);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
      if ( v5 == -1073740031 )
        v5 = -1073741229;
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
