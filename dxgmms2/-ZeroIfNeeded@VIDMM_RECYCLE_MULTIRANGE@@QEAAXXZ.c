/*
 * XREFs of ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0096528
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0096BE0 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0097CD8 (-AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(VIDMM_RECYCLE_MULTIRANGE *this)
{
  struct VIDMM_RECYCLE_RANGE *i; // rax
  VIDMM_RECYCLE_RANGE *j; // rdi

  if ( dword_1C0076490 )
  {
    for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
          *((_DWORD *)i + 20) != 3;
          i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
    {
      if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
        goto LABEL_7;
    }
    VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(this);
LABEL_7:
    for ( j = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
    {
      VIDMM_RECYCLE_RANGE::AccessZeroTransition(j);
      if ( j == *((VIDMM_RECYCLE_RANGE **)this + 9) )
        break;
    }
  }
}
