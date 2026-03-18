/*
 * XREFs of ??$AllocateIsolatedType@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0094594
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C0088400 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY AllocateIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<36864,144>>()
{
  __int64 v0; // rbx
  PSLIST_ENTRY result; // rax

  v0 = *((_QWORD *)gpTypeIsolation + 1);
  if ( !v0 )
    return 0LL;
  ++*(_DWORD *)(v0 + 68);
  result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v0 + 48));
  if ( !result )
  {
    ++*(_DWORD *)(v0 + 72);
    return (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v0 + 96))(
                           *(unsigned int *)(v0 + 84),
                           *(unsigned int *)(v0 + 92),
                           *(unsigned int *)(v0 + 88),
                           v0 + 48);
  }
  return result;
}
