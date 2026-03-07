__int64 __fastcall WIDEPENOBJ::bHobbyize(WIDEPENOBJ *this, struct EVECTORFX *const a2)
{
  int v3; // r8d
  const struct _POINTFIX **v4; // rbx
  unsigned int *v5; // rdi
  int v6; // r8d
  const struct _POINTFIX *v7; // rbx
  const struct _POINTFIX *v8; // rdi
  const struct _POINTFIX *v9; // rdx
  __int64 result; // rax

  v3 = *((_DWORD *)a2 + 1) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * *(_DWORD *)a2;
  if ( v3 >= 10816 )
    return 0LL;
  if ( v3 >= 576 )
  {
    if ( v3 >= 1600 )
    {
      if ( v3 >= 3136 )
      {
        if ( v3 >= 5184 )
        {
          if ( v3 >= 7744 )
          {
            v4 = (const struct _POINTFIX **)&off_1C030D9D0;
            v5 = (unsigned int *)&unk_1C030D9D8;
          }
          else
          {
            v4 = (const struct _POINTFIX **)&off_1C030D9C0;
            v5 = (unsigned int *)&unk_1C030D9C8;
          }
        }
        else
        {
          v4 = (const struct _POINTFIX **)&off_1C030D9B0;
          v5 = (unsigned int *)&unk_1C030D9B8;
        }
      }
      else
      {
        v4 = (const struct _POINTFIX **)&off_1C030D9A0;
        v5 = (unsigned int *)&unk_1C030D9A8;
      }
    }
    else
    {
      v4 = (const struct _POINTFIX **)&off_1C030D990;
      v5 = (unsigned int *)&unk_1C030D998;
    }
  }
  else
  {
    v4 = (const struct _POINTFIX **)&off_1C030D980;
    v5 = (unsigned int *)&unk_1C030D988;
  }
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  v7 = *v4;
  v8 = &v7[*v5];
  while ( v7 < v8 )
  {
    v9 = v7++;
    WIDEPATHOBJ::vAddPoint(this, v9, v6);
  }
  WIDEPATHOBJ::vEndFigure(this);
  result = 1LL;
  *((_DWORD *)this + 38) = 1;
  return result;
}
