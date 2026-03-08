/*
 * XREFs of ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x1802B66F8
 * Callers:
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x1802B66F8 (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1802B6788 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ?IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z @ 0x18002DA04 (-IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z.c)
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x1802B66F8 (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 */

void __fastcall CRenderingTechniqueFragment::ClearConsumerUVClampingRequirement(CRenderingTechniqueFragment *this)
{
  unsigned int v2; // ebp
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r14

  if ( *((_BYTE *)this + 120) )
  {
    *((_BYTE *)this + 120) = 0;
    v2 = 0;
    v3 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
    if ( (_DWORD)v3 )
    {
      v4 = 0LL;
      do
      {
        v5 = *((_QWORD *)this + 4);
        if ( *(_QWORD *)(v4 + v5 + 8) )
        {
          if ( !CRenderingTechniqueFragment::IsUVClampingRequiredForInput(this, v2, 0LL, 0LL) )
            CRenderingTechniqueFragment::ClearConsumerUVClampingRequirement(*(CRenderingTechniqueFragment **)(v4 + v5 + 8));
        }
        ++v2;
        v4 += 16LL;
      }
      while ( v2 < (unsigned int)v3 );
    }
  }
}
