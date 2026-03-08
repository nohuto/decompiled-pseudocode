/*
 * XREFs of RIMOpenDevWorker @ 0x1C0089188
 * Callers:
 *     RIMOpenDev @ 0x1C0089058 (RIMOpenDev.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C017D810 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdDSd @ 0x1C019EBE4 (WPP_RECORDER_AND_TRACE_SF_qdDSd.c)
 */

__int64 __fastcall RIMOpenDevWorker(
        __int64 a1,
        struct _OBJECT_ATTRIBUTES *a2,
        ACCESS_MASK a3,
        ULONG a4,
        __int64 a5,
        unsigned int a6,
        void **FileHandle,
        struct _IO_STATUS_BLOCK *IoStatusBlock)
{
  char v8; // bp
  struct _OBJECT_ATTRIBUTES *v11; // rax
  unsigned int v13; // edi
  int v14; // r15d
  char v15; // si
  NTSTATUS File; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rcx
  char v22; // al
  int v23; // edx
  __int64 v24; // r11
  int v25; // r8d
  char v26; // r10
  unsigned int v27; // eax
  __int64 v28; // r8
  char v29; // al
  int v30; // edx
  __int64 v31; // r11
  int v32; // r8d
  char v33; // r10
  int AllocationSize; // [rsp+20h] [rbp-88h]
  __int64 FileAttributes; // [rsp+28h] [rbp-80h]
  ULONG CreateDisposition; // [rsp+38h] [rbp-70h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp-38h] BYREF

  v8 = 0;
  v11 = a2;
  v13 = 0;
  v14 = 0;
  if ( a6 )
  {
    v15 = 1;
    while ( 1 )
    {
      File = ZwCreateFile(FileHandle, a3, v11, IoStatusBlock, 0LL, 0, a4, 3u, 0, 0LL, 0);
      v13 = File;
      if ( File != -1073741757 && File != -1073741790 )
        break;
      v21 = *(unsigned int *)(a1 + 200);
      if ( (v21 & 0x80u) == 0LL && !*(_DWORD *)(SGDGetUserSessionState(v21, v17, v18, v19) + 516) )
      {
        if ( v13 == -1073741757 || v13 == -1073741790 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v15 = 0;
          }
          if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
            LOBYTE(v30) = v15;
            WPP_RECORDER_AND_TRACE_SF_qdDSd(
              *(_QWORD *)(v31 + 24),
              v30,
              v32,
              (_DWORD)gRimLog,
              AllocationSize,
              FileAttributes,
              19,
              CreateDisposition,
              a1,
              v33,
              v29,
              *(_QWORD *)(a1 + 216),
              v13);
          }
          if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
            KeBugCheckEx(0x164u, 5uLL, a1 + 208, 0LL, 0LL);
        }
        return v13;
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        v8 = 1;
      }
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
        LOBYTE(v23) = v8;
        WPP_RECORDER_AND_TRACE_SF_qdDSd(
          *(_QWORD *)(v24 + 24),
          v23,
          v25,
          (_DWORD)gRimLog,
          AllocationSize,
          FileAttributes,
          18,
          CreateDisposition,
          a1,
          v26,
          v22,
          *(_QWORD *)(a1 + 216),
          v13);
      }
      v27 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      LODWORD(FileAttributes) = v13;
      DbgPrintGDI(
        "RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %X..retry after 100ms",
        a1,
        v28,
        v27,
        *(_QWORD *)(a1 + 216),
        FileAttributes);
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(1, 0, &Interval);
      if ( ++v14 >= a6 )
        return v13;
      v11 = a2;
      v8 = 0;
    }
  }
  return v13;
}
