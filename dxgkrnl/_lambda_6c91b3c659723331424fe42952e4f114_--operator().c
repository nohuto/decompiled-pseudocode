/*
 * XREFs of _lambda_6c91b3c659723331424fe42952e4f114_::operator() @ 0x1C02EEF94
 * Callers:
 *     _lambda_2792f1a5517d9286fa3e49da2fcc5db9_::operator() @ 0x1C02EECBC (_lambda_2792f1a5517d9286fa3e49da2fcc5db9_--operator().c)
 * Callees:
 *     ConvertDmmToDisplayConfigRotation @ 0x1C01BA4A4 (ConvertDmmToDisplayConfigRotation.c)
 */

__int64 __fastcall lambda_6c91b3c659723331424fe42952e4f114_::operator()(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // eax
  _DWORD *v6; // r10
  _DWORD *v7; // r11
  int v8; // eax
  __int64 result; // rax

  *(_QWORD *)(a3 + 8) = 16911106LL;
  *(_QWORD *)a3 = 0x8004700001030B02uLL;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)a4;
  *(_DWORD *)(a3 + 24) = a2;
  *(_DWORD *)(a3 + 28) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a4 + 28);
  *(_DWORD *)(a3 + 52) = *(_DWORD *)(a4 + 32);
  *(_DWORD *)(a3 + 72) ^= (*(_DWORD *)(a3 + 72) ^ (*(_DWORD *)(a4 + 36) << 16)) & 0x3F0000;
  *(_DWORD *)(a3 + 88) = *(_DWORD *)(a4 + 20);
  *(_DWORD *)(a3 + 92) = *(_DWORD *)(a4 + 24);
  *(_DWORD *)(a3 + 96) = 21;
  v5 = ConvertDmmToDisplayConfigRotation(*(_DWORD *)(a4 + 40));
  v6[26] = v5;
  v6[28] = 1;
  v6[27] = 1;
  v6[29] = v7[3];
  v6[30] = v7[4];
  v6[39] = a5;
  if ( ((v7[10] - 1) & 0xFFFFFFFD) != 0 )
  {
    v6[31] = v7[6];
    v8 = v7[5];
  }
  else
  {
    v6[31] = v7[5];
    v8 = v7[6];
  }
  v6[32] = v8;
  v6[49] = v7[7];
  result = (unsigned int)v7[8];
  v6[50] = result;
  v6[53] = 1;
  return result;
}
