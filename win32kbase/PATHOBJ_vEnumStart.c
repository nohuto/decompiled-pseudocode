/*
 * XREFs of PATHOBJ_vEnumStart @ 0x1C0181A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PATHOBJ_vEnumStart(PATHOBJ *ppo)
{
  ppo->fl &= ~8u;
  *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = *(_QWORD *)(*(_QWORD *)&ppo[1] + 32LL);
}
