/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$07$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$07$0A@@@@Z @ 0x18029A524
 * Callers:
 *     ?Present@CCompSwapChain@@UEAAJII@Z @ 0x18029B470 (-Present@CCompSwapChain@@UEAAJII@Z.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18001F0F4 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800414FC (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

_DWORD *__fastcall CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,8,0>>(
        int **a1,
        __int64 a2)
{
  int RectangleCount; // eax
  unsigned int v5; // edi
  int v6; // eax
  _DWORD *result; // rax
  unsigned int v8; // r10d
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rax
  FastRegion::Internal::CRgnData *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]
  _DWORD *v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+40h] [rbp-28h]
  __int128 v18; // [rsp+50h] [rbp-18h]
  const void *retaddr; // [rsp+68h] [rbp+0h]

  RectangleCount = FastRegion::CRegion::GetRectangleCount(a1);
  v5 = *(_DWORD *)(a2 + 24);
  v6 = DynArrayImpl<0>::AddMultiple(a2, 16, RectangleCount, 0LL);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT(v6, retaddr);
  FastRegion::Internal::CRgnData::BeginIterator(
    (FastRegion::Internal::CRgnData *)*a1,
    (struct FastRegion::CRegion::Iterator *)v13);
  while ( 1 )
  {
    result = v15;
    if ( (unsigned __int64)v15 >= v14 )
      break;
    v8 = v15[2];
    DWORD1(v18) = *v15;
    v9 = 2 * v17;
    v10 = *(_DWORD *)(v16 + 4 * v9 + 4);
    v11 = *(_QWORD *)a2;
    LODWORD(v18) = *(_DWORD *)(v16 + 4 * v9);
    *((_QWORD *)&v18 + 1) = __PAIR64__(v8, v10);
    v12 = (FastRegion::Internal::CRgnData *)(2LL * v5);
    *(_OWORD *)(v11 + 8LL * (_QWORD)v12) = v18;
    FastRegion::Internal::CRgnData::StepIterator(v12, (struct FastRegion::CRegion::Iterator *)v13);
    ++v5;
  }
  return result;
}
