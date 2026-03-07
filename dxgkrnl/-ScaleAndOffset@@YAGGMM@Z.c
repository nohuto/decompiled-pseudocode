__int64 __fastcall ScaleAndOffset(unsigned __int16 a1, float a2, float a3)
{
  int v3; // eax
  unsigned __int16 v4; // cx
  __int64 result; // rax

  v3 = a1;
  v4 = -1;
  result = (unsigned int)(int)(float)((float)((float)((float)((float)v3 / 65535.0) * a2) + a3) * 65535.0);
  if ( (int)result > 0xFFFF )
    return v4;
  v4 = 0;
  if ( (int)result < 0 )
    return v4;
  return result;
}
