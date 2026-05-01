/*
 * XREFs of ?__clone@?$__func@V_lambda_295bd67ea2737b84b8cde5acfb2098a4_@@$$A6AJK@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJK@Z@23@@Z @ 0x1801B1900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_295bd67ea2737b84b8cde5acfb2098a4_,long (unsigned long)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = a2 + 1;
  *a2 = &wistd::__function::__func<_lambda_99ba3b9c33d985ca735a1a650d7db78e_,long (unsigned long)>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  result = *(_QWORD *)(a1 + 16);
  v2[1] = result;
  return result;
}
