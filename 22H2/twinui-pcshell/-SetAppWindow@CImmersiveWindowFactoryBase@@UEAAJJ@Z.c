/*
 * XREFs of ?SetAppWindow@CImmersiveWindowFactoryBase@@UEAAJJ@Z @ 0x1804F5A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::SetAppWindow(CImmersiveWindowFactoryBase *this, int a2)
{
  bool v3; // zf

  v3 = *((_DWORD *)this + 7) == 0;
  *((_QWORD *)this + 2) = a2;
  if ( !v3 )
    SetPropW((HWND)a2, L"Microsoft.Windows.WindowFactory.ExtraData", (HANDLE)*((unsigned int *)this + 7));
  if ( *((_DWORD *)this + 8) )
    SetPropW(*((HWND *)this + 2), L"Microsoft.Windows.WindowFactory.ViewId", (HANDLE)*((unsigned int *)this + 8));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 10) + 88LL))((char *)this - 80);
  return 0LL;
}
