/*
 * XREFs of PspInitializeQuotaBlock @ 0x1408599CC
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140745228 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspInsertExpansionEntry @ 0x1403A94F4 (PspInsertExpansionEntry.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspExpandLimit @ 0x1405A1758 (PspExpandLimit.c)
 *     IoEnableIrpCredits @ 0x14094102C (IoEnableIrpCredits.c)
 */

__int64 __fastcall PspInitializeQuotaBlock(__int64 a1, int *a2, __int64 *a3)
{
  __int64 v6; // rdx
  signed int v7; // edi
  __int64 *v8; // rsi
  __int64 v9; // r14
  int *i; // r15
  char v11; // cl
  __int64 v12; // r8
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  memset(a3, 0, 0x240uLL);
  *((_DWORD *)a3 + 129) = 1;
  *((_DWORD *)a3 + 128) = 1;
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    if ( *(_QWORD *)a1 || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 48) )
      return 3221225485LL;
    a1 = 0LL;
    a2 = PspDefaultResourceLimits;
  }
  v7 = 0;
  v8 = a3 + 8;
  v9 = 0LL;
  for ( i = a2; ; ++i )
  {
    v11 = PspResourceFlags[v9 * 8];
    if ( (v11 & 2) != 0 )
      goto LABEL_9;
    v12 = a2 ? *i : *(_QWORD *)(a1 + PspQuotaLimitOffsets[v9]);
    *v8 = v12;
    if ( (v11 & 1) == 0 )
      goto LABEL_9;
    if ( v12 != -1 )
      break;
    *v8 = 0LL;
    PspInsertExpansionEntry((__int64)&PspQuotaExpansionDescriptors[14 * v7], (__int64)(v8 - 8));
LABEL_9:
    ++v7;
    v8 += 16;
    ++v9;
    if ( v7 >= 4 )
      return 0LL;
  }
  if ( !v12 )
    goto LABEL_9;
  v14 = 0LL;
  if ( PspExpandLimit(v7, v6, v12, (__int64)&v14) )
  {
    if ( !v7 )
      IoEnableIrpCredits();
    goto LABEL_9;
  }
  return 3221225626LL;
}
