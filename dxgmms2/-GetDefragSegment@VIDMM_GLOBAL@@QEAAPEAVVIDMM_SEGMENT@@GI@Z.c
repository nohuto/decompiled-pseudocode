/*
 * XREFs of ?GetDefragSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@GI@Z @ 0x1C00E3BF0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct VIDMM_SEGMENT *__fastcall VIDMM_GLOBAL::GetDefragSegment(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        unsigned int a3)
{
  __int64 v4; // r11
  int v5; // r10d
  int v6; // ecx
  __int64 v7; // rdx

  if ( !a3 )
    return 0LL;
  v4 = *((_QWORD *)this + 464);
  v5 = *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 28);
  while ( 1 )
  {
    _BitScanReverse((unsigned int *)&v6, a3);
    a3 &= (1 << v6) - 1;
    v7 = *(_QWORD *)(v4 + 8LL * (unsigned int)(v5 + v6));
    if ( *(_BYTE *)(v7 + 473) )
    {
      if ( *(_QWORD *)(v7 + 496) != *(_QWORD *)(*(_QWORD *)this + 256LL) )
        break;
    }
    if ( !a3 )
      return 0LL;
  }
  return *(struct VIDMM_SEGMENT **)(v4 + 8LL * (unsigned int)(v5 + v6));
}
