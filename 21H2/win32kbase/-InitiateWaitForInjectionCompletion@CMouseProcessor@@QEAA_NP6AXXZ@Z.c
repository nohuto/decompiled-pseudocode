/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C00B08DC
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x1C00B08A0 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C00376A8 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C00377A8 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     IsEditionComputeInjectorUIPISupported @ 0x1C00B0A84 (IsEditionComputeInjectorUIPISupported.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  char *v2; // rbx
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  struct CMouseProcessor::RawMouseEvent *v8; // rax
  int v9; // edx
  int v10; // r8d
  char v12; // bp
  __int64 v13; // r8
  struct CMouseProcessor::RawMouseEvent *v14; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  int v16; // eax
  __int128 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+50h] [rbp-38h] BYREF
  int v19; // [rsp+58h] [rbp-30h]

  v2 = (char *)this + 2768;
  v5 = 0;
  RIMLockExclusive((__int64)this + 2768);
  if ( *((_WORD *)this + 1381) )
  {
    LOBYTE(v6) = 1;
    v8 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 72), v6, v7);
    if ( v8 )
    {
      *((_QWORD *)v8 + 20) = a2;
      v5 = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v10,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          6,
          17,
          (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
      }
    }
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
  {
    v12 = 0;
    v18 = 0LL;
    v19 = 0;
    if ( (int)IsEditionComputeInjectorUIPISupported() >= 0 )
    {
      if ( qword_1C029D588 )
        qword_1C029D588(&v18);
      v12 = 1;
    }
    RIMLockExclusive((__int64)v2);
    v14 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 72), 0LL, v13);
    if ( v14 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)((char *)v14 + 52) = 0LL;
      *((LARGE_INTEGER *)v14 + 11) = PerformanceCounter;
      v16 = 2;
      *((_DWORD *)v14 + 26) = 2;
      if ( v12 && v19 )
        v16 = 1;
      *((_DWORD *)v14 + 27) = v16;
      *((_DWORD *)v14 + 28) = 32896;
      if ( v12 )
      {
        *(_QWORD *)&v17 = v18;
        DWORD2(v17) = v19;
        BYTE12(v17) = 1;
        *(_OWORD *)((char *)v14 + 116) = v17;
      }
      *((_QWORD *)v14 + 20) = a2;
      v5 = 1;
      ApiSetEditionInitiateMouseEventProcessing(0);
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
  return v5;
}
