_WORD *__fastcall PpmParkGetParkNode(__int16 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  _WORD *i; // rax

  v1 = 0LL;
  v2 = 0;
  if ( PpmParkNumNodes )
  {
    for ( i = (_WORD *)(PpmParkNodes + 8); *(i - 1) != a1 || *i; i += 96 )
    {
      if ( ++v2 >= (unsigned int)PpmParkNumNodes )
        return (_WORD *)v1;
    }
    return i - 4;
  }
  return (_WORD *)v1;
}
