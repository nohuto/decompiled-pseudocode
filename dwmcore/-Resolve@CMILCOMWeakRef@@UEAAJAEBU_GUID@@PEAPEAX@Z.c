__int64 __fastcall CMILCOMWeakRef::Resolve(CMILCOMWeakRef *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v6)(_QWORD, const struct _GUID *, void **); // rcx
  unsigned int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v6 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 7);
  if ( v6 )
  {
    v7 = (**v6)(v6, a2, a3);
  }
  else
  {
    *a3 = 0LL;
    v7 = -2147467261;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v7;
}
