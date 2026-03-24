/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002AC0C
 * Callers:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002AA84 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreGetStockObject @ 0x1C002AB20 (GreGetStockObject.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00B28A8 (W32SetCurrentThreadDpiAwarenessContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00941A4 (IsValidKernelDpiAwarenessContext.c)
 */

void __fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  unsigned int *v2; // rbx
  unsigned int v3; // edi

  v2 = *(unsigned int **)(a1 + 360);
  if ( v2[1] )
  {
    v3 = *v2;
    if ( !*v2 || (unsigned int)IsValidKernelDpiAwarenessContext(v3) )
      *(_DWORD *)(a1 + 340) = v3;
    else
      *v2 = 0;
    v2[1] = 0;
  }
}
