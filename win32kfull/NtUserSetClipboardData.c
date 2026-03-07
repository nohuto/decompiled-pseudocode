__int64 __fastcall NtUserSetClipboardData(unsigned int a1, void *a2, __int64 *a3)
{
  __int64 v6; // rcx
  const unsigned __int16 *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  const char *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edi
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // r11
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  int LastError; // eax
  int v30; // eax
  bool v31; // sf
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  LONGLONG TimeQuadPart; // [rsp+50h] [rbp-48h] BYREF
  __int64 v38; // [rsp+58h] [rbp-40h] BYREF
  const char *v39; // [rsp+60h] [rbp-38h] BYREF
  __int64 v40; // [rsp+68h] [rbp-30h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+20h] BYREF

  v41 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  v7 = (const unsigned __int16 *)(v6 + 976);
  v38 = v6 + 976;
  v8 = *(_DWORD *)(v6 + 56);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v6);
  EtwTraceUiAuditWriteClipboard(v8, &TimeQuadPart);
  v9 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 760LL);
    v10 = *(_DWORD *)(v9 + 24) & 4;
  }
  else
  {
    v10 = 0;
  }
  if ( v10 )
  {
    EtwTraceUiLimitWriteClipboard(v8, &TimeQuadPart);
    if ( (unsigned int)dword_1C0357060 > 5 && tlgKeywordOn((__int64)&dword_1C0357060, 0x400000000000LL) )
    {
      v38 = (__int64)v7;
      LODWORD(v41) = -2147024891;
      v13 = "RestrictedThread";
      v39 = "RestrictedThread";
      v40 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v11,
        byte_1C031D63B,
        v12,
        (__int64)&v40,
        (void **)&v39,
        (__int64)&v41,
        (const unsigned __int16 **)&v38);
    }
    else
    {
      v13 = "RestrictedThread";
    }
    if ( (unsigned int)dword_1C0357098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0357098, 1LL) )
      goto LABEL_12;
    goto LABEL_11;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( *(_DWORD *)(CurrentProcessWin32Process + 868) )
  {
    v20 = gptiCurrent;
    v21 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
    if ( !gpqForeground || (LOBYTE(v22) = ForegroundInputOwnerMatch(gptiCurrent, 1), !v22) )
    {
      if ( v20 != *(_QWORD *)(v21 + 80) )
      {
        v23 = *(_QWORD *)(v21 + 112);
        if ( !v23 || *(_QWORD *)(v23 + 16) != v20 )
        {
          if ( (unsigned int)dword_1C0357060 > 5 && tlgKeywordOn((__int64)&dword_1C0357060, 0x400000000000LL) )
          {
            v40 = (__int64)v7;
            LODWORD(v41) = -2147024891;
            v13 = "NoForeground";
            v39 = "NoForeground";
            v38 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v24,
              byte_1C031D63B,
              v25,
              (__int64)&v38,
              (void **)&v39,
              (__int64)&v41,
              (const unsigned __int16 **)&v40);
          }
          else
          {
            v13 = "NoForeground";
          }
          if ( (unsigned int)dword_1C0357098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0357098, 1LL) )
            goto LABEL_12;
          goto LABEL_11;
        }
      }
    }
    if ( a1 != 1 && a1 != 13 )
    {
      if ( (unsigned int)dword_1C0357060 > 5 && tlgKeywordOn((__int64)&dword_1C0357060, 0x400000000000LL) )
      {
        v40 = (__int64)v7;
        LODWORD(v41) = -2147024891;
        v13 = "UnsupportedFormatForLowBoxApp";
        v39 = "UnsupportedFormatForLowBoxApp";
        v38 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v26,
          byte_1C031D63B,
          v27,
          (__int64)&v38,
          (void **)&v39,
          (__int64)&v41,
          (const unsigned __int16 **)&v40);
      }
      else
      {
        v13 = "UnsupportedFormatForLowBoxApp";
      }
      if ( (unsigned int)dword_1C0357098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0357098, 1LL) )
        goto LABEL_12;
LABEL_11:
      LODWORD(v41) = -2147024891;
      v39 = v13;
      v40 = (__int64)v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v14,
        byte_1C031D5FB,
        v15,
        v16,
        (void **)&v39,
        (__int64)&v41,
        (const unsigned __int16 **)&v40);
LABEL_12:
      v17 = 0;
      UserSetLastError(5);
      goto LABEL_55;
    }
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int64 *)MmUserProbeAddress;
  v41 = *a3;
  v17 = SetClipboardData(a1, a2, v41 != 0, HIDWORD(v41) != 0);
  if ( (unsigned int)dword_1C0357060 > 5 && tlgKeywordOn((__int64)&dword_1C0357060, 0x400000000000LL) )
  {
    v40 = (__int64)v7;
    if ( v17 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    LODWORD(v41) = LastError;
    v39 = "FunctionExit";
    v38 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v18,
      byte_1C031D63B,
      v28,
      (__int64)&v38,
      (void **)&v39,
      (__int64)&v41,
      (const unsigned __int16 **)&v40);
  }
  if ( !v17 )
  {
    v30 = UserGetLastError();
    v31 = v30 < 0;
    if ( v30 > 0 )
      v31 = 1;
    if ( v31 && (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 1LL) )
    {
      v40 = (__int64)v7;
      v32 = UserGetLastError();
      if ( v32 > 0 )
        v32 = (unsigned __int16)v32 | 0x80070000;
      LODWORD(v41) = v32;
      v39 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v33,
        byte_1C031D5FB,
        v34,
        v35,
        (void **)&v39,
        (__int64)&v41,
        (const unsigned __int16 **)&v40);
    }
  }
LABEL_55:
  UserSessionSwitchLeaveCrit(v18);
  return v17;
}
