/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0025734
 * Callers:
 *     ReferenceClass @ 0x1C00254E0 (ReferenceClass.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = 0LL;
  if ( a2 )
    v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(*(a1 - 12) + 128LL) = v2;
  result = a2;
  *a1 = a2;
  return result;
}
