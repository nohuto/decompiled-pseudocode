/*
 * XREFs of ProtectHandle @ 0x1C00945DC
 * Callers:
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C003168C (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C0032254 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0093DD0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C0094444 (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00944FC (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     NtMITInitMinuserThread @ 0x1C016B060 (NtMITInitMinuserThread.c)
 *     NtMITUninitMinuserThread @ 0x1C016C450 (NtMITUninitMinuserThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProtectHandle(void *a1, int a2, struct _OBJECT_TYPE *a3, char a4)
{
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  struct _OBJECT_HANDLE_INFORMATION v9; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v9 = 0LL;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, 0x1F0003u, a3, 1, &Object, &v9);
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = 1;
    BYTE1(v11) = a4;
    LOBYTE(v11) = (v9.HandleAttributes & 2) != 0;
    v6 = ObSetHandleAttributes(a1, &v11, v7);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v6;
}
