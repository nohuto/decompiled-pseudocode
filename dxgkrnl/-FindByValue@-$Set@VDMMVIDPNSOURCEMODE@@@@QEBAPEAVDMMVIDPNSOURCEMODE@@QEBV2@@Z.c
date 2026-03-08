/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0069E0C
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00024B8 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0067804 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DMMVIDPNSOURCEMODE>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rbx
  __int64 v6; // rcx

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 )
    return 0LL;
  v5 = v3 - 8;
  while ( v5 )
  {
    if ( DMMVIDPNSOURCEMODE::operator==(v5, a2) )
      break;
    v6 = *(_QWORD *)(v5 + 8);
    v5 = v6 - 8;
    if ( v6 == v2 )
      v5 = 0LL;
  }
  return v5;
}
