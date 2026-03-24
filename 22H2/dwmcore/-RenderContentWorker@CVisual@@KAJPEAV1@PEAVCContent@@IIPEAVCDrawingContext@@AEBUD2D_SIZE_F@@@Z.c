/*
 * XREFs of ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800155A0
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B7D90 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180051FB0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800BA3C0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     _Init_thread_footer @ 0x1800E7650 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E76B8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RenderContentWorker(
        struct CVisual *this,
        struct CContent *a2,
        unsigned int a3,
        __int64 a4,
        struct CDrawingContext *a5,
        const struct D2D_SIZE_F *a6)
{
  CDrawListEntry *v9; // rbx
  const struct IDeviceTarget *v10; // rbp
  int v11; // edi
  struct CTreeData *TreeData; // rax
  unsigned int v13; // ecx
  int Cache; // eax
  char *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  struct CDrawListCache *v19; // [rsp+30h] [rbp-28h] BYREF

  if ( dword_18034B1E4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034B1E4);
    if ( dword_18034B1E4 == -1 )
    {
      dword_180345AD8 = -2147022876;
      Init_thread_footer(&dword_18034B1E4);
    }
  }
  v9 = 0LL;
  v19 = 0LL;
  if ( !*((_BYTE *)a5 + 5956) )
    goto LABEL_8;
  v10 = (const struct IDeviceTarget *)*((_QWORD *)a5 + 4);
  v11 = -2003292412;
  TreeData = CVisual::FindTreeData(this, *((const struct CVisualTree **)a5 + 741));
  if ( TreeData )
  {
    Cache = CDrawListCacheSet::GetCache((struct CTreeData *)((char *)TreeData + 128), a3, 0, v10, &v19);
    v11 = Cache;
    if ( Cache < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Cache, 0x751u, 0LL);
    v9 = v19;
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180345AD0, 3u, v11, 0x106Au, 0LL);
  }
  else
  {
LABEL_8:
    v15 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 7) + 8LL) + 56;
    v16 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *, const struct D2D_SIZE_F *, CDrawListEntry *))(*(_QWORD *)v15 + 16LL))(
            v15,
            a5,
            a6,
            v9);
    v11 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180345AD0, 3u, v16, 0x106Fu, 0LL);
  }
  if ( v9 )
    CDrawListEntry::Release(v9);
  return (unsigned int)v11;
}
