/*
 * XREFs of ??0_OUTPUTDUPL_CONTEXTLIST@@QEAA@XZ @ 0x1C0024150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OUTPUTDUPL_CONTEXTLIST *__fastcall _OUTPUTDUPL_CONTEXTLIST::_OUTPUTDUPL_CONTEXTLIST(_OUTPUTDUPL_CONTEXTLIST *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 42;
  *((_DWORD *)this + 10) = 27;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
