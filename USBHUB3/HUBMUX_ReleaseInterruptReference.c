void __fastcall HUBMUX_ReleaseInterruptReference(volatile signed __int32 *a1)
{
  __int64 v1; // rbx
  char v3; // si
  KSPIN_LOCK *v4; // rbp
  KIRQL v5; // al
  __int64 v6; // rdx
  KIRQL v7; // r14
  int v8; // eax

  v1 = *(_QWORD *)a1;
  v3 = 0;
  v4 = (KSPIN_LOCK *)(*(_QWORD *)a1 + 2320LL);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  v6 = *((unsigned int *)a1 + 66);
  v7 = v5;
  if ( (v6 & 2) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*((_QWORD *)a1 + 179), 2u, 4u, 0x10u, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids);
    HUBMISC_DbgBreak("Port is releasing interrupt reference when it is not holding it", v6);
  }
  _InterlockedAnd(a1 + 66, 0xFFFFFFFD);
  v8 = *(_DWORD *)(v1 + 2340);
  if ( v8 )
  {
    *(_DWORD *)(v1 + 2340) = v8 - 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*((_QWORD *)a1 + 179), 2u, 4u, 0x11u, (__int64)&WPP_f6bc06825974302b29b4735b6d0d1d51_Traceguids);
    HUBMISC_DbgBreak("Hub interrupt reference is being released too many times", v6);
  }
  if ( !*(_DWORD *)(v1 + 2340) && (*(_DWORD *)(v1 + 2352) & 1) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v1 + 2352), 0xFFFFFFFE);
    v3 = 1;
  }
  KeReleaseSpinLock(v4, v7);
  if ( v3 )
    HUBSM_AddEvent(v1 + 1264, 2050);
}
