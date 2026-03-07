__int64 __fastcall Amd64IsModifiedByBadActor(unsigned int a1, __int64 a2)
{
  return Amd64IsModifiedByBadActorInternal(a1, __readmsr(*((_DWORD *)&Amd64EventSelectRegisters + a1)), a2);
}
