__int64 __fastcall CFlipManager::RemovePoolBuffer(CFlipManager *this, unsigned __int64 a2)
{
  unsigned int v3; // ebx
  struct CFlipResourceState *ResourceState; // rdi
  struct DXGGLOBAL *Global; // rax

  v3 = 0;
  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 56));
  if ( ResourceState )
  {
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38069) + 248LL))(
      *((unsigned int *)this + 83),
      *((_QWORD *)ResourceState + 3));
    CEndpointResourceStateManager::RemovePoolBufferState((CFlipManager *)((char *)this + 56), ResourceState);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
