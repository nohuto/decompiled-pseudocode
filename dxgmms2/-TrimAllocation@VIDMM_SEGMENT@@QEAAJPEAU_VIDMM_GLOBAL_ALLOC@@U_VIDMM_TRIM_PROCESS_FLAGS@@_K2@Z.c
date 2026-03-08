/*
 * XREFs of ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00FFFB8
 * Callers:
 *     ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C0100114 (-TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00A7BE4 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C0100830 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimAllocation(
        VIDMM_SEGMENT *a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  VIDMM_GLOBAL *v8; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v8 = (VIDMM_GLOBAL *)*((_QWORD *)a1 + 1);
  v16 = 0LL;
  v17 = 0LL;
  VIDMM_GLOBAL::MarkGlobalAllocation(v8, (struct _VIDMM_GLOBAL_ALLOC *)a2, &v16, &v17);
  v10 = *(_QWORD *)(a2 + 120);
  *(_DWORD *)(a2 + 72) |= 0x40u;
  if ( (*(_DWORD *)(v10 + 80) & 0x1000) == 0 && a5 && v17 % a5 )
  {
    v11 = a5 - v17 % a5;
    if ( v16 < v11 )
      return 3221225473LL;
    v12 = v16 - v11;
  }
  else
  {
    v12 = v16;
  }
  if ( (a3 & 4) != 0 )
    return 3221225473LL;
  if ( (a3 & 1) != 0 && v12 >= a4 )
    return 0LL;
  if ( (a3 & 2) == 0 )
    return 3221225473LL;
  v14 = VIDMM_SEGMENT::VerifyCommitLimit(a1, 0LL, a4);
  v15 = -1073741823;
  if ( v14 >= 0 )
    return 0;
  return v15;
}
