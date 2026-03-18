/*
 * XREFs of ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18021196C
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A4C0 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18003EEF0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180088B84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DBB94 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RenderContentWorker(
        struct CVisual *a1,
        struct CContent *a2,
        int a3,
        __int64 a4,
        struct CDrawingContext *a5,
        const struct D2D_SIZE_F *a6)
{
  struct CDrawListCache *v6; // rbx
  int v9; // edi
  const struct IDeviceTarget *v10; // r14
  __int64 **TreeData; // rax
  __int64 v12; // rcx
  int Cache; // eax
  unsigned int v14; // esi
  char *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct CDrawListCache *v19; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v19 = 0LL;
  if ( *((_BYTE *)a5 + 8171) )
  {
    v9 = -2003292412;
    v10 = (const struct IDeviceTarget *)*((_QWORD *)a5 + 4);
    TreeData = CVisual::FindTreeData(a1, *((const struct CVisualTree **)a5 + 1007));
    if ( TreeData )
    {
      Cache = CDrawListCacheSet::GetCache((CDrawListCacheSet *)(TreeData + 2), a3, 0, v10, &v19);
      v9 = Cache;
      if ( Cache < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Cache, 0x71Eu, 0LL);
        v6 = v19;
        v14 = v9;
LABEL_7:
        MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_18033BD18, 3u, v9, 0x1030u, 0LL);
        goto LABEL_10;
      }
      v6 = v19;
    }
    v14 = v9;
    if ( v9 < 0 )
      goto LABEL_7;
  }
  v15 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 8) + 8LL) + 64;
  v16 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v15 + 16LL))(
          v15,
          a5,
          a6,
          v6);
  v14 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_18033BD18, 3u, v16, 0x1035u, 0LL);
LABEL_10:
  if ( v6 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v6);
  return v14;
}
