/*
 * XREFs of HalpInterruptMarkProcessorStarted @ 0x14037A1D8
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x1403786F0 (HalpInterruptInitializeLocalUnit.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptMarkProcessorStarted(int a1)
{
  char v2; // bp
  char v3; // r9
  unsigned int v4; // r11d
  unsigned int Group; // esi
  unsigned __int8 GroupIndex; // r14
  unsigned int i; // r10d
  char v8; // bl
  ULONG_PTR v9; // r8
  int v10; // edx
  unsigned int v11; // edx
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp+10h]

  HIBYTE(v13) = 0;
  if ( HalpInterruptProcessorStateInitialized )
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    Group = KeGetCurrentPrcb()->Group;
    LOWORD(v13) = Group;
    GroupIndex = KeGetCurrentPrcb()->GroupIndex;
    BYTE2(v13) = GroupIndex;
    for ( i = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
          v4 < (unsigned int)HalpInterruptProcessorCount;
          ++v4 )
    {
      v8 = 0;
      v9 = HalpInterruptProcessorState + ((unsigned __int64)v4 << 6);
      if ( *(_BYTE *)(v9 + 12) || !(_WORD)Group && !GroupIndex )
        v8 = 1;
      if ( (unsigned int)HalpInterruptGicVersion >= 3 )
        v10 = (*(_QWORD *)(v9 + 48) >> 8) ^ (*(_DWORD *)(v9 + 48) ^ (*(_DWORD *)(v9 + 48) >> 8)) & 0xFFFFFF;
      else
        v10 = *(_DWORD *)v9;
      if ( v8 && v10 == a1 )
      {
        if ( !*(_BYTE *)(v9 + 13) )
          _InterlockedAdd(&HalpInterruptProcessorsStarted, 1u);
        *(_BYTE *)(v9 + 15) = 1;
        *(_BYTE *)(v9 + 13) = 1;
        *(_DWORD *)(v9 + 16) = v13;
        *(_DWORD *)(v9 + 20) = KeGetPcr()->Prcb.Number;
        if ( !(_WORD)Group && !GroupIndex )
          *(_BYTE *)(v9 + 12) = 1;
        v2 = 1;
      }
      else
      {
        if ( *(_BYTE *)(v9 + 13) && (*(_DWORD *)v9 & i) == (a1 & i) )
          v3 = 1;
        if ( !v2 )
          continue;
      }
      if ( v3 )
        break;
    }
    v11 = 0;
    if ( (_DWORD)HalpInterruptProcessorCount )
    {
      v12 = HalpInterruptDynamicProcessorState;
      while ( !*(_BYTE *)(v12 + 12) || *(_DWORD *)v12 != a1 )
      {
        ++v11;
        v12 += 64LL;
        if ( v11 >= (unsigned int)HalpInterruptProcessorCount )
          goto LABEL_26;
      }
      *(_BYTE *)(v12 + 13) = 1;
      *(_DWORD *)(v12 + 16) = v13;
      *(_DWORD *)(v12 + 20) = KeGetPcr()->Prcb.Number;
    }
LABEL_26:
    if ( !v3 )
      ++HalpInterruptPackagesStarted;
    if ( Group > HalpInterruptMaxGroupStarted )
      HalpInterruptMaxGroupStarted = Group;
  }
}
