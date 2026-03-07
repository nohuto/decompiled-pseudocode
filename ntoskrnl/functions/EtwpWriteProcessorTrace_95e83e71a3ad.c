void __fastcall EtwpWriteProcessorTrace(__int64 *a1, __int64 a2, int a3, int a4)
{
  int v4; // r10d
  unsigned int v5; // r10d
  __int64 v6; // rdx
  __int64 *v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]

  v4 = *((_DWORD *)a1 + 12);
  v7 = a1 + 1;
  v9 = 0;
  v5 = v4 & 0xFFFFE600 | 2;
  *((_DWORD *)a1 + 9) = a4;
  *((_DWORD *)a1 + 12) = v5;
  *((_DWORD *)a1 + 8) = a3;
  v8 = 32;
  v10 = a2;
  v6 = *a1;
  v11 = a3;
  v12 = 0;
  EtwpLogKernelEvent((__int64)&v7, *(_QWORD *)(v6 + 1096), *(_DWORD *)v6, 2u, 0x1F20u, v5);
}
