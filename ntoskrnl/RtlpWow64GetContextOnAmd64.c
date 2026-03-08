/*
 * XREFs of RtlpWow64GetContextOnAmd64 @ 0x14077CAD4
 * Callers:
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpWow64CtxFromAmd64 @ 0x14077CCA8 (RtlpWow64CtxFromAmd64.c)
 */

__int64 __fastcall RtlpWow64GetContextOnAmd64(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // esi
  __int64 result; // rax

  v3 = *a3;
  if ( (*a3 & 0x27FFFF80) != 0x10000 )
    return 3221225485LL;
  if ( !a2 )
    goto LABEL_5;
  result = RtlpWow64CtxFromAmd64(v3);
  if ( (int)result < 0 )
    return result;
  if ( *(_WORD *)(a2 + 56) != 35 )
  {
LABEL_5:
    if ( (v3 & 0x100000) == 0 )
    {
      if ( (v3 & 0x10001) == 0x10001 )
      {
        a3[45] = *(_DWORD *)(a1 + 180);
        a3[46] = *(_DWORD *)(a1 + 184);
        a3[47] = 35;
        a3[48] = *(_DWORD *)(a1 + 192) & 0x3F0DD5 | 0x202;
        a3[49] = *(_DWORD *)(a1 + 196);
        a3[50] = 43;
      }
      if ( (v3 & 0x10002) == 0x10002 )
      {
        a3[39] = *(_DWORD *)(a1 + 156);
        a3[40] = *(_DWORD *)(a1 + 160);
        a3[41] = *(_DWORD *)(a1 + 164);
        a3[42] = *(_DWORD *)(a1 + 168);
        a3[43] = *(_DWORD *)(a1 + 172);
        a3[44] = *(_DWORD *)(a1 + 176);
      }
      if ( (v3 & 0x10004) == 0x10004 )
      {
        a3[38] = 43;
        a3[37] = 43;
        a3[36] = 83;
        a3[35] = 43;
      }
      if ( (v3 & 0x10020) == 0x10020 )
      {
        *(_OWORD *)(a3 + 91) = *(_OWORD *)(a1 + 364);
        *(_OWORD *)(a3 + 95) = *(_OWORD *)(a1 + 380);
        *(_OWORD *)(a3 + 99) = *(_OWORD *)(a1 + 396);
        *(_OWORD *)(a3 + 103) = *(_OWORD *)(a1 + 412);
        *(_OWORD *)(a3 + 107) = *(_OWORD *)(a1 + 428);
        *(_OWORD *)(a3 + 111) = *(_OWORD *)(a1 + 444);
      }
      if ( (v3 & 0x40000000) != 0 && (*a3 & 0x18000000) == 0 )
        *a3 |= 0x88000000;
      return 0LL;
    }
    return 3221225485LL;
  }
  return 0LL;
}
