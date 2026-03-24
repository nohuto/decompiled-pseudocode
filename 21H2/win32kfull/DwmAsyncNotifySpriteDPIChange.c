/*
 * XREFs of DwmAsyncNotifySpriteDPIChange @ 0x1C00BE690
 * Callers:
 *     GreDwmNotifySpriteDPIChange @ 0x1C00BD998 (GreDwmNotifySpriteDPIChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifySpriteDPIChange(PVOID Object, __int64 a2, __int128 *a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _DWORD v10[24]; // [rsp+20h] [rbp-88h] BYREF

  v6 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v10, 0, 0x5CuLL);
    v7 = *a3;
    v8 = a3[1];
    v10[0] = 6029364;
    *(_OWORD *)&v10[13] = v7;
    LOWORD(v10[1]) = 0x8000;
    *(_QWORD *)&v10[21] = *((_QWORD *)a3 + 4);
    v10[10] = 1073741906;
    *(_QWORD *)&v10[11] = a2;
    *(_OWORD *)&v10[17] = v8;
    v6 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v6;
}
