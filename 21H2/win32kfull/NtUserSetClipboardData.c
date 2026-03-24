/*
 * XREFs of NtUserSetClipboardData @ 0x1C002ED50
 * Callers:
 *     <none>
 * Callees:
 *     _SetClipboardData @ 0x1C002F514 (_SetClipboardData.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C01266DC (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserGetLastError @ 0x1C012D0A8 (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5A88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5B80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, void *a2, __int64 *a3)
{
  char v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // rdi
  __int64 v18; // rax
  int v21; // r8d
  signed int LastError; // eax
  int v24; // eax
  bool v25; // sf
  signed int v26; // eax
  __int64 v27; // rcx
  _DWORD v29[2]; // [rsp+44h] [rbp-134h] BYREF
  _DWORD v30[2]; // [rsp+4Ch] [rbp-12Ch] BYREF
  _DWORD v31[5]; // [rsp+54h] [rbp-124h] BYREF
  _QWORD v32[3]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v33; // [rsp+88h] [rbp-F0h] BYREF
  const char *v34; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v35[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-C8h] BYREF
  const char *v37; // [rsp+B8h] [rbp-C0h] BYREF
  _QWORD v38[3]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-A0h] BYREF
  const char *v40; // [rsp+E0h] [rbp-98h] BYREF
  _QWORD v41[3]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v42; // [rsp+100h] [rbp-78h]
  __int64 v43; // [rsp+108h] [rbp-70h] BYREF
  const char *v44; // [rsp+110h] [rbp-68h] BYREF
  _QWORD v45[3]; // [rsp+118h] [rbp-60h] BYREF
  int v46; // [rsp+198h] [rbp+20h] BYREF

  v42 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v7 = *(_QWORD *)(gptiCurrent + 424LL);
  v8 = v7 + 992;
  v32[1] = v7 + 992;
  v9 = *(_DWORD *)(v7 + 56);
  v32[0] = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v7);
  EtwTraceUiAuditWriteClipboard(v9, v32);
  v10 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL);
    v11 = *(_DWORD *)(v10 + 24) & 4;
  }
  else
  {
    v11 = 0;
  }
  if ( v11 )
  {
    EtwTraceUiLimitWriteClipboard(v9, v32);
    if ( (unsigned int)dword_1C032B240 > 5
      && (qword_1C032B250 & 0x400000000000LL) != 0
      && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
    {
      v33 = v8;
      v46 = -2147024891;
      v34 = "RestrictedThread";
      v35[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v12,
        (unsigned int)&unk_1C02F2CAD,
        0,
        (unsigned int)v35,
        (__int64)&v34,
        (__int64)&v46,
        (__int64)&v33);
    }
    if ( (unsigned int)dword_1C032B3D8 <= 5 )
      goto LABEL_19;
    if ( (qword_1C032B3E8 & 1) == 0 || (qword_1C032B3F0 & 1) != qword_1C032B3F0 )
      v6 = 0;
    if ( !v6 )
      goto LABEL_19;
    v35[1] = v8;
    v35[2] = "RestrictedThread";
LABEL_18:
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v12,
      &unk_1C02F2C6D);
LABEL_19:
    v14 = 0;
    UserSetLastError(5LL);
    goto LABEL_79;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 884) )
  {
    v16 = gptiCurrent;
    v17 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
    if ( (!gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1)) && v16 != *(_QWORD *)(v17 + 80) )
    {
      v18 = *(_QWORD *)(v17 + 112);
      if ( !v18 || *(_QWORD *)(v18 + 16) != v16 )
      {
        if ( (unsigned int)dword_1C032B240 > 5
          && (qword_1C032B250 & 0x400000000000LL) != 0
          && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
        {
          v36 = v8;
          v29[0] = -2147024891;
          v37 = "NoForeground";
          v38[0] = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v12,
            (unsigned int)&unk_1C02F2CAD,
            0,
            (unsigned int)v38,
            (__int64)&v37,
            (__int64)v29,
            (__int64)&v36);
        }
        if ( (unsigned int)dword_1C032B3D8 <= 5 )
          goto LABEL_19;
        if ( (qword_1C032B3E8 & 1) == 0 || (qword_1C032B3F0 & 1) != qword_1C032B3F0 )
          v6 = 0;
        if ( !v6 )
          goto LABEL_19;
        v38[1] = v8;
        v29[1] = -2147024891;
        v38[2] = "NoForeground";
        goto LABEL_18;
      }
    }
    if ( a1 != 1 && a1 != 13 )
    {
      if ( (unsigned int)dword_1C032B240 > 5
        && (qword_1C032B250 & 0x400000000000LL) != 0
        && (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
      {
        v39 = v8;
        v30[0] = -2147024891;
        v40 = "UnsupportedFormatForLowBoxApp";
        v41[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v12,
          (unsigned int)&unk_1C02F2CAD,
          0,
          (unsigned int)v41,
          (__int64)&v40,
          (__int64)v30,
          (__int64)&v39);
      }
      if ( (unsigned int)dword_1C032B3D8 <= 5 )
        goto LABEL_19;
      if ( (qword_1C032B3E8 & 1) == 0 || (qword_1C032B3F0 & 1) != qword_1C032B3F0 )
        v6 = 0;
      if ( !v6 )
        goto LABEL_19;
      v41[1] = v8;
      v30[1] = -2147024891;
      v41[2] = "UnsupportedFormatForLowBoxApp";
      goto LABEL_18;
    }
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int64 *)MmUserProbeAddress;
  v42 = *a3;
  v14 = SetClipboardData(a1, a2, v42 != 0, HIDWORD(v42) != 0);
  if ( (unsigned int)dword_1C032B240 > 5 )
  {
    v21 = 0;
    if ( (qword_1C032B250 & 0x400000000000LL) != 0 )
    {
      v15 = qword_1C032B258 & 0x400000000000LL;
      if ( (qword_1C032B258 & 0x400000000000LL) == qword_1C032B258 )
      {
        if ( v14 )
        {
          LastError = 0;
        }
        else
        {
          LastError = UserGetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
        }
        v43 = v8;
        v31[0] = LastError;
        v44 = "FunctionExit";
        v45[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v15,
          (unsigned int)&unk_1C02F2CAD,
          v21,
          (unsigned int)v45,
          (__int64)&v44,
          (__int64)v31,
          (__int64)&v43);
      }
    }
  }
  if ( !v14 )
  {
    v24 = UserGetLastError();
    v25 = v24 < 0;
    if ( v24 > 0 )
      v25 = 1;
    if ( v25 && (unsigned int)dword_1C032B3D8 > 5 )
    {
      if ( (qword_1C032B3E8 & 1) == 0 || (qword_1C032B3F0 & 1) != qword_1C032B3F0 )
        v6 = 0;
      if ( v6 )
      {
        v26 = UserGetLastError();
        if ( v26 > 0 )
          v26 = (unsigned __int16)v26 | 0x80070000;
        v45[1] = v8;
        v31[1] = v26;
        v45[2] = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v27,
          &unk_1C02F2C6D);
      }
    }
  }
LABEL_79:
  UserSessionSwitchLeaveCrit(v15);
  return v14;
}
