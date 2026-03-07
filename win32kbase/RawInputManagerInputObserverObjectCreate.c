__int64 __fastcall RawInputManagerInputObserverObjectCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
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
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PVOID Object; // [rsp+68h] [rbp+18h] BYREF

  Object = 0LL;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 192, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0xC0uLL);
    v10 = *(unsigned int *)SGDGetUserSessionState(v7, v6, v8, v9);
    *(_DWORD *)Object = v10;
    *((_DWORD *)Object + 1) = 3;
    v11 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v11 = v11;
    CurrentProcess = PsGetCurrentProcess(v10, v12, v13, v14);
    *((_QWORD *)Object + 4) = CurrentProcess;
    *((_QWORD *)Object + 5) = KeGetCurrentThread();
    v16 = (char *)Object + 128;
    *((_QWORD *)Object + 17) = (char *)Object + 128;
    *v16 = v16;
    v17 = (char *)Object + 144;
    *((_QWORD *)Object + 19) = (char *)Object + 144;
    *v17 = v17;
    *((_DWORD *)Object + 40) = 0;
    *((_DWORD *)Object + 41) = 0;
    *((_DWORD *)Object + 42) = rimObsReadMaxQueueSize();
    v18 = Object;
    *((_QWORD *)Object + 22) = 0LL;
    v18[23] = 0LL;
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList((__int64)Object, v19, v20, v21);
  }
  return (unsigned int)inserted;
}
