/*
 * XREFs of ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C009728C
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0096EB4 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C008675C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C009ADF0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C009E640 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00F5CFC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Commit(
        VIDMM_RECYCLE_MULTIRANGE *this,
        unsigned __int8 a2,
        unsigned __int8 *a3)
{
  VIDMM_RECYCLE_RANGE *i; // rdi
  unsigned __int8 v6; // dl
  int v7; // esi
  struct VIDMM_RECYCLE_RANGE *j; // rax

  for ( i = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v7 = VIDMM_RECYCLE_RANGE::Commit(i, a2, a3);
    if ( v7 < 0 )
      break;
    if ( i == *((VIDMM_RECYCLE_RANGE **)this + 9) )
    {
      for ( j = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
      {
        *((_QWORD *)j + 17) = 0LL;
        *((_QWORD *)j + 18) = 0LL;
        *((_QWORD *)j + 19) = 0LL;
        *((_QWORD *)j + 20) = this;
        if ( j == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
          break;
      }
      *((_DWORD *)this + 54) = 3;
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, v6);
      return 0LL;
    }
  }
  while ( i != *((VIDMM_RECYCLE_RANGE **)this + 8) )
  {
    i = VIDMM_RECYCLE_RANGE::GetPreviousRange(i);
    VIDMM_RECYCLE_RANGE::Decommit(i);
  }
  return (unsigned int)v7;
}
