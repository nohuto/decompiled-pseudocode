/*
 * XREFs of EditionMagnificationMousePosition @ 0x1C0213EF0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     AcquireMagInputLock @ 0x1C010FE78 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C0213F48 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C0214004 (MagnificationTransformPoint.c)
 */

__int64 __fastcall EditionMagnificationMousePosition(unsigned __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  AcquireMagInputLock();
  result = MagInputTransform();
  if ( result )
  {
    result = PtInRect((_DWORD *)(result + 16), *a1);
    if ( (_DWORD)result )
      result = MagnificationTransformPoint(v3, a1);
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
