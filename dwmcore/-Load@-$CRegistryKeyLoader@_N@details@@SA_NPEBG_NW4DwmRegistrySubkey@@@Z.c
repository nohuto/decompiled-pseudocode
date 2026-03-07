bool __fastcall details::CRegistryKeyLoader<bool>::Load(__int64 a1, char a2, __int64 a3)
{
  int v5; // [rsp+48h] [rbp+20h] BYREF

  if ( (unsigned __int8)RegGetDwmDwordHelper(a1, &v5, a3) )
    return v5 != 0;
  else
    return a2;
}
