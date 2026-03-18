/*
 * XREFs of ?Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C0196208
 * Callers:
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z @ 0x1C019606C (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0198544 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEADLOCK_TRACKER::Activate(DXGDEADLOCK_TRACKER *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 9, 1, 0) )
  {
    *(_QWORD *)this = KeQueryUnbiasedInterruptTime();
    v2 = *((_QWORD *)this + 3);
    v3 = -10000LL * *(int *)(v2 + 4664);
    *((_DWORD *)this + 2) = *(_DWORD *)(v2 + 4664);
    if ( KeSetTimer((PKTIMER)((char *)this + 248), (LARGE_INTEGER)v3, (PKDPC)((char *)this + 312)) )
    {
      WdLogSingleEntry1(1LL, 12224LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Status == FALSE", 12224LL, 0LL, 0LL, 0LL, 0LL);
    }
    v4 = *((_QWORD *)this + 3);
    v5 = *(int *)(v4 + 4668);
    *((_DWORD *)this + 3) = v5;
    *((_DWORD *)this + 4) = *(_DWORD *)(v4 + 4672);
    if ( KeSetTimer((PKTIMER)((char *)this + 40), (LARGE_INTEGER)(-10000 * v5), (PKDPC)((char *)this + 104)) )
    {
      WdLogSingleEntry1(1LL, 12231LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Status == FALSE", 12231LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
}
