CD2DBitmapCache *__fastcall CD2DBitmapCache::CD2DBitmapCache(CD2DBitmapCache *this, int a2)
{
  char *v2; // r9
  CD2DBitmapCache *result; // rax

  v2 = (char *)this + 16;
  if ( a2 )
    *(_QWORD *)v2 = &CD2DBitmapCache::`vbtable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v2 + 4LL) + 16) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  result = this;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v2 + 4LL) + 12) = *(_DWORD *)(*(_QWORD *)v2 + 4LL) - 72;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  return result;
}
