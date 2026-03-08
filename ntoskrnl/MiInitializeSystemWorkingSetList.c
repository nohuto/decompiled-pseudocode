/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x140726074
 * Callers:
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 *     MiInitializeSystemCache @ 0x140858B28 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x140B38784 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B391FC (MiInitializeSystemPtes.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 *     MiInitializeNonPagedPool @ 0x140B5EDA4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiTranslateWsType @ 0x1402998EC (MiTranslateWsType.c)
 *     MiAllowWorkingSetExpansion @ 0x1402A5F58 (MiAllowWorkingSetExpansion.c)
 *     MiInitializeWorkingSetList @ 0x1402A6260 (MiInitializeWorkingSetList.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  __int64 *v13; // rbp

  if ( a3 == 1 )
  {
    v13 = (__int64 *)(a2 + 320);
LABEL_7:
    *(_DWORD *)a2 = 0;
    *(_WORD *)(a2 + 174) = *(_WORD *)a1;
    MiInitializeWorkingSetList(a2, (__int64)v13, a3, a4);
    MiAllowWorkingSetExpansion(a2);
    return 1LL;
  }
  v8 = MiTranslateWsType(a3);
  if ( v8 > 2 )
  {
    *(_BYTE *)(v9 + 184) ^= (*(_BYTE *)(v9 + 184) ^ a3) & 7;
    *(_DWORD *)v9 = 0;
    *(_WORD *)(v9 + 174) = *(_WORD *)a1;
    return 1LL;
  }
  v10 = v8;
  v11 = (-(__int64)(*(_QWORD *)(a1 + 17040) < 0x4000uLL) & 0xFFFFFFFFFFFFFF20uLL) + 256;
  v12 = 5LL * v8;
  v13 = &MiState[5 * v8 + 903];
  if ( (unsigned int)MiChargeResident((void *)a1, v11, 20LL) )
  {
    if ( (unsigned __int16 *)a1 != MiSystemPartition )
    {
      v13 = (__int64 *)(a1 + 17536 + 8 * v12);
      a4 = MiState[40 * v10 + 2239];
    }
    *(_QWORD *)(a2 + 112) = v11;
    goto LABEL_7;
  }
  return 0LL;
}
