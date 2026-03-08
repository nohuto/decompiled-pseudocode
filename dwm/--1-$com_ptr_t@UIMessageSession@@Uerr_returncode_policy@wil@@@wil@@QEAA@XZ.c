/*
 * XREFs of ??1?$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000A8CC
 * Callers:
 *     ??1HotKeyCallback@@UEAA@XZ @ 0x14000A8FC (--1HotKeyCallback@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140007200 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IMessageSession,wil::err_returncode_policy>::~com_ptr_t<IMessageSession,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
