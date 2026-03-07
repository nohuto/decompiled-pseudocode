__int64 __fastcall DwmSyncFlushForceRenderAndWaitForBatch(PVOID Object, int a2)
{
  int v4; // ebx
  int v5; // eax
  struct _PORT_MESSAGE v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-8h]
  int v9; // [rsp+5Ch] [rbp-4h]
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    v4 = DwmSyncLPCAllowed();
    if ( v4 >= 0 )
    {
      EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin(0xFFFFFFFFLL);
      memset(&v7, 0, sizeof(v7));
      v7.u1.Length = 3145736;
      v10 = 48LL;
      v7.u2.s2.Type = 0x8000;
      v8 = -2147483639;
      v9 = a2;
      v5 = LpcSendWaitReceivePort(Object, 0x20000LL, &v7, &v7, &v10, 0LL);
      v4 = SyncLpcCheckNtStatus(v5, &v7);
      EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd(0xFFFFFFFFLL);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
