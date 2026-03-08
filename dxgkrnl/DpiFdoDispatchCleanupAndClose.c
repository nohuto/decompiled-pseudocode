/*
 * XREFs of DpiFdoDispatchCleanupAndClose @ 0x1C01D09D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C0007720 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0365474 (DxgkDdiDestroyVirtualGpu.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C0396F0C (DpiFdoGetVirtualGpuType.c)
 */

NTSTATUS __fastcall DpiFdoDispatchCleanupAndClose(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PFILE_OBJECT FileObject; // r9
  UCHAR MajorFunction; // al
  __int64 v7; // r8
  const wchar_t *v8; // rdx
  __int64 v10; // rcx
  PIRP v11; // rax
  void **FsContext2; // rbx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v2 + 1160) )
  {
LABEL_12:
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
    return 0;
  }
  if ( !*(_BYTE *)(v2 + 1159) )
  {
    if ( *(_BYTE *)(v2 + 58) )
    {
      CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
      FileObject = CurrentStackLocation->FileObject;
      MajorFunction = CurrentStackLocation->MajorFunction;
      if ( FileObject && MajorFunction == 18 )
      {
        v13 = 0LL;
        v7 = 0x7FFFLL;
        v8 = L"\\VGPUCreator";
        while ( *v8 )
        {
          ++v8;
          if ( !--v7 )
            goto LABEL_11;
        }
        *((_QWORD *)&v13 + 1) = L"\\VGPUCreator";
        LOWORD(v13) = 2 * (0x7FFF - v7);
        WORD1(v13) = v13 + 2;
LABEL_11:
        LOBYTE(v7) = 1;
        if ( RtlFindUnicodeSubstring(&FileObject->FileName, &v13, v7) )
        {
          FsContext2 = (void **)CurrentStackLocation->FileObject->FsContext2;
          if ( FsContext2 )
          {
            DpiFdoGetVirtualGpuType(a2);
            DxgkDdiDestroyVirtualGpu(*FsContext2);
          }
        }
      }
      else if ( MajorFunction == 2 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v2 + 484) )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 64LL) + 4104LL));
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v2 + 168), 1u);
        _InterlockedDecrement((volatile signed __int32 *)(v2 + 5656));
        if ( !*(_DWORD *)(v2 + 5656) )
        {
          while ( 1 )
          {
            v11 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5272), 0LL);
            if ( !v11 )
              break;
            v11->IoStatus.Status = -1073741536;
            v11->IoStatus.Information = 0LL;
            IofCompleteRequest(v11, 0);
          }
          *(_BYTE *)(v2 + 5388) = 0;
          *(_BYTE *)(v2 + 5420) = 0;
        }
        if ( *(_BYTE *)(v2 + 484) )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 64LL);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4104), 0xFFFFFFFF) == 1 )
            DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v10);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
        KeLeaveCriticalRegion();
      }
    }
    goto LABEL_12;
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
}
