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
