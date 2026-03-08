/*
 * XREFs of GreGetScaledLogPixels @ 0x1C0199A00
 * Callers:
 *     DxgkEngGetWindowGdiDpiScalingFactor @ 0x1C00EF2D0 (DxgkEngGetWindowGdiDpiScalingFactor.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall GreGetScaledLogPixels(__int64 a1)
{
  int v1; // ebx

  v1 = (unsigned __int16)a1;
  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 184LL) )
    return v1;
  else
    return 96 * ((v1 + 95) / 0x60u);
}
