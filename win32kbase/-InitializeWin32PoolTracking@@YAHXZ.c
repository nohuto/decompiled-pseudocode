/*
 * XREFs of ?InitializeWin32PoolTracking@@YAHXZ @ 0x1C00D4E04
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C00D4E64 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1C00D9DD8 (-IsWin32kRefreshed@@YA_NXZ.c)
 */

__int64 __fastcall InitializeWin32PoolTracking(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool v5; // di
  void *v6; // rcx

  v4 = 0;
  v5 = 0;
  v6 = (void *)*(unsigned int *)SGDGetUserSessionState(a1, a2, a3, a4);
  if ( (_DWORD)v6 == gServiceSessionId && !gServiceSessionId )
    v5 = IsWin32kRefreshed();
  gpLeakTrackingAllocator = NSInstrumentation::CLeakTrackingAllocator::Create(v6, v5);
  LOBYTE(v4) = gpLeakTrackingAllocator != 0LL;
  return v4;
}
