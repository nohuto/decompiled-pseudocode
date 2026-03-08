/*
 * XREFs of _PnpCtxRegDeleteKey @ 0x140A5DE7C
 * Callers:
 *     PipCommitPendingOsExtensionResource @ 0x140B91960 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B91B70 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlDeleteKeyTransacted @ 0x14085F0A8 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegDeleteKey(__int64 a1, void *a2, const WCHAR *a3)
{
  __int64 v4; // r8
  __int64 v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
      v4 = *(_QWORD *)(v5 + 8);
  }
  return RegRtlDeleteKeyTransacted(a2, a3, v4);
}
