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
    else if ( (unsigned int)dword_140C34AA0 >= 0x400 )
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
        WdipSemProviderTable[dword_140C34AA0++] = v6;
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
