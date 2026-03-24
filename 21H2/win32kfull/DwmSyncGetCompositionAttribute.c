/*
 * XREFs of DwmSyncGetCompositionAttribute @ 0x1C002E9E0
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C0069010 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C002EB28 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmSyncGetCompositionAttribute(PVOID Object, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r15
  signed int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int16 v11; // ax
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v15[88]; // [rsp+40h] [rbp-59h] BYREF

  v4 = a3;
  v8 = -1073741823;
  if ( Object )
  {
    v8 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v15, 0, sizeof(v15));
      v9 = *(_OWORD *)a4;
      v10 = a4[2];
      *(_DWORD *)&v15[2] = -2147483560;
      *(_DWORD *)&v15[40] = 1073741866;
      *(_DWORD *)&v15[44] = 1;
      *(_QWORD *)&v15[48] = a2;
      *(_DWORD *)&v15[56] = v4;
      v11 = qword_1C02EBA68[2 * v4];
      *(_OWORD *)&v15[64] = v9;
      *(_WORD *)v15 = v11 + 24;
      *(_DWORD *)&v15[60] = qword_1C02EBA68[2 * v4];
      *(_QWORD *)&v15[80] = v10;
      v14 = 88LL;
      v12 = ((__int64 (__fastcall *)(PVOID, __int64, _BYTE *, _BYTE *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
              Object,
              0x20000LL,
              v15,
              v15,
              &v14,
              0LL);
      v8 = SyncLpcCheckNtStatus(v12, (struct _PORT_MESSAGE *)v15);
      if ( v8 >= 0 )
        memmove(a4, &v15[64], qword_1C02EBA68[2 * v4]);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
