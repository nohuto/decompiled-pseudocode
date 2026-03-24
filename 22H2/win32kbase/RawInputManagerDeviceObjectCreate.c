/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1C0058CE8
 * Callers:
 *     rimCreateDev @ 0x1C0058AF4 (rimCreateDev.c)
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     rimAddToObTrackList @ 0x1C005915C (rimAddToObTrackList.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  PVOID v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+68h] [rbp+18h] BYREF

  Object = 0LL;
  LOBYTE(a4) = 1;
  LOBYTE(a1) = 1;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 2408, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0x968uLL);
    v6 = Object;
    *(_DWORD *)Object = gSessionId;
    *((_DWORD *)Object + 1) = 2;
    v7 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v7 = v7;
    v8 = (char *)Object + 224;
    *((_QWORD *)Object + 29) = (char *)Object + 224;
    *v8 = v8;
    v9 = (char *)Object + 208;
    *((_QWORD *)Object + 27) = (char *)Object + 208;
    *v9 = v9;
    CurrentProcess = PsGetCurrentProcess(v6, v10);
    *((_QWORD *)Object + 4) = CurrentProcess;
    *((_QWORD *)Object + 5) = KeGetCurrentThread();
    *((_DWORD *)Object + 16) = isChildPartition();
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList(Object);
  }
  return (unsigned int)inserted;
}
