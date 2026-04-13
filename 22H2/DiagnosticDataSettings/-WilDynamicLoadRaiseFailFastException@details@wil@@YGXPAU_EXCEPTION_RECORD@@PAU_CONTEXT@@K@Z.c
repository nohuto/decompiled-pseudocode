/*
 * XREFs of ?WilDynamicLoadRaiseFailFastException@details@wil@@YGXPAU_EXCEPTION_RECORD@@PAU_CONTEXT@@K@Z @ 0x100021A0
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 */

void __stdcall wil::details::WilDynamicLoadRaiseFailFastException(
        wil::details *this,
        struct _EXCEPTION_RECORD *a2,
        struct _CONTEXT *a3,
        unsigned int a4)
{
  HMODULE ModuleHandleW; // eax
  void (__stdcall *RaiseFailFastException)(PEXCEPTION_RECORD, PCONTEXT, DWORD); // eax

  ModuleHandleW = GetModuleHandleW(L"kernelbase.dll");
  RaiseFailFastException = (void (__stdcall *)(PEXCEPTION_RECORD, PCONTEXT, DWORD))GetProcAddress(
                                                                                     ModuleHandleW,
                                                                                     "RaiseFailFastException");
  if ( RaiseFailFastException )
    ((void (__thiscall *)(void (__stdcall *)(PEXCEPTION_RECORD, PCONTEXT, DWORD), wil::details *, struct _EXCEPTION_RECORD *, struct _CONTEXT *))RaiseFailFastException)(
      RaiseFailFastException,
      this,
      a2,
      a3);
}
