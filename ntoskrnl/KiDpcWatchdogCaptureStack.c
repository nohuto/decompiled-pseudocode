/*
 * XREFs of KiDpcWatchdogCaptureStack @ 0x140568E14
 * Callers:
 *     KeAccumulateTicks @ 0x14022F310 (KeAccumulateTicks.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140205CA0 (RtlWalkFrameChain.c)
 */

void __fastcall KiDpcWatchdogCaptureStack(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdi
  ULONG v5; // eax
  unsigned __int16 v6; // ax

  v2 = *(_QWORD *)(a1 + 34984);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 34992);
    v4 = v3;
    if ( (unsigned int)(*(_DWORD *)(a1 + 13276) - 416) < (unsigned __int64)(v3 - v2) )
      v4 = v2;
    v5 = RtlWalkFrameChain((PVOID *)(v4 + 8), 0x32u, 0x200u);
    if ( v5 - 3 <= 0x31 )
    {
      v6 = v5 - 2;
      *(_WORD *)v4 = v6;
      *(_WORD *)(v4 + 2) = *(_WORD *)(a1 + 32492);
      *(_DWORD *)(v4 + 4) = *(_DWORD *)(a1 + 13248);
      *(_QWORD *)(v4 + 8LL * v6 + 8) = v3;
      *(_QWORD *)(a1 + 34992) = v4 + 8 * (v6 + 2LL);
    }
  }
}
