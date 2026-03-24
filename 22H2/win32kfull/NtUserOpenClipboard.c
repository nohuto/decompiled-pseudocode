/*
 * XREFs of NtUserOpenClipboard @ 0x1C002F9F0
 * Callers:
 *     <none>
 * Callees:
 *     _OpenClipboard @ 0x1C002FEF8 (_OpenClipboard.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C012635C (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserGetLastError @ 0x1C012CCF8 (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F54C8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F55C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  int v4; // r8d
  ULONG64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  __int64 ThreadWin32Thread; // rax
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // rcx
  signed int LastError; // eax
  int v24; // eax
  bool v25; // sf
  signed int v26; // eax
  __int64 v27; // rcx
  _DWORD v28[2]; // [rsp+40h] [rbp-138h] BYREF
  _DWORD v29[2]; // [rsp+48h] [rbp-130h] BYREF
  _DWORD v30[2]; // [rsp+58h] [rbp-120h] BYREF
  __int64 v31; // [rsp+60h] [rbp-118h]
  __int64 v32; // [rsp+68h] [rbp-110h] BYREF
  const char *v33; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v34[3]; // [rsp+78h] [rbp-100h] BYREF
  __int64 v35; // [rsp+90h] [rbp-E8h] BYREF
  const char *v36; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v37[3]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-C0h] BYREF
  const char *v39; // [rsp+C0h] [rbp-B8h] BYREF
  _QWORD v40[3]; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+108h] [rbp-70h] BYREF
  const char *v42; // [rsp+110h] [rbp-68h] BYREF
  _QWORD v43[3]; // [rsp+118h] [rbp-60h] BYREF
  __int128 v44; // [rsp+130h] [rbp-48h] BYREF
  __int64 v45; // [rsp+140h] [rbp-38h]
  int v46; // [rsp+180h] [rbp+8h] BYREF
  int v47; // [rsp+190h] [rbp+18h] BYREF
  int v48; // [rsp+198h] [rbp+20h]

  v44 = 0LL;
  v45 = 0LL;
  v46 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 && (a1 = ValidateHwnd(a1)) == 0 )
  {
    v12 = 0;
  }
  else
  {
    v6 = gptiCurrent;
    v7 = *(_QWORD *)(gptiCurrent + 424LL) + 992LL;
    v31 = v7;
    if ( gbLockScreenActive || *(PVOID *)(gptiCurrent + 456LL) == grpdeskLogon )
    {
      if ( (unsigned int)dword_1C032A240 > 5
        && (qword_1C032A250 & 0x400000000000LL) != 0
        && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
      {
        v41 = v7;
        v30[0] = -2147024891;
        v42 = "OnLockscreen";
        v43[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          gptiCurrent,
          (unsigned int)&unk_1C02F1AB8,
          v4,
          (unsigned int)v43,
          (__int64)&v42,
          (__int64)v30,
          (__int64)&v41);
      }
      if ( (unsigned int)dword_1C032A3D8 <= 5 || (qword_1C032A3E8 & 1) == 0 || (qword_1C032A3F0 & 1) != qword_1C032A3F0 )
        goto LABEL_65;
      v43[1] = v7;
      v30[1] = -2147024891;
      v43[2] = "OnLockscreen";
      goto LABEL_64;
    }
    if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 884) )
    {
      v16 = gptiCurrent;
      v17 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
      if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1) )
      {
        v18 = *(_QWORD *)(v17 + 112);
        if ( !v18 || *(_QWORD *)(v18 + 16) != v16 )
        {
          if ( (unsigned int)dword_1C032A240 > 5
            && (qword_1C032A250 & 0x400000000000LL) != 0
            && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
          {
            v32 = v7;
            v47 = -2147024891;
            v33 = "NoForeground";
            v34[0] = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v6,
              (unsigned int)&unk_1C02F1AB8,
              v8,
              (unsigned int)v34,
              (__int64)&v33,
              (__int64)&v47,
              (__int64)&v32);
          }
          if ( (unsigned int)dword_1C032A3D8 <= 5
            || (qword_1C032A3E8 & 1) == 0
            || (qword_1C032A3F0 & 1) != qword_1C032A3F0 )
          {
            goto LABEL_65;
          }
          v34[1] = v7;
          v48 = -2147024891;
          v34[2] = "NoForeground";
LABEL_64:
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v6,
            &unk_1C02F1A7B);
LABEL_65:
          v22 = 5LL;
LABEL_66:
          v12 = 0;
          UserSetLastError(v22);
          goto LABEL_15;
        }
      }
    }
    if ( a1 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      v10 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(*(_QWORD *)(v10 + 424) + 664LL) != *(_QWORD *)(CurrentProcessWin32Process + 664) )
      {
        if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v10) + 664) )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
          if ( *(_QWORD *)(v19 + 664)
            || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v19) + 664) + 64LL) & 4) != 0 )
          {
            UserSetLastError(87LL);
            if ( (unsigned int)dword_1C032A240 > 5
              && (qword_1C032A250 & 0x400000000000LL) != 0
              && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
            {
              v35 = v7;
              v28[0] = -2147024809;
              v36 = "InvalidParameter";
              v37[0] = 1LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                v20,
                (unsigned int)&unk_1C02F1AB8,
                v21,
                (unsigned int)v37,
                (__int64)&v36,
                (__int64)v28,
                (__int64)&v35);
            }
            if ( (unsigned int)dword_1C032A3D8 > 5
              && (qword_1C032A3E8 & 1) != 0
              && (qword_1C032A3F0 & 1) == qword_1C032A3F0 )
            {
              v37[1] = v7;
              v28[1] = -2147024809;
              v37[2] = "InvalidParameter";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                v20,
                &unk_1C02F1A7B);
            }
            v22 = 0LL;
            goto LABEL_66;
          }
        }
      }
    }
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v44 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v44;
    *((_QWORD *)&v44 + 1) = a1;
    if ( a1 )
      HMLockObject(a1);
    v12 = OpenClipboard(a1, &v46);
    ThreadUnlock1(v13);
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v46;
    if ( (unsigned int)dword_1C032A240 > 5
      && (qword_1C032A250 & 0x400000000000LL) != 0
      && (qword_1C032A258 & 0x400000000000LL) == qword_1C032A258 )
    {
      if ( v12 )
      {
        LastError = 0;
      }
      else
      {
        LastError = UserGetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
      }
      v38 = v7;
      v29[0] = LastError;
      v39 = "FunctionExit";
      v40[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v5,
        (unsigned int)&unk_1C02F1AB8,
        v14,
        (unsigned int)v40,
        (__int64)&v39,
        (__int64)v29,
        (__int64)&v38);
    }
    if ( !v12 )
    {
      v24 = UserGetLastError();
      v25 = v24 < 0;
      if ( v24 > 0 )
        v25 = 1;
      if ( v25
        && (unsigned int)dword_1C032A3D8 > 5
        && (qword_1C032A3E8 & 1) != 0
        && (qword_1C032A3F0 & 1) == qword_1C032A3F0 )
      {
        v26 = UserGetLastError();
        if ( v26 > 0 )
          v26 = (unsigned __int16)v26 | 0x80070000;
        v40[1] = v7;
        v29[1] = v26;
        v40[2] = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v27,
          &unk_1C02F1A7B);
      }
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v5);
  return v12;
}
