/*
 * XREFs of ??$_Cleanup@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@3@I@Z @ 0x1801B505C
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@PEAUICoreInputViewOcclusion@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUICoreInputViewOcclusion@Core@ViewManagement@UI@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@PEAUICoreInputViewOcclusion@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@3@PEAI@Z @ 0x1801B57B0 (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVCoreInputViewOcclusion@Core@ViewManag.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@123@IIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAI@Z @ 0x1801B5964 (--$_VectorGetMany@U-$IVectorView_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ??$_IteratorGetMany@U?$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@123@IPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@3@PEAI@Z @ 0x1803B167C (--$_IteratorGetMany@U-$IIterator_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@.c)
 *     ??$_VectorGetMany@U?$IVector_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@Collections@Foundation@Windows@@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$00@123@IIPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@3@PEAI@Z @ 0x1803B174C (--$_VectorGetMany@U-$IVector_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Wind.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
