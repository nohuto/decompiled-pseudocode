/*
 * XREFs of RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C004416C
 * Callers:
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C0031450 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0049890 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     RtlULongAdd @ 0x1C0045F40 (RtlULongAdd.c)
 */

__int64 __fastcall RaBuildQueryTemperaturePropertyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  char *v7; // rbx
  ULONG v8; // edx
  __int64 v9; // r14
  NTSTATUS v10; // eax
  __int64 v11; // r9
  size_t v12; // rsi
  unsigned int v13; // ebp
  char *Pool; // rax
  int v15; // eax
  __int64 result; // rax
  ULONG pulResult; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  pulResult = 0;
  v7 = 0LL;
  v8 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_DWORD *)v4 == 1 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = v4;
  if ( *(_DWORD *)v4 != 1 )
    v4 = 0LL;
  v10 = RtlULongAdd(0x1Cu, v8, &pulResult);
  v12 = pulResult;
  v13 = v10;
  if ( v10 >= 0 )
  {
    Pool = (char *)RaidAllocatePool(NonPagedPoolNx, pulResult, 0x72536152u, v11);
    v7 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, v12);
      *(_DWORD *)v7 = 28;
      *(_QWORD *)(v7 + 4) = 0x54415245504D4554LL;
      *((_DWORD *)v7 + 4) = 2954240;
      if ( v4 )
        v15 = *(_DWORD *)(v4 + 1264);
      else
        v15 = *(_DWORD *)(v9 + 4268);
      *((_DWORD *)v7 + 3) = v15;
      *((_DWORD *)v7 + 6) = v12 - 28;
      *((_DWORD *)v7 + 7) = 40;
      *((_DWORD *)v7 + 8) = 40;
    }
    else
    {
      v13 = -1073741670;
    }
  }
  *a3 = v7;
  result = v13;
  *a4 = v12;
  return result;
}
