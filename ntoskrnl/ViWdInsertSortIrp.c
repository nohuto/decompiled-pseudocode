/*
 * XREFs of ViWdInsertSortIrp @ 0x140ADB2E8
 * Callers:
 *     ViWdBeforeCancelIrp @ 0x140ADB23C (ViWdBeforeCancelIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViWdInsertSortIrp(__int64 a1)
{
  __int64 i; // rdx
  __int64 result; // rax

  for ( i = qword_140D70690; (__int64 *)i != &VfWdIrpListHead; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(i + 24) <= *(_DWORD *)(a1 + 24) )
      break;
  }
  *(_QWORD *)(a1 + 8) = i;
  *(_QWORD *)a1 = *(_QWORD *)i;
  *(_QWORD *)(*(_QWORD *)i + 8LL) = a1;
  *(_QWORD *)i = a1;
  *(_BYTE *)(a1 + 28) = 1;
  result = (unsigned int)++ViWdIrpListLength;
  if ( ViWdIrpListLength > ViWdIrpListLengthMaximum )
  {
    result = (unsigned int)ViWdIrpListLength;
    ViWdIrpListLengthMaximum = ViWdIrpListLength;
  }
  return result;
}
