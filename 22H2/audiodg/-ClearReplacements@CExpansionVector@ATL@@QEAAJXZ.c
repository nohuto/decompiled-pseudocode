/*
 * XREFs of ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x14005CA5C
 * Callers:
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x14005BAA4 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?ClearReplacements@CRegObject@ATL@@UEAAJXZ @ 0x14005CAE0 (-ClearReplacements@CRegObject@ATL@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14003E7B8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?GetValueAt@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z @ 0x14005D710 (-GetValueAt@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z.c)
 *     ?RemoveAll@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAXXZ @ 0x14005F178 (-RemoveAll@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CExpansionVector::ClearReplacements(ATL::CExpansionVector *this)
{
  int v1; // eax
  int v2; // ebx
  __int64 v4; // rsi
  void **ValueAt; // rax

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 > 0 )
  {
    v4 = 0LL;
    do
    {
      if ( v2 < 0 || v2 >= v1 )
      {
        ATL::_AtlRaiseException(0xC000008C);
        JUMPOUT(0x14005CAD1LL);
      }
      operator delete(*(void **)(v4 + *(_QWORD *)this));
      ValueAt = (void **)ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::GetValueAt(
                           this,
                           (unsigned int)v2);
      operator delete(*ValueAt);
      v1 = *((_DWORD *)this + 4);
      ++v2;
      v4 += 8LL;
    }
    while ( v2 < v1 );
  }
  ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::RemoveAll(this);
  return 0LL;
}
