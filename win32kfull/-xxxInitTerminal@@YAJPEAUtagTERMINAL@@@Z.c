NTSTATUS __fastcall xxxInitTerminal(struct tagTERMINAL *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  NTSTATUS v4; // eax
  HANDLE v5; // rcx
  void *v6; // rdi
  __int64 v7; // rcx
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentProcess; // rax
  int v17; // eax
  __int64 v18; // rcx
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  void *EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v23[52]; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+B4h] [rbp-4Ch]

  EventHandle = 0LL;
  Handle = 0LL;
  memset_0(v23, 0, 0x3B8uLL);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( *((_QWORD *)a1 + 7) )
  {
    v6 = (void *)*((_QWORD *)a1 + 5);
    ObfReferenceObject(v6);
    UserSessionSwitchLeaveCrit(v18);
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
    if ( !(unsigned int)InitCreateSystemThreadsMsg(v23, 1LL, a1) )
      goto LABEL_22;
    v8 = 0;
    UserSessionSwitchLeaveCrit(v7);
    if ( PsGetCurrentProcess(v10, v9, v11) == gpepCSRSS )
    {
      v12 = LpcRequestPort(CsrApiPort, v23);
    }
    else
    {
      Object = (PVOID)952;
      v12 = LpcSendWaitReceivePort(CsrApiPort, 0x20000LL, v23, v23, &Object, 0LL);
    }
    if ( v12 >= 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v14, v13, v15);
      if ( v24 >= 0 || CurrentProcess == gpepCSRSS )
      {
        KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
        v8 = 1;
      }
    }
    EnterCrit(1LL, 0LL);
    if ( !v8 )
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
  v17 = *(_DWORD *)a1;
  *((_QWORD *)a1 + 5) = 0LL;
  if ( (v17 & 8) != 0 )
  {
    *(_DWORD *)a1 = v17 & 0xFFFFFFF7;
    return -1073741801;
  }
  *(_DWORD *)a1 = v17 | 1;
  return 0;
}
