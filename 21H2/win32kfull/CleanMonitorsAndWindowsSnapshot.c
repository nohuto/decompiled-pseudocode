/*
 * XREFs of CleanMonitorsAndWindowsSnapshot @ 0x1C01D2B30
 * Callers:
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0122740 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     DeleteMonitorsAndWindowsSnapShot @ 0x1C01D2BA0 (DeleteMonitorsAndWindowsSnapShot.c)
 *     SnapShotMonitorsAndWindowsRects @ 0x1C01D3060 (SnapShotMonitorsAndWindowsRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanMonitorsAndWindowsSnapshot(__int64 a1)
{
  __int64 v1; // rdi
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(volatile signed __int32 **)(a1 + 16);
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      result = Win32FreePool(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v1 )
  {
    result = Win32FreePool(*(_QWORD *)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
