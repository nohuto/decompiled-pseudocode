NTSTATUS __fastcall CActivationObject::Create(
        __int64 a1,
        struct _OBJECT_ATTRIBUTES *a2,
        __int64 a3,
        __int64 a4,
        HWND a5,
        unsigned __int64 a6,
        struct CActivationObject **a7)
{
  struct CActivationObject **v7; // rbx
  NTSTATUS result; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  NTSTATUS inserted; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 CurrentProcess; // rax
  struct _LUID Luid; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+18h] BYREF

  v7 = a7;
  Object = 0LL;
  Luid = 0LL;
  *a7 = 0LL;
  result = ZwAllocateLocallyUniqueId(&Luid);
  if ( result >= 0 )
  {
    LOBYTE(v10) = 1;
    LOBYTE(v9) = 1;
    inserted = ObCreateObject(v9, ExActivationObjectType, 0LL, v10, 0LL, 80, 0, 0, &Object);
    if ( inserted >= 0 )
    {
      memset(Object, 0, 0x50uLL);
      v16 = *(unsigned int *)SGDGetUserSessionState(v13, v12, v14, v15);
      *(_DWORD *)Object = v16;
      CurrentProcess = PsGetCurrentProcess(v16, v17, v18, v19);
      *((_QWORD *)Object + 3) = CurrentProcess;
      *((_QWORD *)Object + 4) = KeGetCurrentThread();
      inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, 0LL);
      if ( inserted >= 0 )
      {
        *((_QWORD *)Object + 6) = a6;
        *((_QWORD *)Object + 9) = a5;
        *((struct _LUID *)Object + 5) = Luid;
        *((_DWORD *)Object + 14) = 1;
        *v7 = (struct CActivationObject *)Object;
      }
    }
    return inserted;
  }
  return result;
}
