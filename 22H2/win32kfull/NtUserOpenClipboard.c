/*
 * XREFs of NtUserOpenClipboard @ 0x1C0010FF0
 * Callers:
 *     <none>
 * Callees:
 *     _OpenClipboard @ 0x1C00113CC (_OpenClipboard.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C00114AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     UserGetLastError @ 0x1C00164F8 (UserGetLastError.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C005FBA4 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01CBB98 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  ULONG64 v4; // rdx
  ULONG64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // ebx
  signed int LastError; // eax
  __int64 v17; // r11
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // ecx
  int v21; // r8d
  const char *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  bool v32; // sf
  signed int v33; // eax
  __int64 v34; // rcx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v38[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v39; // [rsp+58h] [rbp-40h] BYREF
  __int64 v40; // [rsp+68h] [rbp-30h]
  __int64 v41; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v42; // [rsp+B0h] [rbp+18h] BYREF
  const char *v43; // [rsp+B8h] [rbp+20h] BYREF

  v39 = 0LL;
  v40 = 0LL;
  LODWORD(v41) = 0;
  EnterCrit(0LL, 0LL);
  if ( a1 && (a1 = ValidateHwnd(a1)) == 0 )
  {
    v14 = 0;
  }
  else
  {
    v8 = *(_QWORD *)(gptiCurrent + 424LL) + 1000LL;
    v42 = v8;
    if ( gbLockScreenActive || *(PVOID *)(gptiCurrent + 456LL) == grpdeskLogon )
    {
      if ( (unsigned int)dword_1C0354060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354060, 0x400000000000LL) )
      {
        v42 = v8;
        LODWORD(v41) = -2147024891;
        v22 = "OnLockscreen";
        v43 = "OnLockscreen";
        v38[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v35,
          (unsigned int)&unk_1C031BC69,
          v36,
          (unsigned int)v38,
          (__int64)&v43,
          (__int64)&v41,
          (__int64)&v42);
      }
      else
      {
        v22 = "OnLockscreen";
      }
      if ( (unsigned int)dword_1C0354098 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C0354098, 1LL) )
        goto LABEL_65;
LABEL_64:
      v42 = v8;
      LODWORD(v41) = -2147024891;
      v43 = v22;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v23,
        &unk_1C031BCB2);
LABEL_65:
      v30 = 5LL;
LABEL_66:
      v14 = 0;
      UserSetLastError(v30);
      goto LABEL_20;
    }
    v9 = ((__int64 (*)(void))PsGetCurrentProcessWin32Process)();
    if ( v9 )
    {
      v10 = -*(_QWORD *)v9;
      v9 &= -(__int64)(*(_QWORD *)v9 != 0LL);
    }
    if ( *(_DWORD *)(v9 + 892) )
    {
      v17 = gptiCurrent;
      v18 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
      if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1) )
      {
        v19 = *(_QWORD *)(v18 + 112);
        if ( !v19 || *(_QWORD *)(v19 + 16) != v17 )
        {
          if ( (unsigned int)dword_1C0354060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354060, 0x400000000000LL) )
          {
            v42 = v8;
            LODWORD(v41) = -2147024891;
            v22 = "NoForeground";
            v43 = "NoForeground";
            v37 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v20,
              (unsigned int)&unk_1C031BC69,
              v21,
              (unsigned int)&v37,
              (__int64)&v43,
              (__int64)&v41,
              (__int64)&v42);
          }
          else
          {
            v22 = "NoForeground";
          }
          if ( (unsigned int)dword_1C0354098 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C0354098, 1LL) )
            goto LABEL_65;
          goto LABEL_64;
        }
      }
    }
    if ( a1 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      v12 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
      if ( *(_QWORD *)(v13 + 656) != *(_QWORD *)(v12 + 656) )
      {
        v24 = PsGetCurrentProcessWin32Process(v13);
        if ( v24 )
          v24 &= -(__int64)(*(_QWORD *)v24 != 0LL);
        if ( *(_QWORD *)(v24 + 656) )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
          if ( *(_QWORD *)(v25 + 656) )
            goto LABEL_41;
          v26 = PsGetCurrentProcessWin32Process(v25);
          if ( v26 )
            v26 &= -(__int64)(*(_QWORD *)v26 != 0LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v26 + 656) + 64LL) & 4) != 0 )
          {
LABEL_41:
            UserSetLastError(87LL);
            if ( (unsigned int)dword_1C0354060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354060, 0x400000000000LL) )
            {
              v42 = v8;
              LODWORD(v41) = -2147024809;
              v43 = "InvalidParameter";
              v37 = 1LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                v27,
                (unsigned int)&unk_1C031BC69,
                v28,
                (unsigned int)&v37,
                (__int64)&v43,
                (__int64)&v41,
                (__int64)&v42);
            }
            if ( (unsigned int)dword_1C0354098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354098, 1LL) )
            {
              v42 = v8;
              LODWORD(v41) = -2147024809;
              v43 = "InvalidParameter";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                v29,
                &unk_1C031BCB2);
            }
            v30 = 0LL;
            goto LABEL_66;
          }
        }
      }
    }
    ThreadLock(a1, &v39);
    v14 = OpenClipboard(a1, &v41);
    ThreadUnlock1();
    v5 = MmUserProbeAddress;
    v4 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v41;
    if ( (unsigned int)dword_1C0354060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354060, 0x400000000000LL) )
    {
      v43 = (const char *)v8;
      if ( v14 )
      {
        LastError = 0;
      }
      else
      {
        LastError = UserGetLastError(v5, v4, v6, v7);
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
      }
      LODWORD(v41) = LastError;
      v37 = (__int64)"FunctionExit";
      v38[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v5,
        (unsigned int)&unk_1C031BC69,
        v6,
        (unsigned int)v38,
        (__int64)&v37,
        (__int64)&v41,
        (__int64)&v43);
    }
    if ( !v14 )
    {
      v31 = UserGetLastError(v5, v4, v6, v7);
      v32 = v31 < 0;
      if ( v31 > 0 )
        v32 = 1;
      if ( v32 && (unsigned int)dword_1C0354098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354098, 1LL) )
      {
        v41 = v8;
        v33 = UserGetLastError(v5, v4, v6, v7);
        if ( v33 > 0 )
          v33 = (unsigned __int16)v33 | 0x80070000;
        LODWORD(v42) = v33;
        v43 = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v34,
          &unk_1C031BCB2);
      }
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v14;
}
