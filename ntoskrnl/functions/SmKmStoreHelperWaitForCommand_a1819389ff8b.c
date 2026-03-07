NTSTATUS __fastcall SmKmStoreHelperWaitForCommand(__int64 a1, _OWORD *a2, LARGE_INTEGER *Timeout, int a4)
{
  struct _KEVENT *v4; // rsi
  NTSTATUS result; // eax
  signed __int32 v10; // eax
  int v11; // eax

  v4 = (struct _KEVENT *)(a1 + 32);
  result = KeWaitForSingleObject((PVOID)(a1 + 32), Executive, 0, 0, Timeout);
  if ( result )
  {
    if ( a4 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(a1 + 56);
        if ( (v10 & 1) == 0
          && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), v10 | 2, v10) & 1) == 0 )
        {
          return -1073741536;
        }
        if ( !KeWaitForSingleObject(v4, Executive, 0, 0, Timeout) )
          goto LABEL_6;
      }
    }
  }
  else
  {
LABEL_6:
    KeResetEvent(v4);
    if ( a2 )
    {
      *a2 = *(_OWORD *)(a1 + 64);
      a2[1] = *(_OWORD *)(a1 + 80);
      a2[2] = *(_OWORD *)(a1 + 96);
    }
    v11 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 56) = 0;
    return (v11 & 2) != 0 ? 0xC0000120 : 0;
  }
  return result;
}
