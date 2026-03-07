void __stdcall PATHOBJ_vEnumStart(PATHOBJ *ppo)
{
  ppo->fl &= ~8u;
  *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = *(_QWORD *)(*(_QWORD *)&ppo[1] + 32LL);
}
