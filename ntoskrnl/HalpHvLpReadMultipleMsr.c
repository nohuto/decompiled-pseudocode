__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  if ( qword_140C62178 )
    return qword_140C62178();
  if ( a2 )
    memset(a4, 0, 8LL * a2);
  return 3221225473LL;
}
