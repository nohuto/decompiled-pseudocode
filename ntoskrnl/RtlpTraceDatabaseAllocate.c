/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1405AF1F8
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1405AEE60 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405AF220 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpTraceDatabaseAllocate(__int64 a1, char a2, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // rcx

  v3 = (a2 & 4) == 0;
  v5 = 64LL;
  if ( v3 )
    v5 = 256LL;
  return ExAllocatePool2(v5, a1, a3);
}
