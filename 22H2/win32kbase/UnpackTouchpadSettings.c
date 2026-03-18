/*
 * XREFs of UnpackTouchpadSettings @ 0x1C01E9ABC
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EE480 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0134DF4 (_SetPrecisionTouchPadConfiguration.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C0232F9C (EditionxxxBroadcastSPIChange.c)
 */

SIZE_T __fastcall UnpackTouchpadSettings(_DWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  SIZE_T result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD Source1[6]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[10];
  Source1[0] = a1[6];
  Source1[1] = a1[7];
  Source1[2] = a1[8];
  Source1[4] = a1[9];
  v2 = v1 & 0x7FF;
  v3 = (v1 >> 11) & 0x7F;
  Source1[5] = v3;
  Source1[3] = v2;
  v4 = SGDGetUserSessionState(a1, v3, v2, 0LL);
  result = RtlCompareMemory(Source1, (const void *)(v4 + 16800), 0x18uLL);
  if ( result != 24 )
  {
    SetPrecisionTouchPadConfiguration((__int64)Source1, v6, v7, v8);
    return EditionxxxBroadcastSPIChange(175LL, v9, 0LL);
  }
  return result;
}
