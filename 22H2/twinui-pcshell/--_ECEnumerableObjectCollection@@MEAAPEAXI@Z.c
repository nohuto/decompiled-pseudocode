/*
 * XREFs of ??_ECEnumerableObjectCollection@@MEAAPEAXI@Z @ 0x1800449E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CEnumerableObjectCollection *__fastcall CEnumerableObjectCollection::`vector deleting destructor'(
        CEnumerableObjectCollection *this,
        char a2)
{
  unsigned __int64 i; // rdi
  __int64 v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
  *((_QWORD *)this + 1) = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
  *((_QWORD *)this + 2) = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
  for ( i = 0LL; i < *((_QWORD *)this + 6); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (void *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    CoTaskMemFree(v6);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
