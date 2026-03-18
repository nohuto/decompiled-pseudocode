/*
 * XREFs of AllocFreeTmpBuffer @ 0x1C005AB80
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x1C000DA60 (NtGdiPolyPolyDraw.c)
 *     NtGdiOpenDCW @ 0x1C005A5E0 (NtGdiOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C005A8F0 (NtGdiGetRegionData.c)
 *     NtGdiExtCreateRegion @ 0x1C007C780 (NtGdiExtCreateRegion.c)
 * Callees:
 *     AllocThreadBufferWithTag @ 0x1C005ABE0 (AllocThreadBufferWithTag.c)
 */

__int64 __fastcall AllocFreeTmpBuffer(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = a1;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( v1 > 0x1000 )
    return AllocThreadBufferWithTag(v1, 1886213191LL, 0LL);
  v3 = _InterlockedExchange64(*(volatile __int64 **)(v2 + 2360), 0LL);
  if ( !v3 )
    return AllocThreadBufferWithTag(v1, 1886213191LL, 0LL);
  return v3;
}
