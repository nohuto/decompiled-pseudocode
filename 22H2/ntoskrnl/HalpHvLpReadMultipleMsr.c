/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x14050B360
 * Callers:
 *     HalpHvEpReadMsr @ 0x14045B330 (HalpHvEpReadMsr.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x14050B294 (HalpHvLpReadMcaStatusMsr.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  if ( qword_140C625D8 )
    return qword_140C625D8();
  if ( a2 )
    memset(a4, 0, 8LL * a2);
  return 3221225473LL;
}
