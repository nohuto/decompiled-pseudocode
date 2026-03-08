/*
 * XREFs of ?NpiLeafPageIn@NP_CONTEXT@@SAXPEAU1@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x1405BBEB8
 * Callers:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1405BBC3C (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x1405BBD34 (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x1405BBDC8 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 */

void __fastcall NP_CONTEXT::NpiLeafPageIn(struct NP_CONTEXT *a1, struct NP_CONTEXT::NP_CTX *a2, union _NP_LEAF_PTR *a3)
{
  _QWORD *v6; // rsi

  v6 = NP_CONTEXT::NpNodeAllocate(a2, (__int64)a2, 3);
  if ( v6 )
  {
    if ( (*((int (__fastcall **)(struct NP_CONTEXT::NP_CTX *, _QWORD *, _QWORD))a1 + 3))(a2, v6, *(_QWORD *)a3) >= 0 )
    {
      ++*((_DWORD *)a1 + 21);
      --*((_DWORD *)a1 + 11);
      ++*((_DWORD *)a1 + 12);
      *(_QWORD *)(((unsigned __int64)v6 + 11) & 0xFFFFFFFFFFFFFFF8uLL) = *(_QWORD *)a3;
      *(_QWORD *)a3 = v6;
      *(_DWORD *)a3 |= 1u;
    }
    else
    {
      ++*((_DWORD *)a1 + 23);
      NP_CONTEXT::NpNodeFree(a2, v6, 1);
    }
  }
  else
  {
    ++*((_DWORD *)a1 + 23);
  }
}
