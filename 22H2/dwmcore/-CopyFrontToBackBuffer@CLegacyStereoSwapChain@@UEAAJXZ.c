/*
 * XREFs of ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x18024D6DC
 * Callers:
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F71A0 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B7D4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C47D0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18023D978 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::CopyFrontToBackBuffer(CLegacyStereoSwapChain *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // r8d
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx
  FastRegion::Internal::CRgnData *v11; // rcx
  unsigned int v13; // [rsp+50h] [rbp-48h] BYREF
  int v14; // [rsp+54h] [rbp-44h]
  int v15; // [rsp+58h] [rbp-40h]
  int v16; // [rsp+5Ch] [rbp-3Ch]
  char v17[8]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-30h]
  int *v19; // [rsp+70h] [rbp-28h]
  __int64 v20; // [rsp+78h] [rbp-20h]
  int v21; // [rsp+80h] [rbp-18h]

  v4 = *(_QWORD *)(*((_QWORD *)this - 34) + 8LL * *((unsigned int *)this - 62));
  v5 = *(FastRegion::Internal::CRgnData **)(v4 + 16);
  if ( *(_DWORD *)v5 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(v5, (struct FastRegion::CRegion::Iterator *)v17);
    while ( (unsigned __int64)v19 < v18 )
    {
      v6 = v19[2];
      v7 = 2 * v21;
      v14 = *v19;
      v16 = v6;
      v8 = *(_DWORD *)(v20 + 4 * v7);
      v9 = *((_QWORD *)this - 36);
      v15 = *(_DWORD *)(v20 + 4 * v7 + 4);
      v10 = *((_QWORD *)this - 39);
      v13 = v8;
      CD3DDevice::CopySubresourceRegion(v10, *((_QWORD *)this - 35), 1, (int *)&v13, v9, 1u, v8, v14, 0);
      FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v17);
    }
  }
  return CLegacySwapChain::CopyFrontToBackBuffer((CLegacyStereoSwapChain *)((char *)this - 24), v4, a3);
}
