__int64 __fastcall RIMTransformPointerDevicePointToPhysical(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = RIMConvertPointCoordinates(a2);
  if ( !(_DWORD)result )
  {
    *a3 = 0;
    a3[1] = 0;
  }
  return result;
}
