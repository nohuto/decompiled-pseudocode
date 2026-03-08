/*
 * XREFs of ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800467D8
 * Callers:
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18004591C (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800462A8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180046470 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180046720 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800D6F70 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::SaveResult(
        FastRegion::CRegion **this,
        struct FastRegion::Internal::CWorkBuffer *a2)
{
  int *v2; // rsi
  unsigned int v3; // edi
  FastRegion::CRegion *v5; // rbx
  int *v6; // r15
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // ebp
  __int64 v11; // r9
  _DWORD *v12; // r8
  _DWORD *v13; // r11
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  int v20; // ebx

  v2 = (int *)*((_QWORD *)a2 + 1);
  v3 = 0;
  if ( *v2 )
  {
    if ( (int *)((char *)a2 + 16) == v2 )
    {
      v5 = *this;
      v6 = (int *)(this + 1);
      v7 = 60;
      v8 = v2[2 * *v2 + 2] + 8 * *v2 - 12 - v2[4] + 8 * (*v2 - 1) + 24;
      if ( this + 1 != (FastRegion::CRegion **)*this )
        v7 = *v6;
      if ( v7 < v8 )
      {
        v5 = (FastRegion::CRegion *)DefaultHeap::Alloc(v8);
        if ( !v5 )
          return (unsigned int)-2147024882;
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
        *this = v5;
        *v6 = v8;
      }
      v9 = *v2;
      v10 = 0;
      *(_DWORD *)v5 = *v2;
      *((_DWORD *)v5 + 1) = v2[1];
      *((_DWORD *)v5 + 2) = v2[2];
      v11 = (__int64)v2 + v2[4] + 12;
      v12 = (_DWORD *)((char *)v5 + 8 * v9 + 12);
      if ( v9 > 0 )
      {
        v13 = (_DWORD *)((char *)v5 + 12);
        do
        {
          *v13 = *(_DWORD *)((char *)v13 + (char *)v2 - (char *)v5);
          v13 += 2;
          v14 = v10++;
          *((_DWORD *)v5 + 2 * v14 + 4) = (_DWORD)v2
                                        + 8 * v14
                                        + 4 * (((__int64)v12 - v11) >> 2)
                                        + v2[2 * v14 + 4]
                                        - ((_DWORD)v5
                                         + 8 * v14);
        }
        while ( v10 < *(_DWORD *)v5 );
      }
      v15 = (__int64)&v2[2 * *v2 + 1];
      v16 = (unsigned __int64)((int)v15 + *(_DWORD *)(v15 + 4) - v2[4] - ((int)v2 + 12)) >> 2;
      v17 = (int)v16;
      if ( (int)v16 > 0 )
      {
        v18 = v11 - (_QWORD)v12;
        do
        {
          *v12 = *(_DWORD *)((char *)v12 + v18);
          ++v12;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v20 = *(_DWORD *)a2;
      *(_DWORD *)a2 = 0;
      *((_QWORD *)a2 + 1) = (char *)a2 + 16;
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
      *this = (FastRegion::CRegion *)v2;
      *((_DWORD *)this + 2) = v20;
    }
  }
  else
  {
    *(_DWORD *)*this = 0;
  }
  return v3;
}
