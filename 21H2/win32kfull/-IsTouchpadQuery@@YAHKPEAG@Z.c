/*
 * XREFs of ?IsTouchpadQuery@@YAHKPEAG@Z @ 0x1C00E1ABC
 * Callers:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00E14E0 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsTouchpadQuery(int a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 == 122 )
  {
    return RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", a2, 0x7AuLL) == 122;
  }
  else if ( a1 == 136 )
  {
    return RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\Status", a2, 0x88uLL) == 136;
  }
  return v2;
}
