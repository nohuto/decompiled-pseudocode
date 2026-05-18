/*
 * XREFs of sub_1800268AC @ 0x1800268AC
 * Callers:
 *     sub_1800200FC @ 0x1800200FC (sub_1800200FC.c)
 *     sub_1801209FA @ 0x1801209FA (sub_1801209FA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800268AC(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx

  v2 = a2 + 40;
  v3 = a2;
  v4 = *(_QWORD *)(a2 + 96);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return j_j__o_free(v3);
}
