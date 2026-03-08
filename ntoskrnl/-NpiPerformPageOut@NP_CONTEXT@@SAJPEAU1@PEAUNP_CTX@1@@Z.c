/*
 * XREFs of ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x1405BBF58
 * Callers:
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x1405BBD34 (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z @ 0x1405BBE14 (-NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z.c)
 *     ?NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z @ 0x1405BBE3C (-NpiGetReservedBuffer@NP_CONTEXT@@SAPEAXPEAU1@PEAUNP_CTX@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x1405BBDC8 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 */

__int64 __fastcall NP_CONTEXT::NpiPerformPageOut(struct NP_CONTEXT *a1, struct NP_CONTEXT::NP_CTX *a2)
{
  unsigned int v4; // edi
  void (__fastcall *v5)(struct NP_CONTEXT::NP_CTX *, __int64 (__fastcall *)(void *, void *, unsigned __int64 *), struct NP_CONTEXT *); // rax
  __int64 *v6; // r14
  _QWORD *v7; // rbp
  __int64 v8; // rax

  v4 = 0;
  while ( 1 )
  {
    v5 = (void (__fastcall *)(struct NP_CONTEXT::NP_CTX *, __int64 (__fastcall *)(void *, void *, unsigned __int64 *), struct NP_CONTEXT *))*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 7) = 0LL;
    v5(a2, NP_CONTEXT::NpiTreeWalkCallback, a1);
    v6 = (__int64 *)*((_QWORD *)a1 + 7);
    v7 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFF000uLL);
    v8 = *(_QWORD *)(((unsigned __int64)v7 + 11) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v8 || (v8 & 2) != 0 )
      break;
    --*((_DWORD *)a1 + 12);
LABEL_7:
    ++*((_DWORD *)a1 + 11);
    *v6 = v8;
    NP_CONTEXT::NpNodeFree(a2, v7, 1);
    if ( *((_DWORD *)a1 + 10) <= *(_DWORD *)a1 )
      return v4;
  }
  v8 = (*((__int64 (__fastcall **)(struct NP_CONTEXT::NP_CTX *, unsigned __int64))a1 + 2))(
         a2,
         *v6 & 0xFFFFFFFFFFFFF000uLL);
  if ( v8 )
  {
    ++*((_DWORD *)a1 + 20);
    goto LABEL_7;
  }
  ++*((_DWORD *)a1 + 22);
  return (unsigned int)-1073741435;
}
