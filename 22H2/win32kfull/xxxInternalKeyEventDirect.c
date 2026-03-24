/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C0103524
 * Callers:
 *     xxxSendInput @ 0x1C00BFF08 (xxxSendInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00D578C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C01037D0 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D4618 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char v7; // di
  __int16 v8; // si
  __int64 v9; // rdx
  __int16 v10; // cx
  __int64 v11; // r9
  _WORD *v12; // r8
  __int16 v14; // cx
  __int16 v15; // ax
  ULONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+48h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  v7 = a3;
  v8 = a2;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput
    && (PsGetCurrentProcess(grpdeskRitInput, a2, a3) == gpepCSRSS
     || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), 0x20u)) )
  {
    if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1) )
    {
      MSGLUA_GPQFOREGROUND();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (unsigned int)&WPP_6364ce0f1f553625c01e28e6d30a6cdc_Traceguids,
          2,
          20,
          11,
          (__int64)&WPP_6364ce0f1f553625c01e28e6d30a6cdc_Traceguids);
      return 1LL;
    }
    if ( (unsigned int)dword_1C032FB20 > 4 )
    {
      v9 = 0x4000LL;
      if ( (qword_1C032FB30 & 0x4000) != 0 && (qword_1C032FB38 & 0x4000) == qword_1C032FB38 )
      {
        v19 = (__int64)"SendInput";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (int)&dword_1C032FB20,
          (__int64)&v19);
      }
    }
    LOBYTE(v20) = v8;
    *((_QWORD *)&v20 + 1) = 0LL;
    if ( (v7 & 8) != 0 )
    {
      LOBYTE(v9) = (v7 & 1) != 0 ? 0xE0 : 0;
      a1 = VKFromVSC(&v20, v9, 256LL);
      v10 = a1;
      WORD1(v20) = a1;
    }
    else
    {
      switch ( a1 )
      {
        case 0x10u:
          a1 = ((v8 & 0x7F) == 54) - 96;
          break;
        case 0x11u:
          a1 = v7 & 1 | 0xA2;
          break;
        case 0x12u:
          a1 = v7 & 1 | 0xA4;
          break;
      }
      v10 = a1 | 0x2000;
      WORD1(v20) = v10;
      if ( a1 == 0xA1 )
      {
        v10 |= 0x100u;
        WORD1(v20) = v10;
      }
    }
    if ( (v7 & 2) != 0 )
    {
      v10 |= 0x8000u;
      WORD1(v20) = v10;
    }
    if ( (v7 & 4) != 0 )
    {
      v15 = 4096;
      LOWORD(v20) = v8;
    }
    else
    {
      if ( (v7 & 1) != 0 )
      {
        v14 = v10 | 0x100;
LABEL_29:
        WORD1(v20) = v14;
        goto LABEL_23;
      }
      if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
      {
        if ( !ausNumPadCvt )
        {
LABEL_23:
          WORD1(v21) = (unsigned __int8)v8;
          WORD2(v21) = (v7 & 2) != 0;
          if ( (v7 & 1) != 0 )
            WORD2(v21) = ((v7 & 2) != 0) | 2;
          LOWORD(v21) = -2;
          WORD3(v21) = 0;
          DWORD2(v21) = a5;
          gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
          DWORD1(v20) = a4;
          xxxProcessKeyEvent(&v20, a5, 1LL, 0LL, 0LL, 0LL);
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
    goto LABEL_29;
  }
  v16 = RtlNtStatusToDosError(-1073741790);
  UserSetLastError(v16, v17, v18);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (unsigned int)&WPP_6364ce0f1f553625c01e28e6d30a6cdc_Traceguids,
      2,
      20,
      10,
      (__int64)&WPP_6364ce0f1f553625c01e28e6d30a6cdc_Traceguids);
  return 0LL;
}
