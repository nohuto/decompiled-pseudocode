/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C007F8CC
 * Callers:
 *     xxxSendInput @ 0x1C007EDD4 (xxxSendInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C007FB78 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C007FBC0 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D08A8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int16 v8; // r14
  __int64 v9; // rdx
  __int16 v10; // cx
  __int64 v11; // r9
  _WORD *v12; // r8
  __int16 v14; // cx
  __int16 v15; // ax
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  ULONG v19; // eax
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // edx
  bool v23; // di
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+48h] [rbp-28h] BYREF
  __int128 v26; // [rsp+58h] [rbp-18h]

  v25 = 0LL;
  v26 = 0LL;
  v8 = a2;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput
    && (PsGetCurrentProcess(grpdeskRitInput, a2) == gpepCSRSS
     || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), 0x20u)) )
  {
    if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1) )
    {
      MSGLUA_GPQFOREGROUND();
      v18 = 2;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = v17;
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v16,
          v17,
          2,
          20,
          11,
          (__int64)&WPP_beb7cf85d36a30f017c172fe2ac77419_Traceguids);
      }
      return 1LL;
    }
    if ( (unsigned int)dword_1C032BE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 0x4000LL) )
    {
      v24 = (__int64)"SendInput";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C032BE20,
        (__int64)&v24);
    }
    LOBYTE(v25) = v8;
    *((_QWORD *)&v25 + 1) = 0LL;
    if ( (a3 & 8) != 0 )
    {
      LOBYTE(v9) = (a3 & 1) != 0 ? 0xE0 : 0;
      a1 = VKFromVSC(&v25, v9, 256LL);
      v10 = a1;
      WORD1(v25) = a1;
    }
    else
    {
      switch ( a1 )
      {
        case 0x10u:
          a1 = ((v8 & 0x7F) == 54) - 96;
          break;
        case 0x11u:
          a1 = a3 & 1 | 0xA2;
          break;
        case 0x12u:
          a1 = a3 & 1 | 0xA4;
          break;
      }
      v10 = a1 | 0x2000;
      WORD1(v25) = v10;
      if ( a1 == 0xA1 )
      {
        v10 |= 0x100u;
        WORD1(v25) = v10;
      }
    }
    if ( (a3 & 2) != 0 )
    {
      v10 |= 0x8000u;
      WORD1(v25) = v10;
    }
    if ( (a3 & 4) != 0 )
    {
      v15 = 4096;
      LOWORD(v25) = v8;
    }
    else
    {
      if ( (a3 & 1) != 0 )
      {
        v14 = v10 | 0x100;
LABEL_28:
        WORD1(v25) = v14;
        goto LABEL_23;
      }
      if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
      {
        if ( !ausNumPadCvt )
        {
LABEL_23:
          WORD1(v26) = (unsigned __int8)v8;
          WORD2(v26) = (a3 & 2) != 0;
          if ( (a3 & 1) != 0 )
            WORD2(v26) = ((a3 & 2) != 0) | 2;
          LOWORD(v26) = -2;
          WORD3(v26) = 0;
          DWORD2(v26) = a5;
          gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
          DWORD1(v25) = a4;
          xxxProcessKeyEvent(&v25, a5, 1LL, 0LL, 0LL, 0LL);
          return 1LL;
        }
        v11 = 0LL;
        v12 = (_WORD *)ausNumPadCvt;
        while ( a1 != *(_BYTE *)v12 )
        {
          ++v11;
          v12 = (_WORD *)((char *)&ausNumPadCvt + 2 * v11);
          if ( !*v12 )
            goto LABEL_23;
        }
      }
      v15 = 2048;
    }
    v14 = v15 | v10;
    goto LABEL_28;
  }
  v19 = RtlNtStatusToDosError(-1073741790);
  UserSetLastError(v19, v20);
  v22 = 2;
  v23 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = v23;
    LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v22,
      v21,
      10,
      2,
      20,
      10,
      (__int64)&WPP_beb7cf85d36a30f017c172fe2ac77419_Traceguids);
  }
  return 0LL;
}
