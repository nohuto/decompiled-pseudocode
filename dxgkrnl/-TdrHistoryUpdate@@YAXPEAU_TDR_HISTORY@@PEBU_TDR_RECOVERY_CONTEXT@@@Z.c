/*
 * XREFs of ?TdrHistoryUpdate@@YAXPEAU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TdrHistoryUpdate(struct _TDR_HISTORY *a1, const struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v2; // r8

  v2 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)a1 + 5, 1u) + 1) & 0x3F);
  *((_QWORD *)a1 + v2 + 3) = *((_QWORD *)a2 + 15);
  *((_DWORD *)a1 + 2 * v2 + 8) = *((_DWORD *)a2 + 4);
  *(_OWORD *)((char *)a1 + 8 * v2 + 40) = *(_OWORD *)((char *)a2 + 56);
  *((_QWORD *)a1 + v2 + 7) = *((_QWORD *)a2 + 9);
}
