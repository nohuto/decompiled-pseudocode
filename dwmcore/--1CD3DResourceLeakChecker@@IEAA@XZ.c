/*
 * XREFs of ??1CD3DResourceLeakChecker@@IEAA@XZ @ 0x1800EE220
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800EDCB4 (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CD3DResourceLeakChecker::~CD3DResourceLeakChecker(CD3DResourceLeakChecker *this)
{
  __int64 v1; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1) )
    {
      DebugBreak();
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
}
