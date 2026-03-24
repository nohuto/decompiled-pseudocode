/*
 * XREFs of DwmAsyncMagnSetWindowSlicer @ 0x1C0274864
 * Callers:
 *     MagSlicerControl @ 0x1C01CDA34 (MagSlicerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowSlicer(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // xmm1_8
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD v13[24]; // [rsp+20h] [rbp-98h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v13, 0, 0x54uLL);
    v9 = *(_QWORD *)(a4 + 16);
    *(_OWORD *)&v13[15] = *(_OWORD *)a4;
    v13[0] = 5505068;
    LOWORD(v13[1]) = 0x8000;
    v13[10] = 1073741929;
    *(_QWORD *)&v13[11] = a2;
    *(_QWORD *)&v13[13] = a3;
    *(_QWORD *)&v13[19] = v9;
    EtwUpdateEvent(a2, 1073741929LL, v10, v11);
    v8 = LpcRequestPort(Object, v13);
    ObfDereferenceObject(Object);
  }
  return v8;
}
