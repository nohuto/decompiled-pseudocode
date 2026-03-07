__int64 __fastcall EtwpCovSampCaptureUserStack(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  ULONG v5; // eax

  v1 = 0;
  if ( *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].Affinity.Count )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v3 = *(unsigned __int16 *)(a1 + 62);
    v4 = *(unsigned __int16 *)(a1 + 60);
    if ( (unsigned __int16)v4 < (unsigned __int16)v3 )
    {
      return (unsigned int)-1073741595;
    }
    else
    {
      v5 = RtlWalkFrameChain((PVOID *)(a1 + 8 * (v3 + 8)), v4 - v3, 1u);
      if ( v5 )
      {
        *(_WORD *)(a1 + 62) += v5;
        *(_DWORD *)(a1 + 56) |= 2u;
        EtwpCovSampCaptureBufferOptimizeIP(a1);
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
  }
  return v1;
}
