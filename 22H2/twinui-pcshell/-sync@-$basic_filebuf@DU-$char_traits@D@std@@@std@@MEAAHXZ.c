/*
 * XREFs of ?sync@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x180128E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::filebuf::sync(FILE **a1)
{
  unsigned int v2; // edi

  if ( !a1[16] )
    return 0;
  v2 = -1;
  if ( (*(unsigned int (__fastcall **)(FILE **, __int64))&(*a1)->_flag)(a1, 0xFFFFFFFFLL) == -1 || fflush(a1[16]) >= 0 )
    return 0;
  return v2;
}
