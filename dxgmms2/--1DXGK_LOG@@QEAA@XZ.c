/*
 * XREFs of ??1DXGK_LOG@@QEAA@XZ @ 0x1C004CC88
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00E0158 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGK_LOG::~DXGK_LOG(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *this = 0LL;
  }
}
