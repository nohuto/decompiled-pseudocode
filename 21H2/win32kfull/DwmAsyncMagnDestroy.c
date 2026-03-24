/*
 * XREFs of DwmAsyncMagnDestroy @ 0x1C027442C
 * Callers:
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     MagpDecomposeDesktop @ 0x1C00EB5D4 (MagpDecomposeDesktop.c)
 *     MagContextThreadCallout @ 0x1C01CC7B0 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01CD254 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncMagnDestroy(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+40h] [rbp-30h]
  int v9; // [rsp+48h] [rbp-28h]
  _QWORD v10[2]; // [rsp+4Ch] [rbp-24h]

  v5 = -1073741823;
  if ( Object )
  {
    memset(v7, 0, sizeof(v7));
    LODWORD(v7[0]) = 3932180;
    v8 = 0LL;
    WORD2(v7[0]) = 0x8000;
    v9 = 1073741920;
    v10[0] = a2;
    v10[1] = a3;
    EtwUpdateEvent(a2, 1073741920LL, a3, a4);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
