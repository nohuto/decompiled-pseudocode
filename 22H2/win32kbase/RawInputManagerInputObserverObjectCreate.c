/*
 * XREFs of RawInputManagerInputObserverObjectCreate @ 0x1C01661E0
 * Callers:
 *     rimObsAddInputObserver @ 0x1C017D7DC (rimObsAddInputObserver.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C005915C (rimAddToObTrackList.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     rimObsReadMaxQueueSize @ 0x1C017EE10 (rimObsReadMaxQueueSize.c)
 */

__int64 __fastcall RawInputManagerInputObserverObjectCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  PVOID v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 CurrentProcess; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  PVOID Object; // [rsp+68h] [rbp+18h] BYREF

  Object = 0LL;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 192, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0xC0uLL);
    v6 = Object;
    *(_DWORD *)Object = gSessionId;
    *((_DWORD *)Object + 1) = 3;
    v7 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v7 = v7;
    CurrentProcess = PsGetCurrentProcess(v6, v8);
    *((_QWORD *)Object + 4) = CurrentProcess;
    *((_QWORD *)Object + 5) = KeGetCurrentThread();
    v10 = (char *)Object + 128;
    *((_QWORD *)Object + 17) = (char *)Object + 128;
    *v10 = v10;
    v11 = (char *)Object + 144;
    *((_QWORD *)Object + 19) = (char *)Object + 144;
    *v11 = v11;
    *((_DWORD *)Object + 40) = 0;
    *((_DWORD *)Object + 41) = 0;
    *((_DWORD *)Object + 42) = rimObsReadMaxQueueSize();
    v12 = Object;
    *((_QWORD *)Object + 22) = 0LL;
    v12[23] = 0LL;
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList((__int64)Object);
  }
  return (unsigned int)inserted;
}
