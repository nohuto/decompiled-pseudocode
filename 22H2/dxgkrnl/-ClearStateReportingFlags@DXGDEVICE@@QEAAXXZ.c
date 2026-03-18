/*
 * XREFs of ?ClearStateReportingFlags@DXGDEVICE@@QEAAXXZ @ 0x1C022FE56
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C1B1C (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::ClearStateReportingFlags(DXGDEVICE *this)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)this + 7); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (*(_DWORD *)(i + 4) & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(i + 56) + 12LL) &= ~2u;
  }
}
