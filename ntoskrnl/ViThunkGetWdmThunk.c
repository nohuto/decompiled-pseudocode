__int64 __fastcall ViThunkGetWdmThunk(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  int v5; // eax
  __int64 v6; // rax

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
    return 0LL;
  if ( *a2 )
  {
    while ( a1 != v3[2] )
    {
      v3 += 7;
      if ( !*v3 )
        return v2;
    }
    if ( (VfRuleClasses & 0x800000000LL) == 0
      || (unsigned int)VfIsVerifierEnabled() && (VfRuleClasses & 0xFF217644) != 0 )
    {
      return v3[1];
    }
    v5 = *((_DWORD *)v3 + 8);
    if ( (v5 & 1) != 0 )
    {
      if ( (v5 & 4) == 0 )
      {
        v6 = v3[5];
        if ( *(_QWORD *)v6 )
          return *(_QWORD *)v6;
        return v2;
      }
      return v3[1];
    }
  }
  return v2;
}
