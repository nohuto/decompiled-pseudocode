/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1C00373B8
 * Callers:
 *     rimCreateDev @ 0x1C00371D0 (rimCreateDev.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C0038300 (rimAddToObTrackList.c)
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS inserted; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+68h] [rbp+18h] BYREF

  Object = 0LL;
  LOBYTE(a4) = 1;
  LOBYTE(a1) = 1;
  inserted = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL, a4, 0LL, 2400, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0x960uLL);
    v10 = *(unsigned int *)SGDGetUserSessionState(v7, v6, v8, v9);
    *(_DWORD *)Object = v10;
    *((_DWORD *)Object + 1) = 2;
    v11 = (char *)Object + 16;
    *((_QWORD *)Object + 3) = (char *)Object + 16;
    *v11 = v11;
    v12 = (char *)Object + 208;
    *((_QWORD *)Object + 27) = (char *)Object + 208;
    *v12 = v12;
    v13 = (char *)Object + 192;
    *((_QWORD *)Object + 25) = (char *)Object + 192;
    *v13 = v13;
    CurrentProcess = PsGetCurrentProcess(v10, v14, v15, v16);
    *((_QWORD *)Object + 4) = CurrentProcess;
    *((_QWORD *)Object + 5) = KeGetCurrentThread();
    *((_DWORD *)Object + 16) = (unsigned __int8)isChildPartition();
    inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, Handle);
    if ( inserted >= 0 )
      rimAddToObTrackList(Object);
  }
  return (unsigned int)inserted;
}
