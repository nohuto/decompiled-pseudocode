LONG __fastcall EtwpCovSampCaptureContextSetPaused(__int64 a1, __int64 a2, int a3)
{
  LONG result; // eax
  __int64 *i; // rcx

  if ( *(_DWORD *)(a2 + 1284) != a3 )
  {
    if ( a3 )
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x100) == 0 )
      {
        *(_DWORD *)(a2 + 1284) = 1;
        result = KeSetEvent(*(PRKEVENT *)(a1 + 1672), 0, 0);
      }
    }
    else
    {
      *(_DWORD *)(a2 + 1284) = 0;
    }
    for ( i = *(__int64 **)(a2 + 944); i != (__int64 *)(a2 + 944); i = (__int64 *)*i )
    {
      result = *(_DWORD *)(a2 + 1284);
      *((_DWORD *)i + 7) = result;
    }
  }
  return result;
}
