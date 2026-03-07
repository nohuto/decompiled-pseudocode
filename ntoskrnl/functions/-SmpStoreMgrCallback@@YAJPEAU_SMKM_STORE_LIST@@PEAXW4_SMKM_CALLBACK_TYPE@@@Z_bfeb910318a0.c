__int64 __fastcall SmpStoreMgrCallback(struct _EX_RUNDOWN_REF *a1, unsigned __int64 *a2, int a3)
{
  unsigned int v3; // ebx
  struct _EX_RUNDOWN_REF *v7; // rcx

  v3 = 0;
  if ( (unsigned int)(a3 - 8) <= 1 )
  {
    v7 = a1 + 244;
    if ( a3 == 8 )
    {
      if ( ExAcquireRundownProtection_0(v7) )
      {
        if ( a2 )
          *a2 = a1[242].Count;
      }
      else
      {
        return (unsigned int)-1073740640;
      }
    }
    else
    {
      ExReleaseRundownProtection_0(v7);
    }
  }
  return v3;
}
