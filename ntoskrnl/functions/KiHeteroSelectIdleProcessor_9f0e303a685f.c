__int64 __fastcall KiHeteroSelectIdleProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // edx
  char v14; // cl
  unsigned __int64 v15; // rax

  if ( !a4 )
    return 0LL;
  v9 = KiHeteroIdleSetReduction(a2, (_QWORD *)a3, a4, a5, a6);
  if ( (KiHeteroSchedulerOptionsMask & 4) != 0 )
    v10 = (KiHeteroSchedulerOptions & 4) == 0;
  else
    v10 = (((KiDynamicHeteroCpuPolicyMask & 0x10) != 0) & _bittest(&KiVelocityFlags, 0xCu)) == 0;
  if ( v10 )
  {
    v14 = *(_BYTE *)(a3 + 209);
    _BitScanForward64(&v15, __ROR8__(v9, v14));
    v13 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a3 + 208)
                                             + (((unsigned __int8)v15 + v14) & 0x3F)];
  }
  else
  {
    v11 = *(unsigned __int8 *)(a3 + 209);
    v12 = *(unsigned __int8 *)(a3 + 208);
    v13 = KiProcessorNumberToIndexMappingTable[64 * v12
                                             + (unsigned int)KiFindBiasedSetMember(
                                                               v9,
                                                               (*(_QWORD *)(a1 + 72) >> KiFavoredCoreCycleTimeBits)
                                                             + v11)];
  }
  return KiProcessorBlock[v13];
}
