/*
 * XREFs of ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800ACA78
 * Callers:
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800AC998 (-Play@KeyframeSequence@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyframeSequence::SortKeyFrames(void **this)
{
  unsigned int v2; // eax

  if ( (*((_BYTE *)this + 140) & 4) != 0 )
  {
    qsort(this[13], *((unsigned int *)this + 28), 0x18uLL, KeyframeSequence::CompareKeyframes);
    *((_BYTE *)this + 140) &= ~4u;
    *((_DWORD *)this + 30) = 0;
    v2 = *((_DWORD *)this + 28);
    if ( v2 >= 2 )
      *((_DWORD *)this + 30) = *((_DWORD *)this[13] + 6 * v2 - 6) - *(_DWORD *)this[13];
  }
}
