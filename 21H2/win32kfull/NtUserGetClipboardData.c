/*
 * XREFs of NtUserGetClipboardData @ 0x1C014AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00A8DE0 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     UserGetLastError @ 0x1C0113B5C (UserGetLastError.c)
 *     xxxGetClipboardData @ 0x1C014AE38 (xxxGetClipboardData.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F0198 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F0290 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagWINDOWSTATION *v7; // r15
  int v8; // eax
  unsigned int ThreadProcessId; // r13d
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 ClipboardData; // rbx
  int v13; // r8d
  int v15; // r8d
  const char *v16; // rbx
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rcx
  int LastError; // eax
  int v23; // eax
  bool v24; // sf
  int v25; // eax
  __int64 v26; // rcx
  int v27; // [rsp+30h] [rbp-A8h]
  const char *v28; // [rsp+40h] [rbp-98h] BYREF
  __int64 v29; // [rsp+48h] [rbp-90h] BYREF
  const char *v30; // [rsp+50h] [rbp-88h] BYREF
  __int64 v31; // [rsp+70h] [rbp-68h] BYREF
  __int128 v32; // [rsp+78h] [rbp-60h]
  __int128 v33; // [rsp+88h] [rbp-50h] BYREF
  __int64 v34; // [rsp+98h] [rbp-40h]
  LONGLONG TimeQuadPart; // [rsp+F0h] [rbp+18h] BYREF
  const char *v36; // [rsp+F8h] [rbp+20h] BYREF

  v33 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = *(_QWORD *)(gptiCurrent + 424LL) + 992LL;
  v29 = v4;
  v7 = CheckClipboardAccess();
  if ( !v7 )
  {
    if ( (unsigned int)dword_1C03263C0 > 5 && tlgKeywordOn((__int64)&dword_1C03263C0, 0x400000000000LL) )
    {
      v36 = (const char *)v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v16 = "AccessDenied";
      v29 = (__int64)"AccessDenied";
      v28 = (const char *)1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (unsigned int)&unk_1C02EFB1C,
        v15,
        (unsigned int)&v28,
        (__int64)&v29,
        (__int64)&TimeQuadPart,
        (__int64)&v36);
    }
    else
    {
      v16 = "AccessDenied";
    }
    if ( (unsigned int)dword_1C03263F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C03263F8, 1LL) )
      goto LABEL_23;
LABEL_22:
    v28 = v16;
    LODWORD(TimeQuadPart) = -2147024891;
    v36 = (const char *)v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v6,
      &unk_1C02EFADC);
LABEL_23:
    ClipboardData = 0LL;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 2;
  else
    v8 = 0;
  if ( v8 )
  {
    UserSetLastError(5LL, v5);
    if ( (unsigned int)dword_1C03263C0 > 5 && tlgKeywordOn((__int64)&dword_1C03263C0, 0x400000000000LL) )
    {
      v36 = (const char *)v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v16 = "RestrictedThread";
      v28 = "RestrictedThread";
      v29 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (unsigned int)&unk_1C02EFB1C,
        v17,
        (unsigned int)&v29,
        (__int64)&v28,
        (__int64)&TimeQuadPart,
        (__int64)&v36);
    }
    else
    {
      v16 = "RestrictedThread";
    }
    if ( (unsigned int)dword_1C03263F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C03263F8, 1LL) )
      goto LABEL_23;
    goto LABEL_22;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 884LL)
    || InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock((__int64)v7, &v33, UserDereferenceObject);
    ObfReferenceObject(v7);
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ReadClipboardEvent__private_reporting,
      0x193FA64u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
      1,
      v27);
    ThreadProcessId = 0;
    TimeQuadPart = 0LL;
    v10 = *((_QWORD *)v7 + 14);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(*(PETHREAD *)v11);
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v11 + 424));
    }
    v36 = (const char *)PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(gptiCurrent + 424LL));
    EtwTraceUiAuditReadClipboard(
      *(unsigned int *)(*(_QWORD *)(gptiCurrent + 424LL) + 56LL),
      &v36,
      ThreadProcessId,
      &TimeQuadPart,
      *((_DWORD *)v7 + 36));
    LODWORD(v32) = a1;
    ClipboardData = xxxGetClipboardData(v7, a1);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v32;
    }
    PopAndFreeW32ThreadLock((__int64)&v33);
    if ( (unsigned int)dword_1C03263C0 > 5 && tlgKeywordOn((__int64)&dword_1C03263C0, 0x400000000000LL) )
    {
      TimeQuadPart = v4;
      if ( ClipboardData )
      {
        LastError = 0;
      }
      else
      {
        LastError = UserGetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
      }
      LODWORD(v36) = LastError;
      v30 = "FunctionExit";
      v31 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (unsigned int)&unk_1C02EFB1C,
        v13,
        (unsigned int)&v31,
        (__int64)&v30,
        (__int64)&v36,
        (__int64)&TimeQuadPart);
    }
    if ( !ClipboardData )
    {
      v23 = UserGetLastError();
      v24 = v23 < 0;
      if ( v23 > 0 )
        v24 = 1;
      if ( v24 && (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 1LL) )
      {
        TimeQuadPart = v4;
        v25 = UserGetLastError();
        if ( v25 > 0 )
          v25 = (unsigned __int16)v25 | 0x80070000;
        LODWORD(v29) = v25;
        v36 = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v26,
          &unk_1C02EFADC);
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1C03263C0 > 5 && tlgKeywordOn((__int64)&dword_1C03263C0, 0x400000000000LL) )
    {
      v36 = (const char *)v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v28 = "UnsupportedFormatForLowBoxApp";
      v29 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v19,
        (unsigned int)&unk_1C02EFB1C,
        v20,
        (unsigned int)&v29,
        (__int64)&v28,
        (__int64)&TimeQuadPart,
        (__int64)&v36);
    }
    if ( (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 1LL) )
    {
      v36 = (const char *)v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v28 = "UnsupportedFormatForLowBoxApp";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v21,
        &unk_1C02EFADC);
    }
    ClipboardData = 0LL;
    UserSetLastError(5LL, v18);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6);
  return ClipboardData;
}
