/*
 * XREFs of RtlpCopyLegacyContextArm @ 0x1405A8A14
 * Callers:
 *     RtlpCopyLegacyContext @ 0x14036519C (RtlpCopyLegacyContext.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpCopyLegacyContextArm(char a1, __int64 a2, int a3, __int64 a4)
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
    if ( (a3 & 0x200001) == 0x200001 )
    {
      *(_DWORD *)(a2 + 64) = *(_DWORD *)(a4 + 64);
      *(_DWORD *)(a2 + 56) = *(_DWORD *)(a4 + 56);
      *(_DWORD *)(a2 + 60) = *(_DWORD *)(a4 + 60);
      *(_DWORD *)(a2 + 68) = *(_DWORD *)(a4 + 68);
    }
    if ( (a3 & 0x200002) == 0x200002 )
    {
      *(_OWORD *)(a2 + 4) = *(_OWORD *)(a4 + 4);
      *(_OWORD *)(a2 + 20) = *(_OWORD *)(a4 + 20);
      *(_OWORD *)(a2 + 36) = *(_OWORD *)(a4 + 36);
      *(_DWORD *)(a2 + 52) = *(_DWORD *)(a4 + 52);
    }
    if ( (a3 & 0x200004) == 0x200004 )
    {
      v4 = (_OWORD *)(a4 + 80);
      v5 = 2LL;
      *(_DWORD *)(a2 + 72) = *(_DWORD *)(a4 + 72);
      v6 = (_OWORD *)(a2 + 80);
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
    if ( (a3 & 0x200008) == 0x200008 )
    {
      *(_OWORD *)(a2 + 336) = *(_OWORD *)(a4 + 336);
      *(_OWORD *)(a2 + 352) = *(_OWORD *)(a4 + 352);
      *(_OWORD *)(a2 + 368) = *(_OWORD *)(a4 + 368);
      *(_OWORD *)(a2 + 384) = *(_OWORD *)(a4 + 384);
      *(_DWORD *)(a2 + 400) = *(_DWORD *)(a4 + 400);
      *(_DWORD *)(a2 + 404) = *(_DWORD *)(a4 + 404);
    }
  }
}
