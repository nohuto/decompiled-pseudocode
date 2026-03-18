/*
 * XREFs of rimInputApc @ 0x1C00C06F0
 * Callers:
 *     <none>
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C004763C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0047C7C (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C004AB80 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMStartDeviceSpecificRead @ 0x1C004AF3C (RIMStartDeviceSpecificRead.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C004B348 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004DC2C (RimDeviceTypeToRimInputTypeString.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00C0880 (EtwTraceCompleteInputDeviceRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00E75AE (RIMApplyPTPConfigRemedy.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0167EA0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C017E504 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01A8B24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C01A8BB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@444@Z @ 0x1C01A8C5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@U2@@-$_tlgW.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  NTSTATUS Status; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // rdi
  _BOOL8 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r12d
  int v19; // r9d
  void *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rcx
  BOOL v23; // eax
  int v24; // r9d
  __int64 v25; // rcx
  unsigned int v26; // eax
  char v27; // cl
  int v28; // edx
  __int64 v29; // r8
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // edx
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // [rsp+60h] [rbp-9h] BYREF
  __int64 v41; // [rsp+68h] [rbp-1h] BYREF
  __int64 v42; // [rsp+70h] [rbp+7h] BYREF
  __int64 Information; // [rsp+78h] [rbp+Fh] BYREF
  __int64 *v44[8]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v45; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v46; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v47; // [rsp+E8h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v44, "InputApc", 0LL);
  if ( ApcContext + 256 != (char *)IoStatusBlock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  LOBYTE(v6) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 152) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v6, (unsigned int)IoStatusBlock->Status);
  v12 = ApcContext[48];
  if ( v12 )
  {
    if ( v12 == 2 )
    {
      if ( (*((_DWORD *)ApcContext + 50) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
        {
          v25 = *((_QWORD *)ApcContext + 58);
          LODWORD(v45) = *(unsigned __int16 *)(v25 + 18);
          LODWORD(v46) = *(unsigned __int16 *)(v25 + 16);
          Information = IoStatusBlock->Information;
          LODWORD(v47) = IoStatusBlock->Status;
          v42 = (__int64)ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C028EE70,
            (unsigned int)&unk_1C025E9A0,
            v11,
            v24,
            (__int64)&v42,
            (__int64)&v47,
            (__int64)&Information,
            (__int64)&v46,
            (__int64)&v45);
        }
      }
      else
      {
        v11 = *(_QWORD *)(*((_QWORD *)ApcContext + 59) + 760LL);
        if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
        {
          v22 = *((_QWORD *)ApcContext + 58);
          LODWORD(v45) = *(unsigned __int16 *)(v22 + 18);
          LODWORD(v46) = *(unsigned __int16 *)(v22 + 16);
          v23 = !v11 || !*(_DWORD *)(v11 + 36);
          LODWORD(v47) = v23;
          v41 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v21 + 24));
          v42 = IoStatusBlock->Information;
          LODWORD(v40) = IoStatusBlock->Status;
          Information = (__int64)ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C028EE70,
            (__int64)&Information,
            (__int64)&v40,
            (__int64)&v42,
            (__int64)&v41,
            (__int64)&v47,
            (__int64)&v46,
            (__int64)&v45);
        }
      }
    }
    else if ( (unsigned int)dword_1C028EE70 > 4 && v12 == 1 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
    {
      v20 = &unk_1C025EA65;
      goto LABEL_43;
    }
  }
  else if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
  {
    v20 = &unk_1C025E95E;
LABEL_43:
    v46 = IoStatusBlock->Information;
    LODWORD(v45) = IoStatusBlock->Status;
    v47 = (__int64)ApcContext;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C028EE70,
      (_DWORD)v20,
      v11,
      v19,
      (__int64)&v47,
      (__int64)&v45,
      (__int64)&v46);
  }
  v13 = *((_QWORD *)ApcContext + 42);
  if ( *(_BYTE *)(v13 + 81) || *(_BYTE *)(v13 + 80) )
    goto LABEL_23;
  if ( ApcContext + 256 != (char *)IoStatusBlock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v14 = ApcContext[48] == 2
     && ((*((_DWORD *)ApcContext + 46) & 0x20000) != 0 || (*((_DWORD *)ApcContext + 50) & 0x80u) != 0);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&Information, v14, v11);
  if ( Status >= 0 && (ApcContext[48] != 2 || (*((_DWORD *)ApcContext + 50) & 0x80u) == 0) )
  {
    v18 = 0;
    goto LABEL_16;
  }
  v18 = 1;
  if ( !*(_QWORD *)(v13 + 864) || *(_BYTE *)(v13 + 808) )
    goto LABEL_13;
  if ( !gDebugPhoneInitRace )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
LABEL_13:
    if ( !gDebugPhoneInitRace )
      gDebugPhoneInitRace = 1;
  }
  RIMLockExclusive(v13 + 104);
LABEL_16:
  if ( *((_QWORD *)ApcContext + 28) )
  {
    RIMLockExclusive(v13 + 792);
    v26 = *((_DWORD *)ApcContext + 46) & 0xFFFFFF7F;
    *((_DWORD *)ApcContext + 46) = v26;
    if ( Status < 0 )
    {
      if ( (v26 & 8) == 0 && Status != -1073741536 )
      {
        v27 = ApcContext[205];
        ApcContext[205] = v27 + 1;
        if ( (unsigned __int8)v27 >= 5u )
        {
          DbgPrintGDI(
            ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum nretryErrorCompletion reached\n",
            (const void *)v13,
            ApcContext,
            Status);
          LOBYTE(v34) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqd(
              WPP_GLOBAL_Control->AttachedDevice,
              v34,
              v35,
              (_DWORD)gRimLog,
              4,
              1,
              25,
              (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids,
              v13,
              (char)ApcContext,
              Status);
          }
          if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
          {
            v36 = (unsigned __int8)ApcContext[48];
            v46 = *((_QWORD *)ApcContext + 27);
            LODWORD(v45) = Status;
            v47 = (__int64)RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v36);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v37,
              (int)&unk_1C025E8B2,
              v38,
              v39,
              (const WCHAR **)&v47,
              (const WCHAR **)&v46,
              (__int64)&v45);
          }
        }
        else
        {
          DbgPrintGDI(
            ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum nretryErrorCompletion not reached\n",
            (const void *)v13,
            ApcContext,
            Status);
          LOBYTE(v28) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_qqd(
              WPP_GLOBAL_Control->AttachedDevice,
              v28,
              v29,
              (_DWORD)gRimLog,
              4,
              1,
              24,
              (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids,
              v13,
              (char)ApcContext,
              Status);
          if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
          {
            v30 = (unsigned __int8)ApcContext[48];
            v46 = *((_QWORD *)ApcContext + 27);
            LODWORD(v45) = Status;
            v47 = (__int64)RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v30);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v31,
              (int)&unk_1C025E90B,
              v32,
              v33,
              (const WCHAR **)&v47,
              (const WCHAR **)&v46,
              (__int64)&v45);
          }
          RIMStartDeviceSpecificRead((HANDLE *)v13, (__int64)ApcContext, v29);
        }
      }
    }
    else
    {
      ApcContext[205] = 0;
      *((LARGE_INTEGER *)ApcContext + 283) = KeQueryPerformanceCounter(0LL);
      *((_QWORD *)ApcContext + 286) = MEMORY[0xFFFFF78000000014];
      rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v13, (struct RIMDEV *)ApcContext, 1);
    }
    *(_QWORD *)(v13 + 800) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 792, 0LL);
    KeLeaveCriticalRegion();
  }
  else if ( Status >= 0 )
  {
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v17,
        (_DWORD)gRimLog,
        4,
        1,
        26,
        (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids,
        v13,
        (char)ApcContext);
    }
    DbgPrintGDI("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n", (const void *)v13, ApcContext);
  }
  if ( v18 )
  {
    *(_QWORD *)(v13 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( IoStatusBlock->Status != -1073741536 )
    RIMApplyPTPConfigRemedy(v13, ApcContext);
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&Information);
LABEL_23:
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v44);
}
