/*
 * XREFs of ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x180284808
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801B9848 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800F1D0C (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     ??0CExternalD3DRenderer@@AEAA@XZ @ 0x1802846FC (--0CExternalD3DRenderer@@AEAA@XZ.c)
 *     ??4?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIUnknown@@@Z @ 0x180284758 (--4-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CExternalD3DRenderer::Create(
        struct CD3DDevice *a1,
        struct IUnknown *a2,
        struct CExternalD3DRenderer **a3)
{
  CExternalD3DRenderer *v6; // rax
  __int64 v7; // rcx
  CExternalD3DRenderer *v8; // rax
  CExternalD3DRenderer *v9; // rbx
  unsigned int v10; // ebx

  v6 = (CExternalD3DRenderer *)DefaultHeap::Alloc(0x80uLL);
  if ( v6 && (v8 = CExternalD3DRenderer::CExternalD3DRenderer(v6), (v9 = v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CExternalD3DRenderer *)((char *)v8 + 16));
    *((_DWORD *)v9 + 16) = 0;
    *((_QWORD *)v9 + 3) = (char *)a1 + 1104;
    *((_BYTE *)v9 + 70) = 1;
    CD3DResourceManager::RegisterResource((struct CD3DDevice *)((char *)a1 + 1104), v9);
    wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::operator=((__int64 *)v9 + 12, (__int64)a2);
    *a3 = v9;
    return 0;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x12u, 0LL);
  }
  return v10;
}
