void __fastcall UmfdHostLifeTimeManager::SessionUninitialize(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 32);
  v2 = (void *)v1[2941];
  if ( v2 )
  {
    Win32FreePool(v2);
    v1[2941] = 0LL;
  }
  v3 = (void *)v1[2944];
  if ( v3 )
  {
    Win32FreePool(v3);
    v1[2944] = 0LL;
  }
  v4 = (void *)v1[2946];
  if ( v4 )
  {
    Win32FreePool(v4);
    v1[2946] = 0LL;
  }
  v5 = (void *)v1[2947];
  if ( v5 )
  {
    Win32FreePool(v5);
    v1[2947] = 0LL;
  }
}
