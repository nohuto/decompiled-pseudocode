/*
 * XREFs of ?GetFirstTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@XZ @ 0x1C00688A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGETSET::GetFirstTarget(DMMVIDEOPRESENTTARGETSET *this)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct DMMVIDEOPRESENTTARGET *)(*v1 - 8LL);
}
