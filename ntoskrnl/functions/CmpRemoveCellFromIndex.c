unsigned __int16 __fastcall CmpRemoveCellFromIndex(_WORD *a1, unsigned __int16 a2)
{
  __int64 v2; // r10
  unsigned __int16 result; // ax
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // r8
  size_t v6; // r8
  _WORD *v7; // rdx
  _WORD *v8; // rcx
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // dx

  v2 = a2;
  result = *a1 - 26220;
  if ( (result & 0xFDFF) != 0 )
  {
    v4 = a1[1];
    if ( a2 < v4 )
    {
      v5 = v4 - 1;
      a1[1] = v5;
      if ( v5 )
      {
        v6 = 4 * (v5 - (unsigned __int64)a2);
        v7 = &a1[2 * a2 + 4];
        v8 = &a1[2 * v2 + 2];
        return (unsigned __int16)memmove(v8, v7, v6);
      }
    }
  }
  else
  {
    v9 = a1[1];
    if ( (unsigned __int16)v2 < v9 )
    {
      v10 = v9 - 1;
      a1[1] = v10;
      if ( v10 )
      {
        v6 = 8 * (v10 - v2);
        v7 = &a1[4 * (unsigned int)(v2 + 1) + 2];
        v8 = &a1[4 * v2 + 2];
        return (unsigned __int16)memmove(v8, v7, v6);
      }
    }
  }
  return result;
}
