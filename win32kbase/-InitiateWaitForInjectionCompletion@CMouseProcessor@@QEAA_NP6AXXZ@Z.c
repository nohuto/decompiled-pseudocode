/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C022E49C
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x1C0217E30 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C007B6A0 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C007B854 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     IsEditionComputeInjectorUIPISupported @ 0x1C0271E94 (IsEditionComputeInjectorUIPISupported.c)
 */

char __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  char *v2; // rbx
  char v5; // si
  struct CMouseProcessor::RawMouseEvent *v6; // rax
  int v7; // edx
  int v8; // r8d
  char v9; // bp
  struct CMouseProcessor::RawMouseEvent *v10; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // r8
  int v13; // eax
  __int128 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF
  int v17; // [rsp+58h] [rbp-30h]

  v2 = (char *)this + 2768;
  v5 = 0;
  RIMLockExclusive((__int64)this + 2768);
  if ( *((_WORD *)this + 1381) )
  {
    v6 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 72), 1);
    if ( v6 )
    {
      *((_QWORD *)v6 + 20) = a2;
      v5 = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v8,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          6,
          17,
          (__int64)&WPP_2101e6ada08e3422177879c6f3be7480_Traceguids);
      }
    }
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
  {
    v9 = 0;
    v16 = 0LL;
    v17 = 0;
    if ( (int)IsEditionComputeInjectorUIPISupported() >= 0 )
    {
      if ( qword_1C02D7D50 )
        qword_1C02D7D50(&v16);
      v9 = 1;
    }
    RIMLockExclusive((__int64)v2);
    v10 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 72), 0);
    if ( v10 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)((char *)v10 + 52) = 0LL;
      *((LARGE_INTEGER *)v10 + 11) = PerformanceCounter;
      v13 = 2;
      *((_DWORD *)v10 + 26) = 2;
      if ( v9 && v17 )
        v13 = 1;
      *((_DWORD *)v10 + 27) = v13;
      *((_DWORD *)v10 + 28) = 32896;
      if ( v9 )
      {
        *(_QWORD *)&v15 = v16;
        DWORD2(v15) = v17;
        BYTE12(v15) = 1;
        *(_OWORD *)((char *)v10 + 116) = v15;
      }
      *((_QWORD *)v10 + 20) = a2;
      v5 = 1;
      ApiSetEditionInitiateMouseEventProcessing(0, 1LL, v12.QuadPart);
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
  return v5;
}
