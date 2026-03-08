/*
 * XREFs of FillControllerConfiguration @ 0x1C00076B4
 * Callers:
 *     NVMeLogEtwControllerInfo @ 0x1C000880C (NVMeLogEtwControllerInfo.c)
 * Callees:
 *     memset @ 0x1C0004580 (memset.c)
 */

__int64 __fastcall FillControllerConfiguration(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // edx
  __int64 *i; // rbx
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // xmm1

  memset(a2, 0, 0x2A8uLL);
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
  *((_OWORD *)a2 + 8) = *(_OWORD *)(a1 + 152);
  a2[36] = *(_DWORD *)(a1 + 168);
  *((_QWORD *)a2 + 19) = *(_QWORD *)(a1 + 176);
  a2[40] = *(_DWORD *)(a1 + 192);
  *((_QWORD *)a2 + 21) = *(_QWORD *)(a1 + 200);
  a2[44] = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL);
  a2[45] = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
  a2[46] = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 56LL);
  a2[47] = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 60LL);
  *((_OWORD *)a2 + 12) = *(_OWORD *)(a1 + 208);
  *((_OWORD *)a2 + 13) = *(_OWORD *)(a1 + 224);
  *((_WORD *)a2 + 112) = *(_WORD *)(a1 + 240);
  *((_WORD *)a2 + 113) = *(_WORD *)(a1 + 242);
  a2[57] = *(_DWORD *)(a1 + 244);
  a2[58] = *(_DWORD *)(a1 + 248);
  a2[59] = *(_DWORD *)(a1 + 252);
  *((_WORD *)a2 + 120) = *(_WORD *)(a1 + 280);
  *((_WORD *)a2 + 122) = *(_WORD *)(a1 + 340);
  *((_WORD *)a2 + 123) = *(_WORD *)(a1 + 336);
  *((_WORD *)a2 + 124) = *(_WORD *)(a1 + 338);
  result = *(unsigned int *)(a1 + 1880);
  if ( (result & 1) != 0 )
  {
    result = *(_QWORD *)(a1 + 1864);
    v5 = *(_DWORD *)(result + 12);
  }
  else
  {
    v5 = 0;
  }
  a2[63] = v5;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 232);
  if ( v7 )
  {
    for ( i = (__int64 *)(a1 + 1952); ; ++i )
    {
      result = *i;
      if ( *i )
        break;
      if ( ++v6 >= v7 )
        return result;
    }
    v9 = a2 + 64;
    v10 = 3LL;
    do
    {
      *v9 = *(_OWORD *)result;
      v9[1] = *(_OWORD *)(result + 16);
      v9[2] = *(_OWORD *)(result + 32);
      v9[3] = *(_OWORD *)(result + 48);
      v9[4] = *(_OWORD *)(result + 64);
      v9[5] = *(_OWORD *)(result + 80);
      v9[6] = *(_OWORD *)(result + 96);
      v9 += 8;
      v11 = *(_OWORD *)(result + 112);
      result += 128LL;
      *(v9 - 1) = v11;
      --v10;
    }
    while ( v10 );
    *v9 = *(_OWORD *)result;
    v9[1] = *(_OWORD *)(result + 16);
    result = *(_QWORD *)(result + 32);
    *((_QWORD *)v9 + 4) = result;
  }
  return result;
}
