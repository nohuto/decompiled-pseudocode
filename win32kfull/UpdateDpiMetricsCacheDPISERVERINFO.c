/*
 * XREFs of UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00B7F80
 * Callers:
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00B7E08 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxSetNCFonts @ 0x1C010E91C (xxxSetNCFonts.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C00A1E90 (GetDPIServerInfoForDpi.c)
 *     ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C00B8018 (-ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 */

void UpdateDpiMetricsCacheDPISERVERINFO()
{
  __int64 v0; // rdi
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 i; // rbx
  unsigned int j; // ebx

  v0 = 5304LL;
  v1 = 16LL;
  v2 = 5304LL;
  do
  {
    *(_DWORD *)(v2 + gpsi) = 0;
    v2 += 104LL;
    --v1;
  }
  while ( v1 );
  for ( i = gppiList; i; i = *(_QWORD *)(i + 368) )
    GetDPIServerInfoForDpi(*(unsigned __int16 *)(i + 284));
  for ( j = 2; j < 0x12; ++j )
  {
    if ( !*(_DWORD *)(v0 + gpsi) )
      ClearDPISERVERINFO((struct tagDPISERVERINFO *)(gpsi + 104 * (j + 49LL)));
    v0 += 104LL;
  }
}
