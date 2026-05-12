/*
 * XREFs of RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C0044348
 * Callers:
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C0032E40 (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0049A10 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     memset @ 0x1C0020480 (memset.c)
 *     RtlULongAdd @ 0x1C0045F20 (RtlULongAdd.c)
 */

__int64 __fastcall RaBuildSetProtocolSpecificPropertyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r15
  char *v5; // rbx
  size_t v6; // rdi
  __int64 v7; // r14
  unsigned int v8; // r13d
  __int64 v9; // rbp
  ULONG v10; // edx
  ULONG v11; // ecx
  NTSTATUS v12; // esi
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
      *(_QWORD *)(v5 + 4) = 0x4F544F5250544553LL;
      *((_DWORD *)v5 + 4) = 2987020;
      if ( v7 )
        v15 = *(_DWORD *)(v7 + 1264);
      else
        v15 = *(_DWORD *)(v9 + 4268);
      *((_DWORD *)v5 + 3) = v15;
      *((_DWORD *)v5 + 6) = v6 - 28;
      *((_DWORD *)v5 + 7) = 72;
      *((_DWORD *)v5 + 8) = 72;
      *((_DWORD *)v5 + 9) = v4[2];
      *((_DWORD *)v5 + 10) = v4[3];
      *((_DWORD *)v5 + 11) = v4[4];
      *((_DWORD *)v5 + 12) = v4[5];
      *((_DWORD *)v5 + 13) = v8 >= 0x40 ? 0x44 : 0;
      *((_DWORD *)v5 + 14) = v17;
    }
    else
    {
      v12 = -1073741670;
      LODWORD(v6) = 0;
    }
  }
LABEL_17:
  *v20 = v5;
  *v21 = v6;
  return (unsigned int)v12;
}
