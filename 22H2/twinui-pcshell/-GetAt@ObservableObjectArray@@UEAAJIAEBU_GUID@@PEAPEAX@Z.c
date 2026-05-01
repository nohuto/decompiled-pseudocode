/*
 * XREFs of ?GetAt@ObservableObjectArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18040E3A0
 * Callers:
 *     ?GetAt@SwitchItemFilteredCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180403260 (-GetAt@SwitchItemFilteredCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804041D8 (-_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ObservableObjectArray::GetAt(
        ObservableObjectArray *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall ***v4)(_QWORD, const struct _GUID *, void **); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 8LL * a2);
  v5 = (**v4)(v4, a3, a4);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
