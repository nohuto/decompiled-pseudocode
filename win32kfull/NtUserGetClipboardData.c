__int64 __fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  const char *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct tagWINDOWSTATION *v7; // r14
  __int64 v8; // r8
  const char *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ClipboardData; // rbx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int ThreadProcessId; // r13d
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // r8
  int LastError; // eax
  int v25; // eax
  bool v26; // sf
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const char *v32; // [rsp+40h] [rbp-98h] BYREF
  __int64 v33; // [rsp+48h] [rbp-90h] BYREF
  const char *v34; // [rsp+50h] [rbp-88h] BYREF
  __int64 v35; // [rsp+70h] [rbp-68h] BYREF
  __int128 v36; // [rsp+78h] [rbp-60h] BYREF
  __int128 v37; // [rsp+88h] [rbp-50h] BYREF
  __int64 v38; // [rsp+98h] [rbp-40h]
  const unsigned __int16 *TimeQuadPart; // [rsp+F0h] [rbp+18h] BYREF
  const char *v40; // [rsp+F8h] [rbp+20h] BYREF

  v37 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = (const char *)(*(_QWORD *)(gptiCurrent + 424LL) + 976LL);
  v33 = (__int64)v4;
  v7 = CheckClipboardAccess(v5);
  if ( !v7 )
  {
    if ( (unsigned int)dword_1C0357060 > 5 && tlgKeywordOn((__int64)&dword_1C0357060, 0x400000000000LL) )
    {
      v40 = v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v9 = "AccessDenied";
      v33 = (__int64)"AccessDenied";
      v32 = (const char *)1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        byte_1C031D5AF,
        v8,
        (__int64)&v32,
        (void **)&v33,
        (__int64)&TimeQuadPart,
        (const unsigned __int16 **)&v40);
    }
    else
    {
      v9 = "AccessDenied";
    }
    if ( (unsigned int)dword_1C0357098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0357098, 1LL) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 760LL) + 24LL) & 2;
  else
    v13 = 0;
  if ( v13 )
  {
    UserSetLastError(5);
    if ( (unsigned int)dword_1C0357060 > 5 && tlgKeywordOn((__int64)&dword_1C0357060, 0x400000000000LL) )
    {
      v40 = v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v9 = "RestrictedThread";
      v32 = "RestrictedThread";
      v33 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        byte_1C031D5AF,
        v14,
        (__int64)&v33,
        (void **)&v32,
        (__int64)&TimeQuadPart,
        (const unsigned __int16 **)&v40);
    }
    else
    {
      v9 = "RestrictedThread";
    }
    if ( (unsigned int)dword_1C0357098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0357098, 1LL) )
      goto LABEL_9;
LABEL_8:
    v32 = v9;
    LODWORD(TimeQuadPart) = -2147024891;
    v40 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v6,
      byte_1C031D56F,
      v10,
      v11,
      (void **)&v32,
      (__int64)&TimeQuadPart,
      (const unsigned __int16 **)&v40);
LABEL_9:
    ClipboardData = 0LL;
    goto LABEL_54;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 868LL)
    || (unsigned int)InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock((__int64)v7, &v37, UserDereferenceObject);
    ObfReferenceObject(v7);
    Feature_ReadClipboardEvent__private_ReportDeviceUsage();
    ThreadProcessId = 0;
    TimeQuadPart = 0LL;
    v21 = *((_QWORD *)v7 + 14);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 16);
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(*(PETHREAD *)v22);
      TimeQuadPart = (const unsigned __int16 *)PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v22 + 424));
    }
    v40 = (const char *)PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(gptiCurrent + 424LL));
    EtwTraceUiAuditReadClipboard(
      *(unsigned int *)(*(_QWORD *)(gptiCurrent + 424LL) + 56LL),
      &v40,
      ThreadProcessId,
      &TimeQuadPart,
      *((_DWORD *)v7 + 36));
    LODWORD(v36) = a1;
    ClipboardData = xxxGetClipboardData(v7, a1, (struct tagGETCLIPBDATA *)&v36);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v36;
    }
    PopAndFreeW32ThreadLock((__int64)&v37);
    if ( (unsigned int)dword_1C0357060 > 5 && tlgKeywordOn((__int64)&dword_1C0357060, 0x400000000000LL) )
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
      LODWORD(v40) = LastError;
      v34 = "FunctionExit";
      v35 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        byte_1C031D5AF,
        v23,
        (__int64)&v35,
        (void **)&v34,
        (__int64)&v40,
        &TimeQuadPart);
    }
    if ( !ClipboardData )
    {
      v25 = UserGetLastError();
      v26 = v25 < 0;
      if ( v25 > 0 )
        v26 = 1;
      if ( v26 && (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 1LL) )
      {
        TimeQuadPart = (const unsigned __int16 *)v4;
        v27 = UserGetLastError();
        if ( v27 > 0 )
          v27 = (unsigned __int16)v27 | 0x80070000;
        LODWORD(v33) = v27;
        v40 = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v28,
          byte_1C031D56F,
          v29,
          v30,
          (void **)&v40,
          (__int64)&v33,
          &TimeQuadPart);
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0357060 > 5 && tlgKeywordOn((__int64)&dword_1C0357060, 0x400000000000LL) )
    {
      v40 = v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v32 = "UnsupportedFormatForLowBoxApp";
      v33 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v15,
        byte_1C031D5AF,
        v16,
        (__int64)&v33,
        (void **)&v32,
        (__int64)&TimeQuadPart,
        (const unsigned __int16 **)&v40);
    }
    if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 1LL) )
    {
      v40 = v4;
      LODWORD(TimeQuadPart) = -2147024891;
      v32 = "UnsupportedFormatForLowBoxApp";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v17,
        byte_1C031D56F,
        v18,
        v19,
        (void **)&v32,
        (__int64)&TimeQuadPart,
        (const unsigned __int16 **)&v40);
    }
    ClipboardData = 0LL;
    UserSetLastError(5);
  }
LABEL_54:
  UserSessionSwitchLeaveCrit(v6);
  return ClipboardData;
}
