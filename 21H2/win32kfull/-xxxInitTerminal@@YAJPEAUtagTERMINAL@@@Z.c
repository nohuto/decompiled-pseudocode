/*
 * XREFs of ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00D2948
 * Callers:
 *     xxxCreateWindowStation @ 0x1C00D22F8 (xxxCreateWindowStation.c)
 * Callees:
 *     xxxInitInput @ 0x1C00D36E4 (xxxInitInput.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

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
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  int v15; // eax
  __int64 v16; // rcx
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  void *EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v21[240]; // [rsp+80h] [rbp-80h] BYREF

  EventHandle = 0LL;
  Handle = 0LL;
  memset(v21, 0, 0x3B8uLL);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( *((_QWORD *)a1 + 7) )
  {
    v6 = (void *)*((_QWORD *)a1 + 5);
    ObfReferenceObject(v6);
    UserSessionSwitchLeaveCrit(v16);
    KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
    EnterCrit(1LL, 0LL);
    goto LABEL_15;
  }
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
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v21, 1LL, a1) )
    goto LABEL_22;
  v8 = 0;
  UserSessionSwitchLeaveCrit(v7);
  if ( PsGetCurrentProcess(v10, v9) == gpepCSRSS )
  {
    v11 = LpcRequestPort(CsrApiPort, v21);
  }
  else
  {
    Object = (PVOID)952;
    v11 = ((__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _DWORD *, PVOID *, _QWORD))LpcSendWaitReceivePort)(
            CsrApiPort,
            0x20000LL,
            v21,
            v21,
            &Object,
            0LL);
  }
  if ( v11 >= 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v13, v12);
    if ( v21[13] >= 0 || CurrentProcess == gpepCSRSS )
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
LABEL_15:
  ObfDereferenceObject(v6);
  v15 = *(_DWORD *)a1;
  *((_QWORD *)a1 + 5) = 0LL;
  if ( (v15 & 8) != 0 )
  {
    *(_DWORD *)a1 = v15 & 0xFFFFFFF7;
    return -1073741801;
  }
  *(_DWORD *)a1 = v15 | 1;
  return 0;
}
