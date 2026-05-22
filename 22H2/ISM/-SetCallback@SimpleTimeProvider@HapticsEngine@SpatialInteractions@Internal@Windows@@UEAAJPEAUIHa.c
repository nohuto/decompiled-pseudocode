/*
 * XREFs of ?SetCallback@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJPEAUIHapticsTimerCallback@345@@Z @ 0x18016EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::SetCallback(
        Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *this,
        struct Windows::Internal::SpatialInteractions::IHapticsTimerCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  struct Windows::Internal::SpatialInteractions::IHapticsTimerCallback *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  if ( *((struct Windows::Internal::SpatialInteractions::IHapticsTimerCallback **)this + 9) != a2 )
  {
    v7 = a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v7);
    v5 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
