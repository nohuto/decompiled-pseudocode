__int64 HalpDmaInitializeDomainEarly()
{
  __int64 result; // rax

  HalpDmaDomainListLock = 0LL;
  qword_140C61A98 = (__int64)&HalpDmaDomainList;
  HalpDmaDomainList = (__int64)&HalpDmaDomainList;
  result = ((__int64 (__fastcall *)(__int64, _QWORD, void *))off_140C01E60[0])(3LL, 0LL, &HalpDmaIommuInterface);
  if ( (int)result >= 0 )
    HalpDmaIommuInterfaceFcnTable = (__int64)&unk_140C619B0;
  return result;
}
