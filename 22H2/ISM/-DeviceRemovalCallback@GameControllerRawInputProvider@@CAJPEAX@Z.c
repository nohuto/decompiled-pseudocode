/*
 * XREFs of ?DeviceRemovalCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x180088860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GameControllerRawInputProvider::DeviceRemovalCallback(char *a1)
{
  int v2; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GameControllerRawInputProvider::s_instance
    && (v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)GameControllerRawInputProvider::s_instance + 5)
                                                       + 56LL))(
               *((_QWORD *)GameControllerRawInputProvider::s_instance + 5),
               a1 + 16),
        v3 = v2,
        v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x276,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v2);
    if ( a1 )
      operator delete(a1, (const struct std::nothrow_t *)0x20);
    return v3;
  }
  else
  {
    if ( a1 )
      operator delete(a1, (const struct std::nothrow_t *)0x20);
    return 0LL;
  }
}
