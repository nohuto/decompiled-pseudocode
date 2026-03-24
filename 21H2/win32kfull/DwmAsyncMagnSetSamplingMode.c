/*
 * XREFs of DwmAsyncMagnSetSamplingMode @ 0x1C02748F8
 * Callers:
 *     MagSetLensContextInformation @ 0x1C01CD254 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetSamplingMode(PVOID Object, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD v12[16]; // [rsp+20h] [rbp-78h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v12, 0, sizeof(v12));
    v12[0] = 4194328;
    LOWORD(v12[1]) = 0x8000;
    v12[15] = *a4;
    v12[10] = 1073741930;
    *(_QWORD *)&v12[11] = a2;
    *(_QWORD *)&v12[13] = a3;
    EtwUpdateEvent(a2, 1073741930LL, v9, v10);
    v8 = LpcRequestPort(Object, v12);
    ObfDereferenceObject(Object);
  }
  return v8;
}
