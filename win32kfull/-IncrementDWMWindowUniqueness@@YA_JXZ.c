/*
 * XREFs of ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164
 * Callers:
 *     DwmSyncDesktopSwitch @ 0x1C001D718 (DwmSyncDesktopSwitch.c)
 *     DwmAsyncDirtySprite @ 0x1C001F148 (DwmAsyncDirtySprite.c)
 *     DwmAsyncDestroySprite @ 0x1C0022BB8 (DwmAsyncDestroySprite.c)
 *     DwmAsyncActivationChange @ 0x1C0024744 (DwmAsyncActivationChange.c)
 *     DwmAsyncShowSprite @ 0x1C00248D0 (DwmAsyncShowSprite.c)
 *     DwmAsyncCreateSprite @ 0x1C0027CD0 (DwmAsyncCreateSprite.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0027E98 (DwmAsyncSetCompositionAttribute.c)
 *     DwmAsyncChildZBandChange @ 0x1C0027FF8 (DwmAsyncChildZBandChange.c)
 *     DwmAsyncOwnerChange @ 0x1C00280A4 (DwmAsyncOwnerChange.c)
 *     DwmAsyncDesktopCreate @ 0x1C007D0B8 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncChildLink @ 0x1C007E580 (DwmAsyncChildLink.c)
 *     DwmAsyncChildCreate @ 0x1C007E990 (DwmAsyncChildCreate.c)
 *     DwmAsyncChildDestroy @ 0x1C007EAF8 (DwmAsyncChildDestroy.c)
 *     DwmAsyncChildUnlink @ 0x1C007EB9C (DwmAsyncChildUnlink.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C00F3400 (DwmAsyncNotifyDisplayModeChange.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C026F07C (DwmAsyncCancelRotationDelay.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C026FD28 (DwmAsyncNotifyRotationModeChange.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C026FEB4 (DwmAsyncProcessSurfaceComplete.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C0270268 (DwmAsyncSendWindowArrangingData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IncrementDWMWindowUniqueness(__int64 a1)
{
  return _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 13248LL));
}
