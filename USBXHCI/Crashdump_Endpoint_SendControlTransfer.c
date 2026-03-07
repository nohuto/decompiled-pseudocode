__int64 __fastcall Crashdump_Endpoint_SendControlTransfer(__int64 a1, _QWORD *a2, int a3, _QWORD *a4)
{
  int v8; // eax
  int v9; // r10d
  __int64 v10; // rdi
  unsigned __int64 v11; // r8
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  signed __int32 v23[10]; // [rsp+0h] [rbp-28h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: begin\n");
  v8 = *(_DWORD *)(a1 + 160);
  v9 = *(unsigned __int8 *)a2 >> 7;
  if ( v8 )
    v10 = *(_QWORD *)(a1 + 112);
  else
    v10 = *(_QWORD *)(a1 + 88);
  *(_OWORD *)v10 = 0LL;
  *(_QWORD *)v10 = *a2;
  v11 = -(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFE8uLL;
  v12 = 1;
  *(_DWORD *)(v10 + 8) = *(_DWORD *)(v10 + 8) & 0xFFFE0000 | 8;
  *(_DWORD *)(v10 + 12) = *(_DWORD *)(v10 + 12) & 0xFFFF03BF | 0x840;
  if ( a3 )
  {
    *(_OWORD *)(v10 + 16) = 0LL;
    v12 = 2;
    v13 = *(_DWORD *)(v10 + 28) & 0xFFFE0FFF | (v9 << 16) | 0xC00;
    *(_DWORD *)(v10 + 28) = v13;
    *(_QWORD *)(v10 + 16) = *a4;
    v14 = *(_DWORD *)(v10 + 24) & 0xFFC00000;
    *(_DWORD *)(v10 + 28) = v13 | 1;
    *(_DWORD *)(v10 + 24) = a3 & 0x1FFFF | v14;
  }
  v15 = 2LL * v12;
  v16 = v12 + 1;
  *(_OWORD *)(v10 + 8 * v15) = 0LL;
  v17 = v10 + 16LL * v16;
  *(_DWORD *)(v10 + 8 * v15 + 12) = *(_DWORD *)(v10 + 8 * v15 + 12) & 0xFFFE13FF | ((v9 ^ 1) << 16) | 0x1011;
  *(_OWORD *)v17 = 0LL;
  LODWORD(v15) = *(_DWORD *)(v17 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v17 + 12) = v15;
  v18 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(v17 + 8) &= 0x3FFFFFu;
  *(_DWORD *)(v17 + 12) = v15 | 0x21;
  *(_QWORD *)v17 = v18;
  v19 = v10 + 16LL * (v16 + 1);
  *(_OWORD *)v19 = 0LL;
  LODWORD(v15) = *(_DWORD *)(v19 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v19 + 12) = v15;
  *(_QWORD *)v19 = *(_QWORD *)(v11 + a1 + 104);
  *(_DWORD *)(v19 + 12) = v15 & 0xFFFFFFFC | 1;
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a1 + 160) == 0;
  *(_BYTE *)(v10 + 12) ^= 1u;
  _InterlockedOr(v23, 0);
  v20 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
  *(_DWORD *)(v10 + 12) &= ~1u;
  v21 = v20;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: end 0x%X\n", v20);
  return v21;
}
