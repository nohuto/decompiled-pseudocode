char __fastcall EtwpGetEnableInfoIndex(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9

  *a3 = 0;
  v3 = 0LL;
  while ( *(unsigned __int16 *)(32LL * (unsigned int)v3 + a1 + 134) != a2 || !*(_DWORD *)(32 * (v3 + 4) + a1) )
  {
    v3 = (unsigned int)(v3 + 1);
    *a3 = v3;
    if ( (unsigned int)v3 >= 8 )
      return 0;
  }
  return 1;
}
