_BOOL8 __fastcall WIDENER::bMiterInLimit(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  EXFORMOBJ::bXform((EXFORMOBJ *)(a1 + 808), (struct _VECTORFX *)&v4, (struct _VECTORL *)&v4, 1uLL);
  return *(float *)(a1 + 1296) >= (float)((float)((float)SHIDWORD(v4) * (float)SHIDWORD(v4))
                                        + (float)((float)(int)v4 * (float)(int)v4));
}
