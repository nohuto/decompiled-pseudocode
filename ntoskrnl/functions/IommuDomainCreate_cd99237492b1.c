__int64 __fastcall IommuDomainCreate(char a1, _QWORD *a2)
{
  return HalpIommuAllocateDmaDomain(a1 == 0 ? 2 : 0, 0LL, 0LL, 0LL, a2);
}
