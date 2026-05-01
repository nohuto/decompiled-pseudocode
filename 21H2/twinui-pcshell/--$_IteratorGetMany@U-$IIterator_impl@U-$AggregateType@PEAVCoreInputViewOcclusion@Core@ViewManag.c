/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@PEAUICoreInputViewOcclusion@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUICoreInputViewOcclusion@Core@ViewManagement@UI@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@PEAUICoreInputViewOcclusion@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@3@PEAI@Z @ 0x1801B57B0
 * Callers:
 *     ?GetMany@?$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIChainLink@Chaining@Shell@Internal@4@PEAI@Z @ 0x1801BB980 (-GetMany@-$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Founda.c)
 * Callees:
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$_Cleanup@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@3@I@Z @ 0x1801B505C (--$_Cleanup@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@I@Detail@Collections@Founda.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion *>,1>,Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion *>(
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
