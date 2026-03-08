/*
 * XREFs of ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x18029C970
 * Callers:
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAJXZ @ 0x18011C670 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAJXZ.c)
 * Callees:
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18001891C (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::CopyFrontToBackBuffer(CLegacyStereoSwapChain *this, __int64 a2, __int64 a3)
{
  FastRegion::Internal::CRgnData *v4; // rcx
  int v5; // r8d
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  FastRegion::Internal::CRgnData *v10; // rcx
  unsigned int v12; // [rsp+50h] [rbp-48h] BYREF
  int v13; // [rsp+54h] [rbp-44h]
  int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]
  char v16[8]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]
  int *v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+78h] [rbp-20h]
  int v20; // [rsp+80h] [rbp-18h]

  v4 = *(FastRegion::Internal::CRgnData **)(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)this + 68))
                                          + 16LL);
  if ( *(_DWORD *)v4 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(v4, (struct FastRegion::CRegion::Iterator *)v16);
    while ( (unsigned __int64)v18 < v17 )
    {
      v5 = v18[2];
      v6 = 2 * v20;
      v13 = *v18;
      v15 = v5;
      v7 = *(_DWORD *)(v19 + 4 * v6);
      v8 = *((_QWORD *)this + 29);
      v14 = *(_DWORD *)(v19 + 4 * v6 + 4);
      v9 = *((_QWORD *)this + 10);
      v12 = v7;
      CD3DDevice::CopySubresourceRegion(v9, *((_QWORD *)this + 30), 1, (int *)&v12, v8, 1u, v7, v13, 0);
      FastRegion::Internal::CRgnData::StepIterator(v10, (struct FastRegion::CRegion::Iterator *)v16);
    }
  }
  return CLegacySwapChain::CopyFrontToBackBuffer(this, a2, a3);
}
