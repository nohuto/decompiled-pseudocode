/*
 * XREFs of ?GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180064EB8
 * Callers:
 *     ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x180064A20 (-v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowWrapper::GetBatch(
        WindowWrapper *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !*a2 )
  {
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 37) + 144LL))(
                     *((_QWORD *)this + 37),
                     &v10);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 40LL))(*v4, &v9);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(*(_QWORD *)*v5 + 256LL))(
           *v5,
           *((unsigned int *)this + 92),
           0LL,
           a2);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x19C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v6,
        v7);
      JUMPOUT(0x1801989B8LL);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
