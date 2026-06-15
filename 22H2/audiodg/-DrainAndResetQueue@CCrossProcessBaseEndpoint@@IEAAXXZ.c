/*
 * XREFs of ?DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ @ 0x140060348
 * Callers:
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x1400610D0 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessBaseEndpoint::DrainAndResetQueue(CCrossProcessBaseEndpoint *this)
{
  _DWORD *v2; // rax
  unsigned int i; // edx
  __int64 v4; // rcx
  unsigned int j; // edx
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v2 = (_DWORD *)*((_QWORD *)this + 10);
  for ( i = 0; i < v2[33]; v2 = (_DWORD *)*((_QWORD *)this + 10) )
  {
    v4 = i++;
    *(_DWORD *)((v4 << 6) + *((_QWORD *)this + 15) + 4) = 0;
  }
  for ( j = 0; j < v2[36]; v2 = (_DWORD *)*((_QWORD *)this + 10) )
  {
    v6 = j++;
    *(_DWORD *)((v6 << 6) + *((_QWORD *)this + 17) + 4) = 0;
  }
  v7 = 0;
  if ( v2[37] )
  {
    do
    {
      v8 = v7++;
      *(_DWORD *)((v8 << 6) + *((_QWORD *)this + 16) + 4) = -1;
    }
    while ( v7 < *(_DWORD *)(*((_QWORD *)this + 10) + 148LL) );
  }
  _InterlockedExchange(*((volatile __int32 **)this + 9), 0);
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 9) + 4LL), 0);
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 9) + 8LL), 0);
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 9) + 12LL), 0);
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 9) + 184LL), 0);
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 9) + 188LL), 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
