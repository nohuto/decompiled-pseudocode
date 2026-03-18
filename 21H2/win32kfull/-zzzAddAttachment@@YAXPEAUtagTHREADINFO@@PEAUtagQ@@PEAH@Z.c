/*
 * XREFs of ?zzzAddAttachment@@YAXPEAUtagTHREADINFO@@PEAUtagQ@@PEAH@Z @ 0x1C00A935C
 * Callers:
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00A924C (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall zzzAddAttachment(struct tagTHREADINFO *a1, struct tagQ *a2, int *a3)
{
  struct tagQ *v5; // rax

  if ( *((struct tagQ **)a1 + 82) != a2 )
  {
    v5 = tagTHREADINFO::AssignAttachQueue(a1, a2);
    if ( v5 )
      zzzDestroyQueue(v5, a1);
    *a3 = 1;
  }
}
