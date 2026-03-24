/*
 * XREFs of EditionConvertProcessPseudoToUserWindow @ 0x1C01D29A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionConvertProcessPseudoToUserWindow(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax

  *a3 = 0LL;
  v6 = -1073741811;
  v7 = ValidateHwnd(a1);
  if ( v7 && *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) == a2 )
  {
    *a3 = a1;
    return 0;
  }
  return v6;
}
