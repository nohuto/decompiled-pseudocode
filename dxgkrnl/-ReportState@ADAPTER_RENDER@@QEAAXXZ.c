/*
 * XREFs of ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BCBFC
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02B4808 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearStateReportingFlags@DXGDEVICE@@QEAAXXZ @ 0x1C02218B6 (-ClearStateReportingFlags@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C02E82CC (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1C0364924 (-ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::ReportState(ADAPTER_RENDER *this)
{
  DXGVIRTUALGPUMANAGER *v2; // rcx
  DXGVIRTUALGPUMANAGER *v3; // rcx
  DXGDEVICE **v4; // rsi
  DXGDEVICE *i; // rcx
  DXGDEVICE **v6; // rcx
  DXGDEVICE **v7; // r14
  DXGDEVICE *j; // rcx
  DXGDEVICE **v9; // rcx
  DXGDEVICE *k; // rdi
  DXGDEVICE *m; // rdi

  v2 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 234);
  if ( v2 )
    DXGVIRTUALGPUMANAGER::ReportState(v2);
  v3 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 233);
  if ( v3 )
    DXGVIRTUALGPUMANAGER::ReportState(v3);
  v4 = (DXGDEVICE **)((char *)this + 144);
  for ( i = (DXGDEVICE *)*((_QWORD *)this + 18); i != (DXGDEVICE *)v4 && i; i = *v6 )
    DXGDEVICE::ClearStateReportingFlags(i);
  v7 = (DXGDEVICE **)((char *)this + 160);
  for ( j = (DXGDEVICE *)*((_QWORD *)this + 20); j != (DXGDEVICE *)v7 && j; j = *v9 )
    DXGDEVICE::ClearStateReportingFlags(j);
  for ( k = *v4; k != (DXGDEVICE *)v4 && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::ReportState(k);
  for ( m = *v7; m != (DXGDEVICE *)v7 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::ReportState(m);
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 32LL))(*((_QWORD *)this + 96));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 48LL))(*((_QWORD *)this + 93));
  }
}
