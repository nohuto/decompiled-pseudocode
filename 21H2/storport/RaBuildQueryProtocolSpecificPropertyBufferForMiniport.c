/*
 * XREFs of RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0043FEC
 * Callers:
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C003124C (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C00496CC (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     RtlULongAdd @ 0x1C0045F40 (RtlULongAdd.c)
 */

__int64 __fastcall RaBuildQueryProtocolSpecificPropertyBufferForMiniport(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4)
{
  _DWORD *v4; // r14
  char *v5; // rbx
  size_t v6; // rbp
  __int64 v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // r15
  ULONG v10; // edx
  ULONG v11; // ecx
  NTSTATUS v12; // edi
  __int64 v13; // r9
  char *Pool; // rax
  int v15; // eax
  int v17; // [rsp+20h] [rbp-58h]
  ULONG v18; // [rsp+80h] [rbp+8h] BYREF
  ULONG pulResult; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v20; // [rsp+90h] [rbp+18h]
  _DWORD *v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v20 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v18 = 0;
  v5 = 0LL;
  pulResult = 0;
  LODWORD(v6) = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = v4[6];
  v17 = v4[7];
  if ( *(_DWORD *)v7 == 1 )
    v9 = *(_QWORD *)(v7 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v7 != 1 )
    v7 = 0LL;
  v10 = v4[7];
  v11 = 80;
  if ( v8 >= 0x28 )
  {
    v12 = RtlULongAdd(0x50u, v10, &pulResult);
    if ( v12 < 0 )
      goto LABEL_17;
    v10 = pulResult;
    v11 = v8 - 40;
  }
  v12 = RtlULongAdd(v11, v10, &v18);
  if ( v12 < 0 )
  {
    LODWORD(v6) = v18;
  }
  else
  {
    v6 = v18;
    Pool = (char *)RaidAllocatePool(NonPagedPoolNx, v18, 0x72536152u, v13);
    v5 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, v6);
      *(_DWORD *)v5 = 28;
      *(_QWORD *)(v5 + 4) = 0x4C4F434F544F5250LL;
      *((_DWORD *)v5 + 4) = 2954240;
      if ( v7 )
        v15 = *(_DWORD *)(v7 + 1264);
      else
        v15 = *(_DWORD *)(v9 + 4268);
      *((_DWORD *)v5 + 3) = v15;
      *((_DWORD *)v5 + 6) = v6 - 28;
      *((_DWORD *)v5 + 7) = 48;
      *((_DWORD *)v5 + 8) = 48;
      *((_DWORD *)v5 + 9) = v4[2];
      *((_DWORD *)v5 + 10) = v4[3];
      *((_DWORD *)v5 + 11) = v4[4];
      *((_DWORD *)v5 + 12) = v4[5];
      *((_DWORD *)v5 + 13) = v8 >= 0x28 ? 0x2C : 0;
      *((_DWORD *)v5 + 14) = v17;
    }
    else
    {
      v12 = -1073741670;
    }
  }
LABEL_17:
  *v20 = v5;
  *v21 = v6;
  return (unsigned int)v12;
}
