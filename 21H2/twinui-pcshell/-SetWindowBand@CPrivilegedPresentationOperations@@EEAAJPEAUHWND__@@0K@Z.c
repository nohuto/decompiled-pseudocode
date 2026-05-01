/*
 * XREFs of ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x18006DA60
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095340 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801AA5F4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801BD6F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801BD6F0.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowBand(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        HWND a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v4; // rbx
  wil::details *v8; // rcx
  unsigned int LastErrorFailHr; // edi
  volatile int *v10; // rdx

  v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(*((_QWORD *)this + 6));
  AcquireSRWLockExclusive(v4 + 6);
  EnableIAMAccess(v4[5].Ptr, 1LL);
  if ( (unsigned int)SetWindowBand(a2, a3, a4) )
    LastErrorFailHr = 0;
  else
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v8);
  EnableIAMAccess(v4[5].Ptr, 0LL);
  ReleaseSRWLockExclusive(v4 + 6);
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)&v4[4].Ptr + 4), v10) )
  {
    (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v4->Ptr + 9))(v4, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return LastErrorFailHr;
}
