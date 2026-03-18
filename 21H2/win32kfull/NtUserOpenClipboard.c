/*
 * XREFs of NtUserOpenClipboard @ 0x1C00CCB80
 * Callers:
 *     <none>
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _OpenClipboard @ 0x1C00CCE18 (_OpenClipboard.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0110580 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     UserGetLastError @ 0x1C0113B5C (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F0198 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F0290 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  ULONG64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG64 v16; // rdx
  __int64 v18; // r11
  __int64 v19; // r14
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r8d
  const char *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rcx
  signed int LastError; // eax
  int v32; // eax
  bool v33; // sf
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  signed int v37; // eax
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // r8d
  __int64 v41; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v42[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v43; // [rsp+58h] [rbp-40h] BYREF
  __int64 v44; // [rsp+68h] [rbp-30h]
  __int64 v45; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v46; // [rsp+B0h] [rbp+18h] BYREF
  const char *v47; // [rsp+B8h] [rbp+20h] BYREF

  v43 = 0LL;
  v44 = 0LL;
  LODWORD(v45) = 0;
  EnterCrit(0LL, 0LL);
  if ( a1 && (a1 = ValidateHwnd(a1)) == 0 )
  {
    v10 = 0;
  }
  else
  {
    v6 = *(_QWORD *)(gptiCurrent + 424LL) + 992LL;
    v46 = v6;
    if ( gbLockScreenActive || *(PVOID *)(gptiCurrent + 456LL) == grpdeskLogon )
    {
      if ( (unsigned int)dword_1C03263C0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263C0, 0x400000000000LL) )
      {
        v46 = v6;
        LODWORD(v45) = -2147024891;
        v23 = "OnLockscreen";
        v47 = "OnLockscreen";
        v42[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v39,
          (unsigned int)&unk_1C02EFA93,
          v40,
          (unsigned int)v42,
          (__int64)&v47,
          (__int64)&v45,
          (__int64)&v46);
      }
      else
      {
        v23 = "OnLockscreen";
      }
      if ( (unsigned int)dword_1C03263F8 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 1LL) )
        goto LABEL_56;
LABEL_55:
      v46 = v6;
      LODWORD(v45) = -2147024891;
      v47 = v23;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v24,
        &unk_1C02EFA56);
LABEL_56:
      v30 = 5LL;
LABEL_57:
      v10 = 0;
      UserSetLastError(v30, v4);
      goto LABEL_13;
    }
    if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 884) )
    {
      v18 = gptiCurrent;
      v19 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
      if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1) )
      {
        v20 = *(_QWORD *)(v19 + 112);
        if ( !v20 || *(_QWORD *)(v20 + 16) != v18 )
        {
          if ( (unsigned int)dword_1C03263C0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263C0, 0x400000000000LL) )
          {
            v46 = v6;
            LODWORD(v45) = -2147024891;
            v23 = "NoForeground";
            v47 = "NoForeground";
            v41 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v21,
              (unsigned int)&unk_1C02EFA93,
              v22,
              (unsigned int)&v41,
              (__int64)&v47,
              (__int64)&v45,
              (__int64)&v46);
          }
          else
          {
            v23 = "NoForeground";
          }
          if ( (unsigned int)dword_1C03263F8 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 1LL) )
            goto LABEL_56;
          goto LABEL_55;
        }
      }
    }
    if ( a1 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      v9 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(*(_QWORD *)(v9 + 424) + 664LL) != *(_QWORD *)(CurrentProcessWin32Process + 664) )
      {
        if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v9) + 664) )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
          if ( *(_QWORD *)(v26 + 664)
            || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v26) + 664) + 64LL) & 4) != 0 )
          {
            UserSetLastError(87LL, v25);
            if ( (unsigned int)dword_1C03263C0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263C0, 0x400000000000LL) )
            {
              v46 = v6;
              LODWORD(v45) = -2147024809;
              v47 = "InvalidParameter";
              v41 = 1LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                v27,
                (unsigned int)&unk_1C02EFA93,
                v28,
                (unsigned int)&v41,
                (__int64)&v47,
                (__int64)&v45,
                (__int64)&v46);
            }
            if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 1LL) )
            {
              v46 = v6;
              LODWORD(v45) = -2147024809;
              v47 = "InvalidParameter";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                v29,
                &unk_1C02EFA56);
            }
            v30 = 0LL;
            goto LABEL_57;
          }
        }
      }
    }
    ThreadLock(a1, (__int64 *)&v43);
    v10 = OpenClipboard(a1, &v45);
    ThreadUnlock1(v12, v11, v13);
    v5 = MmUserProbeAddress;
    v16 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v45;
    if ( (unsigned int)dword_1C03263C0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263C0, 0x400000000000LL) )
    {
      v47 = (const char *)v6;
      if ( v10 )
      {
        LastError = 0;
      }
      else
      {
        LastError = UserGetLastError(v5, v16, v14, v15);
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
      }
      LODWORD(v45) = LastError;
      v41 = (__int64)"FunctionExit";
      v42[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v5,
        (unsigned int)&unk_1C02EFA93,
        v14,
        (unsigned int)v42,
        (__int64)&v41,
        (__int64)&v45,
        (__int64)&v47);
    }
    if ( !v10 )
    {
      v32 = UserGetLastError(v5, v16, v14, v15);
      v33 = v32 < 0;
      if ( v32 > 0 )
        v33 = 1;
      if ( v33 && (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 1LL) )
      {
        v45 = v6;
        v37 = UserGetLastError(v5, v34, v35, v36);
        if ( v37 > 0 )
          v37 = (unsigned __int16)v37 | 0x80070000;
        LODWORD(v46) = v37;
        v47 = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v38,
          &unk_1C02EFA56);
      }
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v5);
  return v10;
}
