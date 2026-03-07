__int64 *__fastcall CManipulationContext::BuildInteractionChainAndUpdateTree(
        struct CDesktopTree *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        _BYTE *a7)
{
  __int64 v7; // rax
  char v8; // r15
  CVisual *v9; // rdi
  __int64 v10; // r13
  CInteraction *v11; // rbp
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v13; // rbx
  char v14; // r8
  bool v15; // zf
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // r8
  CVisual *i; // rsi
  struct CInteraction *v20; // rax
  struct CInteraction *v21; // r14
  __int64 v22; // rcx
  char v23; // al
  char v24; // di
  char v25; // si
  CInteraction *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned __int8 v29; // al
  char v30; // al
  struct CInteraction *v31; // rax
  struct CInteraction *v32; // r14
  bool v33; // dl
  char v34; // cl
  unsigned int v35; // r14d
  __int64 v36; // rax
  struct CVisual *VisualEffectiveParentImpl; // rdi
  __int64 v38; // rax
  bool *v39; // rdx
  struct CDesktopTree *v40; // r12
  char v41; // r15
  struct CInteraction *v42; // rax
  bool *v43; // rdx
  CInteraction *v44; // rsi
  CInteraction *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rax
  struct CInteraction *v51; // [rsp+78h] [rbp+10h]

  v7 = *(_QWORD *)(a2 + 112);
  v8 = 0;
  v9 = 0LL;
  v10 = a4;
  if ( v7 )
    v9 = *(CVisual **)(v7 + 16);
  v11 = 0LL;
  v51 = 0LL;
  if ( !v9 )
    goto LABEL_28;
  while ( 1 )
  {
    InteractionInternal = CVisual::GetInteractionInternal(v9);
    v13 = InteractionInternal;
    if ( InteractionInternal )
      break;
LABEL_27:
    v9 = (CVisual *)*((_QWORD *)v9 + 11);
    if ( !v9 )
      goto LABEL_28;
  }
  v14 = *((_BYTE *)InteractionInternal + 192);
  *a7 |= (v14 & 3) != 0;
  v15 = *((_DWORD *)InteractionInternal + 49) == 2;
  *((_BYTE *)InteractionInternal + 192) = v14 & 0xFD;
  v8 |= v15;
  if ( !v11 )
  {
    if ( !v8 )
    {
      v18 = (unsigned int)CInteraction::GetTotalNumContacts(InteractionInternal) ? v16 >> 5 : v16 >> 4;
      if ( (v18 & v17) != 0 )
        goto LABEL_26;
    }
    if ( CInteraction::IsStrictlyHoverPointerSource(v13) )
      goto LABEL_26;
    v11 = v13;
    v51 = v13;
  }
  if ( (_DWORD)v10 == 4
    && (*(unsigned int (__fastcall **)(_QWORD *, __int64, _QWORD))(*((_QWORD *)v11 + 8) + 80LL))(
         (_QWORD *)v11 + 8,
         4LL,
         0LL)
    && (*(unsigned int (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*((_QWORD *)v11 + 8) + 88LL))(
         (_QWORD *)v11 + 8,
         4LL,
         0x20000000LL,
         0LL) )
  {
    for ( i = (CVisual *)*((_QWORD *)v9 + 11); i; i = (CVisual *)*((_QWORD *)i + 11) )
    {
      v20 = CVisual::GetInteractionInternal(i);
      v21 = v20;
      if ( v20
        && (*(unsigned int (__fastcall **)(__int64, __int64))(*((_QWORD *)v20 + 8) + 80LL))((__int64)v20 + 64, 4LL) )
      {
        v22 = *((_QWORD *)v21 + 13);
        if ( v22 )
        {
          v23 = CManipulationManager::s_needsStopAndEndInertia;
          if ( *(_QWORD *)(v22 + 64) )
            v23 = 1;
          CManipulationManager::s_needsStopAndEndInertia = v23;
        }
        break;
      }
    }
  }
LABEL_26:
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)v13 + 8) + 80LL))(
          (__int64)v13 + 64,
          (unsigned int)v10,
          0LL) )
    goto LABEL_27;
  if ( !v8 )
  {
    v15 = (unsigned int)CInteraction::GetTotalNumContacts(v13) == 0;
    v29 = *((_BYTE *)v13 + 192);
    v30 = v15 ? v29 >> 4 : v29 >> 5;
    if ( (v30 & 1) != 0 )
    {
      v24 = 0;
      v51 = v13;
      v25 = 0;
      v11 = v13;
      goto LABEL_29;
    }
  }
LABEL_28:
  v24 = 0;
  v25 = 0;
  v26 = v11;
  if ( !v11 )
    goto LABEL_80;
LABEL_29:
  v27 = *((_QWORD *)v11 + 14);
  v28 = 0LL;
  if ( v27 )
    v28 = *(_QWORD *)(v27 + 16);
  while ( 2 )
  {
    if ( v28 )
    {
      *(_BYTE *)(v28 + 101) |= 0x40u;
      v31 = CVisual::GetInteractionInternal((CVisual *)v28);
      v32 = v31;
      if ( !v31 )
      {
LABEL_50:
        v28 = *(_QWORD *)(v28 + 88);
        continue;
      }
      if ( *((_DWORD *)v31 + 49) == 2 )
      {
        v24 = 1;
        v25 = 0;
      }
      else if ( !v24 || v25 )
      {
        v33 = 0;
LABEL_45:
        CInteraction::UpdateDefaultInteractionForCurrentMC(v31, v33);
        if ( v24
          && (*((_BYTE *)v32 + 192) & 0x10) != 0
          && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)v32 + 8) + 80LL))(
               (__int64)v32 + 64,
               (unsigned int)v10,
               0LL) )
        {
          v25 = 1;
        }
        v34 = *((_BYTE *)v32 + 192);
        *a7 |= (v34 & 3) != 0;
        *((_BYTE *)v32 + 192) = v34 & 0xFD;
        goto LABEL_50;
      }
      v33 = 1;
      goto LABEL_45;
    }
    break;
  }
  v35 = v10 - 1;
  v26 = v11;
  v36 = (unsigned int)(v10 - 1);
  if ( (int)v10 - 1 < 0 || v35 >= 6 )
    v36 = 0LL;
  ++*((_DWORD *)v11 + v36 + 62);
  VisualEffectiveParentImpl = 0LL;
  v38 = *((_QWORD *)v11 + 14);
  if ( v38 )
    VisualEffectiveParentImpl = *(struct CVisual **)(v38 + 16);
  if ( VisualEffectiveParentImpl )
  {
    v40 = a1;
    if ( (unsigned int)CInteraction::GetTotalNumContacts(v11) == 1 )
      CManipulationContext::OnVisualPropertyChange(VisualEffectiveParentImpl, a1);
    VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v39);
  }
  else
  {
    v40 = a1;
  }
  v41 = 0;
  if ( VisualEffectiveParentImpl )
  {
    do
    {
      v42 = CVisual::GetInteractionInternal(VisualEffectiveParentImpl);
      v44 = v42;
      if ( v42 )
      {
        if ( !v41 )
        {
          v45 = (CInteraction *)*((_QWORD *)v42 + 30);
          if ( v45 )
          {
            if ( v45 != v26 )
            {
              v46 = *((_QWORD *)v26 + 29);
              if ( v46 )
                *(_QWORD *)(v46 + 224) = *((_QWORD *)v26 + 28);
              v47 = *((_QWORD *)v26 + 28);
              if ( v47 )
                *(_QWORD *)(v47 + 232) = *((_QWORD *)v26 + 29);
              *((_QWORD *)v26 + 29) = 0LL;
              *((_QWORD *)v26 + 28) = v45;
              *((_QWORD *)v45 + 29) = v26;
            }
            v41 = 1;
          }
        }
        *((_QWORD *)v42 + 30) = v26;
        v48 = v10 - 1;
        *((_QWORD *)v26 + 27) = v44;
        if ( v35 >= 6 )
          v48 = 0LL;
        ++*((_DWORD *)v44 + v48 + 62);
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v44) == 1 )
          CManipulationContext::OnVisualPropertyChange(VisualEffectiveParentImpl, v40);
        v26 = v44;
      }
      VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v43);
    }
    while ( VisualEffectiveParentImpl );
    v11 = v51;
  }
LABEL_80:
  Microsoft::WRL::ComPtr<CInteraction>::operator=(a6, (__int64)v26);
  return Microsoft::WRL::ComPtr<CInteraction>::operator=(a6 + 1, (__int64)v11);
}
