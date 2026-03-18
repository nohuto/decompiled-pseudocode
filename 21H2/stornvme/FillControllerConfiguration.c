/*
 * XREFs of FillControllerConfiguration @ 0x1C0005CB4
 * Callers:
 *     NVMeLogEtwControllerInfo @ 0x1C0005BE0 (NVMeLogEtwControllerInfo.c)
 * Callees:
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall FillControllerConfiguration(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // edx
  __int64 *i; // rbx
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  __int128 v11; // xmm1

  memset(a2, 0, 0x2A0uLL);
  *a2 = 4;
  a2[1] = 4;
  a2[2] = *(_DWORD *)a1;
  a2[3] = *(_DWORD *)(a1 + 16);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(a1 + 40);
  *((_OWORD *)a2 + 2) = *(_OWORD *)(a1 + 56);
  *((_OWORD *)a2 + 3) = *(_OWORD *)(a1 + 72);
  *((_OWORD *)a2 + 4) = *(_OWORD *)(a1 + 88);
  *((_OWORD *)a2 + 5) = *(_OWORD *)(a1 + 104);
  *((_OWORD *)a2 + 6) = *(_OWORD *)(a1 + 120);
  *((_OWORD *)a2 + 7) = *(_OWORD *)(a1 + 136);
  *((_QWORD *)a2 + 16) = *(_QWORD *)(a1 + 152);
  a2[34] = *(_DWORD *)(a1 + 160);
  *((_QWORD *)a2 + 18) = *(_QWORD *)(a1 + 168);
  a2[38] = *(_DWORD *)(a1 + 184);
  *((_QWORD *)a2 + 20) = *(_QWORD *)(a1 + 192);
  a2[42] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL);
  a2[43] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
  a2[44] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 56LL);
  a2[45] = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 60LL);
  *(_OWORD *)(a2 + 46) = *(_OWORD *)(a1 + 200);
  *(_OWORD *)(a2 + 50) = *(_OWORD *)(a1 + 216);
  *((_WORD *)a2 + 108) = *(_WORD *)(a1 + 232);
  *((_WORD *)a2 + 109) = *(_WORD *)(a1 + 234);
  a2[55] = *(_DWORD *)(a1 + 236);
  a2[56] = *(_DWORD *)(a1 + 240);
  a2[57] = *(_DWORD *)(a1 + 244);
  *((_WORD *)a2 + 116) = *(_WORD *)(a1 + 272);
  *((_WORD *)a2 + 118) = *(_WORD *)(a1 + 308);
  *((_WORD *)a2 + 119) = *(_WORD *)(a1 + 304);
  *((_WORD *)a2 + 120) = *(_WORD *)(a1 + 306);
  result = *(unsigned int *)(a1 + 1680);
  if ( (result & 1) != 0 )
  {
    result = *(_QWORD *)(a1 + 1664);
    v5 = *(_DWORD *)(result + 12);
  }
  else
  {
    v5 = 0;
  }
  a2[61] = v5;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 224);
  if ( v7 )
  {
    for ( i = (__int64 *)(a1 + 1752); ; ++i )
    {
      result = *i;
      if ( *i )
        break;
      if ( ++v6 >= v7 )
        return result;
    }
    v9 = 3LL;
    v10 = a2 + 62;
    do
    {
      *v10 = *(_OWORD *)result;
      v10[1] = *(_OWORD *)(result + 16);
      v10[2] = *(_OWORD *)(result + 32);
      v10[3] = *(_OWORD *)(result + 48);
      v10[4] = *(_OWORD *)(result + 64);
      v10[5] = *(_OWORD *)(result + 80);
      v10[6] = *(_OWORD *)(result + 96);
      v10 += 8;
      v11 = *(_OWORD *)(result + 112);
      result += 128LL;
      *(v10 - 1) = v11;
      --v9;
    }
    while ( v9 );
    *v10 = *(_OWORD *)result;
    v10[1] = *(_OWORD *)(result + 16);
    result = *(_QWORD *)(result + 32);
    *((_QWORD *)v10 + 4) = result;
  }
  return result;
}
