/*
 * XREFs of _lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_ @ 0x180339F00
 * Callers:
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18033A970 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

_QWORD *__fastcall lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_(
        _QWORD *a1,
        volatile int *a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // r11
  _QWORD *v8; // r10
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  _QWORD *result; // rax

  v5 = *(_QWORD *)a2;
  *a1 = *(_QWORD *)a2;
  v8 = a1;
  if ( v5 )
  {
    v9 = *(_QWORD *)(v5 + 560);
    while ( v9 >= 0 )
    {
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 560), v9 + 1, v9);
        if ( v10 != v9 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v9 + 16), a2);
  }
LABEL_8:
  v8[2] = *a4;
  v8[1] = a3;
  result = v8;
  v8[3] = *a5;
  return result;
}
