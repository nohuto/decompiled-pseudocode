/*
 * XREFs of ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18029B2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180046720 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A72B4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CCompSwapChain::NotifyRenderedRect(__int64 a1, int *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *); // rcx
  int v5; // eax
  int v6; // r10d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // r8
  __int64 v11; // [rsp+20h] [rbp-29h] BYREF
  struct tagRECT v12; // [rsp+28h] [rbp-21h] BYREF
  void *v13[10]; // [rsp+40h] [rbp-9h] BYREF
  const void *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) + 16LL)
                                                + *(_QWORD *)(a1 + 96)
                                                + 8LL);
  (**v4)(v4, &v11);
  v12.left = 0;
  v12.top = 0;
  v5 = v11;
  v6 = HIDWORD(v11);
  *(_QWORD *)&v12.right = v11;
  if ( a2 )
  {
    if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v12.left, a2) )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v13, &v12);
      v7 = FastRegion::CRegion::Union(
             (const struct FastRegion::Internal::CRgnData **)(a1 + 168),
             (const struct FastRegion::Internal::CRgnData **)v13);
      if ( v7 < 0 )
        ModuleFailFastForHRESULT(v7, retaddr);
      v8 = FastRegion::CRegion::Subtract(
             (const struct FastRegion::Internal::CRgnData **)(a1 + 240),
             (const struct FastRegion::Internal::CRgnData **)v13);
      if ( v8 < 0 )
        ModuleFailFastForHRESULT(v8, retaddr);
      if ( *(_DWORD *)(a1 + 160) == 3 )
      {
        v9 = FastRegion::CRegion::Subtract(
               (const struct FastRegion::Internal::CRgnData **)(a1 + 312),
               (const struct FastRegion::Internal::CRgnData **)v13);
        if ( v9 < 0 )
          ModuleFailFastForHRESULT(v9, retaddr);
      }
      FastRegion::CRegion::FreeMemory(v13);
    }
  }
  else
  {
    if ( (int)v11 <= 0 || SHIDWORD(v11) <= 0 )
    {
      **(_DWORD **)(a1 + 168) = 0;
    }
    else
    {
      v10 = *(_DWORD **)(a1 + 168);
      v10[1] = 0;
      v10[7] = 0;
      v10[3] = 0;
      v10[8] = v5;
      v10[2] = v5;
      *v10 = 2;
      v10[4] = 16;
      v10[6] = 16;
      v10[5] = v6;
    }
    **(_DWORD **)(a1 + 240) = 0;
    if ( *(_DWORD *)(a1 + 160) == 3 )
      **(_DWORD **)(a1 + 312) = 0;
  }
}
