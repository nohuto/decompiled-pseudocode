/*
 * XREFs of _lambda_9421d204e635201636d0a16c341872b8_::operator() @ 0x18011FC54
 * Callers:
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180121A98 (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_9421d204e635201636d0a16c341872b8_::operator()(__int64 a1, const WCHAR *a2, unsigned int *a3)
{
  DWORD v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  unsigned int v7; // [rsp+68h] [rbp+20h] BYREF

  v6 = HIDWORD(a1);
  v5 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
         a2,
         0x10u,
         0LL,
         &v7,
         &v5) )
  {
    return *a3;
  }
  else
  {
    return v7;
  }
}
