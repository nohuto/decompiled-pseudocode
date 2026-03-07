__int64 **__fastcall MiCheckForConflictingVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 **v3; // r9
  unsigned __int64 v4; // r8

  v3 = *(__int64 ***)(a1 + 2008);
  v4 = a3 >> 12;
  while ( v3 )
  {
    if ( v4 < (*((unsigned int *)v3 + 6) | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32)) )
    {
      v3 = (__int64 **)*v3;
    }
    else
    {
      if ( a2 >> 12 <= (*((unsigned int *)v3 + 7) | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32)) )
        return v3;
      v3 = (__int64 **)v3[1];
    }
  }
  return v3;
}
