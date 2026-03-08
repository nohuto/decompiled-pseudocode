/*
 * XREFs of ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x1800FA310
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x1800FA0D8 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180046720 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x18012B5A2 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

_DWORD *__fastcall COverlayContext::CalcDesktopClip(
        _QWORD *a1,
        int *a2,
        const struct FastRegion::Internal::CRgnData **a3)
{
  __m128i v5; // xmm0
  int v6; // r10d
  signed __int32 v7; // xmm0_4
  const struct FastRegion::Internal::CRgnData *v8; // rdx
  int *v9; // r8
  _DWORD *result; // rax
  int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  __m128i v15; // [rsp+20h] [rbp-88h]
  void *v16[10]; // [rsp+30h] [rbp-78h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]

  v5 = *(__m128i *)((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 160LL))(*a1) + 20);
  v6 = _mm_cvtsi128_si32(v5);
  v15 = v5;
  v7 = _mm_srli_si128(v5, 8).m128i_u32[0];
  if ( v6 >= v7 || v15.m128i_i32[1] >= v15.m128i_i32[3] )
  {
    result = *a3;
    *(_DWORD *)*a3 = 0;
  }
  else
  {
    v8 = *a3;
    v9 = (int *)((char *)*a3 + 28);
    *(_DWORD *)v8 = 2;
    *v9 = v6;
    *((_DWORD *)v8 + 3) = v15.m128i_i32[1];
    v9[1] = v7;
    *((_DWORD *)v8 + 4) = (_DWORD)v9 - ((_DWORD)v8 + 12);
    result = (_DWORD *)((char *)v8 + 20);
    *((_DWORD *)v8 + 1) = v6;
    *((_DWORD *)v8 + 2) = v7;
    *((_DWORD *)v8 + 6) = (_DWORD)v9 - ((_DWORD)v8 + 20) + 8;
    *((_DWORD *)v8 + 5) = v15.m128i_i32[3];
  }
  v11 = *a2;
  while ( --v11 >= 0 )
  {
    v12 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v11);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v16, (const struct tagRECT *)(*(_QWORD *)v12 + 68LL));
    v13 = FastRegion::CRegion::Subtract(a3, (const struct FastRegion::Internal::CRgnData **)v16);
    if ( v13 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v13, retaddr);
    FastRegion::CRegion::FreeMemory(v16);
    result = (_DWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v11);
    if ( !*(_BYTE *)(*(_QWORD *)result + 179LL) )
    {
      v14 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v11);
      result = (_DWORD *)FastRegion::CRegion::Union(
                           a3,
                           *(const struct FastRegion::Internal::CRgnData ***)(*(_QWORD *)v14 + 160LL));
      if ( (int)result < 0 )
        ModuleFailFastForHRESULT((unsigned int)result, retaddr);
    }
  }
  return result;
}
