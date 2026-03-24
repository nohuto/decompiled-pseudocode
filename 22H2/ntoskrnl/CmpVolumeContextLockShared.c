/*
 * XREFs of CmpVolumeContextLockShared @ 0x1407C8E58
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C8D94 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpVolumeContextLockShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 56, 0LL);
}
