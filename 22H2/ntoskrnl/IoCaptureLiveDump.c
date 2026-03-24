/*
 * XREFs of IoCaptureLiveDump @ 0x1408962E8
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404EE598 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140888DD0 (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     EtwWrite @ 0x14025D4F0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseExtensionTable @ 0x1402F75FC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     EtwActivityIdControl @ 0x140308D90 (EtwActivityIdControl.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1403BFB80 (SecureDump_GetSecureDumpSettings.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140508908 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14050895C (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140508980 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTrace @ 0x1405089C4 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140509510 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140509728 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1405097D0 (IopLiveDumpTraceInterfaceStart.c)
 *     KeGetSupervisorStateExtensionHost @ 0x140519D90 (KeGetSupervisorStateExtensionHost.c)
 *     IoCreateNotificationEvent @ 0x14078D4F0 (IoCreateNotificationEvent.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140896C0C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpInitRegistrySettings @ 0x140898510 (IopLiveDumpInitRegistrySettings.c)
 *     IopLiveDumpReleaseResources @ 0x14089873C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpValidateParameters @ 0x140898A34 (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFile @ 0x140898BD0 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140898EF0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1409ABAA4 (IopLiveDumpCaptureMemoryPages.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoCaptureLiveDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        GUID **a7)
{
  __int64 v8; // r14
  PKEVENT v10; // rdi
  struct _EX_RUNDOWN_REF *v11; // r13
  GUID *v12; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int inited; // edi
  HANDLE v16; // r14
  HANDLE v17; // r15
  HANDLE v18; // r12
  struct _EX_RUNDOWN_REF *SupervisorStateExtensionHost; // rax
  void (__fastcall **ExtensionTable)(__int64); // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  GUID *PoolWithTag; // rax
  unsigned int v24; // eax
  PKEVENT v25; // rax
  unsigned int Data1; // eax
  __int64 v27; // r14
  _BYTE *v28; // rcx
  int v29; // eax
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ecx
  const GUID *v35; // r9
  const GUID *v36; // r8
  char v37; // [rsp+38h] [rbp-D0h] BYREF
  bool v38; // [rsp+39h] [rbp-CFh] BYREF
  HANDLE EventHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE v41; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v42; // [rsp+58h] [rbp-B0h]
  unsigned int v43; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD DestinationString[3]; // [rsp+68h] [rbp-A0h] BYREF
  PKEVENT v46; // [rsp+80h] [rbp-88h]
  PKEVENT v47; // [rsp+88h] [rbp-80h]
  __int64 v48; // [rsp+90h] [rbp-78h]
  __int64 v49; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v50; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v52; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v53; // [rsp+C0h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  char *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  bool *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  unsigned __int64 *v61; // [rsp+128h] [rbp+20h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v64; // [rsp+158h] [rbp+50h]
  __int64 v65; // [rsp+160h] [rbp+58h]
  unsigned __int64 *v66; // [rsp+168h] [rbp+60h]
  __int64 v67; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+178h] [rbp+70h] BYREF
  unsigned int *v69; // [rsp+198h] [rbp+90h]
  int v70; // [rsp+1A0h] [rbp+98h]
  int v71; // [rsp+1A4h] [rbp+9Ch]

  DestinationString[0] = a6;
  v8 = a3;
  v42 = a1;
  v48 = a3;
  *(_OWORD *)&DestinationString[1] = 0LL;
  EventHandle = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v51 = MEMORY[0xFFFFF78000000008];
  v12 = 0LL;
  Handle = 0LL;
  v41 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v53 = 0LL;
  if ( ForceDumpDisabled )
  {
    if ( a7 )
      *a7 = 0LL;
    return 3221225659LL;
  }
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
  v37 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
  if ( v37 != 1 )
  {
    inited = -1073741267;
LABEL_11:
    v16 = EventHandle;
    v17 = Handle;
    v18 = v41;
    goto LABEL_37;
  }
  SupervisorStateExtensionHost = (struct _EX_RUNDOWN_REF *)KeGetSupervisorStateExtensionHost();
  v11 = SupervisorStateExtensionHost;
  if ( SupervisorStateExtensionHost )
  {
    ExtensionTable = (void (__fastcall **)(__int64))ExGetExtensionTable(SupervisorStateExtensionHost);
    IptInterface = (__int64)ExtensionTable;
    if ( !ExtensionTable )
      goto LABEL_17;
    LOBYTE(v21) = 1;
    (*ExtensionTable)(v21);
    if ( !(*(unsigned __int8 (**)(void))(IptInterface + 8))() )
    {
      (*(void (__fastcall **)(_QWORD))IptInterface)(0LL);
      ExReleaseExtensionTable(v11);
      IptInterface = 0LL;
    }
    if ( !IptInterface )
LABEL_17:
      v11 = 0LL;
  }
  if ( (*(_DWORD *)(DestinationString[0] + 24LL) & 0x10) != 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"\\KernelObjects\\LowNonPagedPoolCondition");
    v10 = IoCreateNotificationEvent((PUNICODE_STRING)&DestinationString[1], &EventHandle);
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"\\KernelObjects\\LowMemoryCondition");
    v46 = IoCreateNotificationEvent((PUNICODE_STRING)&DestinationString[1], &Handle);
    v22 = (__int64)v46;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"\\KernelObjects\\HighCommitCondition");
    v47 = IoCreateNotificationEvent((PUNICODE_STRING)&DestinationString[1], &v41);
    if ( IopLiveDumpIsUnderMemoryPressure((__int64)v10, v22, (__int64)v47) )
    {
      inited = -1073741248;
      goto LABEL_11;
    }
    v8 = v48;
  }
  PoolWithTag = (GUID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x430uLL, 0x706D644Cu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_11;
  }
  memset(PoolWithTag, 0, 0x430uLL);
  v24 = v42;
  v12[5].Data1 &= 0xFFFFFFF3;
  v12->Data1 = v24;
  *(_QWORD *)&v12[2].Data1 = a5;
  *(_QWORD *)&v12[50].Data1 = EventHandle;
  *(_QWORD *)v12[50].Data4 = Handle;
  *(_QWORD *)&v12[51].Data1 = v41;
  *(_QWORD *)&v12[52].Data1 = v46;
  v25 = v47;
  *(_QWORD *)v12->Data4 = a2;
  v17 = 0LL;
  *(_QWORD *)&v12[1].Data1 = v8;
  v16 = 0LL;
  *(_QWORD *)v12[1].Data4 = a4;
  v18 = 0LL;
  *(_QWORD *)v12[52].Data4 = v25;
  IopLiveDumpContext = (__int64)v12;
  *(_QWORD *)v12[51].Data4 = v10;
  IopLiveDumpInitRegistrySettings(v12);
  if ( (v12[5].Data1 & 0x200) != 0 && !*(_QWORD *)v12[65].Data4 )
    goto LABEL_26;
  EtwActivityIdControl(5u, v12 + 53);
  EtwActivityIdControl(1u, v12 + 54);
  if ( (unsigned int)dword_140C044D8 > 5 && tlgKeywordOn((__int64)&dword_140C044D8, 0x200000000000LL) )
  {
    Data1 = v12[65].Data1;
    v71 = 0;
    v43 = Data1;
    v70 = 4;
    v69 = &v43;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C044D8,
      (unsigned __int8 *)&word_1400246BE,
      v12 + 54,
      v12 + 53,
      3u,
      &v68);
  }
  inited = IopLiveDumpValidateParameters(v12, DestinationString[0]);
  if ( inited < 0 )
    goto LABEL_37;
  if ( (v12[5].Data1 & 0x80u) != 0 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    IopLiveDumpGetMillisecondCounter(1);
  }
  if ( (*(_DWORD *)v12[2].Data4 & 8) != 0 && !a7 )
  {
LABEL_26:
    inited = -1073741811;
  }
  else
  {
    inited = IopLiveDumpAllocAndInitResources(v12);
    if ( inited >= 0 )
      inited = IopLiveDumpCaptureMemoryPages(v12);
  }
LABEL_37:
  if ( IptInterface )
  {
    (*(void (__fastcall **)(_QWORD))IptInterface)(0LL);
    ExReleaseExtensionTable(v11);
    IptInterface = 0LL;
  }
  if ( v16 )
    ZwClose(v16);
  if ( v17 )
    ZwClose(v17);
  if ( v18 )
    ZwClose(v18);
  v27 = DestinationString[0];
  if ( (*(_DWORD *)(DestinationString[0] + 24LL) & 0x10) != 0 && inited == -1073741248 && IopLiveDumpIsTracingEnabled() )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT, 0LL, 0, 0LL);
  if ( v37 )
  {
    IopLiveDumpContext = 0LL;
    ExReleaseResourceLite(&IopLiveDumpLock);
  }
  KeLeaveCriticalRegion();
  if ( inited >= 0 )
  {
    inited = SecureDump_GetSecureDumpSettings((__int64)&v12[55]);
    if ( inited >= 0 )
    {
      if ( *v28 )
      {
        v29 = *(_DWORD *)v12[55].Data4;
        if ( !v29 || !BYTE1(v12[55].Data1) || *(_DWORD *)&v12[55].Data2 != 4096 || (v29 & 0xFFF) != 0 )
          inited = -1073741823;
      }
      if ( inited >= 0 )
      {
        if ( (*(_DWORD *)v12[2].Data4 & 8) != 0 )
        {
          inited = -1073741802;
          *a7 = v12;
        }
        else
        {
          IopLiveDumpTrace();
          v30 = MEMORY[0xFFFFF78000000008];
          if ( *(_QWORD *)&v12[12].Data1 || *(_QWORD *)v12[12].Data4 )
            v31 = IopLiveDumpWriteDumpFileWithExtraPages((__int64)v12);
          else
            v31 = IopLiveDumpWriteDumpFile((__int64)v12);
          inited = v31;
          if ( (unsigned int)dword_140C044D8 > 5 && tlgKeywordOn((__int64)&dword_140C044D8, 0x200000000000LL) )
          {
            v32 = *(_QWORD *)&v12[35].Data1;
            v65 = 8LL;
            v33 = *(_QWORD *)(v32 + 4000);
            v64 = &v49;
            v49 = v33;
            v67 = 8LL;
            v66 = &v50;
            v50 = (MEMORY[0xFFFFF78000000008] - v30) / 0x2710uLL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C044D8,
              (unsigned __int8 *)byte_1400247C9,
              v12 + 54,
              v12 + 53,
              4u,
              &v63);
          }
          IopLiveDumpTraceDumpFileWriteEnd((__int64)v12, 0LL, inited);
          if ( inited >= 0 && (v12[5].Data1 & 2) != 0 )
            inited = 261;
        }
      }
    }
  }
  IopLiveDumpTraceInterfaceEnd((__int64)v28, 0LL, inited);
  if ( (unsigned int)dword_140C044D8 > 5 && tlgKeywordOn((__int64)&dword_140C044D8, 0x200000000000LL) )
  {
    v34 = *(_DWORD *)(v27 + 24);
    v55 = &v44;
    v35 = v12 + 53;
    LODWORD(v44) = inited;
    v37 = (v34 & 8) != 0;
    v38 = (v34 & 0x10) != 0;
    v57 = &v37;
    v59 = &v38;
    v56 = 4LL;
    v58 = 1LL;
    v60 = 1LL;
    v62 = 8LL;
    v52 = (MEMORY[0xFFFFF78000000008] - v51) / 0x2710uLL;
    v61 = &v52;
    if ( v12 )
    {
      v36 = v12 + 54;
    }
    else
    {
      v35 = (const GUID *)&v53;
      v36 = (const GUID *)&v53;
    }
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C044D8, (unsigned __int8 *)word_140024812, v36, v35, 6u, &v54);
  }
  if ( v12 )
  {
    if ( (*(_DWORD *)v12[2].Data4 & 8) == 0 )
      EtwActivityIdControl(2u, v12 + 53);
    if ( inited != -1073741802 )
    {
      IopLiveDumpReleaseResources(v12);
      ExFreePoolWithTag(v12, 0x706D644Cu);
    }
  }
  return (unsigned int)inited;
}
