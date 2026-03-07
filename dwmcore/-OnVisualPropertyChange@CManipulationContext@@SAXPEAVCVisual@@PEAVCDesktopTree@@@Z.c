void __fastcall CManipulationContext::OnVisualPropertyChange(struct CVisual *a1, struct CDesktopTree *a2)
{
  struct CInteraction *InteractionInternal; // rax
  CVisual *v3; // r10
  const struct CVisualTree *v4; // r11
  struct CInteraction *v5; // rdi
  __int64 v6; // rax
  CVisual *v7; // rbx
  struct CInteraction *v8; // rax
  char v9; // r10
  int InputQueueType; // r8d
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rcx
  __int128 v18; // xmm1
  _BYTE *v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  __int128 v21; // [rsp+50h] [rbp-10h] BYREF
  char v22; // [rsp+80h] [rbp+20h] BYREF
  struct CInteraction *v23; // [rsp+88h] [rbp+28h] BYREF

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  v5 = InteractionInternal;
  if ( InteractionInternal )
  {
    CVisual::GetWorldTransform(v3, v4, 5, (struct CInteraction *)((char *)InteractionInternal + 120), 0LL, 0LL);
    v6 = *((_QWORD *)v5 + 14);
    v7 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    if ( v6 )
      v7 = *(CVisual **)(v6 + 16);
    v22 = 0;
    do
    {
      if ( !v7 )
        break;
      v8 = CVisual::GetInteractionInternal(v7);
      v23 = v8;
      if ( v8 )
      {
        v22 = 1;
        v19[0] = &v23;
        InputQueueType = 0;
        v19[1] = &v22;
        v11 = *((_QWORD *)v8 + 13);
        if ( v11 )
          InputQueueType = CInputSinkStruct::GetInputQueueType(v11, 5);
        lambda_9a9771997357178f95a5eaf72b6b0000_::operator()(v19, (__int64 *)&v20, InputQueueType);
        v12 = 0;
        v13 = *((_QWORD *)v23 + 13);
        if ( v13 )
          v12 = *(_DWORD *)(v13 + 80);
        lambda_9a9771997357178f95a5eaf72b6b0000_::operator()(v19, (__int64 *)&v20 + 1, v12);
        v14 = 0;
        v15 = *((_QWORD *)v23 + 13);
        if ( v15 )
          v14 = CInputSinkStruct::GetInputQueueType(v15, 4);
        lambda_9a9771997357178f95a5eaf72b6b0000_::operator()(v19, (__int64 *)&v21 + 1, v14);
        v16 = 0;
        v17 = *((_QWORD *)v23 + 13);
        if ( v17 )
          v16 = CInputSinkStruct::GetInputQueueType(v17, 2);
        lambda_9a9771997357178f95a5eaf72b6b0000_::operator()(v19, (__int64 *)&v21, v16);
        v9 = v22;
      }
      v7 = (CVisual *)*((_QWORD *)v7 + 11);
    }
    while ( !v9 );
    v18 = v21;
    *(_OWORD *)((char *)v5 + 72) = v20;
    *(_OWORD *)((char *)v5 + 88) = v18;
  }
}
