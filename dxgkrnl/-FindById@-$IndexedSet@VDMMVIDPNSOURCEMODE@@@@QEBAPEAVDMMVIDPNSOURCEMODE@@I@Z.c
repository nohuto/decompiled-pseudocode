/*
 * XREFs of ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C00066E0
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0005F80 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1C01706B0 (BmlGetNextBestSourceMode.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01833DC (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IndexedSet<DMMVIDPNSOURCEMODE>::FindById(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a1 + 24;
  if ( v2 == v3 )
    return 0LL;
  for ( result = v2 - 8; result; result = v5 - 8 )
  {
    if ( *(_DWORD *)(result + 24) == a2 )
      break;
    v5 = *(_QWORD *)(result + 8);
    if ( v5 == v3 )
      return 0LL;
  }
  return result;
}
