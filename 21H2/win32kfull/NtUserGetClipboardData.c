/*
 * XREFs of NtUserGetClipboardData @ 0x1C002CB70
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetClipboardData @ 0x1C002D3C8 (xxxGetClipboardData.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00304E8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C003DC5C (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 *     UserGetLastError @ 0x1C012D0A8 (UserGetLastError.c)
 *     Feature_ReadClipboardEvent__private_IsEnabledDeviceUsage @ 0x1C0169624 (Feature_ReadClipboardEvent__private_IsEnabledDeviceUsage.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5A88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5B80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserGetClipboardData(unsigned int a1, _OWORD *a2)
{
  char v4; // di
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // r8d
  struct tagWINDOWSTATION *v8; // r15
  __int64 ClipboardData; // rbx
  int v11; // eax
  int v12; // r8d
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v17; // rbx
  __int64 v18; // rbx
  int v19; // r8d
  signed int LastError; // eax
  int v22; // eax
  bool v23; // sf
  signed int v24; // eax
  __int64 v25; // rcx
  _DWORD v27[2]; // [rsp+40h] [rbp-168h] BYREF
  _DWORD v28[4]; // [rsp+48h] [rbp-160h] BYREF
  _DWORD v29[2]; // [rsp+60h] [rbp-148h] BYREF
  _QWORD v30[2]; // [rsp+68h] [rbp-140h] BYREF
  LONGLONG v31[2]; // [rsp+78h] [rbp-130h] BYREF
  __int64 v32; // [rsp+88h] [rbp-120h] BYREF
  const char *v33; // [rsp+90h] [rbp-118h] BYREF
  _QWORD v34[3]; // [rsp+98h] [rbp-110h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-F8h] BYREF
  const char *v36; // [rsp+B8h] [rbp-F0h] BYREF
  _QWORD v37[3]; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-D0h] BYREF
  const char *v39; // [rsp+E0h] [rbp-C8h] BYREF
  _QWORD v40[3]; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+128h] [rbp-80h] BYREF
  const char *v42; // [rsp+130h] [rbp-78h] BYREF
  _QWORD v43[3]; // [rsp+138h] [rbp-70h] BYREF
  __int128 v44; // [rsp+150h] [rbp-58h]
  __int128 v45; // [rsp+160h] [rbp-48h] BYREF
  __int64 v46; // [rsp+170h] [rbp-38h]
  HANDLE ThreadProcessId; // [rsp+1C0h] [rbp+18h] BYREF
  int v48; // [rsp+1C8h] [rbp+20h]

  v45 = 0LL;
  v46 = 0LL;
  v44 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v5 = *(_QWORD *)(gptiCurrent + 424LL) + 992LL;
  v30[1] = v5;
  v8 = CheckClipboardAccess();
  if ( !v8 )
  {
    if ( (unsigned int)dword_1C032B240 > 5
      && (qword_1C032B250 & 0x400000000000LL) != 0
      && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
    {
      v32 = v5;
      LODWORD(ThreadProcessId) = -2147024891;
      v33 = "AccessDenied";
      v34[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (unsigned int)&unk_1C02F2C21,
        v7,
        (unsigned int)v34,
        (__int64)&v33,
        (__int64)&ThreadProcessId,
        (__int64)&v32);
    }
    if ( (unsigned int)dword_1C032B3D8 <= 5 )
      goto LABEL_16;
    if ( (qword_1C032B3E8 & 1) == 0 || (qword_1C032B3F0 & 1) != qword_1C032B3F0 )
      v4 = 0;
    if ( !v4 )
      goto LABEL_16;
    v34[1] = v5;
    v48 = -2147024891;
    v34[2] = "AccessDenied";
LABEL_15:
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v6,
      &unk_1C02F2BE1);
LABEL_16:
    ClipboardData = 0LL;
    goto LABEL_83;
  }
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 2;
  else
    v11 = 0;
  if ( v11 )
  {
    UserSetLastError(5LL);
    if ( (unsigned int)dword_1C032B240 > 5
      && (qword_1C032B250 & 0x400000000000LL) != 0
      && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
    {
      v35 = v5;
      v27[0] = -2147024891;
      v36 = "RestrictedThread";
      v37[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (unsigned int)&unk_1C02F2C21,
        v12,
        (unsigned int)v37,
        (__int64)&v36,
        (__int64)v27,
        (__int64)&v35);
    }
    if ( (unsigned int)dword_1C032B3D8 <= 5 )
      goto LABEL_16;
    if ( (qword_1C032B3E8 & 1) == 0 || (qword_1C032B3F0 & 1) != qword_1C032B3F0 )
      v4 = 0;
    if ( !v4 )
      goto LABEL_16;
    v37[1] = v5;
    v27[1] = -2147024891;
    v37[2] = "RestrictedThread";
    goto LABEL_15;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 884LL)
    || (unsigned int)InForegroundQueue(gptiCurrent, 1) && (a1 == 1 || a1 == 13) )
  {
    PushW32ThreadLock(v8, &v45, UserDereferenceObject);
    ObfReferenceObject(v8);
    if ( (unsigned int)Feature_ReadClipboardEvent__private_IsEnabledDeviceUsage() )
    {
      LODWORD(ThreadProcessId) = 0;
      v30[0] = 0LL;
      v17 = *((_QWORD *)v8 + 14);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 16);
        ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v18);
        v30[0] = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v18 + 424));
      }
      v31[0] = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(gptiCurrent + 424LL));
      EtwTraceUiAuditReadClipboard(
        *(unsigned int *)(*(_QWORD *)(gptiCurrent + 424LL) + 56LL),
        v31,
        (unsigned int)ThreadProcessId,
        v30,
        *((_DWORD *)v8 + 36));
    }
    LODWORD(v44) = a1;
    ClipboardData = xxxGetClipboardData(v8, a1);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v44;
    }
    PopAndFreeW32ThreadLock(&v45);
    if ( (unsigned int)dword_1C032B240 > 5
      && (qword_1C032B250 & 0x400000000000LL) != 0
      && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
    {
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
      v41 = v5;
      v29[0] = LastError;
      v42 = "FunctionExit";
      v43[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v6,
        (unsigned int)&unk_1C02F2C21,
        v19,
        (unsigned int)v43,
        (__int64)&v42,
        (__int64)v29,
        (__int64)&v41);
    }
    if ( !ClipboardData )
    {
      v22 = UserGetLastError();
      v23 = v22 < 0;
      if ( v22 > 0 )
        v23 = 1;
      if ( v23 && (unsigned int)dword_1C032B3D8 > 5 )
      {
        if ( (qword_1C032B3E8 & 1) == 0 || (qword_1C032B3F0 & 1) != qword_1C032B3F0 )
          v4 = 0;
        if ( v4 )
        {
          v24 = UserGetLastError();
          if ( v24 > 0 )
            v24 = (unsigned __int16)v24 | 0x80070000;
          v43[1] = v5;
          v29[1] = v24;
          v43[2] = "FunctionExit";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v25,
            &unk_1C02F2BE1);
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1C032B240 > 5
      && (qword_1C032B250 & 0x400000000000LL) != 0
      && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
    {
      v38 = v5;
      v28[0] = -2147024891;
      v39 = "UnsupportedFormatForLowBoxApp";
      v40[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v14,
        (unsigned int)&unk_1C02F2C21,
        v15,
        (unsigned int)v40,
        (__int64)&v39,
        (__int64)v28,
        (__int64)&v38);
    }
    if ( (unsigned int)dword_1C032B3D8 > 5 )
    {
      if ( (qword_1C032B3E8 & 1) == 0 || (qword_1C032B3F0 & 1) != qword_1C032B3F0 )
        v4 = 0;
      if ( v4 )
      {
        v40[1] = v5;
        v28[1] = -2147024891;
        v40[2] = "UnsupportedFormatForLowBoxApp";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v14,
          &unk_1C02F2BE1);
      }
    }
    ClipboardData = 0LL;
    UserSetLastError(5LL);
  }
LABEL_83:
  UserSessionSwitchLeaveCrit(v6);
  return ClipboardData;
}
