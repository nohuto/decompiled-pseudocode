/*
 * XREFs of DwmAsyncNotifySpriteMonitorChange @ 0x1C002139C
 * Callers:
 *     GreDwmNotifySpriteMonitorChange @ 0x1C002168C (GreDwmNotifySpriteMonitorChange.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifySpriteMonitorChange(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  __int128 v9; // xmm1
  _DWORD v11[32]; // [rsp+28h] [rbp-29h] BYREF

  v6 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v11, 0, 0x7CuLL);
    v7 = *(_OWORD *)(a3 + 16);
    *(_OWORD *)&v11[13] = *(_OWORD *)a3;
    v11[0] = 8126548;
    *(_OWORD *)&v11[21] = *(_OWORD *)(a3 + 32);
    LOWORD(v11[1]) = 0x8000;
    v8 = *(_QWORD *)(a3 + 64);
    *(_OWORD *)&v11[17] = v7;
    v11[10] = 1073741908;
    v9 = *(_OWORD *)(a3 + 48);
    *(_QWORD *)&v11[29] = v8;
    *(_QWORD *)&v11[11] = a2;
    *(_OWORD *)&v11[25] = v9;
    v6 = LpcRequestPort(Object, v11);
    ObfDereferenceObject(Object);
  }
  return v6;
}
