/*
 * XREFs of ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1802578D0
 * Callers:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x180253600 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C07A0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CHolographicInteropTarget@@KAPEAX_K@Z @ 0x18016BDDC (--2CHolographicInteropTarget@@KAPEAX_K@Z.c)
 *     ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802574F4 (--0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z @ 0x180257A40 (-Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Create(
        struct CComposition *a1,
        struct _LUID *a2,
        struct CHolographicInteropTarget **a3)
{
  CHolographicInteropTarget *v6; // rax
  __int64 v7; // rcx
  CMILCOMBase *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx

  v6 = (CHolographicInteropTarget *)CHolographicInteropTarget::operator new();
  if ( v6 )
    v8 = CHolographicInteropTarget::CHolographicInteropTarget(v6, a1);
  else
    v8 = 0LL;
  if ( v8 )
  {
    CMILCOMBase::InternalAddRef(v8);
    v10 = CHolographicInteropTarget::Initialize(v8, *a2);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x19u, 0LL);
      CRenderTargetBitmap::Release(v8);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v9;
}
