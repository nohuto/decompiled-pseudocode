/*
 * XREFs of DwmAsyncMagnSetWindowColorTransform @ 0x1C0274B04
 * Callers:
 *     zzzComposeDesktop @ 0x1C00EC878 (zzzComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01CD254 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowColorTransform(PVOID Object, __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD v19[40]; // [rsp+20h] [rbp-89h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v19, 0, sizeof(v19));
    v9 = *a4;
    v10 = a4[1];
    LOWORD(v19[1]) = 0x8000;
    v11 = *((_DWORD *)a4 + 24);
    *(_OWORD *)&v19[15] = v9;
    v19[0] = 10485880;
    v12 = a4[2];
    v19[10] = 1073741921;
    *(_OWORD *)&v19[19] = v10;
    *(_QWORD *)&v19[11] = a2;
    v13 = a4[3];
    *(_QWORD *)&v19[13] = a3;
    *(_OWORD *)&v19[23] = v12;
    v19[39] = v11;
    v14 = a4[4];
    *(_OWORD *)&v19[27] = v13;
    v15 = a4[5];
    *(_OWORD *)&v19[31] = v14;
    *(_OWORD *)&v19[35] = v15;
    EtwUpdateEvent(a2, 1073741921LL, v16, v17);
    v8 = LpcRequestPort(Object, v19);
    ObfDereferenceObject(Object);
  }
  return v8;
}
