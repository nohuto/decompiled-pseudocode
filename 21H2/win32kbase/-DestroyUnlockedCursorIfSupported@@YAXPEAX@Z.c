/*
 * XREFs of ?DestroyUnlockedCursorIfSupported@@YAXPEAX@Z @ 0x1C00A36C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyUnlockedCursorIfSupported(void *a1)
{
  int v2; // eax

  if ( qword_1C0257758 )
    v2 = qword_1C0257758();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0257760 )
      qword_1C0257760(a1);
  }
}
