/*
 * XREFs of ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x18002B430
 * Callers:
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x18002AF30 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 * Callees:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x18002B6C8 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     ??0CSharedDirect3DResources@CDrawListEntryBatch@@AEAA@XZ @ 0x18002C1A8 (--0CSharedDirect3DResources@CDrawListEntryBatch@@AEAA@XZ.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawListEntryBatch::CSharedDirect3DResources::Create(
        struct CD3DDevice *a1,
        struct CDrawListEntryBatch::CSharedDirect3DResources **a2)
{
  CDrawListEntryBatch::CSharedDirect3DResources *v4; // rax
  unsigned int v5; // ecx
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi

  v4 = (CDrawListEntryBatch::CSharedDirect3DResources *)DefaultHeap::Alloc(0x4E0uLL);
  if ( v4 )
    v6 = (volatile signed __int32 *)CDrawListEntryBatch::CSharedDirect3DResources::CSharedDirect3DResources(v4);
  else
    v6 = 0LL;
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v7 = CDrawListEntryBatch::CSharedDirect3DResources::Init((CDrawListEntryBatch::CSharedDirect3DResources *)v6, a1);
    v9 = v7;
    if ( v7 >= 0 )
    {
      *a2 = (struct CDrawListEntryBatch::CSharedDirect3DResources *)v6;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x19u, 0LL);
      CDrawListEntry::Release((CDrawListEntry *)v6);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x18u, 0LL);
  }
  return v9;
}
