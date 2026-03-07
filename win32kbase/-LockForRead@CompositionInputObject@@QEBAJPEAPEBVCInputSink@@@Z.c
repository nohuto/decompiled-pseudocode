__int64 __fastcall CompositionInputObject::LockForRead(CompositionInputObject *this, const struct CInputSink **a2)
{
  NTSTATUS v4; // r8d

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(this, 3u, ExCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 32, 0LL);
    v4 = 0;
    *a2 = (CompositionInputObject *)((char *)this + 24);
  }
  return (unsigned int)v4;
}
