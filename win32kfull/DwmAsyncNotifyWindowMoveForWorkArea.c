/*
 * XREFs of DwmAsyncNotifyWindowMoveForWorkArea @ 0x1C026FDBC
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006A610 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncNotifyWindowMoveForWorkArea(PVOID Object, __int64 a2)
{
  unsigned int v3; // edi
  _DWORD v5[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+4Ch] [rbp-1Ch]

  v3 = -1073741823;
  if ( Object )
  {
    memset(v5, 0, sizeof(v5));
    v5[0] = 3407884;
    v6 = 0LL;
    v8 = a2;
    LOWORD(v5[1]) = 0x8000;
    v7 = 1073741936;
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
