char __fastcall PipCheckForUnsatisfiedDependencies(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rcx
  _QWORD **ProviderList; // rdi
  __int64 v5; // r11
  _QWORD *v6; // rbx
  __int64 v8; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v9 = 0;
  v10 = 0LL;
  ProviderList = (_QWORD **)PiGetProviderList(v2);
  v6 = *ProviderList;
  if ( *ProviderList != ProviderList )
  {
    while ( 1 )
    {
      PiEnumerateProviderListEntry(v6, &v10, &v9);
      v6 = (_QWORD *)*v6;
      v8 = v10 ? *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) : v5;
      if ( !v10 || !v8 || (a2 & (unsigned __int8)v9 & 3) != 0 && !(unsigned __int8)PipIsProviderStarted(v8) )
        break;
      if ( v6 == ProviderList )
        return v5;
    }
    LOBYTE(v5) = 1;
  }
  return v5;
}
