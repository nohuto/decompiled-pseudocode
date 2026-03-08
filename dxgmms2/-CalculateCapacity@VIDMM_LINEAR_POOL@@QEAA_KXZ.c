/*
 * XREFs of ?CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ @ 0x1C0101AA8
 * Callers:
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FCB90 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_LINEAR_POOL::CalculateCapacity(VIDMM_LINEAR_POOL *this)
{
  char *v1; // r9
  unsigned __int64 v2; // r8
  char *v3; // r10
  unsigned __int64 v4; // r11
  char *v5; // rax
  unsigned __int64 v6; // rcx

  v1 = (char *)this + 40;
  v2 = 0LL;
  v3 = (char *)*((_QWORD *)this + 5);
  v4 = 0LL;
  while ( v3 != v1 )
  {
    v5 = v3 - 24;
    v3 = *(char **)v3;
    v4 += *((_QWORD *)v5 + 1);
    if ( *(_QWORD *)v5 )
      v4 = *((_QWORD *)v5 + 1);
    v6 = v4;
    if ( v4 <= v2 )
      v6 = v2;
    v2 = v6;
  }
  return v2;
}
