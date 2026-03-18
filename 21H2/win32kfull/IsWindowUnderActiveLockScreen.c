/*
 * XREFs of IsWindowUnderActiveLockScreen @ 0x1C00779AC
 * Callers:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0077660 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01DF4B0 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01ED8C8 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01EE6BC (_GetNextQueueWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowUnderActiveLockScreen(__int64 a1)
{
  PVOID v1; // r8
  unsigned int v2; // edx
  int v4; // eax

  v1 = *(PVOID *)(a1 + 24);
  v2 = 0;
  if ( v1 )
  {
    if ( gbLockScreenActive )
    {
      if ( grpdeskLogon != v1 )
      {
        v4 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
        if ( v4 < 2 || v4 > 3 && v4 != 14 && (unsigned int)(v4 - 17) > 1 )
          return 1;
      }
    }
  }
  return v2;
}
