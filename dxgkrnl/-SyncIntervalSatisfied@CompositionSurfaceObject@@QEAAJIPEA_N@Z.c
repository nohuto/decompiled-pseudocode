__int64 __fastcall CompositionSurfaceObject::SyncIntervalSatisfied(
        CompositionSurfaceObject *this,
        unsigned int a2,
        bool *a3)
{
  int v6; // eax
  bool v7; // r9
  unsigned int v8; // esi
  unsigned int v9; // edx

  *a3 = 1;
  v6 = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48));
  v7 = 0;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( !a2 || (v9 = *((_DWORD *)this + 33)) == 0 || a2 > v9 || v9 - a2 > 4 || *((_QWORD *)this + 18) )
      v7 = 1;
    *a3 = v7;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return v8;
}
