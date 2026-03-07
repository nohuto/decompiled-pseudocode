__int64 __fastcall CBrushRenderingGraphBuilder::CreateTechniqueForFragment(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  CRenderingTechnique *v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rax
  CRenderingTechnique *v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // ebp
  unsigned int v17; // ecx
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v5 = (CRenderingTechnique *)DefaultHeap::Alloc(0x120uLL);
  if ( !v5 || (v7 = CRenderingTechnique::CRenderingTechnique(v5), (v8 = (CRenderingTechnique *)v7) == 0LL) )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x246u, 0LL);
    return v12;
  }
  v9 = *a1 + 144LL;
  v18 = v7;
  v10 = *(_DWORD *)(v9 + 24);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v16 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
    v12 = -2147024362;
    goto LABEL_11;
  }
  if ( v11 > *(_DWORD *)(v9 + 20) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet(v9, 8LL, 1LL, &v18);
    v16 = v14;
    v12 = v14;
    if ( v14 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC0u, 0LL);
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x249u, 0LL);
    CRenderingTechnique::`scalar deleting destructor'(v8);
    return v12;
  }
  *(_QWORD *)(*(_QWORD *)v9 + 8LL * v10) = v8;
  *(_DWORD *)(v9 + 24) = v11;
LABEL_6:
  *a3 = *(_DWORD *)(v9 + 24) - 1;
  return 0;
}
