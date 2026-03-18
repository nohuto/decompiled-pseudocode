/*
 * XREFs of NtUserSetClipboardData @ 0x1C0145ED0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0110580 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserGetLastError @ 0x1C0113B5C (UserGetLastError.c)
 *     _SetClipboardData @ 0x1C014613C (_SetClipboardData.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F0198 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F0290 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, void *a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  int v14; // r8d
  int v16; // ecx
  int v17; // r8d
  const char *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // ecx
  int v24; // r8d
  int v25; // ecx
  int v26; // r8d
  int LastError; // eax
  int v28; // eax
  bool v29; // sf
  int v30; // eax
  __int64 v31; // rcx
  LONGLONG TimeQuadPart; // [rsp+50h] [rbp-48h] BYREF
  __int64 v33; // [rsp+58h] [rbp-40h] BYREF
  const char *v34; // [rsp+60h] [rbp-38h] BYREF
  __int64 v35; // [rsp+68h] [rbp-30h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+20h] BYREF

  v36 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  v7 = v6 + 992;
  v33 = v6 + 992;
  v8 = *(_DWORD *)(v6 + 56);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v6);
  EtwTraceUiAuditWriteClipboard(v8, &TimeQuadPart);
  v9 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL);
    v10 = *(_DWORD *)(v9 + 24) & 4;
  }
  else
  {
    v10 = 0;
  }
  if ( v10 )
  {
    EtwTraceUiLimitWriteClipboard(v8, &TimeQuadPart);
    if ( (unsigned int)dword_1C03263C0 > 5 && tlgKeywordOn((__int64)&dword_1C03263C0, 0x400000000000LL) )
    {
      v33 = v7;
      LODWORD(v36) = -2147024891;
      v18 = "RestrictedThread";
      v34 = "RestrictedThread";
      v35 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v16,
        (unsigned int)&unk_1C02EFBA8,
        v17,
        (unsigned int)&v35,
        (__int64)&v34,
        (__int64)&v36,
        (__int64)&v33);
    }
    else
    {
      v18 = "RestrictedThread";
    }
    if ( (unsigned int)dword_1C03263F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C03263F8, 1LL) )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 884) )
  {
    v20 = gptiCurrent;
    v21 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
    if ( gpqForeground && ForegroundInputOwnerMatch(gptiCurrent, 1)
      || v20 == *(_QWORD *)(v21 + 80)
      || (v22 = *(_QWORD *)(v21 + 112)) != 0 && *(_QWORD *)(v22 + 16) == v20 )
    {
      if ( a1 == 1 || a1 == 13 )
        goto LABEL_5;
      if ( (unsigned int)dword_1C03263C0 > 5 && tlgKeywordOn((__int64)&dword_1C03263C0, 0x400000000000LL) )
      {
        v35 = v7;
        LODWORD(v36) = -2147024891;
        v18 = "UnsupportedFormatForLowBoxApp";
        v34 = "UnsupportedFormatForLowBoxApp";
        v33 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v25,
          (unsigned int)&unk_1C02EFBA8,
          v26,
          (unsigned int)&v33,
          (__int64)&v34,
          (__int64)&v36,
          (__int64)&v35);
      }
      else
      {
        v18 = "UnsupportedFormatForLowBoxApp";
      }
      if ( (unsigned int)dword_1C03263F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C03263F8, 1LL) )
      {
LABEL_19:
        v13 = 0;
        UserSetLastError(5LL, v11);
        goto LABEL_10;
      }
    }
    else
    {
      if ( (unsigned int)dword_1C03263C0 > 5 && tlgKeywordOn((__int64)&dword_1C03263C0, 0x400000000000LL) )
      {
        v35 = v7;
        LODWORD(v36) = -2147024891;
        v18 = "NoForeground";
        v34 = "NoForeground";
        v33 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v23,
          (unsigned int)&unk_1C02EFBA8,
          v24,
          (unsigned int)&v33,
          (__int64)&v34,
          (__int64)&v36,
          (__int64)&v35);
      }
      else
      {
        v18 = "NoForeground";
      }
      if ( (unsigned int)dword_1C03263F8 <= 5 || !tlgKeywordOn((__int64)&dword_1C03263F8, 1LL) )
        goto LABEL_19;
    }
LABEL_18:
    LODWORD(v36) = -2147024891;
    v34 = v18;
    v35 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v19,
      &unk_1C02EFB68);
    goto LABEL_19;
  }
LABEL_5:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int64 *)MmUserProbeAddress;
  v36 = *a3;
  v13 = SetClipboardData(a1, a2, v36 != 0, HIDWORD(v36) != 0);
  if ( (unsigned int)dword_1C03263C0 > 5 && tlgKeywordOn((__int64)&dword_1C03263C0, 0x400000000000LL) )
  {
    v35 = v7;
    if ( v13 )
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
    v34 = "FunctionExit";
    v33 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v12,
      (unsigned int)&unk_1C02EFBA8,
      v14,
      (unsigned int)&v33,
      (__int64)&v34,
      (__int64)&v36,
      (__int64)&v35);
  }
  if ( !v13 )
  {
    v28 = UserGetLastError();
    v29 = v28 < 0;
    if ( v28 > 0 )
      v29 = 1;
    if ( v29 && (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 1LL) )
    {
      v35 = v7;
      v30 = UserGetLastError();
      if ( v30 > 0 )
        v30 = (unsigned __int16)v30 | 0x80070000;
      LODWORD(v36) = v30;
      v34 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v31,
        &unk_1C02EFB68);
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
