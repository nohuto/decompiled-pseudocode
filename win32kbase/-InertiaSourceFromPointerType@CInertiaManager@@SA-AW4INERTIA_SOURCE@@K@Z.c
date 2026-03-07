__int64 __fastcall CInertiaManager::InertiaSourceFromPointerType(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        return 4LL;
      else
        return 15LL;
    }
    else
    {
      return 8LL;
    }
  }
  return result;
}
