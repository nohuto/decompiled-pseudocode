__int64 __fastcall DeleteMaybeSpecialRgn(HPALETTE a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 > 2 )
    return GreDeleteObject(a1);
  return result;
}
