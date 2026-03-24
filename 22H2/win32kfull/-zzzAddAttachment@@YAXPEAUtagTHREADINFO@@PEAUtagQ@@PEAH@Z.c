/*
 * XREFs of ?zzzAddAttachment@@YAXPEAUtagTHREADINFO@@PEAUtagQ@@PEAH@Z @ 0x1C0011EB4
 * Callers:
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0011DA8 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall zzzAddAttachment(struct tagTHREADINFO *a1, struct tagQ *a2, int *a3)
{
  struct tagQ *v3; // rax

  v3 = (struct tagQ *)*((_QWORD *)a1 + 82);
  if ( v3 != a2 )
  {
    *((_QWORD *)a1 + 82) = a2;
    ++*((_DWORD *)a2 + 98);
    if ( v3 )
      zzzDestroyQueue(v3);
    *a3 = 1;
  }
}
