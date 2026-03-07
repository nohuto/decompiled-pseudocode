__int64 __fastcall NtGdiCreateOPMProtectedOutput(_OWORD *a1, void **a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  int v11; // [rsp+30h] [rbp-38h] BYREF
  void *v12; // [rsp+38h] [rbp-30h] BYREF
  struct _LUID v13[2]; // [rsp+40h] [rbp-28h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    *(_OWORD *)&v13[0].LowPart = 0LL;
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v13[0].LowPart = *a1;
    v11 = 0;
    v12 = (void *)-1LL;
    v7 = OPMCreateProtectedOutput((unsigned int)v13[1].HighPart, v13, v13[1].LowPart, &v12, &v11);
    if ( v11 && v7 >= 0 )
      v7 = -1073741198;
    v10 = (unsigned __int64)(a2 + 1);
    if ( (unsigned __int64)(a2 + 1) > MmUserProbeAddress || v10 <= (unsigned __int64)a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v12;
    UserSessionSwitchLeaveCrit(v10, v6, v8, v9);
    if ( v7 < 0 )
      return (unsigned int)v7;
    return v5;
  }
  return result;
}
