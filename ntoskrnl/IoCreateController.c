/*
 * XREFs of IoCreateController @ 0x140944220
 * Callers:
 *     DifIoCreateControllerWrapper @ 0x1405DBAB0 (DifIoCreateControllerWrapper.c)
 * Callees:
 *     KeInitializeDeviceQueue @ 0x1402F96C0 (KeInitializeDeviceQueue.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 */

PCONTROLLER_OBJECT __stdcall IoCreateController(ULONG Size)
{
  struct _CONTROLLER_OBJECT *v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // [rsp+20h] [rbp-60h]
  _QWORD v5[3]; // [rsp+50h] [rbp-30h] BYREF
  int v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+6Ch] [rbp-14h]
  __int128 v8; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF

  v1 = 0LL;
  v2 = Size;
  v5[0] = 48LL;
  v7 = 0;
  v6 = IopCaseInsensitive != 0 ? 576 : 512;
  Object = 0LL;
  Handle = 0LL;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v8 = 0LL;
  if ( (int)ObCreateObjectEx(0, (_DWORD *)IoControllerObjectType, (__int64)v5, 0, v4, Size + 72, 0, 0, &Object, 0LL) >= 0
    && (int)ObInsertObjectEx((char *)Object, 0LL, 3u, 1, 0, (__int64)&Object, &Handle) >= 0 )
  {
    ObCloseHandle(Handle, 0);
    v1 = (struct _CONTROLLER_OBJECT *)Object;
    memset(Object, 0, v2 + 72);
    v1->Type = 2;
    v1->Size = v2 + 72;
    v1->ControllerExtension = &v1[1];
    KeInitializeDeviceQueue(&v1->DeviceWaitQueue);
  }
  return v1;
}
