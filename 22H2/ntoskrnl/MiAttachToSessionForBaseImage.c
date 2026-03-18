/*
 * XREFs of MiAttachToSessionForBaseImage @ 0x140641C04
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A350D8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BDD8 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiAttachSessionGlobal @ 0x14033D89C (MiAttachSessionGlobal.c)
 *     MiDetachSessionGlobal @ 0x14033EDBC (MiDetachSessionGlobal.c)
 *     MiGetNextSessionGlobal @ 0x140637594 (MiGetNextSessionGlobal.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140695E68 (MmIsDriverLoadedCurrentSession.c)
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
    MiAttachSessionGlobal((__int64)NextSessionGlobal, *((unsigned int *)&xmmword_140C69958 + 2));
    if ( (unsigned int)MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
      break;
    MiDetachSessionGlobal((__int64)(&xmmword_140C69958 + 1));
  }
  return v2;
}
