/*
 * XREFs of RtlpCopyLegacyContextArm64 @ 0x1405A8B74
 * Callers:
 *     RtlpCopyLegacyContext @ 0x14036519C (RtlpCopyLegacyContext.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpCopyLegacyContextArm64(char a1, __int64 a2, int a3, __int64 a4)
{
  _OWORD *v4; // rcx
  __int64 v5; // r10
  _OWORD *v6; // rax
  __int128 v7; // xmm1

  *(_DWORD *)a2 = a3 & 0x67FFFFFF;
  if ( a1 )
  {
    if ( (a3 & 0x40000000) != 0 )
      *(_DWORD *)a2 = a3 & 0x67FFFFFF | *(_DWORD *)a4 & 0x98000000;
    if ( (a3 & 0x400001) == 0x400001 )
    {
      *(_QWORD *)(a2 + 264) = *(_QWORD *)(a4 + 264);
      *(_QWORD *)(a2 + 256) = *(_QWORD *)(a4 + 256);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a4 + 4);
    }
    if ( (a3 & 0x400002) == 0x400002 )
    {
      *(_OWORD *)(a2 + 8) = *(_OWORD *)(a4 + 8);
      *(_OWORD *)(a2 + 24) = *(_OWORD *)(a4 + 24);
      *(_OWORD *)(a2 + 40) = *(_OWORD *)(a4 + 40);
      *(_OWORD *)(a2 + 56) = *(_OWORD *)(a4 + 56);
      *(_OWORD *)(a2 + 72) = *(_OWORD *)(a4 + 72);
      *(_OWORD *)(a2 + 88) = *(_OWORD *)(a4 + 88);
      *(_OWORD *)(a2 + 104) = *(_OWORD *)(a4 + 104);
      *(_OWORD *)(a2 + 120) = *(_OWORD *)(a4 + 120);
      *(_OWORD *)(a2 + 136) = *(_OWORD *)(a4 + 136);
      *(_OWORD *)(a2 + 160) = *(_OWORD *)(a4 + 160);
      *(_OWORD *)(a2 + 176) = *(_OWORD *)(a4 + 176);
      *(_OWORD *)(a2 + 192) = *(_OWORD *)(a4 + 192);
      *(_OWORD *)(a2 + 208) = *(_OWORD *)(a4 + 208);
      *(_OWORD *)(a2 + 224) = *(_OWORD *)(a4 + 224);
      *(_QWORD *)(a2 + 240) = *(_QWORD *)(a4 + 240);
      *(_QWORD *)(a2 + 248) = *(_QWORD *)(a4 + 248);
    }
    if ( (a3 & 0x400010) == 0x400010 )
      *(_QWORD *)(a2 + 152) = *(_QWORD *)(a4 + 152);
    if ( (a3 & 0x400004) == 0x400004 )
    {
      v4 = (_OWORD *)(a4 + 272);
      *(_DWORD *)(a2 + 784) = *(_DWORD *)(a4 + 784);
      v5 = 4LL;
      *(_DWORD *)(a2 + 788) = *(_DWORD *)(a4 + 788);
      v6 = (_OWORD *)(a2 + 272);
      do
      {
        *v6 = *v4;
        v6[1] = v4[1];
        v6[2] = v4[2];
        v6[3] = v4[3];
        v6[4] = v4[4];
        v6[5] = v4[5];
        v6[6] = v4[6];
        v6 += 8;
        v7 = v4[7];
        v4 += 8;
        *(v6 - 1) = v7;
        --v5;
      }
      while ( v5 );
    }
    if ( (a3 & 0x400008) == 0x400008 )
    {
      *(_OWORD *)(a2 + 824) = *(_OWORD *)(a4 + 824);
      *(_OWORD *)(a2 + 840) = *(_OWORD *)(a4 + 840);
      *(_OWORD *)(a2 + 856) = *(_OWORD *)(a4 + 856);
      *(_OWORD *)(a2 + 872) = *(_OWORD *)(a4 + 872);
      *(_OWORD *)(a2 + 792) = *(_OWORD *)(a4 + 792);
      *(_OWORD *)(a2 + 808) = *(_OWORD *)(a4 + 808);
      *(_OWORD *)(a2 + 896) = *(_OWORD *)(a4 + 896);
      *(_QWORD *)(a2 + 888) = *(_QWORD *)(a4 + 888);
    }
  }
}
