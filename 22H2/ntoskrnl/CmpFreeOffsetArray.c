/*
 * XREFs of CmpFreeOffsetArray @ 0x140A1AD30
 * Callers:
 *     CmDumpKeyToFile @ 0x140A0AB54 (CmDumpKeyToFile.c)
 *     CmpFlushBackupHive @ 0x140A1A998 (CmpFlushBackupHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeOffsetArray(unsigned int a1, PVOID *a2)
{
  PVOID *v3; // rbx
  __int64 v4; // rsi

  if ( a1 )
  {
    v3 = a2 + 1;
    v4 = a1;
    do
    {
      ExFreePoolWithTag(*v3, 0);
      v3 += 3;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(a2, 0);
}
