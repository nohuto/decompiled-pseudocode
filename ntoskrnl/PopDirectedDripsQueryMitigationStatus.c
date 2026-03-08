/*
 * XREFs of PopDirectedDripsQueryMitigationStatus @ 0x140880DE0
 * Callers:
 *     PopDirectedDripsNotify @ 0x140872AF4 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x1409806E8 (PopDirectedDripsInitializeBroadcast.c)
 *     PopDirectedDripsSendSessionData @ 0x140980CA8 (PopDirectedDripsSendSessionData.c)
 *     PopDirectedDripsUmQueryCapabilities @ 0x14099CA30 (PopDirectedDripsUmQueryCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDirectedDripsQueryMitigationStatus(_DWORD *a1, _DWORD *a2, int *a3)
{
  char v3; // bl
  __int64 result; // rax
  int v6; // r10d
  int v7; // ett
  __int16 v8; // cx

  v3 = dword_140C3EDB0;
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  v6 = 0;
  do
  {
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v7 != (_DWORD)result );
  v8 = result;
  if ( a1 )
  {
    *a1 = 0;
    result = 0LL;
    if ( (v3 & 1) != 0 )
    {
      *a1 = 1;
      result = 1LL;
    }
    if ( (v3 & 2) != 0 )
    {
      result = (unsigned int)result | 2;
      *a1 = result;
    }
  }
  if ( a2 )
  {
    *a2 = 0;
    result = 0LL;
    if ( (v8 & 0x1000) != 0 )
    {
      *a2 = 1;
      result = 1LL;
    }
    if ( (v8 & 0x2000) != 0 )
    {
      result = (unsigned int)result | 2;
      *a2 = result;
    }
  }
  if ( a3 )
  {
    *a3 = 0;
    if ( (v8 & 0x400) != 0 )
    {
      *a3 = 1;
      v6 = 1;
    }
    if ( (v8 & 0x800) != 0 )
      *a3 = v6 | 2;
  }
  return result;
}
