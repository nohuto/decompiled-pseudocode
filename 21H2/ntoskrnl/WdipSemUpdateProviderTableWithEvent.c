/*
 * XREFs of WdipSemUpdateProviderTableWithEvent @ 0x14079A7E8
 * Callers:
 *     WdipSemUpdateProviderTableWithScenario @ 0x14079A774 (WdipSemUpdateProviderTableWithScenario.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     memset @ 0x140414300 (memset.c)
 *     WdipSemFastAllocate @ 0x140788B80 (WdipSemFastAllocate.c)
 *     WdipSemQueryProviderTable @ 0x14079A88C (WdipSemQueryProviderTable.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x14093081C (WdipSemWriteProviderLimitExceededEvent.c)
 */

__int64 __fastcall WdipSemUpdateProviderTableWithEvent(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 ProviderTable; // rax
  PSLIST_ENTRY v5; // rax
  _OWORD *v6; // rsi

  v1 = 0;
  if ( a1 )
  {
    ProviderTable = WdipSemQueryProviderTable();
    if ( ProviderTable )
    {
      *(_QWORD *)(a1 + 40) = ProviderTable;
    }
    else if ( (unsigned int)dword_140C1C9A0 >= 0x400 )
    {
      if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_PROVIDER_MAX) )
        WdipSemWriteProviderLimitExceededEvent(a1);
      return (unsigned int)-1073741823;
    }
    else
    {
      v5 = WdipSemFastAllocate(2, 0x50u);
      v6 = v5;
      if ( v5 )
      {
        memset(v5, 0, 0x50uLL);
        *v6 = *(_OWORD *)a1;
        WdipSemProviderTable[dword_140C1C9A0++] = v6;
        *(_QWORD *)(a1 + 40) = v6;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
