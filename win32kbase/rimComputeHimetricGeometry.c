__int64 __fastcall rimComputeHimetricGeometry(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  int v7; // ecx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  *(_OWORD *)a3 = 0LL;
  result = RIMTransformPointerDevicePointToPhysical(a1, a2[3], a3);
  v7 = a2[6];
  if ( v7 )
  {
    result = (unsigned int)a2[7];
    if ( (_DWORD)result )
    {
      v8 = 0LL;
      RIMTransformPointerDevicePointToPhysical(a1, v7, &v8);
      a3[2] = v8;
      result = HIDWORD(v8);
      a3[3] = HIDWORD(v8);
    }
  }
  return result;
}
