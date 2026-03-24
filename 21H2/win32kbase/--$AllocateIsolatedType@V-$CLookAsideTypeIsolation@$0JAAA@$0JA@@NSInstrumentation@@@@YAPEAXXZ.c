/*
 * XREFs of ??$AllocateIsolatedType@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0082D98
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00C92F0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY AllocateIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<36864,144>>()
{
  unsigned __int8 *v0; // rbx
  PSLIST_ENTRY result; // rax

  v0 = gpTypeIsolation[1];
  if ( !v0 )
    return 0LL;
  ++*((_DWORD *)v0 + 17);
  result = ExpInterlockedPopEntrySList((PSLIST_HEADER)v0 + 3);
  if ( !result )
  {
    ++*((_DWORD *)v0 + 18);
    return (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int8 *))v0 + 12))(
                           *((unsigned int *)v0 + 21),
                           *((unsigned int *)v0 + 23),
                           *((unsigned int *)v0 + 22),
                           v0 + 48);
  }
  return result;
}
