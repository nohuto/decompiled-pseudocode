/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x140716750
 * Callers:
 *     NtReplyWaitReceivePort @ 0x140716730 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x140860480 (NtListenPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140716318 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x1407168B0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140716B9C (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140716C88 (AlpcpProbeForWriteMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 */

__int64 __fastcall NtReplyWaitReceivePortEx(HANDLE Handle, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v11; // ebx
  __int64 v12; // r9
  PVOID v13; // rdi
  int v14; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v17[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    AlpcpProbeForWriteMessageHeader(a4, 0LL);
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v13 = Object;
    v17[0] = Object;
    LODWORD(v17[6]) = 0;
    if ( a3
      && ((*((_DWORD *)Object + 104) & 0x2000) == 0
        ? (LODWORD(v17[6]) = 65541,
           memset(&v17[3], 0, 24),
           LOBYTE(v12) = PreviousMode,
           v14 = AlpcpSendMessage(v17, a3, 0LL, v12))
        : (LODWORD(v17[6]) = 4,
           memset(&v17[3], 0, 24),
           v14 = AlpcpReplyLegacySynchronousRequest((__int64)v17, a3, PreviousMode)),
          v11 = v14,
          v14 < 0) )
    {
      ObfDereferenceObject(v13);
      if ( v11 == -1073740029 )
        v11 = -1073741769;
    }
    else
    {
      v11 = AlpcpReceiveLegacyMessage(v17, a4, a5, a2);
      AlpcpCompleteDeferSignalRequest(v17);
      ObfDereferenceObject(v13);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
