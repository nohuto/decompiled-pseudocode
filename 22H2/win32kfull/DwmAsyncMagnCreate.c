/*
 * XREFs of DwmAsyncMagnCreate @ 0x1C0273D74
 * Callers:
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01CCC94 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnCreate(PVOID Object, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD v13[16]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  v9 = -1073741823;
  if ( Object )
  {
    memset(v13, 0, sizeof(v13));
    v13[0] = 4194328;
    LOWORD(v13[1]) = 0x8000;
    v13[10] = 1073741919;
    *(_QWORD *)&v13[11] = a2;
    LOBYTE(v4) = a4 == 0;
    *(_QWORD *)&v13[13] = a3;
    v13[15] = v4;
    EtwUpdateEvent(a2, 1073741919LL, v10, v11);
    v9 = LpcRequestPort(Object, v13);
    ObfDereferenceObject(Object);
  }
  return v9;
}
