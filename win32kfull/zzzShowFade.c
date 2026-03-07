__int64 zzzShowFade()
{
  __int64 result; // rax
  struct _BLENDFUNCTION v1; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v2; // [rsp+48h] [rbp+10h] BYREF

  result = gfade[12];
  if ( (result & 4) == 0 )
  {
    v2 = 0LL;
    *(_WORD *)&v1.BlendOp = 0;
    v1.AlphaFormat = 0;
    v1.SourceConstantAlpha = (result & 1) != 0 ? 40 : -41;
    zzzUpdateFade((struct tagPOINT *)&gfade[6], (struct tagSIZE *)&gfade[8], *(HDC *)&gfade[2], &v2, &v1);
    result = *(_QWORD *)gfade;
    gfade[12] |= 4u;
  }
  return result;
}
