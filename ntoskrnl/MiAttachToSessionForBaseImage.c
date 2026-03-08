/*
 * XREFs of MiAttachToSessionForBaseImage @ 0x14063F7A4
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x140A390F8 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiAttachSessionGlobal @ 0x1402D509C (MiAttachSessionGlobal.c)
 *     MiDetachSessionGlobal @ 0x1402EA04C (MiDetachSessionGlobal.c)
 *     MiGetNextSessionGlobal @ 0x14063510C (MiGetNextSessionGlobal.c)
 *     MmIsDriverLoadedCurrentSession @ 0x1407F7298 (MmIsDriverLoadedCurrentSession.c)
 */

__int64 *__fastcall MiAttachToSessionForBaseImage(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *NextSessionGlobal; // rax

  v2 = 0LL;
  while ( 1 )
  {
    NextSessionGlobal = MiGetNextSessionGlobal(v2);
    v2 = NextSessionGlobal;
    if ( !NextSessionGlobal )
      break;
    MiAttachSessionGlobal((__int64)NextSessionGlobal, *((unsigned int *)&xmmword_140C694D8 + 2));
    if ( (unsigned int)MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
      break;
    MiDetachSessionGlobal((__int64)(&xmmword_140C694D8 + 1));
  }
  return v2;
}
