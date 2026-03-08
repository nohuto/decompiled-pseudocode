/*
 * XREFs of ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x1C010966C
 * Callers:
 *     ReferenceClass @ 0x1C0109410 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 12);
  if ( a2 )
    *(_QWORD *)(v2 + 48) = a2 + *(a1 - 11) - v2;
  else
    *(_QWORD *)(v2 + 48) = 0LL;
  *a1 = a2;
  return a2;
}
