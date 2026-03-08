/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C00172DC
 * Callers:
 *     xxxSendInput @ 0x1C00171A4 (xxxSendInput.c)
 * Callees:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C00174F8 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00F02AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01AA558 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char v7; // si
  __int16 v8; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r11
  __int16 v12; // cx
  int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v16; // ax
  int v18; // r8d
  int v19; // r9d
  int v20; // edx
  __int16 v21; // ax
  __int16 v22; // cx
  ULONG v23; // eax
  int v24; // r8d
  int v25; // edx
  bool v26; // di
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  __int128 v28; // [rsp+48h] [rbp-28h] BYREF
  __int128 v29; // [rsp+58h] [rbp-18h]

  v28 = 0LL;
  v29 = 0LL;
  v7 = a3;
  v8 = a2;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput
    && (PsGetCurrentProcess(grpdeskRitInput, a2, a3) == gpepCSRSS
     || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 896LL), 0x20u)) )
  {
    v9 = IsGpqForegroundAccessibleCurrent(1);
    v11 = 0LL;
    if ( !v9 )
    {
      MSGLUA_GPQFOREGROUND();
      v20 = 2;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = v19;
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v18,
          v19,
          2,
          20,
          11,
          (__int64)&WPP_5baf593ed76d3b0f18e1ac7921423c74_Traceguids);
      }
      return 1;
    }
    if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 0x4000LL) )
    {
      v27 = (__int64)"SendInput";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C035C080,
        (__int64)&v27);
      v11 = 0LL;
    }
    LOBYTE(v28) = v8;
    *((_QWORD *)&v28 + 1) = v11;
    if ( (v7 & 8) != 0 )
    {
      v13 = v7 & 1;
      LOBYTE(v10) = v13 != 0 ? 0xE0 : 0;
      a1 = VKFromVSC(&v28, v10);
      v11 = 0LL;
      v12 = a1;
      WORD1(v28) = a1;
    }
    else
    {
      switch ( a1 )
      {
        case 0x10u:
          a1 = ((v8 & 0x7F) == 54) - 96;
          break;
        case 0x11u:
          a1 = ((v7 & 1) != 0) - 94;
          break;
        case 0x12u:
          a1 = ((v7 & 1) != 0) - 92;
          break;
      }
      v12 = a1 | 0x2000;
      WORD1(v28) = v12;
      v13 = v7 & 1;
    }
    v14 = 256LL;
    if ( a1 == 0xA1 )
    {
      v12 |= 0x100u;
      WORD1(v28) = v12;
    }
    if ( (v7 & 2) != 0 )
    {
      v12 |= 0x8000u;
      WORD1(v28) = v12;
    }
    if ( (v7 & 4) != 0 )
    {
      v21 = 4096;
      LOWORD(v28) = v8;
    }
    else
    {
      if ( v13 )
      {
        v22 = v12 | 0x100;
LABEL_47:
        WORD1(v28) = v22;
        goto LABEL_24;
      }
      if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
      {
        if ( ausNumPadCvt == (_WORD)v11 )
        {
LABEL_24:
          WORD1(v29) = (unsigned __int8)v8;
          if ( (v7 & 2) != 0 )
            v16 = 1;
          else
            v16 = v11;
          WORD2(v29) = v16;
          if ( v13 )
            WORD2(v29) = v16 | 2;
          LOWORD(v29) = -2;
          LOBYTE(v14) = 1;
          WORD3(v29) = v11;
          DWORD2(v29) = a5;
          gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
          DWORD1(v28) = a4;
          xxxProcessKeyEvent(&v28, a5, v14, 0LL, v11, v11);
          return 1;
        }
        v15 = v11;
        v14 = ausNumPadCvt;
        while ( a1 != *(_BYTE *)v14 )
        {
          ++v15;
          v14 = (__int64)&ausNumPadCvt + 2 * v15;
          if ( *(_WORD *)v14 == (_WORD)v11 )
            goto LABEL_24;
        }
      }
      v21 = 2048;
    }
    v22 = v21 | v12;
    goto LABEL_47;
  }
  v23 = RtlNtStatusToDosError(-1073741790);
  UserSetLastError(v23);
  v25 = 2;
  v26 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v25) = v26;
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v25,
      v24,
      10,
      2,
      20,
      10,
      (__int64)&WPP_5baf593ed76d3b0f18e1ac7921423c74_Traceguids);
  }
  return 0;
}
