void __fastcall CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2,
        const struct CBrushRenderingGraph::GraphInputParameters *a3)
{
  unsigned int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // rdx
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v20; // [rsp+68h] [rbp+20h] BYREF

  if ( !CBrushRenderingGraphBuilder::FindExistingNamedInput(this, a3, &v20) )
  {
    v7 = *(_QWORD *)this;
    v8 = *(unsigned int *)(v7 + 40);
    v9 = v8 + 1;
    if ( (int)v8 + 1 < (unsigned int)v8 )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v9 <= *(_DWORD *)(v7 + 36) )
      {
        v10 = 3 * v8;
        v11 = *(_QWORD *)(v7 + 16);
        *(_OWORD *)(v11 + 8 * v10) = *(_OWORD *)a3;
        *(_QWORD *)(v11 + 8 * v10 + 16) = *((_QWORD *)a3 + 2);
        *(_DWORD *)(v7 + 40) = v9;
LABEL_5:
        v12 = *(_DWORD *)(v7 + 40) - 1;
        goto LABEL_6;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet(v7 + 16, 24LL, 1LL, a3);
      v14 = v15;
      if ( v15 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC0u, 0LL);
    }
    ModuleFailFastForHRESULT(v14, retaddr);
  }
  v12 = v20;
LABEL_6:
  v18 = 0LL;
  v13 = (_QWORD *)*((_QWORD *)a2 + 5);
  LODWORD(v17) = v12;
  BYTE4(v17) = 0;
  if ( v13 == *((_QWORD **)a2 + 6) )
  {
    std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
      (char *)a2 + 32,
      v13,
      &v17);
  }
  else
  {
    *v13 = v17;
    v13[1] = v18;
    *((_QWORD *)a2 + 5) += 16LL;
  }
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v18);
}
