/*
 * XREFs of ?iOpenGLExtEscapeHelper@@YAXPEAX@Z @ 0x1C0279D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02E2F44 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 */

void __fastcall iOpenGLExtEscapeHelper(PVOID Parameter)
{
  *((_DWORD *)Parameter + 11) = PDEVOBJ::Escape(
                                  *(PDEVOBJ **)Parameter,
                                  *((struct _SURFOBJ **)Parameter + 1),
                                  *((_DWORD *)Parameter + 4),
                                  *((_DWORD *)Parameter + 5),
                                  *((void **)Parameter + 3),
                                  *((_DWORD *)Parameter + 10),
                                  *((void **)Parameter + 4));
}
