/*
 * XREFs of StorpFreeHostMemoryBuffer @ 0x1C003B5EC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorpFreeHostMemoryBuffer(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdi
  unsigned int *v3; // rbx
  __int64 v4; // rbp
  struct _MDL *v6; // rcx
  unsigned int *v7; // rsi

  v1 = *(__int64 **)(a1 - 16);
  v2 = *v1;
  v3 = *(unsigned int **)(*v1 + 5720);
  v4 = *(_QWORD *)(*v1 + 728);
  if ( !v3 )
    return 3238002689LL;
  do
  {
    v6 = (struct _MDL *)*((_QWORD *)v3 + 1);
    v7 = *(unsigned int **)v3;
    if ( v6 )
    {
      MmFreePagesFromMdl(v6);
      ExFreePoolWithTag(*((PVOID *)v3 + 1), 0);
    }
    if ( *((_QWORD *)v3 + 3) )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v4 + 8) + 24LL))(v4, v3[8], *((_QWORD *)v3 + 2));
    ExFreePoolWithTag(v3, 0);
    v3 = v7;
  }
  while ( v7 );
  *(_QWORD *)(v2 + 5720) = 0LL;
  return 0LL;
}
