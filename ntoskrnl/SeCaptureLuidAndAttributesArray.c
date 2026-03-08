/*
 * XREFs of SeCaptureLuidAndAttributesArray @ 0x14070F414
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x14070EA00 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x14070F230 (NtPrivilegeCheck.c)
 *     NtCreateTokenEx @ 0x14070F880 (NtCreateTokenEx.c)
 *     NtFilterToken @ 0x14073FB20 (NtFilterToken.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureLuidAndAttributesArray(
        char *Src,
        unsigned int a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  SIZE_T v10; // rdx
  char *v11; // rcx
  unsigned int v12; // edi
  PVOID PoolWithTag; // rax

  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x42 )
    return 3221225485LL;
  v10 = 12 * a2;
  *a9 = (v10 + 3) & 0xFFFFFFFC;
  if ( a3 && (_DWORD)v10 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = &Src[(unsigned int)v10];
    if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v12 = v10;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, v10, 0x754C6553u);
  *a8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Src, v12);
    return 0LL;
  }
  return 3221225626LL;
}
