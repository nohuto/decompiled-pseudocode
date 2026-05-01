/*
 * XREFs of _lambda_6ee4989f9139f581a42397e10829ce1f_::operator() @ 0x1801CE314
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801CEC80 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_6ee4989f9139f581a42397e10829ce1f_::operator()(unsigned int *a1, __int64 a2)
{
  char v4; // bp
  void (__fastcall *v5)(__int64, struct IUnknown **); // rbx
  struct IUnknown *v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2);
  if ( (v4 & 1) != 0 )
  {
    if ( !*((_QWORD *)a1 + 1)
      || (v7 = 0LL,
          v5 = *(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)a2 + 464LL),
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7),
          v5(a2, &v7),
          LOBYTE(v5) = (unsigned int)SHIsSameObject(*((struct IUnknown **)a1 + 1), v7) != 0,
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7),
          (_BYTE)v5) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)a2 + 264LL))(
             a2,
             a1[1],
             *a1,
             0LL,
             0)
        && (v4 & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 2) + 64LL))(*((_QWORD *)a1 + 2), a2);
      }
    }
  }
  return 1;
}
