/*
 * XREFs of ?AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C01019B0
 * Callers:
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FF3C0 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FF510 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00AFB74 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::AllocateOutside(
        VIDMM_LINEAR_POOL *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        char a8,
        void *a9,
        union _LARGE_INTEGER *a10,
        void **a11)
{
  unsigned int v12; // edi
  __int64 result; // rax
  unsigned __int64 v15; // rcx

  v12 = a3;
  result = 3221225473LL;
  if ( !a5
    || (LOBYTE(a4) = 1,
        result = VIDMM_LINEAR_POOL::Allocate(this, a2, a3, a4, 0LL, a5, a7, a8, a9, a10, a11),
        (int)result < 0) )
  {
    v15 = *((_QWORD *)this + 1);
    if ( a6 != v15 )
    {
      LOBYTE(a4) = 1;
      return VIDMM_LINEAR_POOL::Allocate(this, a2, v12, a4, a6, v15, a7, a8, a9, a10, a11);
    }
  }
  return result;
}
