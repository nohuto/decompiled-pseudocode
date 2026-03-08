/*
 * XREFs of HvlConfigureIdleStates @ 0x1405441F8
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x14099AC10 (PpmIdleUpdateHvStates.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpSetPowerProperty @ 0x140544E50 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlConfigureIdleStates(int a1, _OWORD *a2)
{
  __int64 v4; // rax
  _OWORD *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _DWORD v14[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v14, 0, 0x194uLL);
  v4 = 3LL;
  v14[2] = a1;
  v5 = &v14[4];
  do
  {
    v6 = a2[1];
    *v5 = *a2;
    v7 = a2[2];
    v5[1] = v6;
    v8 = a2[3];
    v5[2] = v7;
    v9 = a2[4];
    v5[3] = v8;
    v10 = a2[5];
    v5[4] = v9;
    v11 = a2[6];
    v5[5] = v10;
    v12 = a2[7];
    a2 += 8;
    v5[6] = v11;
    v5 += 8;
    *(v5 - 1) = v12;
    --v4;
  }
  while ( v4 );
  *(_QWORD *)v5 = *(_QWORD *)a2;
  return HvlpSetPowerProperty(v14, 128LL);
}
