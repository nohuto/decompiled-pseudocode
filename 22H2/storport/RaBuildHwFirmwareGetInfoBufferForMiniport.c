/*
 * XREFs of RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001CEA4
 * Callers:
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001C990 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002CFA0 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002D158 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     memset @ 0x1C0020480 (memset.c)
 */

__int64 __fastcall RaBuildHwFirmwareGetInfoBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v8; // rbp
  char *Pool; // rax
  char *v10; // rbx
  int v11; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( *(_DWORD *)v4 == 1 )
    v8 = *(_QWORD *)(v4 + 24);
  else
    v8 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1 )
    v4 = 0LL;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x110uLL, 0x72536152u, a1);
  v10 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x110uLL);
    *(_DWORD *)v10 = 28;
    *((_DWORD *)v10 + 4) = 1771392;
    *(_QWORD *)(v10 + 4) = 0x455241574D524946LL;
    if ( v4 )
      v11 = *(_DWORD *)(v4 + 1264);
    else
      v11 = *(_DWORD *)(v8 + 4268);
    *((_DWORD *)v10 + 3) = v11;
    *((_DWORD *)v10 + 6) = 244;
    *((_DWORD *)v10 + 7) = 1;
    *((_DWORD *)v10 + 8) = 24;
    *((_DWORD *)v10 + 9) = 1;
    *((_DWORD *)v10 + 10) = v4 == 0;
    *((_DWORD *)v10 + 11) = 56;
    *((_DWORD *)v10 + 12) = 216;
    *((_DWORD *)v10 + 14) = 2;
    *((_DWORD *)v10 + 15) = 24;
  }
  else
  {
    v5 = -1073741670;
  }
  result = v5;
  *a3 = v10;
  *a4 = 272;
  return result;
}
