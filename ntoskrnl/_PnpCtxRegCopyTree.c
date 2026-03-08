/*
 * XREFs of _PnpCtxRegCopyTree @ 0x140A5DE1C
 * Callers:
 *     PipMigratePnpState @ 0x140B5AC14 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegCopyTree(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( *(_QWORD *)&PiPnpRtlCtx && (v5 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v6 = *(_QWORD *)(v5 + 8);
  else
    v6 = 0LL;
  return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, v6, 0);
}
