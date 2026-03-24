/*
 * XREFs of WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C0118DEC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EF28 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetWindowMonitorAdapterLuid @ 0x1C0118E78 (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C0118EDC (GreGetDxSharedSurface.c)
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
