/*
 * XREFs of KiIntSteerCalculateFallbackDistribution @ 0x140577A5C
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x1402A8E00 (KiIntSteerCalculateDistribution.c)
 * Callees:
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1402A9324 (KiIntPartGetLowestClassProcessorInMask.c)
 */

void __fastcall KiIntSteerCalculateFallbackDistribution(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  unsigned int v4; // edx

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    v4 = KiProcessorIndexToNumberMappingTable[(unsigned int)KiIntPartGetLowestClassProcessorInMask(v2 - 18)];
    *(_DWORD *)((char *)v2 - 22) = 0;
    *((_WORD *)v2 - 9) = 0;
    *((_WORD *)v2 - 12) = v4 >> 6;
    *(v2 - 4) = 1LL << (v4 & 0x3F);
  }
}
