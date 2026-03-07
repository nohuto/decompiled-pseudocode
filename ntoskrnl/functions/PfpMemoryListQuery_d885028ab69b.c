__int64 __fastcall PfpMemoryListQuery(__int64 a1, char a2, _DWORD *a3)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdi
  _OWORD v10[11]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+100h] [rbp+8h] BYREF

  memset(v10, 0, sizeof(v10));
  v7 = 0;
  LODWORD(v11) = 0;
  if ( *(_DWORD *)(a1 + 24) < 0x40u )
  {
    v7 = -1073741789;
  }
  else
  {
    MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, v10, 0xB0u, v6, &v11);
    v8 = *(_QWORD *)(a1 + 16);
    if ( a2 )
      ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
    *(_DWORD *)v8 = 1;
    *(_DWORD *)(v8 + 4) = 64;
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)(v8 + 16) &= 0xFFFFFFFFFFFFFF00uLL;
    *(_QWORD *)(v8 + 24) = *(_QWORD *)&v10[4]
                         + *((_QWORD *)&v10[3] + 1)
                         + *(_QWORD *)&v10[3]
                         + *((_QWORD *)&v10[2] + 1)
                         + *((_QWORD *)&v10[4] + 1);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)&v10[5];
    *(_QWORD *)(v8 + 40) = *(_QWORD *)&v10[6] + *((_QWORD *)&v10[5] + 1);
    *(_QWORD *)(v8 + 48) = *(_QWORD *)&v10[0] + *((_QWORD *)&v10[0] + 1);
    *(_QWORD *)(v8 + 56) = *((_QWORD *)&v10[1] + 1) + *(_QWORD *)&v10[1];
  }
  *a3 = 64;
  return v7;
}
