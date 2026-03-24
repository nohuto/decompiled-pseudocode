/*
 * XREFs of ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180051FB0
 * Callers:
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800155A0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18006A344 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B7E60 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18020CBD0 (-GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEA.c)
 * Callees:
 *     ?erase@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@2@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@2@@Z @ 0x18004F6DC (-erase@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x1800522DC (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18005255C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@IIVDisplayId@@W4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIVDisplayId@@W4DXGI_COLOR_SPACE_TYPE@@V?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180268670 (--$emplace@IIVDisplayId@@W4DXGI_COLOR_SPACE_TYPE@@V-$com_ptr_t@VCDrawListCache@@Uerr_returncode_.c)
 */

__int64 __fastcall CDrawListCacheSet::GetCache(
        CDrawListCacheSet *this,
        int a2,
        int a3,
        const struct IDeviceTarget *a4,
        struct CDrawListCache **a5)
{
  unsigned int v6; // esi
  volatile signed __int32 *v7; // rdi
  char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // eax
  char *v14; // rcx
  bool v15; // al
  __int64 v16; // rcx
  char v17; // al
  int v18; // eax
  CDrawListEntry *v19; // rbx
  __int64 v20; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // ebx
  CDrawListEntry *v25; // rsi
  char *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // r14d
  __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // edi
  __int64 v33; // rax
  CDrawListEntry *v34; // rcx
  int v35; // ecx
  CDrawListEntry *v36; // r8
  __int64 v37; // rax
  char *v38; // rcx
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rax
  int v42; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+40h] [rbp-C0h]
  CDrawListEntry *v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh]
  int v47; // [rsp+58h] [rbp-A8h]
  CDrawListEntry *v48; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  char v51; // [rsp+78h] [rbp-88h] BYREF
  __int64 v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h] BYREF
  char v54[24]; // [rsp+90h] [rbp-70h] BYREF
  char v55[24]; // [rsp+A8h] [rbp-58h] BYREF
  char v56[24]; // [rsp+C0h] [rbp-40h] BYREF
  char v57[16]; // [rsp+D8h] [rbp-28h] BYREF
  char v58[16]; // [rsp+E8h] [rbp-18h] BYREF
  char v59[16]; // [rsp+F8h] [rbp-8h] BYREF

  v6 = 0;
  v46 = a3;
  v45 = a2;
  v7 = 0LL;
  *a5 = 0LL;
  v9 = (char *)a4 + *(int *)(*((_QWORD *)a4 + 1) + 12LL) + 8;
  v10 = (**(__int64 (__fastcall ***)(char *, char *))v9)(v9, v57);
  v11 = *(_QWORD *)this;
  v12 = *((_QWORD *)this + 1);
  v13 = *(_DWORD *)(v10 + 8);
  v42 = v13;
  while ( v11 != v12 )
  {
    if ( *(_DWORD *)v11 == v45 && *(_DWORD *)(v11 + 4) == v46 && *(_DWORD *)(v11 + 12) == v13 )
    {
      v14 = (char *)a4 + *(int *)(*((_QWORD *)a4 + 1) + 8LL) + 8;
      v15 = *(_QWORD *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14) + 608) != 0LL;
      v16 = *(_QWORD *)(v11 + 16);
      if ( v15 )
        v17 = *(_BYTE *)(v16 + 102);
      else
        v17 = *(_DWORD *)(v16 + 16) != 2;
      if ( v17 )
      {
        v18 = *(_DWORD *)((**(__int64 (__fastcall ***)(const struct IDeviceTarget *, char *))a4)(a4, v54) + 8);
        if ( *(char *)(*(_QWORD *)(v11 + 16) + 88LL) >= 0
          || (v35 = *(_DWORD *)(v11 + 8), v35 == v18)
          || v18 == DisplayId::All
          || v35 == DisplayId::None )
        {
          v7 = *(volatile signed __int32 **)(v11 + 16);
          break;
        }
      }
      v13 = v42;
    }
    v11 += 24LL;
  }
  v44 = (CDrawListEntry *)v7;
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v19 = v44;
LABEL_13:
    v20 = *(_QWORD *)this;
    if ( (unsigned __int64)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 24LL) > 1 )
    {
      while ( v20 != *((_QWORD *)this + 1) )
      {
        v36 = *(CDrawListEntry **)(v20 + 16);
        if ( v36 == v19 )
          goto LABEL_27;
        v37 = 0LL;
        if ( g_pComposition )
          v37 = *((_QWORD *)g_pComposition + 44);
        if ( (unsigned __int64)(v37 - *((_QWORD *)v36 + 3)) <= 0x1E )
        {
LABEL_27:
          v20 += 24LL;
        }
        else
        {
          v50 = v20;
          v20 = *detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::erase(
                   this,
                   &v53,
                   &v50);
        }
      }
    }
    *a5 = v19;
    return v6;
  }
  v44 = 0LL;
  v22 = CDrawListCache::Create(&v44);
  v43 = v22;
  v24 = v22;
  if ( v22 >= 0 )
  {
    v25 = v44;
    if ( *((_BYTE *)v44 + 102) && *((_DWORD *)v44 + 4) != 2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v44 + 2);
      v38 = (char *)a4 + *(int *)(*((_QWORD *)a4 + 1) + 12LL) + 8;
      v39 = (**(__int64 (__fastcall ***)(char *, char *))v38)(v38, v58);
      v25 = v44;
      v48 = v44;
      v40 = *(_DWORD *)(v39 + 8);
      v41 = (**(__int64 (__fastcall ***)(const struct IDeviceTarget *, char *))a4)(a4, v55);
      v49 = *(_QWORD *)this;
      detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,DisplayId,enum DXGI_COLOR_SPACE_TYPE,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
        (_DWORD)this,
        (unsigned int)&v51,
        (unsigned int)&v49,
        v45,
        v46,
        *(_DWORD *)(v41 + 8),
        v40,
        (__int64)&v48);
    }
    _InterlockedIncrement((volatile signed __int32 *)v25 + 2);
    v26 = (char *)a4 + *(int *)(*((_QWORD *)a4 + 1) + 12LL) + 8;
    v27 = (**(__int64 (__fastcall ***)(char *, char *))v26)(v26, v59);
    v52 = *((_QWORD *)this + 1);
    v28 = v52;
    v29 = *(_DWORD *)(v27 + 8);
    v30 = (**(__int64 (__fastcall ***)(const struct IDeviceTarget *, char *))a4)(a4, v56);
    v31 = v28 - *(_QWORD *)this;
    v47 = *(_DWORD *)(v30 + 8);
    v32 = v47;
    v33 = detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
            this,
            v31 / 24);
    *(_DWORD *)v33 = v45;
    *(_DWORD *)(v33 + 4) = v46;
    v34 = v44;
    *(_DWORD *)(v33 + 8) = v32;
    *(_DWORD *)(v33 + 12) = v29;
    *(_QWORD *)(v33 + 16) = v34;
    _InterlockedIncrement((volatile signed __int32 *)v25 + 2);
    v19 = v44;
    CDrawListEntry::Release(v44);
    v6 = v43;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1Cu, 0LL);
  if ( v44 )
    CDrawListEntry::Release(v44);
  return v24;
}
