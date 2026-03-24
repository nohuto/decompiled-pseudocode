/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0043F84
 * Callers:
 *     GenerateMouseMove @ 0x1C0043A90 (GenerateMouseMove.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C00468C0 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0042CA4 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0043DC4 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0043E10 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x1C0044160 (ApiSetEditionUpdateCursorAsync.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C00467AC (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01A1DE8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  CInputThread *v6; // rdi
  int v7; // ebx
  unsigned __int8 v8; // di
  int v9; // r8d
  int v10; // r9d
  int v11; // [rsp+30h] [rbp-59h] BYREF
  __int128 v12; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+48h] [rbp-41h]
  struct tagPOINT v14; // [rsp+50h] [rbp-39h] BYREF

  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    v11 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1451LL);
  }
  if ( (a2 & 4) != 0
    || (v6 = gpInputThread,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v6, 0LL),
        v7 = *((_DWORD *)v6 + 4),
        ExReleasePushLockSharedEx(v6, 0LL),
        KeLeaveCriticalRegion(),
        v8 = 0,
        v7 != 2) )
  {
    v8 = 1;
  }
  if ( (a2 & 1) != 0 )
  {
    *(_QWORD *)&v12 = *((_QWORD *)gpsi + 620);
    *(_QWORD *)(a1 + 68) = v12;
    *(_DWORD *)(a1 + 76) = 18;
    *((_QWORD *)gpsi + 619) = 0LL;
    *(struct tagPOINT *)(a1 + 3432) = gptCursorAsync;
    *(_QWORD *)(a1 + 3440) = 0LL;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( gpqCursor )
    {
      v11 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1482LL);
    }
    RIMLockExclusive(a1 + 3816);
    *(_BYTE *)(a1 + 3832) = 1;
    *(_QWORD *)(a1 + 3824) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 3816, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (unsigned int)dword_1C024AA90 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 64LL, a3, a4) )
  {
    v11 = v8;
    LODWORD(v12) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C024AA90,
      (unsigned int)&unk_1C021FE9E,
      v9,
      v10,
      (__int64)&v12,
      (__int64)&v11);
  }
  if ( v8 )
  {
    v13 = 0LL;
    v12 = 0LL;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx(&v14, &v12, 4LL, 2304LL);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
    CMouseProcessor::SynthesizeMouse((CMouseProcessor *)a1, (struct tagPOINT)&v14, 0LL, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  }
  else
  {
    ApiSetEditionUpdateCursorAsync();
  }
}
