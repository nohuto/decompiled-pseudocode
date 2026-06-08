/*
 * XREFs of InitAcpi1CStates @ 0x1C0032160
 * Callers:
 *     InitAcpiCStates @ 0x1C003255C (InitAcpiCStates.c)
 * Callees:
 *     memset @ 0x1C000EDC0 (memset.c)
 *     IsValidAcpiGenericAddress @ 0x1C002A810 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1CStates(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // esi
  char v4; // r15
  char v5; // r14
  unsigned int v6; // r11d
  __int64 v7; // r10
  SIZE_T v8; // rbp
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // rbx
  __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 272);
  v2 = 0;
  v4 = 0;
  *(_QWORD *)(a1 + 264) |= v1 & 7;
  v5 = 0;
  v6 = 1;
  LOBYTE(v7) = v1;
  if ( (v1 & 2) != 0
    && (unsigned __int16)AcpiInfo <= 0x64u
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0013C2C)
    && IsValidAcpiGenericAddress((unsigned __int8 *)(a1 + 184))
    && dword_1C00133F4 == v6 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1088), v6);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1092), v6);
    v7 = *(_QWORD *)(a1 + 272);
    v6 = 2;
    v4 = 1;
  }
  if ( (v7 & 4) != 0
    && (unsigned __int16)word_1C0013C12 <= 0x3E8u
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0013C44)
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0013C14)
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0013C2C)
    && IsValidAcpiGenericAddress((unsigned __int8 *)(a1 + 184))
    && dword_1C00133F4 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1088), 2u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 2u);
    ++v6;
    v5 = 1;
  }
  v8 = 20 * v6 + 4;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72637250u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v8);
    *v10 = 0;
    *(_OWORD *)(v10 + 1) = 0LL;
    *((_BYTE *)v10 + 4) = 127;
    *((_BYTE *)v10 + 16) = 1;
    *((_WORD *)v10 + 9) = 0;
    v10[5] = 0;
    v11 = *v10 + 1;
    *v10 = v11;
    if ( v4 )
    {
      LOBYTE(v10[5 * v11 + 4]) = 2;
      HIWORD(v10[5 * *v10 + 4]) = AcpiInfo;
      v10[5 * *v10 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -4 )
      {
        LOBYTE(v10[5 * *v10 + 1]) = 1;
        BYTE1(v10[5 * *v10 + 1]) = 8;
        BYTE2(v10[5 * *v10 + 1]) = 0;
        HIBYTE(v10[5 * *v10 + 1]) = 8;
        v10[5 * *v10 + 3] = 0;
        v10[5 * *v10 + 2] = *(_DWORD *)(a1 + 188) + 4;
      }
      v11 = ++*v10;
    }
    if ( v5 )
    {
      LOBYTE(v10[5 * v11 + 4]) = 3;
      HIWORD(v10[5 * *v10 + 4]) = word_1C0013C12;
      v10[5 * *v10 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -5 )
      {
        LOBYTE(v10[5 * *v10 + 1]) = 1;
        BYTE1(v10[5 * *v10 + 1]) = 8;
        BYTE2(v10[5 * *v10 + 1]) = 0;
        HIBYTE(v10[5 * *v10 + 1]) = 8;
        v10[5 * *v10 + 3] = 0;
        v10[5 * *v10 + 2] = *(_DWORD *)(a1 + 188) + 5;
      }
      ++*v10;
    }
    *(_QWORD *)(a1 + 512) = v10;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
