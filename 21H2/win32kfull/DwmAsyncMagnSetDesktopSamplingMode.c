/*
 * XREFs of DwmAsyncMagnSetDesktopSamplingMode @ 0x1C0274688
 * Callers:
 *     MagSetLensContextInformation @ 0x1C01CD254 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncMagnSetDesktopSamplingMode(PVOID Object, __int64 a2, int *a3, __int64 a4)
{
  unsigned int v5; // ebx
  int v6; // eax
  _OWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[20]; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+54h] [rbp-14h]

  v5 = -1073741823;
  if ( Object )
  {
    v10 = 0;
    *(_OWORD *)v9 = 0LL;
    *(_QWORD *)&v9[12] = a2;
    memset(v8, 0, sizeof(v8));
    WORD2(v8[0]) = 0x8000;
    v6 = *a3;
    *(_DWORD *)&v9[8] = 1073741931;
    v10 = v6;
    LODWORD(v8[0]) = 3670032;
    EtwUpdateEvent(0LL, 1073741931LL, a3, a4);
    v5 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v5;
}
