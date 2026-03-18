/*
 * XREFs of DwmAsyncRegisterSharedThumbnailVisual @ 0x1C0003EE4
 * Callers:
 *     DwmAsyncRegisterSharedThumbnailVisualApiExt @ 0x1C0003EA0 (DwmAsyncRegisterSharedThumbnailVisualApiExt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmAsyncRegisterSharedThumbnailVisual(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int128 *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // ebx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _DWORD v16[36]; // [rsp+20h] [rbp-A1h] BYREF

  v12 = -1073741823;
  if ( Object )
  {
    memset(v16, 0, 0x81uLL);
    v13 = *a6;
    v14 = a6[1];
    LOWORD(v16[1]) = 0x8000;
    v16[16] = a5;
    v16[27] = *((_DWORD *)a6 + 10);
    LOBYTE(v16[28]) = *((_BYTE *)a6 + 44);
    *(_OWORD *)&v16[17] = v13;
    *(_QWORD *)((char *)&v16[28] + 1) = a7;
    *(_QWORD *)&v13 = *((_QWORD *)a6 + 4);
    v16[0] = 8454233;
    v16[10] = 1073741905;
    *(_QWORD *)&v16[11] = a2;
    *(_QWORD *)&v16[13] = a3;
    v16[15] = a4;
    *(_OWORD *)&v16[21] = v14;
    *(_QWORD *)((char *)&v16[30] + 1) = a8;
    *(_QWORD *)&v16[25] = v13;
    v12 = LpcRequestPort(Object, v16);
    ObfDereferenceObject(Object);
  }
  return v12;
}
