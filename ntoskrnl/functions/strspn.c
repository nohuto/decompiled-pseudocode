size_t __cdecl strspn(const char *Str, const char *Control)
{
  int v2; // r9d
  const char *v3; // r8
  __int64 v4; // rax
  const char *v5; // r10
  bool v6; // cf
  unsigned __int8 i; // al
  _BYTE v9[32]; // [rsp+20h] [rbp-38h]

  v2 = 0;
  v3 = Control;
  v4 = 0LL;
  v5 = Str;
  v6 = 1;
  do
  {
    if ( !v6 )
      _report_rangecheckfailure(Str, Control, Control);
    v9[v4++] = 0;
    v6 = (unsigned __int64)v4 < 0x20;
  }
  while ( v4 < 32 );
  for ( i = *Control; i; i = *v3 )
  {
    ++v3;
    v9[(unsigned __int64)i >> 3] |= 1 << (i & 7);
  }
  if ( !*Str )
    return 0LL;
  if ( ((unsigned __int8)(1 << (*Str & 7)) & v9[(unsigned __int64)*(unsigned __int8 *)Str >> 3]) != 0 )
  {
    do
    {
      ++v5;
      ++v2;
    }
    while ( ((unsigned __int8)(1 << (*v5 & 7)) & v9[(unsigned __int64)*(unsigned __int8 *)v5 >> 3]) != 0 );
  }
  return v2;
}
