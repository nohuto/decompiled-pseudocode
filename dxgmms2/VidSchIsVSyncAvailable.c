/*
 * XREFs of VidSchIsVSyncAvailable @ 0x1C00B49C0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002730 (VidSchiSetFlipDevice.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C003EA40 (VidSchCreatePeriodicFrameNotification.c)
 *     VidSchGetDeviceFlipMode @ 0x1C00B5910 (VidSchGetDeviceFlipMode.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall VidSchIsVSyncAvailable(__int64 a1, unsigned int a2)
{
  struct _ERESOURCE *v4; // rdi
  int v5; // eax
  unsigned __int8 v6; // bl
  __int64 v8; // rcx

  if ( a1 )
  {
    if ( a2 < *(_DWORD *)(a1 + 40) )
    {
      v4 = (struct _ERESOURCE *)(a1 + 1088);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1088), 1u);
      v5 = *(_DWORD *)(a1 + 2208);
      v6 = _bittest(&v5, a2);
      ExReleaseResourceLite(v4);
      return v6;
    }
    WdLogSingleEntry1(1LL, a2);
  }
  else
  {
    WdLogSingleEntry0(1LL);
  }
  DxgkLogInternalTriageEvent(v8, 0x40000LL);
  return 0;
}
