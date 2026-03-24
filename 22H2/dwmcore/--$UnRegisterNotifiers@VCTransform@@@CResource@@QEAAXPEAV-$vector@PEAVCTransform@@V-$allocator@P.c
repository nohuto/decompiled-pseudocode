/*
 * XREFs of ??$UnRegisterNotifiers@VCTransform@@@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18001B4A8
 * Callers:
 *     ??1?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@MEAA@XZ @ 0x18001B234 (--1-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@MEAA@XZ.c)
 *     ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x18001B298 (-SetOrAppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV-$spa.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800450D0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifiers<CTransform>(CResource *this, __int64 a2)
{
  struct CResource **v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v6; // rsi

  v2 = *(struct CResource ***)a2;
  v3 = 0LL;
  v6 = (unsigned __int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2 + 7LL) >> 3;
  if ( *(_QWORD *)a2 > *(_QWORD *)(a2 + 8) )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      CResource::UnRegisterNotifierInternal(this, *v2);
      ++v3;
      ++v2;
    }
    while ( v3 != v6 );
    v2 = *(struct CResource ***)a2;
  }
  *(_QWORD *)(a2 + 8) = v2;
}
