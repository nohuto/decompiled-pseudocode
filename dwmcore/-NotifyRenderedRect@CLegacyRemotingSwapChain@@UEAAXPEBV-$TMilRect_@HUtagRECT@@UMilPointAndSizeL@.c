/*
 * XREFs of ?NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18010A1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A72B4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CLegacyRemotingSwapChain::NotifyRenderedRect(__int64 a1, int *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *); // rcx
  int v5; // eax
  int v6; // r10d
  int v7; // eax
  _DWORD *v8; // r8
  __int64 v9; // [rsp+20h] [rbp-29h] BYREF
  struct tagRECT v10; // [rsp+28h] [rbp-21h] BYREF
  void *v11[10]; // [rsp+40h] [rbp-9h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) + 16LL)
                                                + *(_QWORD *)(a1 + 80)
                                                + 8LL);
  (**v4)(v4, &v9);
  v10.left = 0;
  v10.top = 0;
  v5 = v9;
  v6 = HIDWORD(v9);
  *(_QWORD *)&v10.right = v9;
  if ( a2 )
  {
    if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v10.left, a2) )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v11, &v10);
      v7 = FastRegion::CRegion::Union(
             (const struct FastRegion::Internal::CRgnData **)(a1 + 128),
             (const struct FastRegion::Internal::CRgnData **)v11);
      if ( v7 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v7, retaddr);
      FastRegion::CRegion::FreeMemory(v11);
    }
  }
  else if ( (int)v9 <= 0 || SHIDWORD(v9) <= 0 )
  {
    **(_DWORD **)(a1 + 128) = 0;
  }
  else
  {
    v8 = *(_DWORD **)(a1 + 128);
    v8[1] = 0;
    v8[7] = 0;
    v8[3] = 0;
    v8[8] = v5;
    v8[2] = v5;
    *v8 = 2;
    v8[4] = 16;
    v8[6] = 16;
    v8[5] = v6;
  }
}
