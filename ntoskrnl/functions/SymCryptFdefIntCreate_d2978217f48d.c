_DWORD *__fastcall SymCryptFdefIntCreate(_DWORD *a1, unsigned __int64 a2, int a3)
{
  _DWORD *v3; // r9
  unsigned __int64 v4; // r10

  v3 = 0LL;
  if ( (unsigned int)(a3 - 1) <= 0x7FF )
  {
    v4 = (unsigned int)((a3 << 6) + 32);
    if ( a2 >= v4 )
    {
      v3 = a1;
      *a1 = 1732837376;
      a1[1] = a3;
      a1[2] = v4;
    }
  }
  return v3;
}
