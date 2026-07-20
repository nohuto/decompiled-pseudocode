/*
 * XREFs of SmpSendPlatformBinaryStatus @ 0x1400178C8
 * Callers:
 *     SmpGetPlatformBinary @ 0x140007FF8 (SmpGetPlatformBinary.c)
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140001014 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 */

char __fastcall SmpSendPlatformBinaryStatus(int a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  bool v5; // zf
  __int64 v6; // rcx
  char *Heap; // rax
  char *InputBuffer; // rbx
  _QWORD *v11; // r9
  void *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-D8h]
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  void *FileHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v30[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v31[32]; // [rsp+C0h] [rbp-40h] BYREF
  int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  _DWORD *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 v38; // [rsp+110h] [rbp+10h]
  _DWORD v39[2]; // [rsp+118h] [rbp+18h] BYREF
  char v40[32]; // [rsp+120h] [rbp+20h] BYREF
  int *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  __int64 *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  int v45; // [rsp+1A0h] [rbp+A0h] BYREF

  v45 = a1;
  v5 = a1 == 0;
  FileHandle = 0LL;
  v6 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  if ( !v5 )
    a2 = 0LL;
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(v6 + 48), 8u, 0x34uLL);
  InputBuffer = Heap;
  if ( Heap )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 0;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(Heap) = NtOpenFile(&FileHandle, 0x120003u, &ObjectAttributes, &IoStatusBlock, 2u, 0x60u);
    if ( (int)Heap >= 0 )
    {
      *((_DWORD *)InputBuffer + 5) = 1;
      *((_DWORD *)InputBuffer + 7) = 1;
      *(_DWORD *)InputBuffer = 1130980673;
      *((_DWORD *)InputBuffer + 1) = 1396854879;
      *((_DWORD *)InputBuffer + 2) = 52;
      *((_DWORD *)InputBuffer + 3) = 4;
      *((_DWORD *)InputBuffer + 4) = 0x40000;
      *((_DWORD *)InputBuffer + 6) = 0x40000;
      *((_DWORD *)InputBuffer + 8) = 0x40000;
      *((_DWORD *)InputBuffer + 9) = v45;
      *((_DWORD *)InputBuffer + 10) = 524290;
      *(_QWORD *)(InputBuffer + 44) = a2;
      LOBYTE(Heap) = NtDeviceIoControlFile(
                       FileHandle,
                       0LL,
                       0LL,
                       0LL,
                       &IoStatusBlock,
                       0x32C000u,
                       InputBuffer,
                       0x34u,
                       0LL,
                       0);
    }
  }
  if ( FileHandle )
    LOBYTE(Heap) = NtClose(FileHandle);
  if ( InputBuffer )
    LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, InputBuffer);
  if ( SmpTraceHandle )
  {
    if ( v45 )
    {
      v30[1] = 4LL;
      v30[0] = &v45;
      v11 = v30;
      v13 = 1LL;
      v12 = &SmssEvt_PlatformBinaryExecutionFailed;
    }
    else
    {
      v11 = 0LL;
      v12 = &SmssEvt_PlatformBinaryExecuted;
      v13 = 0LL;
    }
    LOBYTE(Heap) = EtwEventWrite(SmpTraceHandle, v12, v13, v11, *(_QWORD *)ShareAccess, *(_QWORD *)OpenOptions);
  }
  if ( a4 )
  {
    if ( (unsigned int)dword_140027018 > 5 )
    {
      LOBYTE(Heap) = tlgKeywordOn();
      if ( (_BYTE)Heap )
      {
        v23 = v45;
        v32 = &v23;
        v34 = &v26;
        v36 = v39;
        v38 = *((_QWORD *)a4 + 1);
        v39[0] = *a4;
        v33 = 4LL;
        v26 = a3;
        v35 = 8LL;
        v37 = 2LL;
        v39[1] = 0;
        LOBYTE(Heap) = tlgWriteTransfer_EtwEventWriteTransfer(v14, byte_14002236F, v15, v16, 6, (__int64)v31);
      }
    }
  }
  else if ( (unsigned int)dword_140027018 > 5 )
  {
    LOBYTE(Heap) = tlgKeywordOn();
    if ( (_BYTE)Heap )
    {
      v24 = v45;
      v41 = &v24;
      v43 = &v27;
      v42 = 4LL;
      v27 = a3;
      v44 = 8LL;
      LOBYTE(Heap) = tlgWriteTransfer_EtwEventWriteTransfer(v17, byte_14002233E, v18, v19, 4, (__int64)v40);
    }
  }
  return (char)Heap;
}
