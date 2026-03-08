/*
 * XREFs of ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C02CA740
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C02D9700 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C03BF0BC (MonitorAcquireMonitorPendingEvent.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C03BFF94 (MonitorReleaseMonitorPendingEvent.c)
 */

__int64 __fastcall DxgkWaitForMonitorEventDoneInternal(struct DXGADAPTER *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  void *v4; // rbx
  __int64 v5; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v7; // eax
  union _LARGE_INTEGER Timeout; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v10[144]; // [rsp+60h] [rbp-A8h] BYREF

  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, this, 0LL);
    if ( *((_QWORD *)this + 365) )
    {
      v3 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10, 0LL);
      if ( v3 >= 0 )
      {
        v4 = (void *)*((_QWORD *)this + 27);
        ObfReferenceObject(v4);
        v5 = (int)MonitorAcquireMonitorPendingEvent(this);
        ObfDereferenceObject(v4);
        if ( (int)v5 >= 0 )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v10);
          Timeout.QuadPart = -1000000LL;
          PreviousMode = ExGetPreviousMode();
          v7 = KeWaitForSingleObject((PVOID)0x18, UserRequest, PreviousMode, 0, &Timeout);
          v5 = v7;
          if ( v7 == 258 )
          {
            WdLogSingleEntry1(3LL, 2181LL);
          }
          else if ( v7 < 0 )
          {
            WdLogSingleEntry1(2LL, v7);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
              v5,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          MonitorReleaseMonitorPendingEvent(0LL);
        }
        else
        {
          WdLogSingleEntry1(2LL, v5);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in acquiring monitor pending event (Status == 0x%I64x)!",
            v5,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v2 = v5;
      }
      else
      {
        v2 = v3;
      }
    }
    else
    {
      v2 = -1073741637;
      WdLogSingleEntry2(2LL, this, -1073741637LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkWaitForMonitorEventDoneInternal is called on a render only adapter 0x%I64x, returning 0x%I64x!",
        (__int64)this,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry2(3LL, -1073741811LL, 0LL);
  }
  return v2;
}
