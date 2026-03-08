/*
 * XREFs of ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1802B6788
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18002D764 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002D870 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x1802B66F8 (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 */

_QWORD *__fastcall CRenderingTechniqueFragment::RemoveLargestInputFragment(
        __int64 a1,
        _QWORD *a2,
        const struct CBrushRenderingGraph *a3,
        int a4)
{
  __int64 v5; // rdi
  int v6; // eax
  _QWORD *v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rsi
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  CRenderingTechniqueFragment *v13; // rcx
  unsigned int CumulativeSurfaceInputCount; // eax
  __int64 v15; // rbx
  CRenderingTechniqueFragment *v16; // rcx
  __int64 v17; // rax
  _BYTE *v18; // r8
  _BYTE *v19; // rcx
  _BYTE *v23; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v24; // [rsp+48h] [rbp-B8h]
  char *v25; // [rsp+50h] [rbp-B0h]
  _BYTE v26[192]; // [rsp+58h] [rbp-A8h] BYREF
  char v27; // [rsp+118h] [rbp+18h] BYREF

  v5 = 0LL;
  v23 = v26;
  v6 = a4;
  v7 = a2;
  v8 = 0;
  v9 = (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 4;
  v10 = 0;
  v24 = v26;
  v25 = &v27;
  v11 = v9;
  if ( (_DWORD)v9 )
  {
    do
    {
      v13 = *(CRenderingTechniqueFragment **)(v5 + *(_QWORD *)(a1 + 32) + 8);
      if ( v13 )
      {
        CumulativeSurfaceInputCount = CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
                                        v13,
                                        a3,
                                        (__int64 *)&v23);
        if ( CumulativeSurfaceInputCount > v8 )
        {
          v8 = CumulativeSurfaceInputCount;
          v11 = v10;
        }
      }
      ++v10;
      v5 += 16LL;
    }
    while ( v10 < (unsigned int)v9 );
    v7 = a2;
    v6 = a4;
  }
  v15 = *(_QWORD *)(a1 + 32) + 16LL * v11;
  v16 = *(CRenderingTechniqueFragment **)(v15 + 8);
  *(_BYTE *)(v15 + 4) = 1;
  *(_DWORD *)v15 = v6;
  CRenderingTechniqueFragment::ClearConsumerUVClampingRequirement(v16);
  v17 = *(_QWORD *)(v15 + 8);
  *(_QWORD *)(v15 + 8) = 0LL;
  v18 = v24;
  v19 = v23;
  *v7 = v17;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v18 - v19) >> 2) )
    v24 = &v18[-4 * ((v18 - v19) >> 2)];
  v23 = 0LL;
  if ( v19 == v26 )
    v19 = 0LL;
  operator delete(v19);
  return v7;
}
