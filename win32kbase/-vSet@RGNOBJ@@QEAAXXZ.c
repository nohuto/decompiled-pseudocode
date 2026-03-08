/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C0053560
 * Callers:
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C00427F0 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0044F90 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0184084 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)this + 48LL;
  if ( !*(_QWORD *)this )
    v2 = 24LL;
  *(_DWORD *)v2 = 16;
  v3 = v1 + 52;
  if ( !v1 )
    v3 = 28LL;
  *(_DWORD *)v3 = 1;
  v4 = v1 + 56;
  if ( !v1 )
    v4 = 32LL;
  *(_OWORD *)v4 = 0LL;
  v5 = v1 + 32;
  if ( !v1 )
    v5 = 8LL;
  v6 = *(_DWORD **)v5;
  v7 = v1 + 40;
  *v6 = 0;
  v6[3] = 0;
  v6[1] = 0x80000000;
  v6[2] = 0x7FFFFFFF;
  v8 = v6 + 4;
  if ( !v1 )
    v7 = 16LL;
  *(_QWORD *)v7 = v8;
}
