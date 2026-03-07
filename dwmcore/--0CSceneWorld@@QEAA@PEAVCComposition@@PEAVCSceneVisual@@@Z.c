CSceneWorld *__fastcall CSceneWorld::CSceneWorld(CSceneWorld *this, struct CComposition *a2, struct CSceneVisual *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r10
  _DWORD *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rdi
  CCompositionEnvironmentLight *v11; // rax
  CCompositionEnvironmentLight *v12; // rax
  __int64 v13; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 8) = &CSceneWorld::`vbtable'{for `CContent'};
  *((_QWORD *)this + 25) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 24) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 25) + 4LL) + 200) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)this = &CSceneWorld::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CSceneWorld::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CSceneWorld::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CSceneWorld::`vftable'{for `IContent'};
  v5 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v5 + 60) = v5 - 112;
  v6 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v6 + 60) = v6 - 128;
  *((_QWORD *)this + 10) = v7;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 160) = 0;
  v8 = CParticleVector2Behavior::operator new();
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 0;
    *((_QWORD *)v8 + 2) = a2;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 5) = 0LL;
    v8[8] = 0;
    *((_QWORD *)v8 + 9) = 0LL;
    *((_QWORD *)v8 + 10) = 0LL;
    *((_QWORD *)v8 + 11) = 0LL;
    *((_QWORD *)v8 + 12) = 0LL;
    *((_QWORD *)v8 + 13) = 0LL;
    *((_QWORD *)v8 + 14) = 0LL;
    *(_QWORD *)v8 = &CSceneNode::`vftable';
    *((_QWORD *)v8 + 17) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = v9;
  if ( v9 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (CCompositionEnvironmentLight *)DefaultHeap::AllocClear(0x170uLL);
  if ( !v11 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v12 = CCompositionEnvironmentLight::CCompositionEnvironmentLight(v11, a2);
  v13 = *((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = v12;
  if ( v12 )
    (*(void (__fastcall **)(CCompositionEnvironmentLight *))(*(_QWORD *)v12 + 8LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (CSceneWorld *)((char *)this + 72));
  return this;
}
