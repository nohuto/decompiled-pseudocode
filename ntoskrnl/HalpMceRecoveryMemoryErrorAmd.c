/*
 * XREFs of HalpMceRecoveryMemoryErrorAmd @ 0x140516BC0
 * Callers:
 *     HalpMceRecoveryRequired @ 0x140516F9C (HalpMceRecoveryRequired.c)
 * Callees:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x1405092C0 (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpMceMemoryErrorRecovery @ 0x140516980 (HalpMceMemoryErrorRecovery.c)
 */

__int64 __fastcall HalpMceRecoveryMemoryErrorAmd(__int64 a1)
{
  char v2; // si
  __int64 v3; // rdi
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax

  v2 = 0;
  v3 = 0LL;
  v4 = -1073741637;
  v5 = *(_QWORD *)(a1 + 20);
  v6 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) == 1 )
  {
    if ( *(_DWORD *)a1 < 3u )
      return v4;
    *(_DWORD *)(a1 + 272) |= 8u;
    goto LABEL_16;
  }
  if ( (v6 & 0x80000000000LL) == 0 && (v5 & 3) != 0 )
    goto LABEL_16;
  if ( (v6 & 0x400000000000000LL) != 0 )
  {
    v2 = 1;
    v3 = *(_QWORD *)(a1 + 48) & ~((1LL << (HIBYTE(*(_QWORD *)(a1 + 48)) & 0x3F)) - 1) & 0xFFFFFFFFFFFFFFLL;
  }
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    v4 = HalpHvMceConsumedMemoryErrorRecovery(*(unsigned int *)(a1 + 16), v3, v6, (v5 & 2) != 0, v5 & 1);
    if ( (v4 & 0x80000000) == 0 )
    {
      if ( *(_DWORD *)a1 >= 3u )
        *(_DWORD *)(a1 + 276) |= 2u;
      return v4;
    }
  }
  v7 = HalpMceMemoryErrorRecovery(1, v2, v3);
  v4 = v7;
  if ( v7 < 0 && *(_DWORD *)a1 >= 3u )
    *(_DWORD *)(a1 + 272) |= 0x10u;
  if ( v7 == -1073741637 )
  {
LABEL_16:
    if ( *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 1u;
  }
  return v4;
}
