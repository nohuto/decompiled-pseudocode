__int64 __fastcall CMILCOMBaseWeakRef::InternalRelease(CMILCOMBaseWeakRef *this)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 2));
    v3 = v1 + 16;
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 16));
  }
  else
  {
    v3 = 16LL;
  }
  v4 = CMILRefCountBaseT<IUnknownWeakRefSource>::InternalRelease(this);
  if ( v1 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return v4;
}
