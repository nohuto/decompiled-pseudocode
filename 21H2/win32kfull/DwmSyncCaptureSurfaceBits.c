/*
 * XREFs of DwmSyncCaptureSurfaceBits @ 0x1C002E3C4
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C002DD04 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C002EB28 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmSyncCaptureSurfaceBits(
        PVOID Object,
        __int64 a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10)
{
  signed int v13; // ebx
  _DWORD *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  _QWORD *v18; // rdx
  _BYTE v20[88]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+37h] BYREF

  v13 = -1073741823;
  if ( Object )
  {
    v13 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v20, 0, sizeof(v20));
      *(_DWORD *)&v20[52] = a4;
      v14 = a9;
      *(_WORD *)&v20[4] = 0x8000;
      *(_DWORD *)&v20[56] = a5;
      *(_DWORD *)&v20[60] = a6;
      *(_DWORD *)&v20[64] = a7;
      *(_DWORD *)&v20[68] = *a9;
      *(_QWORD *)&v20[72] = a8;
      *(_DWORD *)v20 = 5767216;
      *(_DWORD *)&v20[40] = -2147483642;
      *(double *)&v20[44] = a3;
      *(_QWORD *)&v20[80] = a2;
      EtwUpdateEvent(0LL, 2147483654LL, v15, v16);
      v21 = 88LL;
      v17 = ((__int64 (__fastcall *)(PVOID, __int64, _BYTE *, _BYTE *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
              Object,
              0x20000LL,
              v20,
              v20,
              &v21,
              0LL);
      v13 = SyncLpcCheckNtStatus(v17, (struct _PORT_MESSAGE *)v20);
      if ( v13 >= 0 && *(_WORD *)v20 == 20 )
      {
        if ( *(int *)&v20[44] < 0 )
        {
          v13 = -1073741823;
        }
        else
        {
          v18 = a10;
          *v14 = *(_DWORD *)&v20[48];
          *v18 = *(_QWORD *)&v20[52];
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
