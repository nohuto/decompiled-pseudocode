/*
 * XREFs of ??9?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEBAH$$T@Z @ 0x1C00D01A0
 * Callers:
 *     DrvNotifySessionStateChange @ 0x1C00A92D0 (DrvNotifySessionStateChange.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SGDCRITTYPEgpresUser<_ERESOURCE *>::operator!=(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 8) != 0LL;
}
