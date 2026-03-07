unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  __int64 *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (__int64 *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C695C0, PteAddress, v2);
}
