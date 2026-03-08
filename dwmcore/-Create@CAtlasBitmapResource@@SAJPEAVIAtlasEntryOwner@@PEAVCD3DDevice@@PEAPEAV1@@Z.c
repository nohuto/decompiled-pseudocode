/*
 * XREFs of ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1800B72EC
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x1800B7008 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180034214 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VCAtlasBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCAtlasBitmapResource@@@Z @ 0x1800B7394 (--4-$com_ptr_t@VCAtlasBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCAtlasBit.c)
 *     ??0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z @ 0x1800B73F0 (--0CAtlasBitmapResource@@IEAA@PEAVIAtlasEntryOwner@@@Z.c)
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x1800B7594 (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasBitmapResource::Create(
        struct IAtlasEntryOwner *a1,
        struct CD3DDevice *a2,
        struct CAtlasBitmapResource **a3)
{
  CAtlasBitmapResource *v6; // rax
  unsigned int v7; // ecx
  struct CAtlasBitmapResource *v8; // rdi
  int GradientStrip; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  v6 = (CAtlasBitmapResource *)DefaultHeap::Alloc(0x70uLL);
  if ( v6 )
    v6 = CAtlasBitmapResource::CAtlasBitmapResource(v6, a1);
  wil::com_ptr_t<CAtlasBitmapResource,wil::err_returncode_policy>::operator=(&v13, v6);
  v8 = (struct CAtlasBitmapResource *)v13;
  if ( v13 )
  {
    GradientStrip = CAtlasManager::AllocateGradientStrip(
                      (CAtlasManager *)(((unsigned __int64)a2 + 512) & -(__int64)(a2 != 0LL)),
                      (struct CAtlasEntry *)(v13 + 40));
    v11 = GradientStrip;
    if ( GradientStrip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, GradientStrip, 0x19u, 0LL);
    }
    else
    {
      v13 = 0LL;
      *a3 = v8;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v13);
  return v11;
}
