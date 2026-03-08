/*
 * XREFs of ?VerifyRemoteVidPnSourceIdsAreValid@@YAHXZ @ 0x1C00D280C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifyRemoteVidPnSourceIdsAreValid(__int64 a1)
{
  unsigned int v1; // ebx
  char v2; // si
  int v3; // edi
  __int64 v4; // rdx
  unsigned int v6; // ecx

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1264LL);
  if ( v4 )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v4 + 160) & 0x4000000) != 0 )
      {
        v6 = *(_DWORD *)(v4 + 248);
        ++v2;
        if ( v6 > 0x10 || ((1 << v6) & v3) != 0 )
          return 0LL;
        v3 |= 1 << v6;
      }
      v4 = *(_QWORD *)(v4 + 128);
      if ( !v4 )
      {
        LOBYTE(v1) = v3 == (1 << v2) - 1;
        return v1;
      }
    }
  }
  return 1LL;
}
