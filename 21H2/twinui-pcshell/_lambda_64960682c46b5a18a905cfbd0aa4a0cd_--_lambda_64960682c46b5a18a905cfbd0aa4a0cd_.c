/*
 * XREFs of _lambda_64960682c46b5a18a905cfbd0aa4a0cd_::_lambda_64960682c46b5a18a905cfbd0aa4a0cd_ @ 0x180364A08
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd___ @ 0x18036473C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_64960682c46b5a18a905cfbd0aa4a0cd_::_lambda_64960682c46b5a18a905cfbd0aa4a0cd_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v4; // rcx

  *a1 = *a2;
  v4 = a1 + 1;
  *v4 = a2[1];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  a1[2] = a2[2];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 2);
  return a1;
}
