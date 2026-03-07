__int64 __fastcall CManipulationContext::OnHoverContact(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  struct CInteraction *v5; // rbx
  unsigned int v7; // edi
  unsigned int v9; // esi
  struct CInteraction *v10; // rdi
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64 *, __int64, struct CVisualTree **); // r12
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r14
  CVisual *v17; // r14
  struct CInteraction *InteractionInternal; // rax
  unsigned int Key; // eax
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  struct CVisual *v25; // rcx
  __int64 v26; // rcx
  unsigned int v28; // [rsp+20h] [rbp-30h]
  struct CInteraction *v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h]
  __int64 v31[2]; // [rsp+40h] [rbp-10h] BYREF
  struct CVisualTree *v32; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+A0h] [rbp+50h] BYREF

  v33 = a3;
  v5 = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  v7 = a3;
  v9 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a2 + 64) + 80LL))(a2 + 64, a4, 0LL) )
  {
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v29, a2);
    v5 = v29;
  }
  else
  {
    v10 = 0LL;
    v11 = *(__int64 **)(a1 + 40);
    LODWORD(v30) = *(_DWORD *)(a2 + 1720);
    v31[0] = 0LL;
    v12 = *v11;
    HIDWORD(v30) = -2;
    v13 = *(__int64 (__fastcall **)(__int64 *, __int64, struct CVisualTree **))(v12 + 56);
    if ( v32 )
      CResource::InternalRelease(v32);
    v14 = v13(v11, v30, &v32);
    v9 = v14;
    if ( v14 < 0 )
    {
      v28 = 145;
      goto LABEL_34;
    }
    CManipulationManager::LockTree(v32, 1);
    v16 = *(_QWORD *)(a2 + 112);
    if ( v16 )
    {
      v17 = *(CVisual **)(v16 + 16);
      if ( v17 )
      {
        while ( 1 )
        {
          v17 = (CVisual *)*((_QWORD *)v17 + 11);
          if ( !v17 )
            break;
          InteractionInternal = CVisual::GetInteractionInternal(v17);
          Microsoft::WRL::ComPtr<CInteraction>::operator=(v31, (__int64)InteractionInternal);
          v10 = (struct CInteraction *)v31[0];
          if ( v31[0]
            && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v31[0] + 64) + 80LL))(
                 v31[0] + 64,
                 a4,
                 0LL) )
          {
            if ( !v10 )
              goto LABEL_17;
            v31[0] = (__int64)v10;
            Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v31);
            v5 = v10;
            v29 = v10;
            break;
          }
        }
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_17:
    v7 = v33;
  }
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          a1 + 56,
          (int *)&v33);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v20,
                          (__int64)&v33,
                          (__int64)&v29) )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0xB9u, 0LL);
      goto LABEL_35;
    }
  }
  else
  {
    if ( *(struct CInteraction **)(*(_QWORD *)(a1 + 64) + 8LL * (int)Key) == v5 )
      goto LABEL_35;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v20,
      Key,
      &v33,
      &v29);
  }
  InputTraceLogging::GestureTargeting::SetInteractionChain(v7, v5);
  if ( v5 )
  {
    v21 = *((_QWORD *)v5 + 14);
    if ( v21 )
    {
      if ( *(_QWORD *)(v21 + 16) )
      {
        if ( v32 )
        {
LABEL_27:
          v24 = *((_QWORD *)v5 + 14);
          if ( v24 )
          {
            v25 = *(struct CVisual **)(v24 + 16);
            if ( v25 )
              CManipulationContext::OnVisualPropertyChange(v25, v32);
          }
          goto LABEL_35;
        }
        v22 = *(__int64 **)(a1 + 40);
        LODWORD(v31[0]) = *((_DWORD *)v5 + 430);
        HIDWORD(v31[0]) = -2;
        v23 = *v22;
        v32 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct CVisualTree **))(v23 + 56))(v22, v31[0], &v32);
        v9 = v14;
        if ( v14 >= 0 )
        {
          CManipulationManager::LockTree(v32, 1);
          goto LABEL_27;
        }
        v28 = 204;
LABEL_34:
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v28, 0LL);
      }
    }
  }
LABEL_35:
  if ( v32 )
    CManipulationManager::LockTree(v32, 0);
  if ( v5 )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v32 )
    CResource::InternalRelease(v32);
  return v9;
}
