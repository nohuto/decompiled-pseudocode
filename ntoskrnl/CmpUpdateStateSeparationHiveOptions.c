__int64 CmpUpdateStateSeparationHiveOptions()
{
  _DWORD *v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax

  if ( CmStateSeparationAllHivesVolatile )
  {
    v0 = &unk_140C026B0;
    v1 = 7LL;
    result = 0x8000LL;
    do
    {
      *v0 |= 0x8000u;
      v0 += 46;
      --v1;
    }
    while ( v1 );
  }
  else
  {
    byte_140C02784 = 0;
    if ( !CmStateSeparationDevMode )
    {
      result = 0x8000LL;
      dword_140C02820 |= 0x8000u;
      dword_140C028D8 |= 0x8000u;
    }
    byte_140C02A64 = 0;
    byte_140C02B1B = 1;
  }
  return result;
}
