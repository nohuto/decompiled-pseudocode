/*
 * XREFs of IsWindowUnderActiveLockScreen @ 0x1C00A2F70
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00A2E6C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C0144F40 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01CA56C (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CB3B8 (_GetNextQueueWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowUnderActiveLockScreen(__int64 a1)
{
  PVOID v1; // rdx
  unsigned int v2; // r8d

  v1 = *(PVOID *)(a1 + 24);
  v2 = 0;
  if ( v1
    && gbLockScreenActive
    && grpdeskLogon != v1
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 2
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 3
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 14
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 17 )
  {
    return *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 18;
  }
  return v2;
}
