/*
 * XREFs of ?__clone@?$__func@V_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@23@@Z @ 0x1802CB450
 * Callers:
 *     <none>
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *> *)>::__clone(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // r8
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 result; // rax

  v2 = a2;
  *(_QWORD *)a2 = &wistd::__function::__func<_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *> *)>::`vftable';
  v3 = a1;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 192);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 192), v5 + 1, v5);
        if ( v6 != v5 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v5 + 16),
      (volatile int *)a2);
  }
LABEL_8:
  result = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v2 + 16) = result;
  return result;
}
