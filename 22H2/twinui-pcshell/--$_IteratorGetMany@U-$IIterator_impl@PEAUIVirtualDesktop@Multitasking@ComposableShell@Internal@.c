/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@123@IPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@3@PEAI@Z @ 0x1803B13AC
 * Callers:
 *     ?GetMany@?$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x1803B2280 (-GetMany@-$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00.c)
 * Callees:
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_Cleanup@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@3@I@Z @ 0x1801B4EAC (--$_Cleanup@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@I@Detail@Collections@Founda.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,1>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
    goto LABEL_8;
  do
  {
    if ( !v11 || (unsigned int)v8 >= a2 )
      break;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &a3[v8]);
    if ( v9 < 0 )
      goto LABEL_8;
    v8 = (unsigned int)(v8 + 1);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
  }
  while ( v9 >= 0 );
  if ( v9 < 0 )
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion,unsigned int>(
      a3,
      *a4);
  else
    *a4 = v8;
  return (unsigned int)v9;
}
