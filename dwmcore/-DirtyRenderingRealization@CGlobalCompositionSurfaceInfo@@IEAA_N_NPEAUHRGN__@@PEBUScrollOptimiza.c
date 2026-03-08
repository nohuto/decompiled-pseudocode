/*
 * XREFs of ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18004123C
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180040AB8 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 * Callees:
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1800410C0 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180041458 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800414FC (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180042DF0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        const struct ScrollOptimization *a4,
        struct CRegion *a5)
{
  char v9; // bl
  void (__fastcall ***v10)(_QWORD, int *); // rcx
  unsigned int RectangleCount; // eax
  struct MilRectU *v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // r10d
  _DWORD *v18; // rdx
  _DWORD *v19; // r8
  int v20; // eax
  int v21; // r9d
  int v22; // r10d
  int v23; // r11d
  int v24; // ebx
  _DWORD *v25; // rdx
  _DWORD *v26; // r8
  int v27; // [rsp+20h] [rbp-61h] BYREF
  int v28; // [rsp+24h] [rbp-5Dh]
  _DWORD v29[6]; // [rsp+28h] [rbp-59h] BYREF
  _BYTE v30[80]; // [rsp+40h] [rbp-41h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+57h]

  v9 = 0;
  v10 = (void (__fastcall ***)(_QWORD, int *))(*((_QWORD *)this + 26)
                                             + 8LL
                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this + 26) + 8LL) + 16LL));
  (**v10)(v10, &v27);
  if ( a3 == (HRGN)1 )
  {
    v16 = v27;
    v17 = v28;
    if ( v27 <= 0 || v28 <= 0 )
    {
      **(_DWORD **)a5 = 0;
    }
    else
    {
      v18 = *(_DWORD **)a5;
      v19 = (_DWORD *)(*(_QWORD *)a5 + 28LL);
      *(_QWORD *)v18 = 2LL;
      *v19 = 0;
      v19[1] = v16;
      v18[2] = v16;
      v18[4] = (_DWORD)v19 - ((_DWORD)v18 + 12);
      v18[3] = 0;
      v18[5] = v17;
      v18[6] = (_DWORD)v19 - ((_DWORD)v18 + 20) + 8;
    }
    v9 = 1;
    v12 = (CGlobalCompositionSurfaceInfo *)((char *)this + 48);
  }
  else
  {
    if ( a3 )
    {
      CRegion::SetHRGN(a5, a3);
      v9 = 1;
      CRegion::GetBoundingRect(a5, (struct MilRectU *)v29);
      RectangleCount = FastRegion::CRegion::GetRectangleCount(a5);
      if ( v29[0] || RectangleCount != 1 || v29[1] || v29[2] != v27 || v29[3] != v28 )
        *((_BYTE *)this + 299) = 1;
    }
    if ( a4 && *(_DWORD *)a4 && (*((_DWORD *)a4 + 5) || *((_DWORD *)a4 + 6)) )
    {
      if ( v9 )
      {
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v30, (const struct tagRECT *)((char *)a4 + 4));
        v20 = FastRegion::CRegion::Union(a5, (const struct CRegion *)v30);
        if ( v20 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v20, retaddr);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v30);
      }
      else
      {
        v21 = *((_DWORD *)a4 + 3);
        v22 = *((_DWORD *)a4 + 1);
        if ( v22 >= v21 || (v23 = *((_DWORD *)a4 + 2), v24 = *((_DWORD *)a4 + 4), v23 >= v24) )
        {
          **(_DWORD **)a5 = 0;
        }
        else
        {
          v25 = *(_DWORD **)a5;
          v26 = (_DWORD *)(*(_QWORD *)a5 + 28LL);
          *v25 = 2;
          *v26 = v22;
          v26[1] = v21;
          v25[1] = v22;
          v25[4] = (_DWORD)v26 - ((_DWORD)v25 + 12);
          v25[2] = v21;
          v25[3] = v23;
          v25[6] = (_DWORD)v26 - ((_DWORD)v25 + 20) + 8;
          v25[5] = v24;
        }
        v9 = 1;
      }
    }
    v12 = (CGlobalCompositionSurfaceInfo *)((char *)this + 48);
    if ( !v9 )
    {
      *((_QWORD *)this + 7) = 0LL;
      *(_QWORD *)v12 = 0LL;
      goto LABEL_9;
    }
  }
  CRegion::GetBoundingRect(a5, v12);
  if ( a3 == (HRGN)1 )
  {
LABEL_19:
    v15 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 26) + 8LL) + 16LL) + *((_QWORD *)this + 26) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
    return v9;
  }
LABEL_9:
  if ( a2 && CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
    goto LABEL_19;
  if ( v9 )
  {
    v13 = *((_QWORD *)this + 26) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 26) + 8LL) + 16LL);
    (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v13 + 32LL))(v13, a5);
  }
  return v9;
}
