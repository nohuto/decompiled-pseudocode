/*
 * XREFs of NtReplyPort @ 0x1405DE380
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     memset @ 0x140413800 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E1BDC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v9, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    LODWORD(v9[6]) = 0;
    v9[0] = Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
      v5 = AlpcpReplyLegacySynchronousRequest(v9, ReplyMessage, v6);
    }
    else
    {
      LODWORD(v9[6]) = 65537;
      LOBYTE(v7) = KeGetCurrentThread()->PreviousMode;
      v5 = AlpcpSendMessage(v9, ReplyMessage, 0LL, v7);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
