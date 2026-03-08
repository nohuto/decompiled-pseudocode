/*
 * XREFs of ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180046020
 * Callers:
 *     ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x18001F758 (-SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV-$span@$$CBUtagRECT@@$0-0@gsl@@@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18004523C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800F4634 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18010DB8C (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     ?AddDxBltRects@CGdiSpriteBitmap@@AEAAXPEBUtagRECT@@I@Z @ 0x18021A2F0 (-AddDxBltRects@CGdiSpriteBitmap@@AEAAXPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x18003FCD4 (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180042DF0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180045FE0 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800462A8 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180096FCC (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1800F46E8 (-GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x18012AB2A (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGdiSpriteBitmap::AddDirtyRegion(CGdiSpriteBitmap *this, struct CRegion *a2, char a3)
{
  LONG v3; // eax
  _DWORD *v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r14
  char v14; // r12
  unsigned int i; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  CWindowNode *v19; // r14
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  HGDIOBJ ho; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-B8h] BYREF
  int *v25; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v27[80]; // [rsp+B0h] [rbp-50h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v3 = *((_DWORD *)this + 106);
  *(_QWORD *)&v24.left = 0LL;
  v24.right = v3;
  v24.bottom = *((_DWORD *)this + 107);
  CRegion::CRegion((CRegion *)v27, &v24);
  v7 = *(_DWORD **)a2;
  ho = 0LL;
  if ( *v7 )
  {
    if ( !*((_QWORD *)this + 44) )
    {
      if ( *((_BYTE *)this + 143) )
      {
        CRedirectedGDISurface::GetDirtyRegionFromAccum(*((CRedirectedGDISurface **)this + 15), (HRGN *)&ho);
        if ( ho )
        {
          v26 = 0;
          v25 = &v26;
          CRegion::SetHRGN((CRegion *)&v25, (HRGN)ho);
          v20 = FastRegion::CRegion::Intersect(a2, (const struct CRegion *)&v25);
          if ( v20 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v20, retaddr);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v25);
        }
      }
    }
    v8 = FastRegion::CRegion::Intersect(a2, (const struct CRegion *)v27);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    if ( **(_DWORD **)a2 )
    {
      if ( !*((_BYTE *)this + 143) || !FastRegion::CRegion::Contains((CGdiSpriteBitmap *)((char *)this + 168), a2) )
      {
        v9 = FastRegion::CRegion::Union((CGdiSpriteBitmap *)((char *)this + 168), a2);
        if ( v9 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
        *((_BYTE *)this + 145) = 1;
      }
      v10 = *((_QWORD *)this + 55);
      if ( v10 )
      {
        v11 = v10 + 8 + *(int *)(*(_QWORD *)(v10 + 8) + 12LL);
        (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v11 + 32LL))(v11, a2);
        v12 = *((_QWORD *)this + 56);
        v13 = *((_QWORD *)this + 57);
        while ( v12 != v13 )
        {
          v21 = (__int64 *)(*(_QWORD *)v12 + 64LL + *(int *)(*(_QWORD *)(*(_QWORD *)v12 + 64LL) + 8LL));
          v22 = *v21;
          *(_QWORD *)&v24.left = 0LL;
          if ( (*(int (__fastcall **)(__int64 *, struct tagRECT *))(v22 + 64))(v21, &v24) >= 0 )
            (*(void (__fastcall **)(_QWORD, struct CRegion *))(**(_QWORD **)&v24.left + 32LL))(*(_QWORD *)&v24.left, a2);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
          v12 += 8LL;
        }
      }
      v14 = *((_BYTE *)this + 140);
      *((_BYTE *)this + 140) = 1;
      if ( a3 )
      {
        for ( i = 0; i < CPtrArrayBase::GetCount((CGdiSpriteBitmap *)((char *)this + 24)); ++i )
        {
          v17 = CPtrArrayBase::operator[](v16, i);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 56LL))(v17, 204LL) )
          {
            v18 = CPtrArrayBase::operator[]((char *)this + 24, i);
            v19 = (CWindowNode *)v18;
            if ( !v14 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0xxxxx_EventWriteTransfer(
                *(_QWORD *)(v18 + 88),
                (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
                (_DWORD)this,
                *((_QWORD *)this + 51),
                v18,
                *(_QWORD *)(v18 + 88),
                *((_QWORD *)this + 9));
            CWindowNode::NotifyDirtySurface(v19, a2, *((_BYTE *)this + 145));
          }
        }
      }
    }
    if ( ho )
      DeleteObject(ho);
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v27);
}
