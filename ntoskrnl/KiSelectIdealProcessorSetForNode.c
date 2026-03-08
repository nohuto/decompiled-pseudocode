/*
 * XREFs of KiSelectIdealProcessorSetForNode @ 0x140296D74
 * Callers:
 *     KiSelectIdealProcessorSetForGroup @ 0x140296BAC (KiSelectIdealProcessorSetForGroup.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KiFindBiasedSetMember @ 0x14045780C (KiFindBiasedSetMember.c)
 */

unsigned int *__fastcall KiSelectIdealProcessorSetForNode(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  __int64 v9; // r15
  unsigned int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // edi
  __int64 i; // r12
  __int64 Prcb; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned int *result; // rax
  int v21; // ebx

  v9 = 0LL;
  v10 = 0;
  v11 = a3;
  v12 = 0;
  for ( i = *(_QWORD *)(a1 + 168);
        v10 < a4;
        v11 = KiProcessorNumberToIndexMappingTable[64 * v21 + (unsigned int)KiFindBiasedSetMember(i, a5)] )
  {
    Prcb = KeGetPrcb(v11);
    v17 = *(_QWORD *)(Prcb + 34928);
    if ( !v17 )
      v17 = *(_QWORD *)(Prcb + 200);
    i &= ~v17;
    v18 = v10 + 1;
    v19 = a2 & v17;
    if ( !v19 )
      v18 = v12;
    v9 |= v19;
    v12 = v18;
    v10 += (unsigned int)((0x101010101010101LL
                         * ((((v19 - ((v19 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v19 - ((v19 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v19 - ((v19 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v19 - ((v19 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    if ( !i )
      break;
    v21 = *(unsigned __int16 *)(a1 + 136);
  }
  *a6 = v9;
  *a7 = v10;
  result = a8;
  *a8 = v12;
  return result;
}
