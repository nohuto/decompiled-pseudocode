/*
 * XREFs of ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x1C00A5430
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001B660 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vGetSubRect(RGNOBJ *this, struct _RECTL *a2)
{
  struct _RECTL v2; // xmm0

  if ( *(_DWORD *)(*(_QWORD *)this + 48LL) > 0x38u )
    v2 = (struct _RECTL)xmmword_1C028B2B0;
  else
    v2 = *(struct _RECTL *)(*(_QWORD *)this + 56LL);
  *a2 = v2;
}
