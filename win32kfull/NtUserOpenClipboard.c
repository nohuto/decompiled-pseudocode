__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  ULONG64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // r8d
  signed int LastError; // eax
  __int64 v15; // r11
  __int64 v16; // r14
  __int64 v17; // rax
  int v18; // ecx
  int v19; // r8d
  const char *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  bool v30; // sf
  signed int v31; // eax
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v36[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v37; // [rsp+58h] [rbp-40h] BYREF
  __int64 v38; // [rsp+68h] [rbp-30h]
  __int64 v39; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v40; // [rsp+B0h] [rbp+18h] BYREF
  const char *v41; // [rsp+B8h] [rbp+20h] BYREF

  v37 = 0LL;
  v38 = 0LL;
  LODWORD(v39) = 0;
  EnterCrit(0LL, 0LL);
  if ( a1 && (a1 = ValidateHwnd(a1)) == 0 )
  {
    v11 = 0;
  }
  else
  {
    v5 = *(_QWORD *)(gptiCurrent + 424LL) + 976LL;
    v40 = v5;
    if ( gbLockScreenActive || *(PVOID *)(gptiCurrent + 456LL) == grpdeskLogon )
    {
      if ( (unsigned int)dword_1C0357060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357060, 0x400000000000LL) )
      {
        v40 = v5;
        LODWORD(v39) = -2147024891;
        v20 = "OnLockscreen";
        v41 = "OnLockscreen";
        v36[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v33,
          (unsigned int)&unk_1C031D4E9,
          v34,
          (unsigned int)v36,
          (__int64)&v41,
          (__int64)&v39,
          (__int64)&v40);
      }
      else
      {
        v20 = "OnLockscreen";
      }
      if ( (unsigned int)dword_1C0357098 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C0357098, 1LL) )
        goto LABEL_65;
LABEL_64:
      v40 = v5;
      LODWORD(v39) = -2147024891;
      v41 = v20;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v21,
        &unk_1C031D532);
LABEL_65:
      v28 = 5LL;
LABEL_66:
      v11 = 0;
      UserSetLastError(v28);
      goto LABEL_20;
    }
    v6 = ((__int64 (*)(void))PsGetCurrentProcessWin32Process)();
    if ( v6 )
    {
      v7 = -*(_QWORD *)v6;
      v6 &= -(__int64)(*(_QWORD *)v6 != 0LL);
    }
    if ( *(_DWORD *)(v6 + 868) )
    {
      v15 = gptiCurrent;
      v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
      if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1) )
      {
        v17 = *(_QWORD *)(v16 + 112);
        if ( !v17 || *(_QWORD *)(v17 + 16) != v15 )
        {
          if ( (unsigned int)dword_1C0357060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357060, 0x400000000000LL) )
          {
            v40 = v5;
            LODWORD(v39) = -2147024891;
            v20 = "NoForeground";
            v41 = "NoForeground";
            v35 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v18,
              (unsigned int)&unk_1C031D4E9,
              v19,
              (unsigned int)&v35,
              (__int64)&v41,
              (__int64)&v39,
              (__int64)&v40);
          }
          else
          {
            v20 = "NoForeground";
          }
          if ( (unsigned int)dword_1C0357098 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1C0357098, 1LL) )
            goto LABEL_65;
          goto LABEL_64;
        }
      }
    }
    if ( a1 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      v9 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
      if ( *(_QWORD *)(v10 + 656) != *(_QWORD *)(v9 + 656) )
      {
        v22 = PsGetCurrentProcessWin32Process(v10);
        if ( v22 )
          v22 &= -(__int64)(*(_QWORD *)v22 != 0LL);
        if ( *(_QWORD *)(v22 + 656) )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
          if ( *(_QWORD *)(v23 + 656) )
            goto LABEL_41;
          v24 = PsGetCurrentProcessWin32Process(v23);
          if ( v24 )
            v24 &= -(__int64)(*(_QWORD *)v24 != 0LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v24 + 656) + 64LL) & 4) != 0 )
          {
LABEL_41:
            UserSetLastError(87LL);
            if ( (unsigned int)dword_1C0357060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357060, 0x400000000000LL) )
            {
              v40 = v5;
              LODWORD(v39) = -2147024809;
              v41 = "InvalidParameter";
              v35 = 1LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                v25,
                (unsigned int)&unk_1C031D4E9,
                v26,
                (unsigned int)&v35,
                (__int64)&v41,
                (__int64)&v39,
                (__int64)&v40);
            }
            if ( (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 1LL) )
            {
              v40 = v5;
              LODWORD(v39) = -2147024809;
              v41 = "InvalidParameter";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                v27,
                &unk_1C031D532);
            }
            v28 = 0LL;
            goto LABEL_66;
          }
        }
      }
    }
    ThreadLock(a1, &v37);
    v11 = OpenClipboard(a1, &v39);
    ThreadUnlock1();
    v4 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v39;
    if ( (unsigned int)dword_1C0357060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357060, 0x400000000000LL) )
    {
      v41 = (const char *)v5;
      if ( v11 )
      {
        LastError = 0;
      }
      else
      {
        LastError = UserGetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
      }
      LODWORD(v39) = LastError;
      v35 = (__int64)"FunctionExit";
      v36[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v4,
        (unsigned int)&unk_1C031D4E9,
        v12,
        (unsigned int)v36,
        (__int64)&v35,
        (__int64)&v39,
        (__int64)&v41);
    }
    if ( !v11 )
    {
      v29 = UserGetLastError();
      v30 = v29 < 0;
      if ( v29 > 0 )
        v30 = 1;
      if ( v30 && (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 1LL) )
      {
        v39 = v5;
        v31 = UserGetLastError();
        if ( v31 > 0 )
          v31 = (unsigned __int16)v31 | 0x80070000;
        LODWORD(v40) = v31;
        v41 = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v32,
          &unk_1C031D532);
      }
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v4);
  return v11;
}
