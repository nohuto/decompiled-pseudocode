__int64 __fastcall VidSchCreateDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx

  *a3 = 0LL;
  if ( a1 && a2 )
    return VidSchiCreateDeviceInternal(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 744LL), a2, a1);
  WdLogSingleEntry0(1LL);
  DxgkLogInternalTriageEvent(v4, 0x40000LL);
  return 3221225485LL;
}
