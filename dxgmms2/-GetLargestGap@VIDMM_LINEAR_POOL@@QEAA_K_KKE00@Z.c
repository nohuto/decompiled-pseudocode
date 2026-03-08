/*
 * XREFs of ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C0102328
 * Callers:
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00FD5A0 (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 * Callees:
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C00B032C (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

unsigned __int64 __fastcall VIDMM_LINEAR_POOL::GetLargestGap(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int64 a5,
        VIDMM_LINEAR_POOL *a6)
{
  VIDMM_LINEAR_POOL *v6; // r14
  VIDMM_LINEAR_POOL *v8; // rdi
  unsigned __int64 v11; // rbx
  VIDMM_LINEAR_POOL *v12; // rax
  unsigned __int64 *v13; // rsi
  unsigned __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-8h] BYREF
  bool v17; // [rsp+90h] [rbp+30h] BYREF

  v6 = (VIDMM_LINEAR_POOL *)((char *)this + 40);
  v8 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 5);
  v16 = 0LL;
  v15 = 0LL;
  v11 = 0LL;
  if ( v8 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v12 = 0LL;
    this = 0LL;
    do
    {
      v13 = (unsigned __int64 *)((char *)v8 - 24);
      v8 = *(VIDMM_LINEAR_POOL **)v8;
      if ( (VIDMM_LINEAR_POOL *)*v13 != v12 )
      {
        v17 = 0;
        VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(this, &v17, &v16, (VIDMM_LINEAR_POOL **)&v15, a2, a3, a4, a5, a6);
        if ( !v17 && v11 <= v15 - v16 )
          v11 = v15 - v16;
        this = (VIDMM_LINEAR_POOL *)*v13;
        v16 = *v13;
      }
      v12 = (VIDMM_LINEAR_POOL *)((char *)this + v13[1]);
      v15 = (unsigned __int64)v12;
      this = v12;
    }
    while ( v8 != v6 );
  }
  v17 = 0;
  VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(this, &v17, &v16, (VIDMM_LINEAR_POOL **)&v15, a2, a3, a4, a5, a6);
  if ( !v17 && v11 <= v15 - v16 )
    return v15 - v16;
  return v11;
}
