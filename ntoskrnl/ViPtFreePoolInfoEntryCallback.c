/*
 * XREFs of ViPtFreePoolInfoEntryCallback @ 0x140ADBD40
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ViPtFreePoolInfoEntryCallback(struct _RTL_AVL_TABLE *Table, _QWORD *Buffer)
{
  __int64 v2; // rcx

  if ( ViUpdateStackInfo )
  {
    if ( Buffer != (_QWORD *)-32LL )
    {
      v2 = Buffer[6];
      if ( v2 )
      {
        ++*(_DWORD *)(v2 + 16);
        *(_QWORD *)(Buffer[6] + 32LL) += Buffer[5];
      }
    }
  }
  ExFreePoolWithTag(Buffer, 0x6E496956u);
}
