/*
 * XREFs of _lambda_b80ed414f8f7ae3fe1ffd6fe9e067963_::operator() @ 0x18011FCBC
 * Callers:
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180121C44 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_b80ed414f8f7ae3fe1ffd6fe9e067963_::operator()(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  DWORD v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+5Ch] [rbp+14h]

  v7 = HIDWORD(a2);
  v5 = a1;
  v6 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
         L"CursorUpdateInterval",
         0x10u,
         0LL,
         &v5,
         &v6) )
  {
    return *a3;
  }
  else
  {
    return (unsigned int)v5;
  }
}
