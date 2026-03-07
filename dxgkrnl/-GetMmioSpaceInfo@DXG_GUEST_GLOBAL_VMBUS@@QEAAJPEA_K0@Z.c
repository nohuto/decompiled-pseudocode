__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(
        DXG_GUEST_GLOBAL_VMBUS *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  ((void (__fastcall *)(_QWORD))qword_1C013CE50)(*(_QWORD *)this);
  if ( *a3 >= *((_QWORD *)DXGGLOBAL::GetGlobal() + 220) && *a2 )
    return 0LL;
  WdLogSingleEntry1(2LL, 13804LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"GetMmioSpaceInfo failed", 13804LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
