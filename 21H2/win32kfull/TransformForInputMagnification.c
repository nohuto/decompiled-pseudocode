/*
 * XREFs of TransformForInputMagnification @ 0x1C016A6E0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     AcquireMagInputLock @ 0x1C00FB868 (AcquireMagInputLock.c)
 *     ConvertPointCoordinates @ 0x1C01CBC64 (ConvertPointCoordinates.c)
 *     MagInputTransform @ 0x1C0212718 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C02127D4 (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // r9

  AcquireMagInputLock();
  result = MagInputTransform();
  if ( result )
  {
    result = PtInRect((_DWORD *)(result + 16), *a3);
    if ( (_DWORD)result )
    {
      MagnificationTransformPoint(v5, a3);
      result = ConvertPointCoordinates(*a3);
    }
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
