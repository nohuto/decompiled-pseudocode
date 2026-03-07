__int64 __fastcall RawInputManagerObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  Object = 0LL;
  LOBYTE(a4) = 1;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 1120, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0x460uLL);
    v10 = *(unsigned int *)SGDGetUserSessionState(v7, v6, v8, v9);
    *(_DWORD *)Object = v10;
    *((_DWORD *)Object + 1) = 1;
    v11 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v11 = v11;
    CurrentProcess = PsGetCurrentProcess(v10, v12, v13, v14);
    *((_QWORD *)Object + 4) = CurrentProcess;
    *((_QWORD *)Object + 5) = KeGetCurrentThread();
    *((_DWORD *)Object + 16) = (unsigned __int8)isChildPartition();
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList(Object);
  }
  return (unsigned int)inserted;
}
