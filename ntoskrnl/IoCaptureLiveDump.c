/*
 * XREFs of IoCaptureLiveDump @ 0x140948A78
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140539CE8 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x1409386E8 (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140244870 (EtwActivityIdControl.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140392344 (SecureDump_GetSecureDumpSettings.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Feature_LivedumpProcessFiltering__private_IsEnabledDeviceUsage @ 0x140409F20 (Feature_LivedumpProcessFiltering__private_IsEnabledDeviceUsage.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x140557AD8 (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpTrace @ 0x140557C8C (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14055859C (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405588B0 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140558AB4 (IopLiveDumpTraceInterfaceStart.c)
 *     KeGetSupervisorStateExtensionHost @ 0x14057006C (KeGetSupervisorStateExtensionHost.c)
 *     IoCreateNotificationEvent @ 0x14079A640 (IoCreateNotificationEvent.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1409495FC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14094B85C (IopLiveDumpInitRegistrySettings.c)
 *     IopLiveDumpReleaseResources @ 0x14094BEA8 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpValidateParameters @ 0x14094C310 (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFile @ 0x14094C514 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094C9E8 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140A97838 (IopLiveDumpCaptureMemoryPages.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoCaptureLiveDump(int a1, __int64 a2, __int64 a3, __int64 a4, void *a5, __int64 a6, __int64 *a7)
{
  PKEVENT v8; // rdi
  PKEVENT v9; // r14
  struct _EX_RUNDOWN_REF *v10; // r12
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int *v13; // r14
  HANDLE v14; // r13
  int SecureDumpSettings; // edi
  HANDLE v16; // rsi
  struct _EX_RUNDOWN_REF *SupervisorStateExtensionHost; // rax
  void (__fastcall **ExtensionTable)(__int64); // rax
  __int64 v19; // rcx
  __int64 Pool2; // rax
  __int64 v21; // rax
  _BYTE *v22; // rcx
  int v23; // eax
  __int64 MillisecondCounter; // r15
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  void *v29; // rsi
  int v30; // ecx
  const GUID *v31; // r9
  const GUID *v32; // r8
  char v34; // [rsp+38h] [rbp-D0h] BYREF
  bool v35; // [rsp+39h] [rbp-CFh] BYREF
  bool v36; // [rsp+3Ah] [rbp-CEh] BYREF
  char v37; // [rsp+3Bh] [rbp-CDh] BYREF
  HANDLE EventHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v39; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h] BYREF
  __int64 v46; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int128 v48; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v50; // [rsp+C8h] [rbp-40h]
  __int64 v51; // [rsp+D0h] [rbp-38h]
  HANDLE *p_EventHandle; // [rsp+D8h] [rbp-30h]
  __int64 v53; // [rsp+E0h] [rbp-28h]
  __int64 *v54; // [rsp+E8h] [rbp-20h]
  __int64 v55; // [rsp+F0h] [rbp-18h]
  __int64 *v56; // [rsp+F8h] [rbp-10h]
  __int64 v57; // [rsp+100h] [rbp-8h]
  __int64 *v58; // [rsp+108h] [rbp+0h]
  __int64 v59; // [rsp+110h] [rbp+8h]
  __int64 *v60; // [rsp+118h] [rbp+10h]
  __int64 v61; // [rsp+120h] [rbp+18h]
  HANDLE *v62; // [rsp+128h] [rbp+20h]
  __int64 v63; // [rsp+130h] [rbp+28h]
  char *v64; // [rsp+138h] [rbp+30h]
  __int64 v65; // [rsp+140h] [rbp+38h]
  bool *v66; // [rsp+148h] [rbp+40h]
  __int64 v67; // [rsp+150h] [rbp+48h]
  bool *v68; // [rsp+158h] [rbp+50h]
  __int64 v69; // [rsp+160h] [rbp+58h]
  HANDLE *p_Handle; // [rsp+168h] [rbp+60h]
  __int64 v71; // [rsp+170h] [rbp+68h]
  char *v72; // [rsp+178h] [rbp+70h]
  __int64 v73; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+188h] [rbp+80h] BYREF
  __int64 *v75; // [rsp+1A8h] [rbp+A0h]
  __int64 v76; // [rsp+1B0h] [rbp+A8h]
  __int64 *v77; // [rsp+1B8h] [rbp+B0h]
  __int64 v78; // [rsp+1C0h] [rbp+B8h]
  HANDLE *v79; // [rsp+1C8h] [rbp+C0h]
  __int64 v80; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 *v82; // [rsp+1F8h] [rbp+F0h]
  int v83; // [rsp+200h] [rbp+F8h]
  int v84; // [rsp+204h] [rbp+FCh]

  v46 = a4;
  v45 = a3;
  v8 = 0LL;
  v44 = a2;
  v9 = 0LL;
  LODWORD(v42) = a1;
  v10 = 0LL;
  v43 = a6;
  v11 = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  DestinationString = 0LL;
  v48 = 0LL;
  if ( !ForceDumpDisabled && AllowLiveDump )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    IopLiveDumpGetMillisecondCounter(1);
    if ( BufferChunkSizeInBytes != MEMORY[0xFFFFF78000000244] )
    {
      BufferChunkSizeInBytes = MEMORY[0xFFFFF78000000244];
      BufferChunkSizeInPages = MEMORY[0xFFFFF78000000244] >> 12;
    }
    IopLiveDumpTraceInterfaceStart();
    if ( a7 )
      *a7 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v34 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
    if ( v34 != 1 )
    {
      v13 = (int *)(a6 + 24);
      v14 = EventHandle;
      SecureDumpSettings = -1073741267;
      v16 = Handle;
LABEL_37:
      if ( IptInterface )
      {
        (*(void (__fastcall **)(_QWORD))IptInterface)(0LL);
        ExReleaseExtensionTable(v10);
        IptInterface = 0LL;
      }
      if ( v14 )
        ZwClose(v14);
      if ( v16 )
        ZwClose(v16);
      if ( v39 )
        ZwClose(v39);
      if ( (*v13 & 0x10) != 0 && SecureDumpSettings == -1073741248 && IopLiveDumpIsTracingEnabled() )
        EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT, 0LL, 0, 0LL);
      if ( v34 )
      {
        IopLiveDumpContext = 0LL;
        ExReleaseResourceLite(&IopLiveDumpLock);
      }
      KeLeaveCriticalRegion();
      if ( SecureDumpSettings >= 0 )
      {
        SecureDumpSettings = SecureDump_GetSecureDumpSettings(v11 + 984);
        if ( SecureDumpSettings >= 0 )
        {
          if ( !*v22
            || (v23 = *(_DWORD *)(v11 + 992)) != 0
            && *(_BYTE *)(v11 + 985)
            && *(_DWORD *)(v11 + 988) == 4096
            && (v23 & 0xFFF) == 0 )
          {
            if ( (*(_DWORD *)(v11 + 40) & 8) != 0 )
            {
              SecureDumpSettings = -1073741802;
              *a7 = v11;
            }
            else
            {
              IopLiveDumpTrace();
              MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
              if ( *(_QWORD *)(v11 + 192) || *(_QWORD *)(v11 + 200) )
                v25 = IopLiveDumpWriteDumpFileWithExtraPages(v11);
              else
                v25 = IopLiveDumpWriteDumpFile(v11);
              SecureDumpSettings = v25;
              v26 = IopLiveDumpGetMillisecondCounter(0);
              if ( (unsigned int)dword_140C06280 > 5 && tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL) )
              {
                v43 = 0x1000000LL;
                v75 = &v43;
                v27 = *(_QWORD *)(v11 + 560);
                v76 = 8LL;
                v78 = 8LL;
                v80 = 8LL;
                v28 = *(_QWORD *)(v27 + 4000);
                v77 = &v40;
                v40 = v28;
                v39 = (HANDLE)(v26 - MillisecondCounter);
                v79 = &v39;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140C06280,
                  (unsigned __int8 *)&word_14002B94E,
                  (const GUID *)(v11 + 968),
                  (const GUID *)(v11 + 952),
                  5u,
                  &v74);
              }
              IopLiveDumpTraceDumpFileWriteEnd(v11, v26 - MillisecondCounter, 0LL, SecureDumpSettings);
              if ( SecureDumpSettings >= 0 && (*(_DWORD *)(v11 + 80) & 2) != 0 )
                SecureDumpSettings = 261;
            }
          }
          else
          {
            SecureDumpSettings = -1073741823;
          }
        }
      }
      v29 = (void *)IopLiveDumpGetMillisecondCounter(0);
      IopLiveDumpTraceInterfaceEnd(v11, 0LL, SecureDumpSettings, v29);
      if ( (unsigned int)dword_140C06280 > 5 && tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL) )
      {
        v30 = *v13;
        v50 = &v43;
        v43 = 0x1000000LL;
        p_EventHandle = &EventHandle;
        v40 = (unsigned int)v42;
        v51 = 8LL;
        v54 = &v40;
        v56 = &v44;
        v58 = &v45;
        v60 = &v46;
        v39 = a5;
        v62 = &v39;
        LODWORD(EventHandle) = SecureDumpSettings;
        v34 = (v30 & 8) != 0;
        v64 = &v34;
        v35 = (v30 & 0x10) != 0;
        v53 = 4LL;
        v66 = &v35;
        v68 = &v36;
        p_Handle = &Handle;
        v37 = IOSpaceEnabled;
        v72 = &v37;
        v55 = 8LL;
        v57 = 8LL;
        v59 = 8LL;
        v61 = 8LL;
        v63 = 8LL;
        v65 = 1LL;
        v67 = 1LL;
        v36 = (v30 & 0x20) != 0;
        v69 = 1LL;
        Handle = v29;
        v71 = 8LL;
        v73 = 1LL;
        if ( v11 )
        {
          v31 = (const GUID *)(v11 + 952);
          v32 = (const GUID *)(v11 + 968);
        }
        else
        {
          v31 = (const GUID *)&v48;
          v32 = (const GUID *)&v48;
        }
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C06280,
          (unsigned __int8 *)&byte_14002BA7F,
          v32,
          v31,
          0xEu,
          &v49);
      }
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 40) & 8) == 0 )
          EtwActivityIdControl(2u, (LPGUID)(v11 + 952));
        if ( SecureDumpSettings != -1073741802 )
        {
          IopLiveDumpReleaseResources(v11);
          ExFreePoolWithTag((PVOID)v11, 0x706D644Cu);
        }
      }
      return (unsigned int)SecureDumpSettings;
    }
    SupervisorStateExtensionHost = (struct _EX_RUNDOWN_REF *)KeGetSupervisorStateExtensionHost();
    v10 = SupervisorStateExtensionHost;
    if ( SupervisorStateExtensionHost )
    {
      ExtensionTable = (void (__fastcall **)(__int64))ExGetExtensionTable(SupervisorStateExtensionHost);
      IptInterface = (__int64)ExtensionTable;
      if ( !ExtensionTable )
        goto LABEL_14;
      LOBYTE(v19) = 1;
      (*ExtensionTable)(v19);
      if ( !(*(unsigned __int8 (**)(void))(IptInterface + 8))() )
      {
        (*(void (__fastcall **)(_QWORD))IptInterface)(0LL);
        ExReleaseExtensionTable(v10);
        IptInterface = 0LL;
      }
      if ( !IptInterface )
LABEL_14:
        v10 = 0LL;
    }
    if ( (*(_DWORD *)(a6 + 24) & 0x10) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition");
      v8 = IoCreateNotificationEvent(&DestinationString, &EventHandle);
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition");
      v9 = IoCreateNotificationEvent(&DestinationString, &Handle);
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\HighCommitCondition");
      v40 = (__int64)IoCreateNotificationEvent(&DestinationString, &v39);
    }
    Pool2 = ExAllocatePool2(64LL, 1224LL, 1886217292LL);
    v11 = Pool2;
    if ( !Pool2 )
    {
      v13 = (int *)(a6 + 24);
      v14 = EventHandle;
      SecureDumpSettings = -1073741670;
      v16 = Handle;
      goto LABEL_37;
    }
    *(_DWORD *)Pool2 = v42;
    *(_QWORD *)(Pool2 + 8) = v44;
    *(_QWORD *)(Pool2 + 16) = v45;
    *(_QWORD *)(Pool2 + 32) = a5;
    *(_QWORD *)(Pool2 + 904) = EventHandle;
    *(_QWORD *)(Pool2 + 912) = Handle;
    *(_QWORD *)(Pool2 + 920) = v39;
    *(_QWORD *)(Pool2 + 24) = a4;
    v14 = 0LL;
    EventHandle = 0LL;
    v39 = 0LL;
    v21 = v40;
    *(_QWORD *)(v11 + 928) = v8;
    *(_DWORD *)(v11 + 80) &= 0xFFFFFFF3;
    *(_QWORD *)(v11 + 944) = v21;
    IopLiveDumpContext = v11;
    *(_QWORD *)(v11 + 936) = v9;
    *(_QWORD *)(v11 + 1096) = 0LL;
    *(_QWORD *)(v11 + 1104) = 0LL;
    if ( (unsigned int)Feature_LivedumpProcessFiltering__private_IsEnabledDeviceUsage() )
    {
      if ( (*(_DWORD *)(v11 + 40) & 4) != 0 )
        *(_DWORD *)(v11 + 80) |= 0x18000u;
      *(_QWORD *)(v11 + 1208) = v11 + 1200;
      *(_QWORD *)(v11 + 1200) = v11 + 1200;
    }
    IopLiveDumpInitRegistrySettings(v11);
    if ( AllowLiveDump && ((*(_DWORD *)(v11 + 80) & 0x200) == 0 || *(_QWORD *)(v11 + 1144)) )
    {
      EtwActivityIdControl(5u, (LPGUID)(v11 + 952));
      EtwActivityIdControl(1u, (LPGUID)(v11 + 968));
      if ( (unsigned int)dword_140C06280 > 5 && tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL) )
      {
        v84 = 0;
        v82 = &v40;
        v40 = 0x1000000LL;
        v83 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C06280,
          (unsigned __int8 *)&byte_14002B9A7,
          (const GUID *)(v11 + 968),
          (const GUID *)(v11 + 952),
          3u,
          &v81);
      }
      SecureDumpSettings = IopLiveDumpValidateParameters(v11, v43);
      v13 = (int *)(a6 + 24);
      if ( SecureDumpSettings < 0 )
        goto LABEL_36;
      if ( (*(_DWORD *)(v11 + 40) & 8) == 0 || a7 )
      {
        IopLiveDumpOpenVMMemoryPartition(v11);
        SecureDumpSettings = IopLiveDumpAllocAndInitResources(v11);
        if ( SecureDumpSettings >= 0 )
          SecureDumpSettings = IopLiveDumpCaptureMemoryPages(v11);
        goto LABEL_36;
      }
    }
    else
    {
      v13 = (int *)(a6 + 24);
    }
    SecureDumpSettings = -1073741811;
LABEL_36:
    v16 = EventHandle;
    goto LABEL_37;
  }
  if ( a7 )
    *a7 = 0LL;
  return 3221225659LL;
}
