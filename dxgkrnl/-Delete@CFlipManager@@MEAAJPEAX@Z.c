__int64 __fastcall CFlipManager::Delete(CFlipManager *this, void *a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  struct DXGGLOBAL *Global; // rax

  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 28);
  if ( v3 )
  {
    (**v3)(v3, 1LL);
    *((_QWORD *)this + 28) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 36);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)this + 36) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 37);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 37) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 40);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)this + 40) = 0LL;
  }
  CFlipManager::FreeCurrentUpdates(this);
  CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 56));
  CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 104));
  CFlipManager::FreeQueuedUpdates(this);
  CFlipManager::FreeCancels(this);
  v7 = (void *)*((_QWORD *)this + 38);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *((_QWORD *)this + 38) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 3);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)this + 3) = 0LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38069) + 328LL))(*((unsigned int *)this + 83));
  return 0LL;
}
