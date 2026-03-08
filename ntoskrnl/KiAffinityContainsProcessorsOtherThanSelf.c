/*
 * XREFs of KiAffinityContainsProcessorsOtherThanSelf @ 0x1402E2150
 * Callers:
 *     KiPreprocessFlushTb @ 0x140212038 (KiPreprocessFlushTb.c)
 *     KiIpiSendRequestEx @ 0x14021238C (KiIpiSendRequestEx.c)
 *     KiEnterLongDpcProcessing @ 0x140254490 (KiEnterLongDpcProcessing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAffinityContainsProcessorsOtherThanSelf(__int64 a1, _WORD *a2)
{
  unsigned __int16 v3; // r8
  __int64 v4; // rcx

  v3 = 0;
  if ( !*a2 )
    return 0LL;
  while ( 1 )
  {
    v4 = *(_QWORD *)&a2[4 * v3 + 4];
    if ( v4 )
    {
      if ( v3 != *(unsigned __int8 *)(a1 + 208) || v4 != *(_QWORD *)(a1 + 200) )
        break;
    }
    if ( ++v3 >= *a2 )
      return 0LL;
  }
  return 1LL;
}
