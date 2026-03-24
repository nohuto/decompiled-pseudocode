/*
 * XREFs of ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x180030374
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x180030064 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18003A708 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003A850 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B594 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009B858 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180179E04 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

_DWORD *__fastcall COverlayContext::CalcDesktopClip(_QWORD *a1, int *a2, FastRegion::CRegion *a3)
{
  int *v5; // rax
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  int v9; // ebx
  _DWORD *v10; // rdx
  _DWORD *v11; // r8
  _DWORD *result; // rax
  int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  _BYTE v17[80]; // [rsp+20h] [rbp-78h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v5 = (int *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 152LL))(*a1);
  v6 = v5[1];
  v7 = v5[3];
  v8 = *v5;
  v9 = v5[2];
  if ( v6 >= v7 || v8 >= v9 )
  {
    result = *(_DWORD **)a3;
    **(_DWORD **)a3 = 0;
  }
  else
  {
    v10 = *(_DWORD **)a3;
    v11 = (_DWORD *)(*(_QWORD *)a3 + 28LL);
    *v10 = 2;
    *v11 = v8;
    v11[1] = v9;
    v10[1] = v8;
    v10[4] = (_DWORD)v11 - ((_DWORD)v10 + 12);
    result = v10 + 5;
    v10[2] = v9;
    v10[3] = v6;
    v10[6] = (_DWORD)v11 - ((_DWORD)v10 + 20) + 8;
    v10[5] = v7;
  }
  v13 = *a2;
  while ( --v13 >= 0 )
  {
    v14 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v13);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v17, (const struct tagRECT *)(*(_QWORD *)v14 + 68LL));
    v15 = FastRegion::CRegion::Subtract(a3, (const struct CRegion *)v17);
    if ( v15 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v15, retaddr);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v17);
    result = (_DWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v13);
    if ( !*(_BYTE *)(*(_QWORD *)result + 179LL) )
    {
      v16 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v13);
      result = (_DWORD *)FastRegion::CRegion::Union(a3, *(const struct CRegion **)(*(_QWORD *)v16 + 160LL));
      if ( (int)result < 0 )
        ModuleFailFastForHRESULT((unsigned int)result, retaddr);
    }
  }
  return result;
}
