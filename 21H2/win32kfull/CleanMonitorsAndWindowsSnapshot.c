/*
 * XREFs of CleanMonitorsAndWindowsSnapshot @ 0x1C01D76D4
 * Callers:
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0137000 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     DeleteMonitorsAndWindowsSnapShot @ 0x1C01D7760 (DeleteMonitorsAndWindowsSnapShot.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D78AC (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanMonitorsAndWindowsSnapshot(__int64 a1)
{
  __int64 v1; // rdi
  void *v3; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v1 )
  {
    Win32FreePool(*(void **)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
}
