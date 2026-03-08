/*
 * XREFs of RtlpWow64CtxFromAmd64 @ 0x14077CCA8
 * Callers:
 *     RtlpWow64GetContextOnAmd64 @ 0x14077CAD4 (RtlpWow64GetContextOnAmd64.c)
 * Callees:
 *     RtlFxToFnFrame @ 0x1402ECAF0 (RtlFxToFnFrame.c)
 */

__int64 __fastcall RtlpWow64CtxFromAmd64(int a1, _DWORD *a2, int *a3)
{
  int v3; // edi
  unsigned __int16 *v6; // rdx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int64 result; // rax

  v3 = a1;
  if ( (a1 & 0x10001) == 0x10001 )
  {
    a3[45] = a2[40];
    a3[47] = 35;
    a3[46] = a2[62];
    a3[50] = 43;
    a3[49] = a2[38];
    a3[48] = a2[17];
  }
  if ( (a1 & 0x10002) == 0x10002 )
  {
    a3[39] = a2[44];
    a3[40] = a2[42];
    a3[41] = a2[36];
    a3[42] = a2[34];
    a3[43] = a2[32];
    a3[44] = a2[30];
  }
  if ( (a1 & 0x10004) == 0x10004 )
  {
    a3[35] = 43;
    a3[37] = 43;
    a3[38] = 43;
    a3[36] = 83;
  }
  v6 = (unsigned __int16 *)(a2 + 64);
  if ( (a1 & 0x10020) == 0x10020 )
  {
    v7 = a3 + 51;
    v8 = a2 + 64;
    v9 = 2LL;
    do
    {
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      v7[3] = v8[3];
      v7[4] = v8[4];
      v7[5] = v8[5];
      v7[6] = v8[6];
      v7 += 8;
      v10 = v8[7];
      v8 += 8;
      *(v7 - 1) = v10;
      --v9;
    }
    while ( v9 );
    *v7 = *v8;
    v7[1] = v8[1];
  }
  if ( (v3 & 0x10008) == 0x10008 )
  {
    a3[34] = 0;
    RtlFxToFnFrame(a3 + 7, v6);
  }
  if ( (v3 & 0x10010) == 0x10010 )
  {
    if ( (a2[28] & 0x355LL) != 0 )
    {
      a3[1] = a2[18];
      a3[2] = a2[20];
      a3[3] = a2[22];
      a3[4] = a2[24];
      a3[5] = a2[26];
      a3[6] = a2[28] & 0xFFFF0155;
    }
    else
    {
      a3[1] = 0;
      a3[2] = 0;
      a3[3] = 0;
      a3[4] = 0;
      a3[5] = 0;
      a3[6] = 0;
    }
  }
  if ( (v3 & 0x40000000) != 0 )
    v3 = a2[12] ^ (a2[12] ^ v3) & 0x67FFFFFF;
  result = 0LL;
  *a3 = v3;
  return result;
}
