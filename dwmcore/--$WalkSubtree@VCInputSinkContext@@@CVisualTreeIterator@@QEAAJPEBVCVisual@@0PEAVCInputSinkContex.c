__int64 __fastcall CVisualTreeIterator::WalkSubtree<CInputSinkContext>(
        __int64 a1,
        __int64 a2,
        const void *a3,
        __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  CVisual *v11; // rdi
  const struct CVisualTree *v12; // rdx
  __int64 v13; // rbx
  struct CInteraction *InteractionInternal; // rax
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // esi
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rax
  void *InputHandle; // rsi
  CVisual *i; // r11
  __int64 v25; // r11
  void *v26; // rax
  CVisual *v27; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 72) = 1;
  v8 = CGraphWalker<CVisual>::BeginWalk(a1, a2, a3);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD6u, 0LL);
  }
  else
  {
    v11 = *(CVisual **)(a1 + 8);
LABEL_3:
    while ( (*((_BYTE *)v11 + 103) & 1) != 0 || v11 == (CVisual *)a2 )
    {
      v12 = *(const struct CVisualTree **)(a1 + 64);
      if ( v12 )
        CVisual::EnsureTreeData(v11, v12);
      v13 = *(_QWORD *)(a4 + 8);
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v13);
      if ( InteractionInternal )
      {
        v22 = *((_QWORD *)InteractionInternal + 13);
        if ( v22 )
        {
          if ( *(_QWORD *)(v22 + 64) )
          {
            if ( !*(_QWORD *)(a4 + 80) )
            {
              if ( (unsigned __int8)IsNotifyInputSinkParentedPresent() )
              {
                InputHandle = 0LL;
                if ( (*(_BYTE *)(v13 + 103) & 1) != 0 )
                {
                  for ( i = *(CVisual **)(v13 + 88); i; i = *(CVisual **)(v25 + 88) )
                  {
                    if ( CVisual::GetInputHandle(i) )
                    {
                      InputHandle = CVisual::GetInputHandle((CVisual *)v25);
                      break;
                    }
                    if ( (*(_BYTE *)(v25 + 103) & 1) == 0 )
                      break;
                  }
                }
                v26 = CVisual::GetInputHandle((CVisual *)v13);
                NotifyInputSinkParented(v26, InputHandle);
              }
              *(_QWORD *)(a4 + 80) = v13;
            }
            *(_BYTE *)(v13 + 100) |= 0x20u;
          }
        }
      }
      if ( (*(_DWORD *)(v13 + 96) & 0x2000) == 0 )
        goto LABEL_8;
      v27 = 0LL;
      v20 = CGraphWalker<CVisual>::GotoFirstChild(a1, &v27, 0LL);
      v10 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x105u, 0LL);
        goto LABEL_17;
      }
      if ( !v27 )
        goto LABEL_8;
      v11 = v27;
    }
    do
    {
LABEL_8:
      if ( (*((_BYTE *)v11 + 103) & 1) != 0 || v11 == (CVisual *)a2 )
      {
        v15 = *(_QWORD *)(a4 + 8);
        if ( v15 == *(_QWORD *)(a4 + 80) )
          *(_QWORD *)(a4 + 80) = 0LL;
        *(_BYTE *)(v15 + 96) &= ~0x20u;
      }
      v27 = 0LL;
      v16 = CGraphWalker<CVisual>::GotoSibling(a1, &v27, 0LL);
      v10 = v16;
      v18 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x137u, 0LL);
        goto LABEL_17;
      }
      v11 = v27;
      if ( v27 )
        goto LABEL_3;
      v27 = 0LL;
      CGraphWalker<CVisual>::GotoParent(a1, &v27);
      v11 = v27;
    }
    while ( v27 );
    if ( v18 == 1 )
      v10 = 0;
LABEL_17:
    CGraphWalker<CVisual>::EndWalk(a1, (__int64)a3);
  }
  return v10;
}
