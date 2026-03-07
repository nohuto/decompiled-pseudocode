_DWORD *__fastcall PspGetProcessParameterOverrides(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  _DWORD *v7; // [rsp+50h] [rbp+8h] BYREF

  v4[1] = 0;
  v7 = 0LL;
  v4[0] = 1;
  v6 = a2;
  v5 = a1 + 232;
  PsGetProcessParameterOverrides(v4, &v7);
  result = v7;
  if ( v7 && *v7 != 2 )
  {
    PsDestroyProcessParameterOverrides(v7);
    result = 0LL;
  }
  *(_QWORD *)(a1 + 488) = result;
  return result;
}
