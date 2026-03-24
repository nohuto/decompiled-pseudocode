/*
 * XREFs of ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1802345A0
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18004DE8C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A0360 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180224A2C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x180234040 (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180234104 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x180234350 (-GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x1802347B0 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 */

char __fastcall CManipulationContext::InvalidateMCs(
        __int64 a1,
        CVisual **a2,
        const struct CInteraction *a3,
        int a4,
        _DWORD *a5)
{
  struct CInteraction *ManipulationContext; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  const struct CInteraction *MCRoot; // rax
  int *v12; // r8
  char v13; // cl
  struct CManipulationContext *v14; // r14
  const struct CInteraction *v15; // rbx
  bool *v16; // rdx
  const struct CVisual *v17; // r10
  bool *v18; // rdx
  const struct CInteraction *v19; // rax
  int *v20; // r8
  struct CManipulationContext *v21; // rax
  char v22; // al
  __int64 v23; // rax
  const struct CVisual *v24; // rcx
  int v25; // r14d
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx

  LODWORD(ManipulationContext) = *(_DWORD *)(a1 + 32);
  if ( *a5 == (_DWORD)ManipulationContext )
    return (char)ManipulationContext;
  if ( a4 )
  {
    if ( a4 != 1 )
    {
      if ( a4 <= 1 || a4 > 3 )
        return (char)ManipulationContext;
      goto LABEL_6;
    }
    if ( !a3 || (*((_BYTE *)a3 + 184) & 8) != 0 )
    {
LABEL_6:
      v8 = 0;
      if ( (int)ManipulationContext > 0 )
      {
        v9 = 0LL;
        do
        {
          ManipulationContext = *(struct CInteraction **)(a1 + 24);
          v10 = *(_QWORD *)((char *)ManipulationContext + v9);
          if ( v10 )
          {
            LOBYTE(ManipulationContext) = *(_BYTE *)(v10 + 28);
            if ( ((unsigned __int8)ManipulationContext & 4) == 0 )
            {
              LOBYTE(ManipulationContext) = (unsigned __int8)ManipulationContext | 4;
              *(_BYTE *)(v10 + 28) = (_BYTE)ManipulationContext;
              ++*a5;
            }
          }
          ++v8;
          v9 += 8LL;
        }
        while ( v8 < *(_DWORD *)(a1 + 32) );
      }
      return (char)ManipulationContext;
    }
    MCRoot = CManipulationContext::GetMCRoot(a3);
    ManipulationContext = CManipulationContext::FindManipulationContext((const struct MCCollections *)a1, MCRoot, v12);
    if ( ManipulationContext )
    {
      v13 = *((_BYTE *)ManipulationContext + 28);
      if ( (v13 & 4) == 0 )
      {
        *((_BYTE *)ManipulationContext + 28) = v13 | 4;
        ++*a5;
      }
    }
  }
  else if ( a2 )
  {
    v14 = 0LL;
    ManipulationContext = CVisual::GetInteractionInternal((CVisual *)a2);
    v15 = ManipulationContext;
    if ( !ManipulationContext )
      goto LABEL_34;
    if ( (*((_BYTE *)ManipulationContext + 184) & 8) != 0 && a2[10] )
    {
      ManipulationContext = CVisual::GetInteractionInternal(a2[10]);
      v15 = ManipulationContext;
      if ( ManipulationContext )
        goto LABEL_25;
      ManipulationContext = CManipulationContext::GetClosestInteractionAncestor(v17, v16);
      v15 = ManipulationContext;
    }
    if ( v15 )
    {
LABEL_25:
      while ( !v14 )
      {
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v15) )
        {
          v19 = CManipulationContext::GetMCRoot(v15);
          v21 = CManipulationContext::FindManipulationContext((const struct MCCollections *)a1, v19, v20);
          v14 = v21;
          if ( v21 )
          {
            v22 = *((_BYTE *)v21 + 28);
            if ( (v22 & 4) == 0 )
            {
              *((_BYTE *)v14 + 28) = v22 | 4;
              ++*a5;
            }
          }
        }
        v23 = *((_QWORD *)v15 + 13);
        v24 = 0LL;
        if ( v23 )
          v24 = *(const struct CVisual **)(v23 + 16);
        ManipulationContext = CManipulationContext::GetClosestInteractionAncestor(v24, v18);
        v15 = ManipulationContext;
        if ( !ManipulationContext )
        {
          if ( v14 )
            return (char)ManipulationContext;
          goto LABEL_34;
        }
      }
    }
    else
    {
LABEL_34:
      v25 = 0;
      if ( *(int *)(a1 + 32) > 0 )
      {
        v26 = 0LL;
        do
        {
          ManipulationContext = *(struct CInteraction **)(a1 + 24);
          v27 = *(_QWORD *)((char *)ManipulationContext + v26);
          if ( (*(_BYTE *)(v27 + 28) & 4) == 0 )
          {
            LOBYTE(ManipulationContext) = CManipulationContext::IsInteractionDescendantOfVisual(
                                            *(const struct CInteraction **)(v27 + 48),
                                            (const struct CVisual *)a2);
            if ( (_BYTE)ManipulationContext )
            {
              ManipulationContext = *(struct CInteraction **)(a1 + 24);
              v28 = *(_QWORD *)((char *)ManipulationContext + v26);
              if ( v28 )
              {
                LOBYTE(ManipulationContext) = *(_BYTE *)(v28 + 28);
                if ( ((unsigned __int8)ManipulationContext & 4) == 0 )
                {
                  LOBYTE(ManipulationContext) = (unsigned __int8)ManipulationContext | 4;
                  *(_BYTE *)(v28 + 28) = (_BYTE)ManipulationContext;
                  ++*a5;
                }
              }
            }
          }
          ++v25;
          v26 += 8LL;
        }
        while ( v25 < *(_DWORD *)(a1 + 32) );
      }
    }
  }
  return (char)ManipulationContext;
}
