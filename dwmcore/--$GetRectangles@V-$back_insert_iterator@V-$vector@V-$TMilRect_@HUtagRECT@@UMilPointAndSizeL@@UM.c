/*
 * XREFs of ??$GetRectangles@V?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@CRegion@@QEBAXV?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@Z @ 0x1800422B0
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180041868 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAV2@$$QEAV2@@Z @ 0x180042360 (--$_Emplace_reallocate@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@Rect.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

_DWORD *__fastcall CRegion::GetRectangles<std::back_insert_iterator<std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>>>(
        FastRegion::Internal::CRgnData **a1,
        __int64 a2)
{
  _DWORD *result; // rax
  unsigned int v4; // r10d
  __int64 v5; // rdx
  FastRegion::Internal::CRgnData *v6; // rcx
  unsigned int v7; // r8d
  _OWORD *v8; // rdx
  _BYTE v9[8]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-48h]
  _DWORD *v11; // [rsp+30h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-38h]
  int v13; // [rsp+40h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF

  FastRegion::Internal::CRgnData::BeginIterator(*a1, (struct FastRegion::CRegion::Iterator *)v9);
  while ( 1 )
  {
    result = v11;
    if ( (unsigned __int64)v11 >= v10 )
      break;
    v4 = v11[2];
    DWORD1(v14) = *v11;
    v5 = 2 * v13;
    v6 = (FastRegion::Internal::CRgnData *)*(unsigned int *)(v12 + 4 * v5);
    v7 = *(_DWORD *)(v12 + 4 * v5 + 4);
    v8 = *(_OWORD **)(a2 + 8);
    LODWORD(v14) = (_DWORD)v6;
    *((_QWORD *)&v14 + 1) = __PAIR64__(v4, v7);
    if ( v8 == *(_OWORD **)(a2 + 16) )
    {
      std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>::_Emplace_reallocate<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>(
        a2,
        v8,
        &v14);
    }
    else
    {
      *v8 = v14;
      *(_QWORD *)(a2 + 8) += 16LL;
    }
    FastRegion::Internal::CRgnData::StepIterator(v6, (struct FastRegion::CRegion::Iterator *)v9);
  }
  return result;
}
