/*
 * XREFs of NtUserGetClipboardData @ 0x1C01D0350
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C00114AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     UserGetLastError @ 0x1C00164F8 (UserGetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0018758 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C005FAE4 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     Feature_ReadClipboardEvent__private_ReportDeviceUsage @ 0x1C013C564 (Feature_ReadClipboardEvent__private_ReportDeviceUsage.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01CBB98 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     xxxGetClipboardData @ 0x1C01FDE64 (xxxGetClipboardData.c)
 */

__int64 __fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  const char *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagWINDOWSTATION *v9; // r14
  const char *v10; // rbx
  __int64 ClipboardData; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int ThreadProcessId; // r13d
  __int64 v19; // rbx
  __int64 v20; // rbx
  int LastError; // eax
  int v22; // eax
  bool v23; // sf
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  const char *v29; // [rsp+40h] [rbp-98h] BYREF
  __int64 v30; // [rsp+48h] [rbp-90h] BYREF
  const char *v31; // [rsp+50h] [rbp-88h] BYREF
  __int64 v32; // [rsp+70h] [rbp-68h] BYREF
  __int128 v33; // [rsp+78h] [rbp-60h] BYREF
  __int128 v34; // [rsp+88h] [rbp-50h] BYREF
  __int64 v35; // [rsp+98h] [rbp-40h]
  const unsigned __int16 *TimeQuadPart; // [rsp+F0h] [rbp+18h] BYREF
  const char *v37; // [rsp+F8h] [rbp+20h] BYREF

  v34 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = (const char *)(*(_QWORD *)(gptiCurrent + 424LL) + 1000LL);
  v30 = (__int64)v4;
  v9 = CheckClipboardAccess();
  if ( !v9 )
  {
    if ( (unsigned int)dword_1C0354060 > 5 && tlgKeywordOn((__int64)&dword_1C0354060, 0x400000000000LL) )
    {
      v37 = v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v10 = "AccessDenied";
      v30 = (__int64)"AccessDenied";
      v29 = (const char *)1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        byte_1C031BCEF,
        v7,
        (__int64)&v29,
        (void **)&v30,
        (__int64)&TimeQuadPart,
        (const unsigned __int16 **)&v37);
    }
    else
    {
      v10 = "AccessDenied";
    }
    if ( (unsigned int)dword_1C0354098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0354098, 1LL) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 760LL) + 24LL) & 2;
  else
    v12 = 0;
  if ( v12 )
  {
    UserSetLastError(5);
    if ( (unsigned int)dword_1C0354060 > 5 && tlgKeywordOn((__int64)&dword_1C0354060, 0x400000000000LL) )
    {
      v37 = v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v10 = "RestrictedThread";
      v29 = "RestrictedThread";
      v30 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        byte_1C031BCEF,
        v7,
        (__int64)&v30,
        (void **)&v29,
        (__int64)&TimeQuadPart,
        (const unsigned __int16 **)&v37);
    }
    else
    {
      v10 = "RestrictedThread";
    }
    if ( (unsigned int)dword_1C0354098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0354098, 1LL) )
      goto LABEL_9;
LABEL_8:
    v29 = v10;
    LODWORD(TimeQuadPart) = -2147024891;
    v37 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v6,
      byte_1C031BD3B,
      v7,
      v8,
      (void **)&v29,
      (__int64)&TimeQuadPart,
      (const unsigned __int16 **)&v37);
LABEL_9:
    ClipboardData = 0LL;
    goto LABEL_54;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 892LL)
    || (unsigned int)InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock((__int64)v9, &v34, UserDereferenceObject);
    ObfReferenceObject(v9);
    Feature_ReadClipboardEvent__private_ReportDeviceUsage();
    ThreadProcessId = 0;
    TimeQuadPart = 0LL;
    v19 = *((_QWORD *)v9 + 14);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 16);
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(*(PETHREAD *)v20);
      TimeQuadPart = (const unsigned __int16 *)PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v20 + 424));
    }
    v37 = (const char *)PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(gptiCurrent + 424LL));
    EtwTraceUiAuditReadClipboard(
      *(unsigned int *)(*(_QWORD *)(gptiCurrent + 424LL) + 56LL),
      &v37,
      ThreadProcessId,
      &TimeQuadPart,
      *((_DWORD *)v9 + 36));
    LODWORD(v33) = a1;
    ClipboardData = xxxGetClipboardData(v9, a1, (struct tagGETCLIPBDATA *)&v33);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v33;
    }
    PopAndFreeW32ThreadLock((__int64)&v34);
    if ( (unsigned int)dword_1C0354060 > 5 && tlgKeywordOn((__int64)&dword_1C0354060, 0x400000000000LL) )
    {
      TimeQuadPart = (const unsigned __int16 *)v4;
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
      LODWORD(v37) = LastError;
      v31 = "FunctionExit";
      v32 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        byte_1C031BCEF,
        v7,
        (__int64)&v32,
        (void **)&v31,
        (__int64)&v37,
        &TimeQuadPart);
    }
    if ( !ClipboardData )
    {
      v22 = UserGetLastError();
      v23 = v22 < 0;
      if ( v22 > 0 )
        v23 = 1;
      if ( v23 && (unsigned int)dword_1C0354098 > 5 && tlgKeywordOn((__int64)&dword_1C0354098, 1LL) )
      {
        TimeQuadPart = (const unsigned __int16 *)v4;
        v24 = UserGetLastError();
        if ( v24 > 0 )
          v24 = (unsigned __int16)v24 | 0x80070000;
        LODWORD(v30) = v24;
        v37 = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v25,
          byte_1C031BD3B,
          v26,
          v27,
          (void **)&v37,
          (__int64)&v30,
          &TimeQuadPart);
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0354060 > 5 && tlgKeywordOn((__int64)&dword_1C0354060, 0x400000000000LL) )
    {
      v37 = v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v29 = "UnsupportedFormatForLowBoxApp";
      v30 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v13,
        byte_1C031BCEF,
        v14,
        (__int64)&v30,
        (void **)&v29,
        (__int64)&TimeQuadPart,
        (const unsigned __int16 **)&v37);
    }
    if ( (unsigned int)dword_1C0354098 > 5 && tlgKeywordOn((__int64)&dword_1C0354098, 1LL) )
    {
      v37 = v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v29 = "UnsupportedFormatForLowBoxApp";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v15,
        byte_1C031BD3B,
        v16,
        v17,
        (void **)&v29,
        (__int64)&TimeQuadPart,
        (const unsigned __int16 **)&v37);
    }
    ClipboardData = 0LL;
    UserSetLastError(5);
  }
LABEL_54:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return ClipboardData;
}
