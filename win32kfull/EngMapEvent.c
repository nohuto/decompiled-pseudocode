PEVENT __stdcall EngMapEvent(HDEV hDev, HANDLE hUserObject, PVOID Reserved1, PVOID Reserved2, PVOID Reserved3)
{
  PEVENT result; // rax
  PEVENT v8; // rbx
  NTSTATUS v9; // eax
  struct _KEVENT *v10; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  result = (PEVENT)Win32AllocPoolNonPaged(16LL, 1836279364LL);
  v8 = result;
  if ( result )
  {
    Object = 0LL;
    *result = 0LL;
    v9 = ObReferenceObjectByHandle(hUserObject, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v10 = (struct _KEVENT *)Object;
    v8->pKEvent = Object;
    if ( v9 < 0 )
    {
      Win32FreePool(v8);
      v8 = 0LL;
    }
    else
    {
      KePulseEvent(v10, 1, 0);
      v8->fFlags |= 1u;
    }
    if ( Reserved1 )
      *(_QWORD *)Reserved1 = v8;
    return v8;
  }
  return result;
}
