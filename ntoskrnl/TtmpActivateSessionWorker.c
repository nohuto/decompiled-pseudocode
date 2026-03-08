/*
 * XREFs of TtmpActivateSessionWorker @ 0x1409A2018
 * Callers:
 *     TtmpSessionWorker @ 0x1409A2950 (TtmpSessionWorker.c)
 * Callees:
 *     TtmpInitiateModernStandbyTransition @ 0x1409A23F0 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1409A28A4 (TtmpSessionPowerControl.c)
 *     TtmiLogSessionActivate @ 0x1409A61A4 (TtmiLogSessionActivate.c)
 */

__int64 __fastcall TtmpActivateSessionWorker(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r8

  v2 = *(_DWORD *)(a1 + 4);
  if ( (v2 & 8) == 0 )
  {
    if ( (v2 & 0x40) != 0 )
      return 259;
    if ( (v2 & 0x200) != 0 )
    {
      if ( (v2 & 0x100) != 0 )
        return 259;
      v5 = *(unsigned int *)(a1 + 12);
      *(_DWORD *)(a1 + 4) = v2 | 0x100;
      v4 = TtmpInitiateModernStandbyTransition(a1, 0LL, v5);
      if ( v4 )
        return v4;
      v2 = *(_DWORD *)(a1 + 4) & 0xFFFFFCFF;
      *(_DWORD *)(a1 + 4) = v2;
      if ( (v2 & 0x10) == 0 )
        return 0;
    }
    if ( (v2 & 0x400) == 0 )
    {
      v4 = 0;
      *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFE7 | 8;
      TtmiLogSessionActivate();
      return v4;
    }
    if ( (v2 & 0x80u) == 0 )
    {
      v6 = *(unsigned int *)(a1 + 12);
      LOBYTE(a2) = 1;
      *(_DWORD *)(a1 + 4) = v2 | 0x80;
      TtmpSessionPowerControl(a1, a2, v6);
    }
    return 259;
  }
  *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFEF;
  return 0;
}
