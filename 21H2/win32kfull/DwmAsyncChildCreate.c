/*
 * XREFs of DwmAsyncChildCreate @ 0x1C0098CB4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmAsyncChildCreate(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        __int128 *a8,
        __int64 a9,
        __int128 *a10,
        unsigned int a11,
        __int64 a12)
{
  unsigned int v16; // ebx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _QWORD v22[22]; // [rsp+20h] [rbp-C1h] BYREF

  v16 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v22, 0, sizeof(v22));
    v17 = *a8;
    v18 = a8[1];
    WORD2(v22[0]) = 0x8000;
    LODWORD(v22[8]) = a5;
    v22[20] = __PAIR64__(a11, a6);
    HIDWORD(v22[10]) = a7;
    *(_OWORD *)&v22[11] = v17;
    v22[19] = a9;
    *(_OWORD *)&v22[15] = a8[2];
    v19 = *a10;
    *(_OWORD *)&v22[13] = v18;
    v22[21] = a12;
    v20 = a8[3];
    LODWORD(v22[0]) = 11534472;
    LODWORD(v22[5]) = 1073741841;
    *(_QWORD *)((char *)&v22[5] + 4) = a2;
    *(_QWORD *)((char *)&v22[6] + 4) = a3;
    HIDWORD(v22[7]) = a4;
    *(_OWORD *)&v22[17] = v20;
    *(_OWORD *)((char *)&v22[8] + 4) = v19;
    EtwUpdateEvent(a3);
    v16 = LpcRequestPort(Object, v22);
    ObfDereferenceObject(Object);
  }
  return v16;
}
