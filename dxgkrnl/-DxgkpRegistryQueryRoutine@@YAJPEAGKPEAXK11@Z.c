__int64 __fastcall DxgkpRegistryQueryRoutine(
        unsigned __int16 *a1,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int v6; // eax
  __int64 result; // rax
  unsigned int v8; // eax

  v6 = a5[132];
  if ( a2 == v6 )
  {
    v8 = a5[134];
    if ( a4 <= v8 )
    {
      memmove(a5 + 136, a3, a4);
      result = 0LL;
    }
    else
    {
      WdLogSingleEntry2(3LL, v8, a4);
      result = 2147483653LL;
    }
    a5[134] = a4;
  }
  else
  {
    WdLogSingleEntry2(3LL, v6, a2);
    return 3221225485LL;
  }
  return result;
}
