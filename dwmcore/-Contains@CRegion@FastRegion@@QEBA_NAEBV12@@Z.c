/*
 * XREFs of ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x18003FCD4
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180046020 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 * Callees:
 *     ?Contains@CRgnData@Internal@FastRegion@@QEBA_NAEBUtagRECT@@@Z @ 0x18003E648 (-Contains@CRgnData@Internal@FastRegion@@QEBA_NAEBUtagRECT@@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800414C4 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

char __fastcall FastRegion::CRegion::Contains(FastRegion::CRegion *this, const struct CRegion *a2)
{
  FastRegion::CRegion *v3; // r10
  FastRegion::Internal::CRgnData *v4; // r9
  __int64 v5; // rdx
  FastRegion::Internal::CRgnData *v6; // rcx
  FastRegion::Internal::CRgnData *v7; // rcx
  struct tagRECT v9; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v10; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-28h]
  LONG *v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+60h] [rbp-10h]

  if ( **(_DWORD **)this )
  {
    if ( !**(_DWORD **)a2 )
      return 1;
    FastRegion::CRegion::GetBoundingRect(this, &v10);
    FastRegion::CRegion::GetBoundingRect(v3, &v9);
    if ( v10.left <= v9.left && v10.top <= v9.top && v10.right >= v9.right && v10.bottom >= v9.bottom )
    {
      FastRegion::Internal::CRgnData::BeginIterator(v4, (struct FastRegion::CRegion::Iterator *)v11);
      while ( (unsigned __int64)v13 < v12 )
      {
        v10.top = *v13;
        v10.bottom = v13[2];
        v5 = 2 * v15;
        v10.left = *(_DWORD *)(v14 + 4 * v5);
        v6 = *(FastRegion::Internal::CRgnData **)this;
        v10.right = *(_DWORD *)(v14 + 4 * v5 + 4);
        if ( !*(_DWORD *)v6 || !FastRegion::Internal::CRgnData::Contains(v6, &v10) )
          return 0;
        FastRegion::Internal::CRgnData::StepIterator(v7, (struct FastRegion::CRegion::Iterator *)v11);
      }
      return 1;
    }
  }
  return 0;
}
