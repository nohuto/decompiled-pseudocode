/*
 * XREFs of ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C00B3370
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0099390 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C009B840 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 * Callees:
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(
        struct VIDMM_RECYCLE_RANGE **this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  VIDMM_RECYCLE_MULTIRANGE *v3; // r9
  unsigned __int64 v4; // r10
  struct VIDMM_RECYCLE_RANGE *NextRange; // rcx
  struct VIDMM_RECYCLE_RANGE *v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // edx
  int v9; // edx

  v3 = (VIDMM_RECYCLE_MULTIRANGE *)this;
  v4 = a2;
  NextRange = this[8];
  v6 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v3 + 9);
  while ( 1 )
  {
    v7 = *((_QWORD *)NextRange + 4);
    if ( v7 >= a3 || *((_QWORD *)NextRange + 5) <= v4 )
    {
      v8 = *((_DWORD *)v3 + 54);
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            *((_QWORD *)NextRange + 19) = 0LL;
        }
        else
        {
          *((_QWORD *)NextRange + 18) = 0LL;
        }
      }
      else
      {
        *((_QWORD *)NextRange + 17) = 0LL;
      }
    }
    if ( v7 == v4 )
      *((_QWORD *)v3 + 8) = NextRange;
    if ( *((_QWORD *)NextRange + 5) == a3 )
      *((_QWORD *)v3 + 9) = NextRange;
    if ( NextRange == v6 )
      break;
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  *((_QWORD *)v3 + 4) = v4;
  *((_QWORD *)v3 + 5) = a3;
  *((_QWORD *)v3 + 6) = v4;
}
