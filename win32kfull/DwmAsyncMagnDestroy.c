/*
 * XREFs of DwmAsyncMagnDestroy @ 0x1C026F38C
 * Callers:
 *     MagpDestroyLensContext @ 0x1C00337D8 (MagpDestroyLensContext.c)
 *     MagpDecomposeDesktop @ 0x1C007F098 (MagpDecomposeDesktop.c)
 *     MagContextThreadCallout @ 0x1C01A4070 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01A4A80 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncMagnDestroy(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+48h] [rbp-28h]
  _QWORD v9[2]; // [rsp+4Ch] [rbp-24h]

  v4 = -1073741823;
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[0]) = 3932180;
    v7 = 0LL;
    WORD2(v6[0]) = 0x8000;
    v8 = 1073741924;
    v9[0] = a2;
    v9[1] = a3;
    EtwUpdateEvent(a2, 1073741924LL);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
