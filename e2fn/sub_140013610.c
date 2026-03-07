__int64 __fastcall sub_140013610(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // r10d
  int v6; // r9d
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  __int64 result; // rax
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF

  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 96));
  v4 = *((unsigned int *)a2 + 8);
  v5 = *((unsigned __int16 *)a2 + 6);
  v6 = *((_WORD *)a2 + 11) & 0xFFF;
  v17 = *a2;
  LODWORD(v4) = dword_1400D52A0[v4];
  v7 = *((unsigned int *)a2 + 7);
  v16 = 0uLL;
  LODWORD(v4) = dword_1400D5290[v7] | v4;
  LODWORD(v7) = *((unsigned __int16 *)a2 + 12);
  *((_QWORD *)&v16 + 1) = (unsigned int)v4 | 0x20200000;
  LODWORD(v4) = *((unsigned __int8 *)a2 + 21);
  v8 = (7168 * v4) | (v4 * ((_DWORD)v7 << 29)) | (v4 * (v6 << 16));
  v9 = *((unsigned __int8 *)a2 + 20);
  LODWORD(v16) = v8;
  DWORD2(v17) = v5 | dword_1400D5288[v9] | ((_DWORD)v4 << 30) | 0x22300000;
  if ( *((_DWORD *)a2 + 10) )
  {
    sub_140012D94(a1 - 496, (__int64)a2, (__int64)&v17, (int *)&v16);
  }
  else
  {
    v10 = *((unsigned __int8 *)a2 + 36);
    v11 = (unsigned __int8)(*((_BYTE *)a2 + 37) | *((_BYTE *)a2 + 38));
    v12 = dword_1400D52D0[v10];
    LODWORD(v10) = v11 | v10;
    v13 = dword_1400D52D8[v11] | v12;
    LODWORD(v11) = *((unsigned __int16 *)a2 + 7);
    HIDWORD(v17) |= (v5 << 14) | v13;
    LODWORD(v16) = (v10 * *((unsigned __int16 *)a2 + 8)) | v8 & ~(65024 * v10) | (v10 * ((_DWORD)v11 << 9));
  }
  sub_1400141F4(a1 - 496, a2, &v16);
  v14 = *((_DWORD *)a2 + 2);
  *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(a1 - 16)) = v17;
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 - 16) + 4) = 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 - 16)) = v14;
  result = *(_DWORD *)(a1 - 24) & (unsigned int)(*(_DWORD *)(a1 - 16) + 1);
  *(_DWORD *)(a1 - 16) = result;
  return result;
}
