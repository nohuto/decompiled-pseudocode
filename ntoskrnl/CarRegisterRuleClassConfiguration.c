__int64 __fastcall CarRegisterRuleClassConfiguration(__int64 a1)
{
  int v2; // edx
  _OWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _OWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 )
  {
    CarDeregisterRuleClassConfiguration(*(unsigned int *)(a1 + 4));
    v2 = CarCreateRuleClassConfigurationEntry(&v8);
    if ( v2 >= 0 )
    {
      v3 = v8;
      *v8 = *(_OWORD *)a1;
      v3[1] = *(_OWORD *)(a1 + 16);
      v3[2] = *(_OWORD *)(a1 + 32);
      v3[3] = *(_OWORD *)(a1 + 48);
      *((_DWORD *)v3 + 16) = (*(_DWORD *)(a1 + 4) << 16) + 0x10000;
      *((_DWORD *)v3 + 17) = ((*(_DWORD *)(a1 + 4) << 16) + 0x10000) | 0xFFFF;
      v4 = (_QWORD *)v3 + 9;
      *((_QWORD *)v3 + 10) = (char *)v3 + 72;
      v5 = (_QWORD *)v3 + 11;
      *v4 = v4;
      v6 = (_QWORD *)qword_140C36518;
      if ( *(__int64 **)qword_140C36518 != &CarConfigurationEntries )
        __fastfail(3u);
      *v5 = &CarConfigurationEntries;
      v5[1] = v6;
      *v6 = v5;
      qword_140C36518 = (__int64)v5;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
