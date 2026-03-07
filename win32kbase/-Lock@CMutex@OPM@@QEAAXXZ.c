void __fastcall OPM::CMutex::Lock(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    KeWaitForSingleObject(v1, Executive, 0, 0, 0LL);
}
