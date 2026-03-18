/*
 * XREFs of ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C00CD030
 * Callers:
 *     DwmAsyncDesktopCreate @ 0x1C0058AC8 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncChildLink @ 0x1C005A26C (DwmAsyncChildLink.c)
 *     DwmAsyncChildCreate @ 0x1C005A67C (DwmAsyncChildCreate.c)
 *     DwmAsyncChildDestroy @ 0x1C005A7E4 (DwmAsyncChildDestroy.c)
 *     DwmAsyncChildUnlink @ 0x1C005A888 (DwmAsyncChildUnlink.c)
 *     DwmSyncDesktopSwitch @ 0x1C006E974 (DwmSyncDesktopSwitch.c)
 *     DwmAsyncDirtySprite @ 0x1C0078024 (DwmAsyncDirtySprite.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C00BB890 (DwmAsyncNotifyDisplayModeChange.c)
 *     DwmAsyncDestroySprite @ 0x1C00C88F8 (DwmAsyncDestroySprite.c)
 *     DwmAsyncActivationChange @ 0x1C00C93B4 (DwmAsyncActivationChange.c)
 *     DwmAsyncShowSprite @ 0x1C00C9540 (DwmAsyncShowSprite.c)
 *     DwmAsyncCreateSprite @ 0x1C00CCB9C (DwmAsyncCreateSprite.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00CCD64 (DwmAsyncSetCompositionAttribute.c)
 *     DwmAsyncChildZBandChange @ 0x1C00CCEC4 (DwmAsyncChildZBandChange.c)
 *     DwmAsyncOwnerChange @ 0x1C00CCF70 (DwmAsyncOwnerChange.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C026C5CC (DwmAsyncCancelRotationDelay.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C026D278 (DwmAsyncNotifyRotationModeChange.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C026D404 (DwmAsyncProcessSurfaceComplete.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C026D7B8 (DwmAsyncSendWindowArrangingData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IncrementDWMWindowUniqueness(__int64 a1)
{
  return _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 13248LL));
}
