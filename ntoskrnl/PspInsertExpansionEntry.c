/*
 * XREFs of PspInsertExpansionEntry @ 0x1403A94F4
 * Callers:
 *     PspInitializeQuotaBlock @ 0x1408599CC (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspLockQuotaExpansion @ 0x1402954EC (PspLockQuotaExpansion.c)
 *     PspUnlockQuotaExpansion @ 0x140295534 (PspUnlockQuotaExpansion.c)
 */

int __fastcall PspInsertExpansionEntry(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  unsigned __int8 v6; // dl
  KIRQL v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  PspLockQuotaExpansion(a1, &v8);
  v4 = (_QWORD *)(a2 + 80);
  v5 = *(_QWORD **)(a1 + 48);
  if ( *v5 != a1 + 40 )
    __fastfail(3u);
  v4[1] = v5;
  *v4 = a1 + 40;
  *v5 = v4;
  v6 = v8;
  *(_QWORD *)(a1 + 48) = v4;
  return PspUnlockQuotaExpansion(a1, v6);
}
