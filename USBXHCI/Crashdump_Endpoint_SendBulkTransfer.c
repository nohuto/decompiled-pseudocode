/*
 * XREFs of Crashdump_Endpoint_SendBulkTransfer @ 0x1C004F218
 * Callers:
 *     Crashdump_DoBulkTransfer @ 0x1C004C20C (Crashdump_DoBulkTransfer.c)
 * Callees:
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C004F708 (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendBulkTransfer(__int64 *a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r14
  int v7; // eax
  __int64 v8; // rbp
  unsigned int v9; // esi
  bool v10; // cf
  __int64 v11; // rax
  unsigned int v12; // r13d
  unsigned __int64 v13; // r15
  unsigned int v14; // r12d
  unsigned int v15; // r15d
  unsigned int v16; // edi
  __int64 v17; // r8
  int v18; // r9d
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // r8
  int v27; // r10d
  __int64 v28; // r9
  int *v29; // rdx
  unsigned int v30; // ebx
  unsigned int v31; // eax
  signed __int32 v33[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v34; // [rsp+28h] [rbp-40h]
  unsigned __int64 v35; // [rsp+78h] [rbp+10h]

  v4 = a3;
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Crashdump_Endpoint_SendBulkTransfer: begin: length: 0x%X TransferPA: 0x%I64X\n",
    *(_DWORD *)(a2 + 36),
    *a3);
  v7 = *((_DWORD *)a1 + 40);
  if ( v7 )
    v8 = a1[14];
  else
    v8 = a1[11];
  v9 = *(_DWORD *)(a2 + 36);
  v10 = v7 != 0;
  v11 = *a1;
  a1[22] = a2;
  v12 = 0;
  v13 = (-(__int64)v10 & 0xFFFFFFFFFFFFFFE8uLL) + 104;
  v35 = v13;
  if ( *(_BYTE *)(v11 + 627) )
    v14 = ((unsigned int)*((unsigned __int16 *)a1 + 27) + *(_DWORD *)(a2 + 36) - 1) / *((unsigned __int16 *)a1 + 27);
  else
    v14 = 0;
  if ( v9 )
  {
    v15 = 0;
    do
    {
      v16 = 4096;
      if ( (*(_DWORD *)v4 & 0xFFFLL) != 0 )
        v16 = 4096 - (*(_DWORD *)v4 & 0xFFF);
      if ( v9 < v16 )
        v16 = v9;
      v17 = v8 + 16LL * v12;
      v15 += v16;
      *(_OWORD *)v17 = 0LL;
      v18 = *(_DWORD *)(v17 + 8) ^ (*(_DWORD *)(v17 + 8) ^ v16) & 0x1FFFF;
      v19 = *(_DWORD *)(v17 + 12) & 0xFFFF03EF | 0x410;
      *(_DWORD *)(v17 + 12) = v19;
      *(_QWORD *)v17 = *v4;
      *(_DWORD *)(v17 + 8) = v18;
      *(_DWORD *)(v17 + 12) = v19 & 0xFFFFFFFE | (v12 != 0);
      if ( !*(_BYTE *)(*a1 + 627) || v9 == v16 )
      {
        v20 = 0;
      }
      else
      {
        v20 = v14 - v15 / *((unsigned __int16 *)a1 + 27);
        if ( v20 > 0x1F )
          v20 = 31;
      }
      v34 = v16;
      *(_DWORD *)(v17 + 8) = v18 ^ (v18 ^ (v20 << 17)) & 0x3E0000;
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Normal TRB %u: PA: 0x%I64X, length: 0x%X\n", v12++, *v4++, v34);
      v9 -= v16;
    }
    while ( v9 );
    v13 = v35;
  }
  v21 = v8 + 16LL * v12;
  *(_DWORD *)(v8 + 16LL * (v12 - 1) + 12) |= 2u;
  *(_OWORD *)v21 = 0LL;
  v22 = *(_DWORD *)(v21 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v21 + 12) = v22;
  v23 = a1[21];
  *(_DWORD *)(v21 + 8) &= 0x3FFFFFu;
  *(_DWORD *)(v21 + 12) = v22 | 0x21;
  *(_QWORD *)v21 = v23;
  v24 = v8 + 16LL * (v12 + 1);
  *(_OWORD *)v24 = 0LL;
  v25 = *(_DWORD *)(v24 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v24 + 12) = v25;
  *(_QWORD *)v24 = *(__int64 *)((char *)a1 + v13);
  *(_DWORD *)(v24 + 12) = v25 & 0xFFFFFFFC | 1;
  *((_DWORD *)a1 + 40) = *((_DWORD *)a1 + 40) == 0;
  *(_BYTE *)(v8 + 12) ^= 1u;
  _InterlockedOr(v33, 0);
  if ( a4 )
  {
    v26 = a1[3];
    v27 = *((_DWORD *)a1 + 8);
    v28 = *(_QWORD *)(**(_QWORD **)(v26 + 8) + 48LL);
    if ( v28 )
      v29 = (int *)(v28 + 4LL * *(unsigned __int8 *)(v26 + 56));
    else
      v29 = 0LL;
    *v29 = (unsigned __int8)v27 | (*((_BYTE *)a1 + 128) != 0 ? 0x10000 : 0);
    _InterlockedOr(v33, 0);
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Ringing doorbell: SlotId: %u, EndpointDCI: %u\n",
      *(unsigned __int8 *)(v26 + 56),
      v27);
    v30 = 259;
  }
  else
  {
    v31 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
    *(_DWORD *)(v8 + 12) &= ~1u;
    v30 = v31;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendBulkTransfer: end 0x%X\n", v30);
  return v30;
}
