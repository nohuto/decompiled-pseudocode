/*
 * XREFs of ??0_MOCKDRIVERSTATE_PER_PLANE@@QEAA@XZ @ 0x1C00194A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_MOCKDRIVERSTATE_PER_PLANE *__fastcall _MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE(
        _MOCKDRIVERSTATE_PER_PLANE *this)
{
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  return this;
}
