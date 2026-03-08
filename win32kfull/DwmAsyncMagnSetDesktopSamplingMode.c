/*
 * XREFs of DwmAsyncMagnSetDesktopSamplingMode @ 0x1C026F5E8
 * Callers:
 *     MagSetLensContextInformation @ 0x1C01A4A80 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncMagnSetDesktopSamplingMode(PVOID Object, __int64 a2, int *a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[20]; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-14h]

  v4 = -1073741823;
  if ( Object )
  {
    v9 = 0;
    *(_OWORD *)v8 = 0LL;
    *(_QWORD *)&v8[12] = a2;
    memset(v7, 0, sizeof(v7));
    WORD2(v7[0]) = 0x8000;
    v5 = *a3;
    *(_DWORD *)&v8[8] = 1073741938;
    v9 = v5;
    LODWORD(v7[0]) = 3670032;
    EtwUpdateEvent(0LL, 1073741938LL);
    v4 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v4;
}
