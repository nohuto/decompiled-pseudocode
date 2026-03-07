__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetFloatProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 2;
  if ( !v5 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 26) = a3;
    goto LABEL_4;
  }
  if ( v5 == 1 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 27) = a3;
LABEL_4:
    *a4 = 1;
    return result;
  }
  return 3221225485LL;
}
