/*
 * XREFs of VfQueryDispatchTable @ 0x1405CC2B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void *__fastcall VfQueryDispatchTable(int a1, unsigned int a2)
{
  __int64 v2; // r8
  int v4; // ecx
  void *v5; // rax

  v2 = 0LL;
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead && !VfClearanceFlag )
    return 0LL;
  if ( !a1 )
  {
    v5 = &VfWdmDispatchTable;
    if ( a2 > dword_140C07564 )
      return 0LL;
    return v5;
  }
  v4 = a1 - 2;
  if ( v4 )
  {
    if ( v4 == 1 && a2 <= dword_140C07544 )
      return &VfXdvDispatchTable;
    return (void *)v2;
  }
  if ( ViFnXdvQueryDispatchTable )
    return (void *)ViFnXdvQueryDispatchTable(2LL);
  return (void *)v2;
}
