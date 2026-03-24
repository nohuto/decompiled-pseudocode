/*
 * XREFs of UserAddBaseWindowHandle @ 0x1C0138E20
 * Callers:
 *     NtMITMinuserWindowCreated @ 0x1C012A800 (NtMITMinuserWindowCreated.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     HMAllocObject @ 0x1C0032C10 (HMAllocObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004B460 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00ABD64 (WPP_RECORDER_SF_qqd.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C0138DE0 (LookForMatchingBaseWindowPHE.c)
 */

__int64 __fastcall UserAddBaseWindowHandle(__int64 a1, unsigned int a2)
{
  size_t v2; // rdi
  unsigned int v4; // esi
  int v5; // edx
  __int64 v6; // rcx
  __int64 ThreadWin32Thread; // rbp
  void *v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v10; // edx
  __int64 v11; // rax
  _QWORD *v12; // rax
  int v14; // r9d

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      10,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids);
  }
  v4 = 0;
  RIMLockExclusive((__int64)&gWndLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v8 = 0LL;
  if ( (*(_DWORD *)(ThreadWin32Thread + 1232) & 0x1000000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_q(
      (_DWORD)gBaseLog,
      v5,
      11,
      14,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
      ThreadWin32Thread);
    goto LABEL_25;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( LookForMatchingBaseWindowPHE(a1, CurrentProcessWin32Process, 0LL) )
  {
    v4 = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    v14 = 13;
    LOBYTE(v5) = 5;
    goto LABEL_21;
  }
  if ( !(_DWORD)v2 || (v8 = Win32AllocPoolZInit(v2, 1685545557LL)) != 0LL )
  {
    v11 = HMAllocObject(ThreadWin32Thread, 0LL, 0x17u, 0x88u);
    if ( v11 )
    {
      *(_DWORD *)(v11 + 132) &= ~2u;
      v4 = 1;
      *(_QWORD *)(v11 + 56) = a1;
      *(_DWORD *)(v11 + 128) = v2;
      *(_QWORD *)(v11 + 120) = v8;
      v12 = (_QWORD *)(v11 + 96);
      v12[1] = v12;
      *v12 = v12;
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_25:
      if ( v8 )
        Win32FreePool((__int64)v8);
      goto LABEL_12;
    }
    v14 = 12;
    LOBYTE(v5) = 2;
LABEL_21:
    WPP_RECORDER_SF_qq(
      (_DWORD)gBaseLog,
      v5,
      11,
      v14,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
      ThreadWin32Thread,
      a1);
    goto LABEL_25;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_15;
  LOBYTE(v10) = 2;
  WPP_RECORDER_SF_qqd(
    (_DWORD)gBaseLog,
    v10,
    11,
    11,
    (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
    ThreadWin32Thread,
    a1,
    v2);
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      11,
      15,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids);
  }
LABEL_15:
  qword_1C02554F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
