bool __fastcall CMILMatrix::Invert(CMILMatrix *this, __int64 a2, struct Windows::Foundation::Numerics::float4x4 *a3)
{
  bool result; // al
  __int64 v4; // rcx

  result = Windows::Foundation::Numerics::invert(this, (__m128 *)this, a3);
  *(_BYTE *)(v4 + 64) &= 3u;
  *(_BYTE *)(v4 + 65) &= 0xC0u;
  if ( !result )
    *(_DWORD *)(v4 + 64) = 0;
  return result;
}
