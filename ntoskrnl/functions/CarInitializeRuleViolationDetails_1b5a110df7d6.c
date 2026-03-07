__int64 __fastcall CarInitializeRuleViolationDetails(void *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    memset(a1, 0, 0x48uLL);
  else
    return (unsigned int)-1073741811;
  return v1;
}
