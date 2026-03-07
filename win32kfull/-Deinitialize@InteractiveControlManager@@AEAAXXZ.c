void __fastcall InteractiveControlManager::Deinitialize(InteractiveControlManager *this)
{
  struct InteractiveControlDevice **v2; // rbx
  __int64 v3; // rsi
  InteractiveControlManager *v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v2 = (struct InteractiveControlDevice **)((char *)this + 40);
  v3 = 5LL;
  do
  {
    if ( *v2 )
      InteractiveControlManager::RemoveDevice(this, *v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  v5 = 0LL;
  v4 = (InteractiveControlManager *)((char *)this + 16);
  HMAssignmentLock(&v4, 0LL);
  v5 = 0LL;
  v4 = this;
  HMAssignmentLock(&v4, 0LL);
}
