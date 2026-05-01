/*
 * XREFs of ??_ECClassicWindowActivationBasedCollection@@UEAAPEAXI@Z @ 0x1801D2650
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CClassicWindowActivationBasedCollection *__fastcall CClassicWindowActivationBasedCollection::`vector deleting destructor'(
        CClassicWindowActivationBasedCollection *this,
        char a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  *(_QWORD *)this = &CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::`vftable';
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 2) )
    {
      do
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(*((_QWORD *)this + 1)
                                                                                               + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 2) );
      v4 = (void *)*((_QWORD *)this + 1);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
