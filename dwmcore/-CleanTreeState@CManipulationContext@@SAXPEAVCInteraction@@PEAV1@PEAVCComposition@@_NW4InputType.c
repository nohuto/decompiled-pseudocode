void __fastcall CManipulationContext::CleanTreeState(__int64 a1, __int64 a2, RTL_SRWLOCK *a3, char a4, int a5)
{
  _QWORD *v6; // rbx
  bool *v10; // rdx
  char v11; // bp
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  const struct CVisual *VisualEffectiveParentImpl; // rdi
  char v18; // si
  _QWORD *v19; // [rsp+60h] [rbp+8h] BYREF
  char v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v19 = (_QWORD *)a1;
  v6 = (_QWORD *)a1;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v19);
  v11 = 1;
  if ( !a4 )
    CManipulationManager::LockComposition((struct CComposition *)a3, 1);
  v12 = a5;
  while ( v6 )
  {
    v13 = v6[27];
    v14 = v12 - 1;
    if ( (unsigned int)(v12 - 1) >= 6 )
      v14 = 0LL;
    --*((_DWORD *)v6 + v14 + 62);
    if ( !(unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v6) )
    {
      CManipulationContext::RemoveInteractionLeafFromTree((struct CInteraction *)v6);
      if ( a2 )
      {
        v15 = *(_QWORD **)(a2 + 48);
        if ( v6 == v15 )
        {
          if ( v15 )
          {
            *(_QWORD *)(a2 + 48) = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v19, v13);
    v6 = v19;
  }
  if ( a1 )
  {
    v16 = *(_QWORD *)(a1 + 112);
    VisualEffectiveParentImpl = 0LL;
    if ( v16 )
      VisualEffectiveParentImpl = *(const struct CVisual **)(v16 + 16);
    for ( ;
          VisualEffectiveParentImpl;
          VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v10) )
    {
      if ( v11 )
      {
        v18 = *((_BYTE *)VisualEffectiveParentImpl + 101);
        if ( (v18 & 0x40) == 0
          || CManipulationContext::VisualHasActiveInteraction(VisualEffectiveParentImpl, 0)
          || CManipulationContext::VisualHasAnyChildFlagged(VisualEffectiveParentImpl) )
        {
          v11 = 0;
        }
        else
        {
          *((_BYTE *)VisualEffectiveParentImpl + 101) = v18 & 0xBF;
        }
      }
    }
  }
  if ( !v20 )
    ReleaseSRWLockShared(a3 + 84);
}
