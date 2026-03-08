/*
 * XREFs of NtReplyPort @ 0x140789820
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140716318 (AlpcpReplyLegacySynchronousRequest.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 */

__int64 __fastcall NtReplyPort(HANDLE Handle, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  __int64 v6; // r9
  _QWORD v8[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v8, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    LODWORD(v8[6]) = 0;
    v8[0] = Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      v5 = AlpcpReplyLegacySynchronousRequest((__int64)v8, a2, KeGetCurrentThread()->PreviousMode);
    }
    else
    {
      LODWORD(v8[6]) = 65537;
      LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
      v5 = AlpcpSendMessage(v8, a2, 0LL, v6);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    ObfDereferenceObject(Object);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
