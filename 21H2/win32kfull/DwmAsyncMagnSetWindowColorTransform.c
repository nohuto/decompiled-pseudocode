/*
 * XREFs of DwmAsyncMagnSetWindowColorTransform @ 0x1C0272488
 * Callers:
 *     MagpComposeDesktop @ 0x1C0120198 (MagpComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01CA01C (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  _DWORD v17[40]; // [rsp+20h] [rbp-89h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v17, 0, sizeof(v17));
    v9 = *a4;
    v10 = a4[1];
    LOWORD(v17[1]) = 0x8000;
    v11 = *((_DWORD *)a4 + 24);
    *(_OWORD *)&v17[15] = v9;
    v17[0] = 10485880;
    v12 = a4[2];
    v17[10] = 1073741925;
    *(_OWORD *)&v17[19] = v10;
    *(_QWORD *)&v17[11] = a2;
    v13 = a4[3];
    *(_QWORD *)&v17[13] = a3;
    *(_OWORD *)&v17[23] = v12;
    v17[39] = v11;
    v14 = a4[4];
    *(_OWORD *)&v17[27] = v13;
    v15 = a4[5];
    *(_OWORD *)&v17[31] = v14;
    *(_OWORD *)&v17[35] = v15;
    EtwUpdateEvent(a2);
    v8 = LpcRequestPort(Object, v17);
    ObfDereferenceObject(Object);
  }
  return v8;
}
