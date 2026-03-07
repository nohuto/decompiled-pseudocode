__int64 __fastcall HalpBlkPoGetProcessorCount(int a1)
{
  unsigned int v1; // r8d
  __int64 *v3; // r10
  __int64 v4; // r11
  __int64 v5; // rax
  unsigned int v6; // edx

  if ( a1 == -1 )
  {
    return (unsigned int)HalpBlkNumberProcessors;
  }
  else
  {
    v1 = 0;
    if ( (_DWORD)HalpBlkNumberProcessors )
    {
      v3 = (__int64 *)HalpBlkPcr;
      v4 = (unsigned int)HalpBlkNumberProcessors;
      do
      {
        v5 = *v3;
        v6 = v1 + 1;
        ++v3;
        if ( a1 != *(_DWORD *)(v5 + 24) )
          v6 = v1;
        v1 = v6;
        --v4;
      }
      while ( v4 );
    }
  }
  return v1;
}
