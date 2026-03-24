/*
 * XREFs of TransformPointBetweenCoordinateSpaces @ 0x1C0071040
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002BEF4 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0071530 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C00719B0 (LogicalToPhysicalDPIPoint.c)
 */

__int64 __fastcall TransformPointBetweenCoordinateSpaces(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v8; // r8
  int v9; // ecx
  int v10; // edx
  int v12; // ebx

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v8 = *(unsigned int *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v8 = (unsigned int)W32GetCurrentThreadDpiAwarenessContext();
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)((unsigned int)v8 >> 8)) & 0x1FF) != 0 )
    goto LABEL_12;
  v9 = 1;
  v10 = (CurrentThreadDpiAwarenessContext & 0xF) == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0;
  if ( (v8 & 0xF) != 2 || (v8 & 0x20000000) == 0 )
    v9 = 0;
  if ( v10 != v9 )
  {
LABEL_12:
    v12 = LogicalToPhysicalDPIPoint(a1, a2, v8, 0LL);
    return v12 | (unsigned int)PhysicalToLogicalDPIPoint(a1, a1, CurrentThreadDpiAwarenessContext, 0LL);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
