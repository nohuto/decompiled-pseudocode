/*
 * XREFs of IoEnableIrpCredits @ 0x14094102C
 * Callers:
 *     PspInitializeQuotaBlock @ 0x1408599CC (PspInitializeQuotaBlock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140773F48 (KeSynchronizeWithDynamicProcessors.c)
 *     IopQueryProcessorInitValues @ 0x14085FEC4 (IopQueryProcessorInitValues.c)
 */

ULONG IoEnableIrpCredits()
{
  ULONG result; // eax
  ULONG v1; // ecx
  int v2; // r9d
  __int64 *v3; // rdx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]

  result = IopIrpCreditsEnabled;
  v4 = 0LL;
  v5 = 0LL;
  if ( IopIrpCreditsEnabled < 1 )
  {
    result = _InterlockedCompareExchange(&IopIrpCreditsEnabled, 1, 0);
    if ( !result )
    {
      IopQueryProcessorInitValues((__int64)&v4);
      KeSynchronizeWithDynamicProcessors();
      result = KeQueryActiveProcessorCountEx(0xFFFFu);
      v1 = 0;
      if ( result )
      {
        v2 = HIDWORD(v5);
        v3 = KiProcessorBlock;
        do
        {
          if ( *(_DWORD *)(*v3 + 11676) != 0x7FFFFFFF )
            break;
          ++v1;
          *(_DWORD *)(*v3++ + 11676) = v2;
        }
        while ( v1 < result );
      }
      _InterlockedAdd(&IopIrpCreditsEnabled, 1u);
    }
  }
  return result;
}
