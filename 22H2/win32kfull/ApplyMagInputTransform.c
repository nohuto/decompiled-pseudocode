/*
 * XREFs of ApplyMagInputTransform @ 0x1C01A5470
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     MagInputTransform @ 0x1C0155EF2 (MagInputTransform.c)
 *     AcquireMagInputLock @ 0x1C01F6B30 (AcquireMagInputLock.c)
 *     MagnificationTransformPoint @ 0x1C01F6C64 (MagnificationTransformPoint.c)
 */

__int64 __fastcall ApplyMagInputTransform(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdi

  AcquireMagInputLock(a1, a2, a3, a4);
  result = MagInputTransform();
  v7 = result;
  if ( result )
  {
    if ( PtInRect((_DWORD *)(result + 16), *a1) )
      MagnificationTransformPoint(v7, a1);
    result = PtInRect((_DWORD *)(v7 + 16), *a2);
    if ( (_DWORD)result )
      result = MagnificationTransformPoint(v7, a2);
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
