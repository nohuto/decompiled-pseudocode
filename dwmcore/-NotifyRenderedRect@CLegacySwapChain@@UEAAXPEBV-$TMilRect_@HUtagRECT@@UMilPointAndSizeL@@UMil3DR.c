/*
 * XREFs of ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180046470
 * Callers:
 *     ?NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18011B910 (-NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAnd.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BLI@EAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18011C9B0 (-NotifyRenderedRect@CLegacySwapChain@@$4PPPPPPPM@BLI@EAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAnd.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x18029E580 (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 * Callees:
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800466D4 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180046720 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800467D8 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18004705C (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18004778C (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047B80 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A72B4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x1801AE5C8 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CLegacySwapChain::NotifyRenderedRect(__int64 a1, __int64 a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *); // rcx
  int v5; // eax
  int v6; // r10d
  int v7; // esp
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  struct FastRegion::Internal::CRgnData *i; // rdx
  __int64 v12; // rsi
  const struct FastRegion::Internal::CRgnData *v13; // rcx
  int v14; // eax
  int v15; // r14d
  __int64 v16; // r8
  unsigned int v17; // r9d
  int *v18; // rax
  int v19; // esi
  int v20; // edi
  int v21; // r11d
  int v22; // r10d
  _DWORD *v23; // rdx
  __int64 v24; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-D0h]
  struct FastRegion::Internal::CRgnData *v27; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v28[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v29[2]; // [rsp+5Ch] [rbp-ACh] BYREF
  _DWORD v30[13]; // [rsp+64h] [rbp-A4h] BYREF
  int v31; // [rsp+98h] [rbp-70h] BYREF
  void *lpMem; // [rsp+A0h] [rbp-68h]
  _BYTE v33[256]; // [rsp+A8h] [rbp-60h] BYREF
  void *retaddr; // [rsp+1D0h] [rbp+C8h]

  v4 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 16LL)
                                                + *(_QWORD *)(a1 + 128)
                                                + 8LL);
  (**v4)(v4, &v24);
  v5 = v24;
  v6 = HIDWORD(v24);
  v26 = v24;
  v25 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v25, a2) )
    {
      v27 = (struct FastRegion::Internal::CRgnData *)v28;
      if ( (int)v25 >= (int)v26 || SHIDWORD(v25) >= SHIDWORD(v26) )
      {
        v28[0] = 0;
      }
      else
      {
        v29[0] = HIDWORD(v25);
        v28[0] = 2;
        v28[1] = v25;
        v28[2] = v26;
        v29[1] = v7 + 100 - (unsigned int)v29;
        v30[2] = v25;
        v30[3] = v26;
        v30[1] = v7 + 100 - (unsigned int)v30 + 8;
        v30[0] = HIDWORD(v26);
      }
      v8 = FastRegion::CRegion::Union((FastRegion::CRegion *)(a1 + 136), (const struct CRegion *)&v27);
      if ( v8 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
      v9 = FastRegion::CRegion::Subtract(
             (FastRegion::CRegion *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * *(unsigned int *)(a1 + 272)) + 16LL),
             (const struct CRegion *)&v27);
      if ( v9 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
      v10 = 0;
      for ( i = v27; v10 < *(_DWORD *)(a1 + 316); ++v10 )
      {
        if ( v10 != *(_DWORD *)(a1 + 272) )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v10);
          if ( *(_DWORD *)i )
          {
            v13 = *(const struct FastRegion::Internal::CRgnData **)(v12 + 16);
            if ( *(_DWORD *)v13 )
            {
              v14 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v13, i);
              v31 = 0;
              lpMem = v33;
              v15 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v31, v14);
              if ( v15 < 0 )
              {
                FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v31);
LABEL_25:
                ModuleFailFastForHRESULT((unsigned int)v15, retaddr);
              }
              FastRegion::Internal::CRgnData::Union(
                (FastRegion::Internal::CRgnData *)lpMem,
                *(const struct FastRegion::Internal::CRgnData **)(v12 + 16),
                v27);
              v15 = FastRegion::CRegion::SaveResult(
                      (FastRegion::CRegion *)(v12 + 16),
                      (struct FastRegion::Internal::CWorkBuffer *)&v31);
              if ( v33 != lpMem )
                operator delete(lpMem);
            }
            else
            {
              v15 = FastRegion::CRegion::Copy((FastRegion::CRegion *)(v12 + 16), (const struct CRegion *)&v27);
            }
            if ( v15 < 0 )
              goto LABEL_25;
            i = v27;
          }
        }
      }
      if ( v28 != (_DWORD *)i )
        operator delete(i);
    }
  }
  else
  {
    if ( (int)v24 <= 0 || SHIDWORD(v24) <= 0 )
    {
      **(_DWORD **)(a1 + 136) = 0;
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 136);
      *(_DWORD *)(v16 + 8) = v24;
      *(_DWORD *)(v16 + 32) = v5;
      *(_DWORD *)(v16 + 28) = 0;
      *(_QWORD *)v16 = 2LL;
      *(_DWORD *)(v16 + 12) = 0;
      *(_DWORD *)(v16 + 16) = 16;
      *(_DWORD *)(v16 + 20) = v6;
      *(_DWORD *)(v16 + 24) = 16;
    }
    v17 = 0;
    for ( **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * *(unsigned int *)(a1 + 272)) + 16LL) = 0;
          v17 < *(_DWORD *)(a1 + 316);
          ++v17 )
    {
      if ( v17 != *(_DWORD *)(a1 + 272) )
      {
        v18 = *(int **)(*(_QWORD *)(a1 + 248) + 8LL * v17);
        v19 = *v18;
        v20 = v18[2];
        v21 = v18[1];
        v22 = v18[3];
        if ( *v18 >= v20 || v21 >= v22 )
        {
          **((_DWORD **)v18 + 2) = 0;
        }
        else
        {
          v23 = (_DWORD *)*((_QWORD *)v18 + 2);
          *v23 = 2;
          v23[7] = v19;
          v23[8] = v20;
          v23[1] = v19;
          v23[4] = 16;
          v23[2] = v20;
          v23[3] = v21;
          v23[6] = 16;
          v23[5] = v22;
        }
      }
    }
  }
}
