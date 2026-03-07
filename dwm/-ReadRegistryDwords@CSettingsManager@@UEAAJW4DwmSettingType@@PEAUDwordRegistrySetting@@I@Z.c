__int64 __fastcall CSettingsManager::ReadRegistryDwords(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = 0;
  if ( !a4 )
    return 0LL;
  while ( 1 )
  {
    result = CSettingsManager::GetDword(a1, a2, *a3, a3[1]);
    if ( (int)result < 0 )
      break;
    ++v4;
    a3 += 2;
    if ( v4 >= a4 )
      return 0LL;
  }
  return result;
}
