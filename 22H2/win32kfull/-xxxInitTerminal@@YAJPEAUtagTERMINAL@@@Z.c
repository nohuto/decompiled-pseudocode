/*
 * XREFs of ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C006CB20
 * Callers:
 *     xxxCreateWindowStation @ 0x1C006B42C (xxxCreateWindowStation.c)
 * Callees:
 *     xxxInitInput @ 0x1C00BAD84 (xxxInitInput.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

NTSTATUS __fastcall xxxInitTerminal(struct tagTERMINAL *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  NTSTATUS v4; // eax
  HANDLE v5; // rcx
  void *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentProcess; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  void *EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v29[52]; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+B4h] [rbp-4Ch]

  EventHandle = 0LL;
  Handle = 0LL;
  memset_0(v29, 0, 0x3B8uLL);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( *((_QWORD *)a1 + 7) )
  {
    v6 = (void *)*((_QWORD *)a1 + 5);
    ObfReferenceObject(v6);
    UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
    KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
    EnterCrit(1LL, 0LL);
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( result < 0 )
      return result;
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    *((_QWORD *)a1 + 7) = Object;
    ZwClose(EventHandle);
    if ( v3 < 0 )
      return v3;
    if ( (*(_DWORD *)a1 & 2) == 0 && !(unsigned int)xxxInitInput(a1) )
    {
      v3 = -1073741801;
LABEL_20:
      ObfDereferenceObject(*((PVOID *)a1 + 7));
      *((_QWORD *)a1 + 7) = 0LL;
      return v3;
    }
    v3 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v3 < 0 )
      goto LABEL_20;
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v5 = Handle;
    v3 = v4;
    *((_QWORD *)a1 + 5) = Object;
    ZwClose(v5);
    if ( v3 < 0 )
      goto LABEL_20;
    v6 = (void *)*((_QWORD *)a1 + 5);
    if ( !(unsigned int)InitCreateSystemThreadsMsg(v29, 1LL, a1) )
      goto LABEL_22;
    v11 = 0;
    UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
    if ( PsGetCurrentProcess(v13, v12, v14) == gpepCSRSS )
    {
      v15 = LpcRequestPort(CsrApiPort, v29);
    }
    else
    {
      Object = (PVOID)952;
      v15 = LpcSendWaitReceivePort(CsrApiPort, 0x20000LL, v29, v29, &Object, 0LL);
    }
    if ( v15 >= 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v17, v16, v18);
      if ( v30 >= 0 || CurrentProcess == gpepCSRSS )
      {
        KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
        v11 = 1;
      }
    }
    EnterCrit(1LL, 0LL);
    if ( !v11 )
    {
LABEL_22:
      ObfDereferenceObject(*((PVOID *)a1 + 7));
      ObfDereferenceObject(v6);
      *((_QWORD *)a1 + 7) = 0LL;
      *((_QWORD *)a1 + 5) = 0LL;
      return -1073741801;
    }
  }
  ObfDereferenceObject(v6);
  v20 = *(_DWORD *)a1;
  *((_QWORD *)a1 + 5) = 0LL;
  if ( (v20 & 8) != 0 )
  {
    *(_DWORD *)a1 = v20 & 0xFFFFFFF7;
    return -1073741801;
  }
  *(_DWORD *)a1 = v20 | 1;
  return 0;
}
