/*
 * XREFs of WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00ED8B4
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     GreGetDxSharedSurface @ 0x1C00ED940 (GreGetDxSharedSurface.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C00EDD08 (GetWindowMonitorAdapterLuid.c)
 */

__int64 __fastcall WindowRedirectionBitmapMatchesMonitorAdapter(HWND *a1)
{
  __int64 v2; // [rsp+38h] [rbp-8h] BYREF
  __int64 v3; // [rsp+60h] [rbp+20h] BYREF
  __int64 v4; // [rsp+70h] [rbp+30h]
  __int64 v5; // [rsp+78h] [rbp+38h]

  v5 = 0LL;
  v4 = 0LL;
  LODWORD(v3) = 0;
  GreGetDxSharedSurface(*a1, (__int64)&v3, (__int64)&v2);
  return 1LL;
}
