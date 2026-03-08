/*
 * XREFs of ExpCovDeleteUnloadedModuleEntry @ 0x140A03718
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407F6CC8 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A03B6C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A04414 (ExpCovResetInformation.c)
 * Callees:
 *     ExpCovFreeUnloadedModuleEntry @ 0x140A03794 (ExpCovFreeUnloadedModuleEntry.c)
 */

__int64 __fastcall ExpCovDeleteUnloadedModuleEntry(_QWORD *a1)
{
  _QWORD *v2; // rdx
  void **v3; // rax
  unsigned int v4; // edx
  unsigned int v5; // ebx

  if ( !a1 )
    return 3221225485LL;
  v2 = (_QWORD *)*a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (void **)a1[1], *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = *((unsigned __int16 *)a1 + 16) + *((unsigned __int16 *)a1 + 8) + 64;
  if ( v4 < 0x40 )
    v4 = -1;
  v5 = v4 + *((_DWORD *)a1 + 12);
  if ( v5 < v4 )
    v5 = -1;
  ExpCovFreeUnloadedModuleEntry(a1);
  ExpCovCurrentPagedPoolInUse -= v5;
  return 0LL;
}
