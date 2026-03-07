__int64 __fastcall HalpSetProcessorStateByNtIndex(unsigned int a1, int a2)
{
  __int64 v3; // r9
  unsigned int v4; // edx
  int v5; // ecx
  _DWORD *i; // r8

  v3 = a1;
  if ( a1 >= (unsigned int)HalpInterruptProcessorCount )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    if ( (_DWORD)HalpInterruptProcessorCount )
    {
      for ( i = (_DWORD *)HalpInterruptProcessorState; *i != a2; i += 16 )
      {
        if ( ++v5 >= (unsigned int)HalpInterruptProcessorCount )
          return (unsigned int)-1073741275;
      }
      *(_QWORD *)(HalpInterruptProcessorStateByNtIndex + 8 * v3) = i;
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return v4;
}
