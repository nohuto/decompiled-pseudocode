/*
 * XREFs of DwmAsyncSetDesktopColorTransform @ 0x1C02750A0
 * Callers:
 *     NtUserSetDesktopColorTransform @ 0x1C0201610 (NtUserSetDesktopColorTransform.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall DwmAsyncSetDesktopColorTransform(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD v16[40]; // [rsp+20h] [rbp-79h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v16, 0, 0x98uLL);
    v7 = *(_OWORD *)(a3 + 16);
    *(_OWORD *)&v16[13] = *(_OWORD *)a3;
    LOWORD(v16[1]) = 0x8000;
    v8 = *(_OWORD *)(a3 + 32);
    v9 = *(_DWORD *)(a3 + 96);
    *(_OWORD *)&v16[17] = v7;
    v16[0] = 9961584;
    v10 = *(_OWORD *)(a3 + 48);
    *(_OWORD *)&v16[21] = v8;
    v16[10] = 1073741932;
    v11 = *(_OWORD *)(a3 + 64);
    *(_OWORD *)&v16[25] = v10;
    *(_QWORD *)&v16[11] = a2;
    v12 = *(_OWORD *)(a3 + 80);
    *(_OWORD *)&v16[29] = v11;
    v16[37] = v9;
    *(_OWORD *)&v16[33] = v12;
    EtwUpdateEvent(0LL, 1073741932LL, v13, v14);
    v6 = LpcRequestPort(Object, v16);
    ObfDereferenceObject(Object);
  }
  return v6;
}
