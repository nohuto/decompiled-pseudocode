__int64 __fastcall CTokenManager::CompleteIndependentFlipToken(
        CTokenManager *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        unsigned int a4)
{
  __int64 v7; // r8
  int v8; // r13d
  void *v9; // rcx
  bool IsVBlankVirtualizationDisabled; // al
  __int64 v11; // rax
  UINT v12; // r8d
  LUID compSurfLuid; // rdx
  CTokenQueue *v14; // r14
  int v15; // eax
  unsigned int v16; // r12d
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  void (__fastcall *v20)(_QWORD, _QWORD, __int64, __int64); // rsi
  unsigned int v21; // eax
  LONG PreviousState[2]; // [rsp+30h] [rbp-59h] BYREF
  PVOID Object; // [rsp+38h] [rbp-51h] BYREF
  UINT PresentCount; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-45h]
  unsigned int v27; // [rsp+48h] [rbp-41h]
  int v28; // [rsp+4Ch] [rbp-3Dh]
  __int64 v29; // [rsp+50h] [rbp-39h]
  __int64 v30; // [rsp+58h] [rbp-31h]
  HANDLE Handle; // [rsp+60h] [rbp-29h]
  __int128 v32; // [rsp+68h] [rbp-21h]
  __int128 v33; // [rsp+78h] [rbp-11h]
  unsigned int v34[4]; // [rsp+88h] [rbp-1h]
  __int64 v35; // [rsp+98h] [rbp+Fh]

  Handle = (HANDLE)a3->hCompSurf;
  v35 = 0LL;
  Object = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  *(_OWORD *)v34 = 0LL;
  DxgkGetPresentStats(a4);
  v8 = CompositionSurfaceObject::ResolveHandle(Handle, 2u, v7, (struct CompositionSurfaceObject **)&Object);
  if ( v8 >= 0 )
  {
    *(_QWORD *)PreviousState = 0LL;
    if ( (int)CTokenManager::FindTokenQueue(
                this,
                (struct CompositionSurfaceObject *)Object,
                (struct CTokenQueue **)PreviousState) >= 0
      && CTokenQueue::CompleteIndependentFlipNotifyToken(*(CTokenQueue **)PreviousState, a2, a3->PresentCount) )
    {
      v9 = (void *)*((_QWORD *)this + 9);
      PreviousState[0] = 0;
      ZwSetEvent(v9, PreviousState);
    }
    v28 = 0;
    IsVBlankVirtualizationDisabled = CompositionSurfaceObject::IsVBlankVirtualizationDisabled(
                                       (CompositionSurfaceObject *)Object,
                                       a2);
    PresentCount = a3->PresentCount;
    if ( IsVBlankVirtualizationDisabled )
    {
      v26 = DWORD2(v32);
      v27 = DWORD2(v33);
      v11 = *(_QWORD *)v34;
    }
    else
    {
      v26 = v34[3];
      v27 = v34[3];
      v11 = v35;
    }
    v29 = v11;
    v30 = v11;
    CompositionSurfaceObject::UpdateStatsForIndependentFlip(
      (CompositionSurfaceObject *)Object,
      a2,
      (const struct DXGI_FRAME_STATISTICS *)&PresentCount,
      v34[2]);
    v12 = a3->PresentCount;
    compSurfLuid = a3->compSurfLuid;
    *(_QWORD *)PreviousState = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, compSurfLuid, v12, (struct CToken **)PreviousState);
    v14 = *(CTokenQueue **)PreviousState;
    if ( *(_QWORD *)PreviousState )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)PreviousState + 136LL))(
              *(_QWORD *)PreviousState,
              DWORD2(v33));
      v16 = v15 + 1;
      if ( v15 != -1 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)Object, v16);
        Global = DXGGLOBAL::GetGlobal();
        v18 = *((_QWORD *)v14 + 5);
        v19 = *(_QWORD *)(*((_QWORD *)v14 + 4) + 24LL);
        v20 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*((_QWORD *)Global + 38069) + 376LL);
        v21 = (*(__int64 (__fastcall **)(CTokenQueue *))(*(_QWORD *)v14 + 112LL))(v14);
        v20(v16, v21, v19, v18);
      }
      (**(void (__fastcall ***)(CTokenQueue *, __int64))v14)(v14, 1LL);
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(Handle, 1);
  }
  return (unsigned int)v8;
}
