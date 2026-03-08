/*
 * XREFs of TransformForInputMagnification @ 0x1C01419A0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     MagInputTransform @ 0x1C01491D2 (MagInputTransform.c)
 *     ConvertPointCoordinates @ 0x1C01A66F4 (ConvertPointCoordinates.c)
 *     AcquireMagInputLock @ 0x1C01F7D00 (AcquireMagInputLock.c)
 *     MagnificationTransformPoint @ 0x1C01F7E34 (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r9

  AcquireMagInputLock(a1, a2, a3, a4);
  result = MagInputTransform();
  if ( result )
  {
    result = PtInRect((_DWORD *)(result + 16), *a3);
    if ( (_DWORD)result )
    {
      MagnificationTransformPoint(v6, a3);
      result = ConvertPointCoordinates(*a3);
    }
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
