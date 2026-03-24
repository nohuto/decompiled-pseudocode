/*
 * XREFs of DwmAsyncMagnSetDesktopTransform @ 0x1C0274168
 * Callers:
 *     MagpDecomposeDesktop @ 0x1C00EB284 (MagpDecomposeDesktop.c)
 *     MagContextThreadCallout @ 0x1C01CC1F0 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01CCC94 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetDesktopTransform(PVOID Object, __int64 a2, _QWORD *a3, int a4, int a5)
{
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD v13[20]; // [rsp+20h] [rbp-88h] BYREF

  v9 = -1073741823;
  if ( Object )
  {
    memset(v13, 0, 0x44uLL);
    v13[0] = 4456476;
    LOWORD(v13[1]) = 0x8000;
    *(_QWORD *)&v13[13] = *a3;
    v13[16] = a5;
    v13[10] = 1073741927;
    *(_QWORD *)&v13[11] = a2;
    v13[15] = a4;
    EtwUpdateEvent(0LL, 1073741927LL, v10, v11);
    v9 = LpcRequestPort(Object, v13);
    ObfDereferenceObject(Object);
  }
  return v9;
}
