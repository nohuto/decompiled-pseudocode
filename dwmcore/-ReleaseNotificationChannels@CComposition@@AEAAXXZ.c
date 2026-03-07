void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 v1; // rsi
  char *i; // rbx

  v1 = 0LL;
  for ( i = (char *)this + 544; (unsigned int)v1 < *((_DWORD *)this + 142); v1 = (unsigned int)(v1 + 1) )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(*(volatile signed __int32 **)(*(_QWORD *)i + 8 * v1));
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)i, 8u);
}
