__int64 __fastcall DirectComposition::CComponentTransform2DMarshaler::SetFloatProperty(
        DirectComposition::CComponentTransform2DMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 3 )
    return 3221225485LL;
  *((_DWORD *)this + 4) &= ~0x400u;
  *((float *)this + 24) = a3;
  *a4 = 1;
  return result;
}
