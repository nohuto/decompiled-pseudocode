/*
 * XREFs of rimInputApc @ 0x1C01745D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0008140 (WPP_RECORDER_SF_qq.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0042830 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0042964 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0054D5C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0055218 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0059230 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006AD98 (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00AC264 (WPP_RECORDER_SF_qqd.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00ACB34 (RimDeviceTypeToRimInputTypeString.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00B7900 (EtwTraceCompleteInputDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013AA80 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C014ECD8 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0151364 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01736BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1C0173750 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@444@Z @ 0x1C01737F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@U2@U2@U2@@-$_tlgW.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175060 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C018188C (RIMApplyPTPConfigRemedy.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  NTSTATUS Status; // esi
  char v9; // al
  int v10; // r12d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rax
  bool v18; // zf
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  BOOL v29; // edx
  int v30; // edx
  unsigned int v31; // eax
  char v32; // cl
  int v33; // edx
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // edx
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // [rsp+60h] [rbp-79h] BYREF
  NTSTATUS v44; // [rsp+64h] [rbp-75h] BYREF
  int v45; // [rsp+68h] [rbp-71h] BYREF
  int v46; // [rsp+6Ch] [rbp-6Dh] BYREF
  NTSTATUS v47; // [rsp+70h] [rbp-69h] BYREF
  NTSTATUS v48; // [rsp+74h] [rbp-65h] BYREF
  NTSTATUS v49; // [rsp+78h] [rbp-61h] BYREF
  NTSTATUS v50; // [rsp+7Ch] [rbp-5Dh] BYREF
  ULONG_PTR v51; // [rsp+80h] [rbp-59h] BYREF
  char *v52; // [rsp+88h] [rbp-51h] BYREF
  __int64 v53; // [rsp+90h] [rbp-49h] BYREF
  __int64 v54; // [rsp+98h] [rbp-41h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-39h] BYREF
  ULONG_PTR Information; // [rsp+A8h] [rbp-31h] BYREF
  char *v57; // [rsp+B0h] [rbp-29h] BYREF
  ULONG_PTR v58; // [rsp+B8h] [rbp-21h] BYREF
  char *v59; // [rsp+C0h] [rbp-19h] BYREF
  const WCHAR *v60; // [rsp+C8h] [rbp-11h] BYREF
  const WCHAR *v61; // [rsp+D0h] [rbp-9h] BYREF
  const WCHAR *v62; // [rsp+D8h] [rbp-1h] BYREF
  const WCHAR *v63; // [rsp+E0h] [rbp+7h] BYREF
  char v64[8]; // [rsp+E8h] [rbp+Fh] BYREF
  __int64 *v65[8]; // [rsp+F0h] [rbp+17h] BYREF
  NTSTATUS v66; // [rsp+140h] [rbp+67h] BYREF
  __int64 v67; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v68; // [rsp+158h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v65, "InputApc", 0LL, a4);
  if ( ApcContext + 256 != (char *)IoStatusBlock )
  {
    v66 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1315);
  }
  LOBYTE(v6) = ApcContext[48];
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 152) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  EtwTraceCompleteInputDeviceRead(v6, IoStatusBlock->Status, v7);
  v9 = ApcContext[48];
  v10 = 1;
  if ( v9 )
  {
    if ( v9 == 2 )
    {
      if ( (*((_DWORD *)ApcContext + 50) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
        {
          v24 = *((_QWORD *)ApcContext + 59);
          v25 = *(unsigned __int16 *)(v24 + 16);
          v45 = *(unsigned __int16 *)(v24 + 18);
          Information = IoStatusBlock->Information;
          v47 = IoStatusBlock->Status;
          v46 = v25;
          v57 = ApcContext;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C024AA90,
            byte_1C021BC03,
            v22,
            v23,
            (__int64)&v57,
            (__int64)&v47,
            (__int64)&Information,
            (__int64)&v46,
            (__int64)&v45);
        }
      }
      else if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
      {
        v14 = *((_QWORD *)ApcContext + 59);
        v15 = *(unsigned __int16 *)(v14 + 18);
        v16 = *(unsigned __int16 *)(v14 + 16);
        v17 = *(_QWORD *)(v13 + 712);
        if ( !v17 || (v18 = *(_DWORD *)(v17 + 36) == 0, v19 = 0, v18) )
          v19 = 1;
        LODWORD(v67) = v15;
        v43 = v19;
        LODWORD(v68) = v16;
        v53 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v13 + 24));
        v54 = IoStatusBlock->Information;
        v44 = IoStatusBlock->Status;
        v55 = (__int64)ApcContext;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C024AA90,
          byte_1C021BB90,
          v20,
          v21,
          (__int64)&v55,
          (__int64)&v44,
          (__int64)&v54,
          (void **)&v53,
          (__int64)&v43,
          (__int64)&v68,
          (__int64)&v67);
      }
    }
    else if ( v9 == 1 && (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
    {
      v58 = IoStatusBlock->Information;
      v48 = IoStatusBlock->Status;
      v59 = ApcContext;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1C024AA90,
        byte_1C021BC97,
        v26,
        v27,
        (__int64)&v59,
        (__int64)&v48,
        (__int64)&v58);
    }
  }
  else if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
  {
    v51 = IoStatusBlock->Information;
    v66 = IoStatusBlock->Status;
    v52 = ApcContext;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C024AA90,
      byte_1C021BC55,
      v11,
      v12,
      (__int64)&v52,
      (__int64)&v66,
      (__int64)&v51);
  }
  v28 = *((_QWORD *)ApcContext + 42);
  if ( !*(_BYTE *)(v28 + 81) && !*(_BYTE *)(v28 + 80) )
  {
    if ( ApcContext + 256 != (char *)IoStatusBlock )
    {
      v66 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1330);
    }
    v29 = ApcContext[48] == 2
       && ((*((_DWORD *)ApcContext + 46) & 0x8000) != 0 || (*((_DWORD *)ApcContext + 50) & 0x80u) != 0);
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v64, v29, 0);
    if ( Status >= 0 && (ApcContext[48] != 2 || (*((_DWORD *)ApcContext + 50) & 0x80u) == 0) )
    {
      v10 = 0;
LABEL_42:
      if ( *((_QWORD *)ApcContext + 28) )
      {
        RIMLockExclusive(v28 + 568);
        v31 = *((_DWORD *)ApcContext + 46) & 0xFFFFFF7F;
        *((_DWORD *)ApcContext + 46) = v31;
        if ( Status < 0 )
        {
          if ( (v31 & 8) == 0 && Status != -1073741536 )
          {
            v32 = ApcContext[205];
            ApcContext[205] = v32 + 1;
            if ( (unsigned __int8)v32 >= 5u )
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum nretryErrorCompletion reached\n",
                (const void *)v28,
                ApcContext,
                Status);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v38) = 4;
                WPP_RECORDER_SF_qqd(
                  (_DWORD)gRimLog,
                  v38,
                  1,
                  27,
                  (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
                  v28,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1C0249170 > 5 && tlgKeywordOn((__int64)&dword_1C0249170, 0x400000000000LL) )
              {
                v39 = (unsigned __int8)ApcContext[48];
                v62 = (const WCHAR *)*((_QWORD *)ApcContext + 27);
                v50 = Status;
                v63 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v39);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v40,
                  byte_1C021BAE4,
                  v41,
                  v42,
                  &v63,
                  &v62,
                  (__int64)&v50);
              }
            }
            else
            {
              DbgPrintGDI(
                ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum nretryErrorCompletion not reached\n",
                (const void *)v28,
                ApcContext,
                Status);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v33) = 4;
                WPP_RECORDER_SF_qqd(
                  (_DWORD)gRimLog,
                  v33,
                  1,
                  26,
                  (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
                  v28,
                  (char)ApcContext,
                  Status);
              }
              if ( (unsigned int)dword_1C0249170 > 5 && tlgKeywordOn((__int64)&dword_1C0249170, 0x400000000000LL) )
              {
                v34 = (unsigned __int8)ApcContext[48];
                v60 = (const WCHAR *)*((_QWORD *)ApcContext + 27);
                v49 = Status;
                v61 = RimDeviceTypeToRimInputTypeString((__int64)ApcContext, v34);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v35,
                  byte_1C021BB3D,
                  v36,
                  v37,
                  &v61,
                  &v60,
                  (__int64)&v49);
              }
              RIMStartDeviceSpecificRead((HANDLE *)v28, (__int64)ApcContext);
            }
          }
        }
        else
        {
          ApcContext[205] = 0;
          *((LARGE_INTEGER *)ApcContext + 282) = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)ApcContext + 285) = MEMORY[0xFFFFF78000000014];
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v28, (struct RIMDEV *)ApcContext);
        }
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v28 + 568));
      }
      else if ( Status >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v30) = 4;
          WPP_RECORDER_SF_qq(
            (_DWORD)gRimLog,
            v30,
            1,
            28,
            (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
            v28,
            (char)ApcContext);
        }
        DbgPrintGDI("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n", (const void *)v28, ApcContext);
      }
      if ( v10 )
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v28 + 104));
      if ( IoStatusBlock->Status != -1073741536 )
        RIMApplyPTPConfigRemedy(v28, ApcContext);
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v64);
      goto LABEL_69;
    }
    if ( *(_QWORD *)(v28 + 640) && !*(_BYTE *)(v28 + 584) )
    {
      if ( gDebugPhoneInitRace )
      {
LABEL_41:
        RIMLockExclusive(v28 + 104);
        goto LABEL_42;
      }
      v66 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1360);
    }
    if ( !gDebugPhoneInitRace )
      gDebugPhoneInitRace = 1;
    goto LABEL_41;
  }
LABEL_69:
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v65);
}
