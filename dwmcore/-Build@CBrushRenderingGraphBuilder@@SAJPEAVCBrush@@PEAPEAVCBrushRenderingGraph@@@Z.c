__int64 __fastcall CBrushRenderingGraphBuilder::Build(struct CBrush *a1, struct CBrushRenderingGraph **a2)
{
  CBrushRenderingGraph *v4; // rax
  unsigned int v5; // ecx
  CBrushRenderingGraph *v6; // rax
  struct CBrushRenderingGraph *v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  struct CBrushRenderingGraph *v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]
  CBrushRenderingGraph *v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = (CBrushRenderingGraph *)DefaultHeap::Alloc(0xD8uLL);
  if ( !v4 )
  {
    v14 = 0LL;
    goto LABEL_8;
  }
  v6 = CBrushRenderingGraph::CBrushRenderingGraph(v4);
  v14 = v6;
  v7 = v6;
  if ( !v6 )
  {
LABEL_8:
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x14u, 0LL);
    goto LABEL_5;
  }
  (**(void (__fastcall ***)(CBrushRenderingGraph *))v6)(v6);
  v13 = 0;
  v12 = v7;
  v8 = CBrushRenderingGraphBuilder::Build((CBrushRenderingGraphBuilder *)&v12, a1);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18u, 0LL);
  }
  else
  {
    v14 = 0LL;
    *a2 = v7;
  }
LABEL_5:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v14);
  return v10;
}
