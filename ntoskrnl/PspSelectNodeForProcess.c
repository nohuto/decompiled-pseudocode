__int64 PspSelectNodeForProcess()
{
  ULONG v0; // eax
  unsigned int v1; // edx
  __int64 v2; // r9
  unsigned int v3; // ecx
  __int64 v4; // r10
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  if ( PspIdealNodeRandomized )
    v0 = RtlRandomEx(&Seed);
  else
    v0 = _InterlockedIncrement(&PspProcessNodeAssignment);
  v1 = v0 % (unsigned __int16)KeNumberNodes;
  v2 = 0LL;
  v3 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      v4 = KeNodeBlock[(unsigned __int16)v1];
      if ( *(_DWORD *)(v4 + 16) )
      {
        if ( (*(_BYTE *)(v4 + 10) & 1) == 0 )
          break;
      }
      ++v3;
      LOWORD(v1) = v1 + 1;
      if ( (unsigned __int16)v1 >= (unsigned __int16)KeNumberNodes )
        LOWORD(v1) = 0;
      if ( v3 >= (unsigned __int16)KeNumberNodes )
      {
        v3 = 0;
        while ( 1 )
        {
          v4 = KeNodeBlock[(unsigned __int16)v1];
          if ( *(_DWORD *)(v4 + 16) )
            goto LABEL_6;
          ++v3;
          LOWORD(v1) = v1 + 1;
          if ( (unsigned __int16)v1 >= (unsigned __int16)KeNumberNodes )
            LOWORD(v1) = 0;
          if ( v3 >= (unsigned __int16)KeNumberNodes )
            goto LABEL_7;
        }
      }
    }
LABEL_6:
    v2 = v4;
  }
LABEL_7:
  if ( !PspIdealNodeRandomized && v3 )
    _InterlockedExchangeAdd(&PspProcessNodeAssignment, v3);
  return v2;
}
