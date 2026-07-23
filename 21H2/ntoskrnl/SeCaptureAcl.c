/*
 * XREFs of SeCaptureAcl @ 0x1406CB390
 * Callers:
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x1406CC0B0 (NtCreateTokenEx.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     SepCheckAcl @ 0x1406CB4A4 (SepCheckAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeCaptureAcl(
        char *Src,
        char a2,
        __int64 a3,
        __int64 a4,
        POOL_TYPE PoolType,
        int a6,
        PVOID *a7,
        unsigned int *a8)
{
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  char *v12; // rcx
  PVOID PoolWithTag; // rax

  if ( a2 )
  {
    v9 = (__int64)(Src + 2);
    if ( (unsigned __int64)(Src + 2) >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v10 = *(unsigned __int16 *)v9;
    v11 = v10;
    if ( (_DWORD)v10 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = &Src[v10];
      if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v11 = *((unsigned __int16 *)Src + 1);
  }
  if ( v11 < 8 )
    return 3221225591LL;
  *a8 = (v11 + 3) & 0xFFFFFFFC;
  PoolWithTag = ExAllocatePoolWithTag(PoolType, v11, 0x63416553u);
  *a7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Src, v11);
    if ( (unsigned __int8)SepCheckAcl(*a7, v11) )
      return 0LL;
    ExFreePoolWithTag(*a7, 0);
    *a7 = 0LL;
    return 3221225591LL;
  }
  return 3221225626LL;
}
