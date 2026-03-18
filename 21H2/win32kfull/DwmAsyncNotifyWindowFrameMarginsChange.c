/*
 * XREFs of DwmAsyncNotifyWindowFrameMarginsChange @ 0x1C01058FC
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyWindowFrameMarginsChange(PVOID Object, __int64 a2, __int16 *a3)
{
  unsigned int v6; // ebx
  _DWORD v8[20]; // [rsp+20h] [rbp-78h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v8, 0, 0x44uLL);
    v8[0] = 4456476;
    LOWORD(v8[1]) = 0x8000;
    v8[13] = *a3;
    v8[14] = a3[1];
    v8[16] = a3[3];
    v8[15] = a3[2];
    v8[10] = 1073741909;
    *(_QWORD *)&v8[11] = a2;
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
