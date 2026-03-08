/*
 * XREFs of HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1C0083518
 * Callers:
 *     HUBPSM20_NotifyingUserAboutPersistentOverCurrent @ 0x1C00122A0 (HUBPSM20_NotifyingUserAboutPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C000FD34 (WPP_RECORDER_SF_qqd.c)
 *     WMI_FireNotification @ 0x1C008C428 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBMISC_GenerateUserNotificationForPersistentOverCurrent(_QWORD *a1)
{
  unsigned __int16 *v2; // rdi
  int v4; // [rsp+38h] [rbp-10h]

  _InterlockedOr((volatile signed __int32 *)a1 + 334, 4u);
  v2 = (unsigned __int16 *)(a1 + 25);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = *v2;
    WPP_RECORDER_SF_qqd(a1[179], 2u, 4u, 0x71u, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids, *a1, a1, v4);
  }
  return WMI_FireNotification(*a1, *v2, 3LL);
}
