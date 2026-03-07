int __fastcall PTPTelemetry::Usage::SetLastAction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdi
  LARGE_INTEGER PerformanceCounter; // r8
  LONGLONG v7; // rcx
  unsigned __int64 v8; // rdx
  signed __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rax
  _DWORD *v26; // rcx
  int v28; // [rsp+58h] [rbp-9h] BYREF
  int v29; // [rsp+5Ch] [rbp-5h] BYREF
  LONGLONG v30; // [rsp+60h] [rbp-1h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp+7h] BYREF
  signed __int64 v32; // [rsp+70h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+78h] [rbp+17h] BYREF
  int *v34; // [rsp+98h] [rbp+37h]
  __int64 v35; // [rsp+A0h] [rbp+3Fh]

  v4 = a1;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4) + 3464;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = PerformanceCounter.QuadPart - _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 112), 0LL, 0LL);
  v8 = (unsigned __int64)(1000 * v7) % gliQpcFreq.QuadPart;
  v9 = (unsigned __int64)(1000 * v7) / gliQpcFreq.QuadPart;
  if ( v9 <= 500 )
  {
    _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 96), 0LL, 0LL);
    _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 104), 0LL, 0LL);
    if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
    {
      v29 = *(_DWORD *)(v5 + 124);
      v12 = PerformanceCounter.QuadPart - v11;
      v28 = v4;
      v13 = 1000 * (PerformanceCounter.QuadPart - v11);
      v14 = PerformanceCounter.QuadPart - v10;
      v32 = v9;
      v30 = v13 / gliQpcFreq.QuadPart;
      v31 = (unsigned __int64)(1000 * v14) / gliQpcFreq.QuadPart;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v12,
        byte_1C029BD08,
        v14,
        v9,
        (__int64)&v32,
        (__int64)&v28,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29);
    }
  }
  v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(
          v7,
          v8,
          (LARGE_INTEGER)PerformanceCounter.QuadPart,
          v9);
  v20 = SGDGetUserSessionState(v17, v16, v18, v19);
  if ( *(_DWORD *)(v20 + 12008) || *(_QWORD *)(v20 + 11984) || *(__int64 *)(v20 + 11968) <= 0 )
    *(_DWORD *)(v15 + 12012) = v4;
  else
    *(_DWORD *)(v15 + 12008) = v4;
  v25 = (_DWORD *)SGDGetUserSessionState(v22, v21, v23, v24);
  v26 = v25 + 2956;
  if ( v4 > 12 )
  {
    if ( v4 > 21 )
    {
      switch ( v4 )
      {
        case 22:
          ++v25[2963];
          break;
        case 23:
          ++v25[2973];
          break;
        case 24:
          ++v25[2974];
          break;
        case 25:
          ++v25[2959];
          break;
        default:
          goto LABEL_57;
      }
    }
    else
    {
      switch ( v4 )
      {
        case 21:
          ++v25[2965];
          break;
        case 16:
          ++v25[2962];
          break;
        case 17:
          ++v25[2966];
          break;
        case 18:
          ++v25[2960];
          break;
        case 19:
          ++v25[2961];
          break;
        case 20:
          ++v25[2964];
          break;
        default:
          goto LABEL_57;
      }
    }
  }
  else if ( v4 == 12 )
  {
    ++v25[2976];
  }
  else if ( v4 > 6 )
  {
    switch ( v4 )
    {
      case 7:
        ++v25[2957];
        break;
      case 8:
        ++v25[2958];
        break;
      case 9:
        ++*v26;
        ++v25[2979];
        LODWORD(v25) = EtwTraceTouchpadGestureDetected((__int64)v26);
        goto LABEL_57;
      case 10:
        ++v25[2977];
        return (int)v25;
      default:
        ++v25[2975];
        break;
    }
  }
  else
  {
    switch ( v4 )
    {
      case 6:
        ++v25[2968];
        break;
      case 1:
        ++v25[2969];
        break;
      case 2:
        ++v25[2970];
        break;
      case 3:
        ++v25[2971];
        break;
      case 4:
        ++v25[2972];
        break;
      case 5:
        ++v25[2967];
        break;
      default:
        goto LABEL_57;
    }
  }
  ++v25[2979];
LABEL_57:
  if ( (unsigned int)dword_1C02C93D8 > 5 )
  {
    v28 = v4;
    v34 = &v28;
    v35 = 4LL;
    LODWORD(v25) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_1C02C93D8,
                     (unsigned __int8 *)dword_1C029BD71,
                     0LL,
                     0LL,
                     3u,
                     &v33);
  }
  return (int)v25;
}
