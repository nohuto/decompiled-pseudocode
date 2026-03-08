/*
 * XREFs of ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x180085A34
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C400 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z @ 0x1800F6D28 (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListBatchManager::OpenDrawListEntryBatch(
        CDrawListBatchManager *this,
        struct IDeviceTarget *a2,
        struct CDrawListEntryBatch **a3)
{
  unsigned int v6; // edi
  char *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  char *v14; // rcx
  char *v15; // rcx
  int v16; // eax
  float v17; // xmm0_4
  int v18; // eax
  struct CDrawListEntryBatch::CSharedDirect3DResources *v20; // rdi
  CDrawListEntryBatch *v21; // rax
  unsigned int v22; // ecx
  CDrawListEntryBatch *v23; // rax
  CDrawListEntryBatch *v24; // rbx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // ebp
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  CDrawListEntryBatch *v33; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v34[24]; // [rsp+38h] [rbp-60h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  if ( *((_QWORD *)this + 18) || *((_QWORD *)this + 16) )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v6 = *((_DWORD *)this + 266);
  if ( (v6 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, 0x10Du, 0LL);
    return v6;
  }
  if ( !*((_DWORD *)this + 26) )
  {
    v20 = (struct CDrawListEntryBatch::CSharedDirect3DResources *)*((_QWORD *)this + 15);
    v21 = (CDrawListEntryBatch *)DefaultHeap::Alloc(0x98uLL);
    if ( !v21
      || (v23 = CDrawListEntryBatch::CDrawListEntryBatch(v21, (CDrawListBatchManager *)((char *)this - 24), v20),
          (v24 = v23) == 0LL) )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024882, 0x53u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024882, 0x114u, 0LL);
      return v6;
    }
    CMILRefCountImpl::AddReference((CDrawListEntryBatch *)((char *)v23 + 16));
    v7 = (char *)this + 80;
    v33 = v24;
    v26 = *((_DWORD *)this + 26);
    v27 = v26 + 1;
    if ( v26 + 1 < v26 )
    {
      v6 = -2147024362;
      v28 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      v28 = 0;
      if ( v27 <= *((_DWORD *)this + 25) )
      {
        *(_QWORD *)(*(_QWORD *)v7 + 8LL * v26) = v24;
        *((_DWORD *)this + 26) = v27;
LABEL_17:
        v6 = v28;
        goto LABEL_6;
      }
      v29 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 80, 8LL, 1LL, &v33);
      v28 = v29;
      v6 = v29;
      if ( v29 >= 0 )
        goto LABEL_17;
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xC0u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v28, 0x116u, 0LL);
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((char *)v24 + 8);
    return v6;
  }
  v7 = (char *)this + 80;
LABEL_6:
  v8 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v8 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v8 + 8);
  v9 = (unsigned int)(*((_DWORD *)v7 + 6) - 1);
  *((_QWORD *)this + 16) = *(_QWORD *)(*(_QWORD *)v7 + 8 * v9);
  v10 = *((_DWORD *)v7 + 8);
  *((_DWORD *)v7 + 6) = v9;
  if ( v10 >= (unsigned int)v9 )
    v10 = v9;
  *((_DWORD *)v7 + 8) = v10;
  ++*((_DWORD *)this + 38);
  v11 = *((_DWORD *)this + 6);
  v12 = *((_QWORD *)this + 16);
  *(_DWORD *)(v12 + 48) = v11;
  *(_DWORD *)(v12 + 52) = v11;
  v13 = (**(__int64 (__fastcall ***)(struct IDeviceTarget *, _BYTE *))a2)(a2, v34);
  *(_OWORD *)(v12 + 72) = *(_OWORD *)v13;
  *(_QWORD *)(v12 + 88) = *(_QWORD *)(v13 + 16);
  v14 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 12LL) + 8;
  *(_DWORD *)(v12 + 96) = *(_DWORD *)((**(__int64 (__fastcall ***)(char *, _BYTE *))v14)(v14, v34) + 8);
  v15 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
  (**(void (__fastcall ***)(char *, CDrawListEntryBatch **))v15)(v15, &v33);
  v16 = (int)v33;
  *(_DWORD *)(v12 + 64) = -1082130432;
  *(_DWORD *)(v12 + 68) = 1065353216;
  v17 = (float)v16;
  v18 = HIDWORD(v33);
  *(float *)(v12 + 56) = 2.0 / v17;
  *(float *)(v12 + 60) = -2.0 / (float)v18;
  *a3 = (struct CDrawListEntryBatch *)*((_QWORD *)this + 16);
  return v6;
}
