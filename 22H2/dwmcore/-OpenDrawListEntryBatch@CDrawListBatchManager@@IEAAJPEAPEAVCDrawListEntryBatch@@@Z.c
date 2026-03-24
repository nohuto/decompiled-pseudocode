/*
 * XREFs of ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAPEAVCDrawListEntryBatch@@@Z @ 0x18002B0D0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180078970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18007A618 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z @ 0x18002B244 (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListBatchManager::OpenDrawListEntryBatch(
        CDrawListBatchManager *this,
        struct CDrawListEntryBatch **a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  struct CDrawListEntryBatch::CSharedDirect3DResources *v11; // rbx
  CDrawListEntryBatch *v12; // rax
  unsigned int v13; // ecx
  CDrawListEntryBatch *v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  CDrawListEntryBatch *v21; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 23) || *((_QWORD *)this + 21) )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v4 = *((_DWORD *)this + 276);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v4, 0x11Bu, 0LL);
    return (unsigned int)v4;
  }
  if ( *((_DWORD *)this + 36) )
    goto LABEL_5;
  v11 = (struct CDrawListEntryBatch::CSharedDirect3DResources *)*((_QWORD *)this + 20);
  v12 = (CDrawListEntryBatch *)DefaultHeap::Alloc(0x80uLL);
  if ( v12 )
    v14 = CDrawListEntryBatch::CDrawListEntryBatch(v12, (CDrawListBatchManager *)((char *)this - 24), v11);
  else
    v14 = 0LL;
  if ( !v14 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x53u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x122u, 0LL);
    return (unsigned int)v4;
  }
  _InterlockedIncrement((volatile signed __int32 *)v14 + 4);
  v15 = *((_DWORD *)this + 36);
  v21 = v14;
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v16 <= *((_DWORD *)this + 35) )
    {
      v4 = 0;
      *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v15) = v14;
      *((_DWORD *)this + 36) = v16;
      goto LABEL_5;
    }
    v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 120, 8LL, 1LL, &v21);
    v4 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xC0u, 0LL);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v4, 0x124u, 0LL);
    CDrawListEntry::Release((CDrawListEntryBatch *)((char *)v14 + 8));
    return (unsigned int)v4;
  }
LABEL_5:
  v5 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v5 )
    CDrawListEntry::Release((CDrawListEntry *)(v5 + 8));
  v6 = (unsigned int)(*((_DWORD *)this + 36) - 1);
  *((_QWORD *)this + 21) = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v6);
  v7 = *((_DWORD *)this + 38);
  *((_DWORD *)this + 36) = v6;
  if ( v7 >= (unsigned int)v6 )
    v7 = v6;
  *((_DWORD *)this + 38) = v7;
  v8 = *((_DWORD *)this + 6);
  v9 = *((_QWORD *)this + 21);
  ++*((_DWORD *)this + 48);
  *(_DWORD *)(v9 + 48) = v8;
  *(_DWORD *)(v9 + 52) = v8;
  *a2 = (struct CDrawListEntryBatch *)*((_QWORD *)this + 21);
  return (unsigned int)v4;
}
