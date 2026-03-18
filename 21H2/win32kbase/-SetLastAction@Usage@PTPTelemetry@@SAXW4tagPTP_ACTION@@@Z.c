/*
 * XREFs of ?SetLastAction@Usage@PTPTelemetry@@SAXW4tagPTP_ACTION@@@Z @ 0x1C01DF934
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01DEAD0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     EtwTraceTouchpadGestureDetected @ 0x1C014EDD0 (EtwTraceTouchpadGestureDetected.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@334@Z @ 0x1C01DD328 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

char __fastcall PTPTelemetry::Usage::SetLastAction(int a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  signed __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  int v12; // [rsp+50h] [rbp-9h] BYREF
  int v13; // [rsp+54h] [rbp-5h] BYREF
  LONGLONG v14; // [rsp+58h] [rbp-1h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp+7h] BYREF
  __int64 v16; // [rsp+68h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+70h] [rbp+17h] BYREF
  int *v18; // [rsp+90h] [rbp+37h]
  __int64 v19; // [rsp+98h] [rbp+3Fh]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = (unsigned __int64)(1000
                        * (PerformanceCounter.QuadPart - _InterlockedCompareExchange64(&qword_1C029AC90, 0LL, 0LL)))
     / gliQpcFreq.QuadPart;
  if ( v3 <= 500 )
  {
    _InterlockedCompareExchange64(&qword_1C029AC80, 0LL, 0LL);
    LOBYTE(v3) = _InterlockedCompareExchange64(&qword_1C029AC88, 0LL, 0LL);
    if ( (unsigned int)dword_1C028D6F0 > 5 )
    {
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL);
      if ( (_BYTE)v3 )
      {
        v13 = dword_1C029AC9C;
        v8 = v4 - v7;
        v12 = a1;
        v9 = 1000 * (v4 - v7);
        v10 = v4 - v6;
        v16 = v5;
        v14 = v9 / gliQpcFreq.QuadPart;
        v15 = (unsigned __int64)(1000 * v10) / gliQpcFreq.QuadPart;
        LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                       v8,
                       byte_1C02625D0,
                       v10,
                       v5,
                       (__int64)&v16,
                       (__int64)&v12,
                       (__int64)&v15,
                       (__int64)&v14,
                       (__int64)&v13);
      }
    }
  }
  if ( dword_1C0296B38 || qword_1C0296B20 || PTPTelemetry::Usage::gTPTelemTimings <= 0 )
    dword_1C0296B3C = a1;
  else
    dword_1C0296B38 = a1;
  if ( a1 > 12 )
  {
    if ( a1 > 21 )
    {
      switch ( a1 )
      {
        case 22:
          ++dword_1C029D89C;
          break;
        case 23:
          ++dword_1C029D8C4;
          break;
        case 24:
          ++dword_1C029D8C8;
          break;
        case 25:
          ++dword_1C029D88C;
          break;
        default:
          goto LABEL_57;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 21:
          ++dword_1C029D8A4;
          break;
        case 16:
          ++dword_1C029D898;
          break;
        case 17:
          ++dword_1C029D8A8;
          break;
        case 18:
          ++dword_1C029D890;
          break;
        case 19:
          ++dword_1C029D894;
          break;
        case 20:
          ++dword_1C029D8A0;
          break;
        default:
          goto LABEL_57;
      }
    }
  }
  else if ( a1 == 12 )
  {
    ++dword_1C029D8D0;
  }
  else if ( a1 > 6 )
  {
    switch ( a1 )
    {
      case 7:
        ++dword_1C029D884;
        break;
      case 8:
        ++dword_1C029D888;
        break;
      case 9:
        ++PTPTelemetry::Usage::gTPTelemState;
        ++dword_1C029D8DC;
        LOBYTE(v3) = EtwTraceTouchpadGestureDetected(0LL);
        goto LABEL_57;
      case 10:
        ++dword_1C029D8D4;
        return v3;
      default:
        ++dword_1C029D8CC;
        break;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 6:
        ++dword_1C029D8B0;
        break;
      case 1:
        ++dword_1C029D8B4;
        break;
      case 2:
        ++dword_1C029D8B8;
        break;
      case 3:
        ++dword_1C029D8BC;
        break;
      case 4:
        ++dword_1C029D8C0;
        break;
      case 5:
        ++dword_1C029D8AC;
        break;
      default:
        goto LABEL_57;
    }
  }
  ++dword_1C029D8DC;
LABEL_57:
  if ( (unsigned int)dword_1C028D6F0 > 5 )
  {
    v12 = a1;
    v18 = &v12;
    v19 = 4LL;
    LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                   (__int64)&dword_1C028D6F0,
                   (unsigned __int8 *)dword_1C02625AB,
                   0LL,
                   0LL,
                   3u,
                   &v17);
  }
  return v3;
}
