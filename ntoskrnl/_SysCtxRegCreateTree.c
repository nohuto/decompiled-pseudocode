/*
 * XREFs of _SysCtxRegCreateTree @ 0x140687ACC
 * Callers:
 *     _PnpCtxRegCreateTree @ 0x140687A74 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1406D370C (_PnpCtxGetCachedNodeBaseKey.c)
 * Callees:
 *     _RegRtlCreateTreeTransacted @ 0x140687B40 (_RegRtlCreateTreeTransacted.c)
 */

__int64 __fastcall SysCtxRegCreateTree(
        __int64 a1,
        void *a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  if ( a1 )
    return RegRtlCreateTreeTransacted(a2, a3, a6, 0, a8, a9, *(_QWORD *)(a1 + 8));
  else
    return RegRtlCreateTreeTransacted(a2, a3, a6, 0, a8, a9, 0LL);
}
