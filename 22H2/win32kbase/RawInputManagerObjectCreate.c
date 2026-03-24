/*
 * XREFs of RawInputManagerObjectCreate @ 0x1C0057E28
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00893D0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     rimAddToObTrackList @ 0x1C005915C (rimAddToObTrackList.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall RawInputManagerObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  PVOID v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  Object = 0LL;
  LOBYTE(a4) = 1;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 904, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0x388uLL);
    v6 = Object;
    *(_DWORD *)Object = gSessionId;
    *((_DWORD *)Object + 1) = 1;
    v7 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v7 = v7;
    CurrentProcess = PsGetCurrentProcess(v6, v8);
    *((_QWORD *)Object + 4) = CurrentProcess;
    *((_QWORD *)Object + 5) = KeGetCurrentThread();
    *((_DWORD *)Object + 16) = isChildPartition();
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList(Object);
  }
  return (unsigned int)inserted;
}
