/*
 * XREFs of Endpoint_IsTransferRingEmpty @ 0x1C003A75C
 * Callers:
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0010A74 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C003B64C (Endpoint_OnResetSetDequeuePointer.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_IsTransferRingEmpty(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(104LL * (a2 - 1) + v2 + 48);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 16LL) + 16LL * a2) & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 176) + 24LL);
  return v4 == v5 && v4 == v5 + 16LL * *(unsigned int *)(v3 + 192);
}
