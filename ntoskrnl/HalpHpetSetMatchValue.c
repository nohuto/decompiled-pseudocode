/*
 * XREFs of HalpHpetSetMatchValue @ 0x14051D88C
 * Callers:
 *     HalpHpetAcknowledgeInterrupt @ 0x14051D800 (HalpHpetAcknowledgeInterrupt.c)
 *     HalpHpetArmTimer @ 0x14051D840 (HalpHpetArmTimer.c)
 * Callees:
 *     HalSetTimerProblem @ 0x14051D440 (HalSetTimerProblem.c)
 */

__int64 __fastcall HalpHpetSetMatchValue(int *a1, int a2, char a3)
{
  unsigned int v3; // edi
  __int64 v4; // r13
  __int64 v6; // r15
  unsigned int v7; // edx
  unsigned int v9; // ebp
  unsigned int *v10; // r14
  unsigned int v11; // ebx
  int v12; // r12d
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  __int64 result; // rax
  signed __int32 v16[22]; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+8h]
  char v18; // [rsp+70h] [rbp+18h]

  v18 = a3;
  v3 = 0;
  v4 = HalpHpetBaseAddress;
  v6 = 32LL * *a1;
  v7 = a1[4];
  v17 = v7;
  v9 = 10;
  v10 = (unsigned int *)(HalpHpetBaseAddress + 32 * (*a1 + 8LL));
  v11 = 0;
  do
  {
    v12 = v7 + a2;
    if ( !a3 )
    {
      v13 = *v10 & 0xFFFFFEB1 | 0x14C;
      if ( a1[2] != 2 )
        v13 = *v10 & 0xFFFFFEB1 | 0x104;
      v14 = ((a1[1] & 0x1F) << 9) | v13 & 0xFFFF81FF;
      *v10 = v14;
      _InterlockedOr(v16, 0);
      v11 = v14 & 0xFFFFFFBF;
    }
    *(_DWORD *)(v6 + v4 + 264) = v12;
    _InterlockedOr(v16, 0);
    if ( !a3 )
    {
      if ( a1[2] == 2 )
      {
        if ( !*((_BYTE *)a1 + 12) )
        {
          HalSetTimerProblem((__int64)a1, 2, 0);
          v7 = v17;
          a3 = v18;
        }
        v11 |= 8u;
        *v10 = v11;
        _InterlockedOr(v16, 0);
        *(_DWORD *)(v6 + v4 + 264) = a1[4];
        _InterlockedOr(v16, 0);
        *v10 = v11;
        _InterlockedOr(v16, 0);
        *(_DWORD *)(v6 + v4 + 264) = a1[4];
        _InterlockedOr(v16, 0);
        *(_DWORD *)(v6 + v4 + 264) = a1[4];
      }
      else
      {
        *v10 = v11;
      }
      _InterlockedOr(v16, 0);
      a1[8] = v11;
    }
    a2 = *(_DWORD *)(HalpHpetBaseAddress + 240);
    if ( v12 - a2 <= v7
      && v12 - a2 >= (unsigned int)HalpHpetComparatorLatchDelay
      && *(_DWORD *)(v6 + v4 + 264) != 2 * v12 )
    {
      break;
    }
    v7 = 1 << v9++;
    v17 = v7;
  }
  while ( v9 < 0x1F );
  if ( v9 != 10 )
  {
    if ( v9 == 31 )
    {
      HalSetTimerProblem((__int64)a1, 6, 0);
      v3 = -1073741823;
    }
    ++HalpHpetDebugTimerArm[v9 - 10];
  }
  result = v3;
  a1[5] = v12;
  return result;
}
