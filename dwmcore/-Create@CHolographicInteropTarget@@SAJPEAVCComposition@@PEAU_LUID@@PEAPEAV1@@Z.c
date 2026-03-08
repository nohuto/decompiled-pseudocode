/*
 * XREFs of ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1802A5B70
 * Callers:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802A1E8C (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CHolographicInteropTarget@@KAPEAX_K@Z @ 0x1801BF1AC (--2CHolographicInteropTarget@@KAPEAX_K@Z.c)
 *     ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802A5804 (--0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z @ 0x1802A5EA0 (-Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Create(
        struct CComposition *a1,
        struct _LUID *a2,
        struct CHolographicInteropTarget **a3)
{
  CHolographicInteropTarget *v6; // rax
  __int64 v7; // rcx
  CHolographicInteropTarget *v8; // rax
  CHolographicInteropTarget *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx

  v6 = (CHolographicInteropTarget *)CHolographicInteropTarget::operator new();
  if ( v6 && (v8 = CHolographicInteropTarget::CHolographicInteropTarget(v6, a1), (v9 = v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CHolographicInteropTarget *)((char *)v8 + 8));
    v10 = CHolographicInteropTarget::Initialize(v9, *a2);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x19u, 0LL);
      CResource::InternalRelease(v9);
    }
    else
    {
      *a3 = v9;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v12;
}
