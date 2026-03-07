__int64 __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetFloatProperty(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 == 9 )
  {
    if ( a3 == *((float *)this + 28) )
      return result;
    if ( a3 > 0.0 )
    {
      *((_DWORD *)this + 4) |= 0x80u;
      *((float *)this + 28) = a3;
      goto LABEL_9;
    }
  }
  else if ( a2 == 14 )
  {
    if ( a3 == *((float *)this + 36) )
      return result;
    if ( a3 > 0.0 )
    {
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 36) = a3;
LABEL_9:
      *a4 = 1;
      return result;
    }
  }
  return 3221225485LL;
}
