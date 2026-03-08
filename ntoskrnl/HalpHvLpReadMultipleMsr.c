/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x140509280
 * Callers:
 *     HalpHvEpReadMsr @ 0x140453390 (HalpHvEpReadMsr.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x1405091B4 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  if ( qword_140C62178 )
    return qword_140C62178();
  if ( a2 )
    memset(a4, 0, 8LL * a2);
  return 3221225473LL;
}
