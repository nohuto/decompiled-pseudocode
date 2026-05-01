/*
 * XREFs of ?GetWindowingEnvironmentConfig@ApplicationViewOperation@@UEAAJPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x18007ED70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewOperation::GetWindowingEnvironmentConfig(
        ApplicationViewOperation *this,
        struct IWindowingEnvironmentConfig **a2)
{
  __int64 v3; // rcx

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 23);
  if ( !v3 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *a2 = (struct IWindowingEnvironmentConfig *)*((_QWORD *)this + 23);
  return 0LL;
}
