__int64 SmmIommuDeleteDomain()
{
  if ( !SmmUseIommuV3Interface() )
    SmmUseIommuV2Interface();
  return ((__int64 (*)(void))qword_1C013BC08)();
}
