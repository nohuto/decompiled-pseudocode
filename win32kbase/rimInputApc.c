/*
 * XREFs of rimInputApc @ 0x1C00CB830
 * Callers:
 *     <none>
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0039D28 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C003A054 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003A4AC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0087350 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0087454 (RIMStartDeviceSpecificRead.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00877F0 (RimDeviceTypeToRimInputTypeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C0089624 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00CB9C0 (EtwTraceCompleteInputDeviceRead.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00EF4BE (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C00F08D6 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@444@Z @ 0x1C00F0968 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@U2@@-$_tlgW.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C017D810 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C01D1FF8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     RIMApplyPTPConfigRemedyWorker @ 0x1C01E1F68 (RIMApplyPTPConfigRemedyWorker.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rcx
  NTSTATUS Status; // esi
  char v7; // al
  int v8; // r12d
  __int64 v9; // rdi
  __int64 v10; // r8
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r15
  int v14; // r8d
  int v15; // r9d
  void *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rcx
  unsigned int v24; // eax
  char v25; // cl
  int v26; // edx
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // edx
  int v33; // r8d
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // [rsp+60h] [rbp-9h] BYREF
  __int64 v39; // [rsp+68h] [rbp-1h] BYREF
  __int64 v40; // [rsp+70h] [rbp+7h] BYREF
  __int64 Information; // [rsp+78h] [rbp+Fh] BYREF
  __int64 *v42[8]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v43; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v44; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v45; // [rsp+E8h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v42, "InputApc", 0LL);
  if ( ApcContext + 256 != (char *)IoStatusBlock )
  {
    LODWORD(v43) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1379LL);
  }
  LOBYTE(v5) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 152) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v5, (unsigned int)IoStatusBlock->Status);
  v7 = ApcContext[48];
  v8 = 1;
  if ( v7 )
  {
    if ( v7 == 2 )
    {
      if ( (*((_DWORD *)ApcContext + 50) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
        {
          v23 = *((_QWORD *)ApcContext + 58);
          LODWORD(v43) = *(unsigned __int16 *)(v23 + 18);
          LODWORD(v44) = *(unsigned __int16 *)(v23 + 16);
          Information = IoStatusBlock->Information;
          LODWORD(v45) = IoStatusBlock->Status;
          v40 = (__int64)ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C02CA7E0,
            (unsigned int)&unk_1C0298151,
            v21,
            v22,
            (__int64)&v40,
            (__int64)&v45,
            (__int64)&Information,
            (__int64)&v44,
            (__int64)&v43);
        }
      }
      else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
      {
        v19 = *((_QWORD *)ApcContext + 58);
        LODWORD(v43) = *(unsigned __int16 *)(v19 + 18);
        LODWORD(v44) = *(unsigned __int16 *)(v19 + 16);
        if ( !v17 || (v20 = 0, !*(_DWORD *)(v17 + 36)) )
          v20 = 1;
        LODWORD(v45) = v20;
        v39 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v18 + 24));
        v40 = IoStatusBlock->Information;
        LODWORD(v38) = IoStatusBlock->Status;
        Information = (__int64)ApcContext;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C02CA7E0,
          (__int64)&Information,
          (__int64)&v38,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v43);
      }
    }
    else if ( (unsigned int)dword_1C02CA7E0 > 4 && v7 == 1 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
    {
      v16 = &unk_1C029810C;
      goto LABEL_37;
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v16 = &unk_1C02980CA;
LABEL_37:
    v44 = IoStatusBlock->Information;
    LODWORD(v43) = IoStatusBlock->Status;
    v45 = (__int64)ApcContext;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C02CA7E0,
      (_DWORD)v16,
      v14,
      v15,
      (__int64)&v45,
      (__int64)&v43,
      (__int64)&v44);
  }
  v9 = *((_QWORD *)ApcContext + 42);
  if ( !*(_BYTE *)(v9 + 81) && !*(_BYTE *)(v9 + 80) )
  {
    if ( ApcContext + 256 != (char *)IoStatusBlock )
    {
      LODWORD(v43) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1394LL);
    }
    Feature_RIMUserCritOpt__private_ReportDeviceUsage();
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&Information, 0LL, v10);
    Feature_RIMUserCritOpt__private_ReportDeviceUsage();
    if ( Status < 0 || ApcContext[48] == 2 && (*((_DWORD *)ApcContext + 50) & 0x80u) != 0 )
    {
      if ( *(_QWORD *)(v9 + 832) && !*(_BYTE *)(v9 + 776) )
      {
        LODWORD(v43) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1439LL);
      }
      v13 = v9 + 104;
      RIMLockExclusive(v9 + 104);
    }
    else
    {
      v13 = v9 + 104;
      v8 = 0;
    }
    if ( *((_QWORD *)ApcContext + 28) )
    {
      RIMLockExclusive(v9 + 760);
      v24 = *((_DWORD *)ApcContext + 46) & 0xFFFFFF7F;
      *((_DWORD *)ApcContext + 46) = v24;
      if ( !*(_BYTE *)(v9 + 81) && !*(_BYTE *)(v9 + 80) )
      {
        if ( Status < 0 )
        {
          if ( (v24 & 8) == 0 && Status != -1073741536 )
          {
            v25 = ApcContext[205];
            ApcContext[205] = v25 + 1;
            if ( (unsigned __int8)v25 >= 5u )
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum nretryErrorCompletion reached\n",
                (const void *)v9,
                ApcContext,
                Status);
              LOBYTE(v32) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v32,
                  v33,
                  (_DWORD)gRimLog,
                  4,
                  1,
                  25,
                  (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids,
                  v9,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
              {
                v34 = (unsigned __int8)ApcContext[48];
                v44 = *((_QWORD *)ApcContext + 27);
                LODWORD(v43) = Status;
                v45 = (__int64)RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v34);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v35,
                  (int)&unk_1C0297FFE,
                  v36,
                  v37,
                  (const WCHAR **)&v45,
                  (const WCHAR **)&v44,
                  (__int64)&v43);
              }
            }
            else
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum nretryErrorCompletion not reached\n",
                (const void *)v9,
                ApcContext,
                Status);
              LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qqd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v26,
                  v27,
                  (_DWORD)gRimLog,
                  4,
                  1,
                  24,
                  (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids,
                  v9,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
              {
                v28 = (unsigned __int8)ApcContext[48];
                v44 = *((_QWORD *)ApcContext + 27);
                LODWORD(v43) = Status;
                v45 = (__int64)RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v28);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v29,
                  (int)&unk_1C0297FAB,
                  v30,
                  v31,
                  (const WCHAR **)&v45,
                  (const WCHAR **)&v44,
                  (__int64)&v43);
              }
              RIMStartDeviceSpecificRead((HANDLE *)v9, (__int64)ApcContext);
            }
          }
        }
        else
        {
          ApcContext[205] = 0;
          *((LARGE_INTEGER *)ApcContext + 283) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 286) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v9, (struct RIMDEV *)ApcContext, 1);
        }
      }
      *(_QWORD *)(v9 + 768) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 760, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( Status >= 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qq(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          (_DWORD)gRimLog,
          4,
          1,
          26,
          (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids,
          v9,
          (char)ApcContext);
      }
      DbgPrintGDI("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n", (const void *)v9, ApcContext);
    }
    if ( v8 )
    {
      *(_QWORD *)(v13 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v13, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( IoStatusBlock->Status != -1073741536 && !ApcContext[48] && (*((_DWORD *)ApcContext + 46) & 0x8000000) != 0 )
    {
      Feature_RIMUserCritOpt__private_ReportDeviceUsage();
      RIMApplyPTPConfigRemedyWorker(v9, ApcContext);
    }
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&Information);
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v42);
}
