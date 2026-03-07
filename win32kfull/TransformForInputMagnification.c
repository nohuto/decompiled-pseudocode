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
