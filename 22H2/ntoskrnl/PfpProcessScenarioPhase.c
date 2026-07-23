/*
 * XREFs of PfpProcessScenarioPhase @ 0x14078CE98
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140709624 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x140709C3C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x14025EE20 (PsGetCurrentProcessSessionId.c)
 *     MmGetNextSession @ 0x140263DE0 (MmGetNextSession.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     RtlGetActiveConsoleId @ 0x14034ADC0 (RtlGetActiveConsoleId.c)
 *     PfpLogScenarioEvent @ 0x1407771C4 (PfpLogScenarioEvent.c)
 *     PfpScenCtxPrefetchWait @ 0x1409910A8 (PfpScenCtxPrefetchWait.c)
 *     PfPowerActionNotify @ 0x140991198 (PfPowerActionNotify.c)
 *     PfpScenCtxScenarioSet @ 0x14099AB88 (PfpScenCtxScenarioSet.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(_DWORD *a1, char a2)
{
  int v3; // ecx
  unsigned int v4; // edi
  int v6; // ecx
  ULONG ActiveConsoleId; // ebx
  int v8; // ecx
  ULONG v9; // ebx
  unsigned int v10; // ebx
  struct _DMA_ADAPTER *NextSession; // rax

  if ( *a1 != 4 )
    return (unsigned int)-1073741811;
  v3 = a1[1];
  if ( (unsigned int)(v3 - 1) > 4 )
    return (unsigned int)-1073741701;
  if ( v3 <= 2 )
    goto LABEL_4;
  if ( v3 != 3 )
  {
    if ( v3 == 4 )
    {
      v6 = a1[2];
      v4 = 0;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( (unsigned int)PsGetCurrentProcessSessionId() == ActiveConsoleId )
          {
            PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C502E0);
            if ( dword_140C4FDD8 < (unsigned int)dword_140C4FDDC )
              PfpLogScenarioEvent(5, 2, 3, dword_140C50314, 1);
          }
        }
        return v4;
      }
LABEL_29:
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140C502E0);
      return v4;
    }
    if ( v3 == 5 )
    {
LABEL_4:
      v4 = 0;
      if ( a2 )
        return (unsigned int)-1073741790;
      else
        PfPowerActionNotify((unsigned int)a1[2]);
      return v4;
    }
    return (unsigned int)-1073741811;
  }
  v8 = a1[2];
  v4 = 0;
  if ( v8 )
  {
    if ( v8 != 1 || dword_140C50310 != 3 )
      return v4;
    PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140C502E0);
    PfpLogScenarioEvent(3, 0, 0, dword_140C50314, 0);
    goto LABEL_29;
  }
  v9 = RtlGetActiveConsoleId();
  if ( (unsigned int)PsGetCurrentProcessSessionId() == v9 && dword_140C4FDD8 < (unsigned int)dword_140C4FDDC )
  {
    v10 = 0;
    NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      while ( ++v10 < 3 )
      {
        NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(NextSession);
        if ( !NextSession )
          goto LABEL_28;
      }
      HalPutDmaAdapter(NextSession);
LABEL_28:
      if ( v10 >= 3 )
        goto LABEL_29;
    }
  }
  return v4;
}
