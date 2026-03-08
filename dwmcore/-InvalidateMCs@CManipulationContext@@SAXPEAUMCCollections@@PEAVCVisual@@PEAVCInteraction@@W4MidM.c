/*
 * XREFs of ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801A1324
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003263C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A504 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800E80CC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x1801A0E30 (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801A0F10 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x1801A1550 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 */

char __fastcall CManipulationContext::InvalidateMCs(__int64 a1, CVisual **a2, __int64 a3, int a4, _DWORD *a5)
{
  struct CManipulationContext *ManipulationContext; // rax
  int v7; // r10d
  int v9; // r9d
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 i; // rax
  char v14; // cl
  struct CManipulationContext *v15; // rsi
  CInteraction *v16; // rbx
  bool *v17; // rdx
  const struct CVisual *v18; // r10
  bool *v19; // rdx
  int *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  struct CManipulationContext *v23; // rax
  char v24; // al
  __int64 v25; // rax
  const struct CVisual *v26; // rcx
  int v27; // esi
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  ManipulationContext = (struct CManipulationContext *)&retaddr;
  v7 = *(_DWORD *)(a1 + 32);
  if ( *a5 == v7 )
    return (char)ManipulationContext;
  if ( a4 )
  {
    v9 = a4 - 1;
    if ( v9 )
    {
      if ( (unsigned int)(v9 - 1) > 1 )
        return (char)ManipulationContext;
      goto LABEL_5;
    }
    if ( !a3 || (*(_BYTE *)(a3 + 192) & 0x10) != 0 )
    {
LABEL_5:
      v10 = 0;
      if ( v7 > 0 )
      {
        v11 = 0LL;
        do
        {
          ManipulationContext = *(struct CManipulationContext **)(a1 + 24);
          v12 = *(_QWORD *)((char *)ManipulationContext + v11);
          if ( v12 )
          {
            LOBYTE(ManipulationContext) = *(_BYTE *)(v12 + 28);
            if ( ((unsigned __int8)ManipulationContext & 4) == 0 )
            {
              LOBYTE(ManipulationContext) = (unsigned __int8)ManipulationContext | 4;
              *(_BYTE *)(v12 + 28) = (_BYTE)ManipulationContext;
              ++*a5;
            }
          }
          ++v10;
          v11 += 8LL;
        }
        while ( v10 < *(_DWORD *)(a1 + 32) );
      }
      return (char)ManipulationContext;
    }
    for ( i = *(_QWORD *)(a3 + 216); i; i = *(_QWORD *)(i + 216) )
      a3 = i;
    ManipulationContext = CManipulationContext::FindManipulationContext((const struct MCCollections *)a1, a3, (int *)a3);
    if ( ManipulationContext )
    {
      v14 = *((_BYTE *)ManipulationContext + 28);
      if ( (v14 & 4) == 0 )
      {
        *((_BYTE *)ManipulationContext + 28) = v14 | 4;
        ++*a5;
      }
    }
  }
  else if ( a2 )
  {
    v15 = 0LL;
    ManipulationContext = CVisual::GetInteractionInternal((CVisual *)a2);
    v16 = ManipulationContext;
    if ( ManipulationContext
      && ((*((_BYTE *)ManipulationContext + 192) & 0x10) == 0
       || !a2[11]
       || (ManipulationContext = CVisual::GetInteractionInternal(a2[11]), (v16 = ManipulationContext) != 0LL)
       || (ManipulationContext = CManipulationContext::GetClosestInteractionAncestor(v18, v17),
           (v16 = ManipulationContext) != 0LL)) )
    {
      while ( !v15 )
      {
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v16) )
        {
          v21 = *((_QWORD *)v16 + 27);
          v22 = (__int64)v16;
          while ( v21 )
          {
            v22 = v21;
            v21 = *(_QWORD *)(v21 + 216);
          }
          v23 = CManipulationContext::FindManipulationContext((const struct MCCollections *)a1, v22, v20);
          v15 = v23;
          if ( v23 )
          {
            v24 = *((_BYTE *)v23 + 28);
            if ( (v24 & 4) == 0 )
            {
              *((_BYTE *)v15 + 28) = v24 | 4;
              ++*a5;
            }
          }
        }
        v25 = *((_QWORD *)v16 + 14);
        v26 = 0LL;
        if ( v25 )
          v26 = *(const struct CVisual **)(v25 + 16);
        ManipulationContext = CManipulationContext::GetClosestInteractionAncestor(v26, v19);
        v16 = ManipulationContext;
        if ( !ManipulationContext )
        {
          if ( v15 )
            return (char)ManipulationContext;
          goto LABEL_38;
        }
      }
    }
    else
    {
LABEL_38:
      v27 = 0;
      if ( *(int *)(a1 + 32) > 0 )
      {
        v28 = 0LL;
        do
        {
          ManipulationContext = *(struct CManipulationContext **)(a1 + 24);
          v29 = *(_QWORD *)((char *)ManipulationContext + v28);
          if ( (*(_BYTE *)(v29 + 28) & 4) == 0 )
          {
            LOBYTE(ManipulationContext) = CManipulationContext::IsInteractionDescendantOfVisual(
                                            *(const struct CInteraction **)(v29 + 48),
                                            (const struct CVisual *)a2);
            if ( (_BYTE)ManipulationContext )
            {
              ManipulationContext = *(struct CManipulationContext **)(a1 + 24);
              v30 = *(_QWORD *)((char *)ManipulationContext + v28);
              if ( v30 )
              {
                LOBYTE(ManipulationContext) = *(_BYTE *)(v30 + 28);
                if ( ((unsigned __int8)ManipulationContext & 4) == 0 )
                {
                  LOBYTE(ManipulationContext) = (unsigned __int8)ManipulationContext | 4;
                  *(_BYTE *)(v30 + 28) = (_BYTE)ManipulationContext;
                  ++*a5;
                }
              }
            }
          }
          ++v27;
          v28 += 8LL;
        }
        while ( v27 < *(_DWORD *)(a1 + 32) );
      }
    }
  }
  return (char)ManipulationContext;
}
