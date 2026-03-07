__int64 __fastcall FlipManagerObject::OpenEndpoint(FlipManagerObject *this, unsigned __int8 a2, void **a3, void **a4)
{
  int v5; // ebp
  NTSTATUS Handle; // ebx
  __int64 v9; // r8

  v5 = a2;
  Handle = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( Handle >= 0 )
  {
    Handle = DxgkCompositionObject::CreateHandle(this, v5 + 1, v9, 0, a3);
    if ( Handle >= 0 )
      Handle = CFlipManager::OpenEndpoint((FlipManagerObject *)((char *)this + 32), v5, a4);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)Handle;
}
