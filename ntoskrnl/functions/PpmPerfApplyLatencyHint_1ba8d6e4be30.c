__int64 __fastcall PpmPerfApplyLatencyHint(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 PerfPolicyClass; // rcx
  int v5; // r8d
  __int64 v6; // r11
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // r9d

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = &PpmCurrentProfile[55 * dword_140C3D48C];
  PerfPolicyClass = (unsigned __int8)PpmGetPerfPolicyClass((_BYTE *)a1);
  result = (unsigned int)(v5 - 1);
  v8 = *((unsigned __int8 *)v3 + PerfPolicyClass + 117);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    result = (unsigned int)(v5 - 5);
    if ( (unsigned int)result <= 1 || PpmPerfBoostAtGuaranteed )
      v9 = *(_DWORD *)(v1 + 24);
    else
      v9 = 100;
  }
  else
  {
    v9 = *(_DWORD *)(v6 + 444);
  }
  if ( (unsigned int)v8 >= v9 )
    v8 = v9;
  if ( (unsigned int)v8 > *(_DWORD *)(v1 + 56) )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v6 + 376))(v2, v8, *(unsigned int *)(v6 + 452));
    *(_DWORD *)(v1 + 56) = result;
  }
  return result;
}
