/*
 * XREFs of PopRtcWakeSettingCallback @ 0x1407D4550
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopRtcWakeSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = -1073741811;
  v5 = *(_QWORD *)&GUID_ALLOW_RTC_WAKE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_RTC_WAKE.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_ALLOW_RTC_WAKE.Data4 - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock((_DWORD)a1);
    PoRtcWakeAllowed = *a2 != 0;
    PopReleasePolicyLock(v7, v6);
    return 0;
  }
  return v4;
}
