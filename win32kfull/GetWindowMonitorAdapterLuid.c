/*
 * XREFs of GetWindowMonitorAdapterLuid @ 0x1C00E98A4
 * Callers:
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000A1BC (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowMonitorAdapterLuid(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v7 = 0;
  v5 = ValidateHmonitorNoRip(*(_QWORD *)(v2 + 256));
  if ( v5 )
    return (unsigned int)DrvGetWDDMAdapterInfo(*(_QWORD *)(v5 + 80), 0LL, a2, &v7);
  return v3;
}
