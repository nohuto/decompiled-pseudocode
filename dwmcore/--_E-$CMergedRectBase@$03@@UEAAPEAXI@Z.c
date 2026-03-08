/*
 * XREFs of ??_E?$CMergedRectBase@$03@@UEAAPEAXI@Z @ 0x18020D0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall CMergedRectBase<4>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &CMergedRectBase<4>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
