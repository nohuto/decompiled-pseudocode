/*
 * XREFs of ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x18026A208
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18004B080 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18004B194 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x18026A178 (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 */

_QWORD *__fastcall CRenderingTechniqueFragment::RemoveLargestInputFragment(
        __int64 a1,
        _QWORD *a2,
        const struct CBrushRenderingGraph *a3,
        int a4)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  _QWORD *v6; // r12
  __int64 v8; // rax
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  __int64 v11; // r14
  unsigned int v12; // r13d
  CRenderingTechniqueFragment *v14; // rcx
  unsigned int CumulativeSurfaceInputCount; // eax
  __int64 v16; // rbx
  CRenderingTechniqueFragment *v17; // rcx
  __int64 v18; // rax
  _BYTE *v19; // r9
  _BYTE *v20; // r8
  _BYTE *v21; // rcx
  __int64 v22; // rdx
  _BYTE *v26; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v27; // [rsp+48h] [rbp-B8h]
  char *v28; // [rsp+50h] [rbp-B0h]
  _BYTE v29[192]; // [rsp+58h] [rbp-A8h] BYREF
  char v30; // [rsp+118h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v26 = v29;
  v5 = 0LL;
  v27 = v29;
  v6 = a2;
  v28 = &v30;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = 0;
  v10 = 0;
  v11 = (v4 - v8) >> 4;
  v12 = v11;
  if ( (_DWORD)v11 )
  {
    do
    {
      v14 = *(CRenderingTechniqueFragment **)(v5 + *(_QWORD *)(a1 + 32) + 8);
      if ( v14 )
      {
        CumulativeSurfaceInputCount = CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
                                        v14,
                                        a3,
                                        (__int64)&v26);
        if ( CumulativeSurfaceInputCount > v9 )
        {
          v9 = CumulativeSurfaceInputCount;
          v12 = v10;
        }
      }
      ++v10;
      v5 += 16LL;
    }
    while ( v10 < (unsigned int)v11 );
    v8 = *(_QWORD *)(a1 + 32);
    v6 = a2;
  }
  v16 = v8 + 16LL * v12;
  v17 = *(CRenderingTechniqueFragment **)(v16 + 8);
  *(_BYTE *)(v16 + 4) = 1;
  *(_DWORD *)v16 = a4;
  CRenderingTechniqueFragment::ClearConsumerUVClampingRequirement(v17);
  v18 = *(_QWORD *)(v16 + 8);
  *(_QWORD *)(v16 + 8) = 0LL;
  v19 = v27;
  v20 = v26;
  v21 = v27;
  *v6 = v18;
  v22 = (v21 - v20) / 12;
  if ( v22 )
    v27 = &v19[-12 * v22];
  v26 = 0LL;
  if ( v20 == v29 )
    v20 = 0LL;
  operator delete(v20);
  return v6;
}
