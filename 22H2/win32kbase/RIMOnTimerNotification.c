/*
 * XREFs of RIMOnTimerNotification @ 0x1C01577C0
 * Callers:
 *     NtRIMOnTimerNotification @ 0x1C0153890 (NtRIMOnTimerNotification.c)
 *     ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01A3C60 (-OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01A4520 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C0055178 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00551A0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0058904 (WPP_RECORDER_SF_DD.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00AD424 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0174144 (rimDispatchAutoRepeatCompleteFrame.c)
 *     RIMEndAllStaleContacts @ 0x1C0178168 (RIMEndAllStaleContacts.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C01CA6DC (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *a1, int a2)
{
  int v2; // edi
  int v4; // edx
  int v5; // r14d
  union _LARGE_INTEGER v6; // rbx
  int v7; // edx
  int v8; // edx
  LARGE_INTEGER v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  void *v12; // rcx
  int v13; // esi
  int v14; // edx
  __int64 v15; // rdi
  LONGLONG v16; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 i; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edi
  LONGLONG v22; // rax
  int v23; // edx
  LONGLONG v24; // rt2
  union _LARGE_INTEGER DueTime; // [rsp+48h] [rbp-19h] BYREF
  _OWORD v27[3]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v28; // [rsp+80h] [rbp+1Fh]
  int v29; // [rsp+88h] [rbp+27h]

  v2 = a2;
  DueTime.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 60, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v5 >= 0 )
  {
    v6 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 104);
    if ( !bRimDispositionNormal((struct RawInputManagerObject *)v6.QuadPart) )
    {
      v5 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 68, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
      goto LABEL_57;
    }
    RIMLockExclusive(v6.QuadPart + 568);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 61, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    }
    if ( v2 )
    {
      if ( *(_QWORD *)(v6.QuadPart + 344) != -1LL )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 64, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
        }
        v13 = 1;
        memset(v27, 0, sizeof(v27));
        v28 = 0LL;
        v29 = 0;
        ApiSetGetPowerTransitionsState((__int64)v27);
        if ( !LODWORD(v27[0]) )
          goto LABEL_51;
        if ( *(_QWORD *)((char *)&v27[1] + 12) )
          goto LABEL_51;
        if ( !*(_DWORD *)(v6.QuadPart + 464) )
          goto LABEL_51;
        v15 = *(_QWORD *)(v6.QuadPart + 424);
        if ( !v15 )
          goto LABEL_51;
        do
        {
          if ( *(_BYTE *)(v15 + 48) == 2
            && (*(_DWORD *)(v15 + 200) & 0x80u) != 0
            && (*(_DWORD *)(v15 + 184) & 0x2000) == 0 )
          {
            if ( *(_QWORD *)(v15 + 408) )
            {
              rimDispatchAutoRepeatCompleteFrame((struct RawInputManagerObject *)v6.QuadPart, (struct RIMDEV *)v15);
              if ( *(_QWORD *)(v15 + 408) )
                v13 = 0;
            }
          }
          v15 = *(_QWORD *)(v15 + 40);
        }
        while ( v15 );
        if ( !v13 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 65, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
          }
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          for ( i = *(_QWORD *)(v6.QuadPart + 424); i; i = *(_QWORD *)(i + 40) )
          {
            if ( *(_BYTE *)(i + 48) == 2 && (*(_DWORD *)(i + 200) & 0x80u) != 0 )
            {
              v19 = *(_QWORD *)(i + 408);
              if ( v19 )
              {
                if ( PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 96) < v16 )
                  v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 96);
              }
            }
          }
          v20 = 1000 * (v16 + *(_QWORD *)(v6.QuadPart + 360));
          v21 = 10;
          v24 = v20 % gliQpcFreq.QuadPart;
          v22 = v20 / gliQpcFreq.QuadPart;
          v23 = v24;
          if ( *(_DWORD *)(v6.QuadPart + 352) )
            v21 = *(_DWORD *)(v6.QuadPart + 352);
          if ( (unsigned int)v22 > v21 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v23) = 4;
              WPP_RECORDER_SF_DD(
                (_DWORD)gRimLog,
                v23,
                1,
                66,
                (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
                v22,
                v21);
            }
            LODWORD(v22) = v21;
          }
          DueTime.QuadPart = -10000LL * (int)v22;
          ZwSetTimer(*(HANDLE *)(v6.QuadPart + 344), &DueTime, 0LL, 0LL, 0, 0, 0LL);
          *(LARGE_INTEGER *)(v6.QuadPart + 376) = KeQueryPerformanceCounter(0LL);
        }
        else
        {
LABEL_51:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 67, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
          }
          ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 344), 0LL);
          *(_QWORD *)(v6.QuadPart + 376) = 0LL;
        }
      }
      goto LABEL_54;
    }
    v9 = KeQueryPerformanceCounter(0LL);
    v11 = *(_QWORD *)(v6.QuadPart + 376);
    if ( v11 && v9.QuadPart - v11 <= *(_QWORD *)(v6.QuadPart + 368) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 63, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 62, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
      ((void (__fastcall *)(_QWORD))RIMEndAllStaleContacts)((union _LARGE_INTEGER)v6.QuadPart);
      if ( !*(_DWORD *)(v6.QuadPart + 464) )
      {
        ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 336), 0LL);
        v12 = *(void **)(v6.QuadPart + 344);
        if ( v12 != (void *)-1LL )
        {
          ZwCancelTimer(v12, 0LL);
          *(_QWORD *)(v6.QuadPart + 376) = 0LL;
        }
        *(_DWORD *)(v6.QuadPart + 468) = 0;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(v12, 0LL);
        goto LABEL_54;
      }
    }
    DueTime.QuadPart = -1000000LL;
    ZwSetTimer(*(HANDLE *)(v6.QuadPart + 336), &DueTime, 0LL, 0LL, 0, 0, 0LL);
LABEL_54:
    *(_QWORD *)(v6.QuadPart + 576) = 0LL;
    ExReleasePushLockExclusiveEx(v6.QuadPart + 568, 0LL);
    KeLeaveCriticalRegion();
LABEL_57:
    *(_QWORD *)(v6.QuadPart + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v6.QuadPart + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject((PVOID)v6.QuadPart);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v4, 1, 69, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v5);
  }
  return (unsigned int)v5;
}
