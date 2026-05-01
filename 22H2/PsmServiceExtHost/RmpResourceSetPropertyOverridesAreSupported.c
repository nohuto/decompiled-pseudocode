/*
 * XREFs of RmpResourceSetPropertyOverridesAreSupported @ 0x18000F508
 * Callers:
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F3A4 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     RmpResourceLimitsAreLegal @ 0x18000F728 (RmpResourceLimitsAreLegal.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

_BOOL8 __fastcall RmpResourceSetPropertyOverridesAreSupported(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[96]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v7; // [rsp+90h] [rbp-28h]
  char v8; // [rsp+92h] [rbp-26h]

  v5 = 255LL;
  if ( !(unsigned int)RmpResourceLimitsAreLegal(a1 + 40, &v5) )
    return 0LL;
  memset_0(v6, 0, 0x68uLL);
  v2 = *(_DWORD *)(a1 + 32);
  if ( (v2 & 0xF000) != 0 )
    return 0LL;
  if ( (v2 & 1) != 0 )
  {
    v4 = HIBYTE(v2);
    if ( (_BYTE)v4 && (unsigned __int8)v4 > *(_BYTE *)(a1 + 36) )
      return 0LL;
  }
  else if ( v2 || *(_BYTE *)(a1 + 36) != v6[36] )
  {
    return 0LL;
  }
  return *(_WORD *)(a1 + 96) == v7
      && *(_BYTE *)(a1 + 98) == v8
      && !*(_DWORD *)(a1 + 100)
      && ((*(_BYTE *)(a1 + 16) & 2) != 0 || !*(_QWORD *)a1)
      && ((*(_BYTE *)(a1 + 16) & 4) != 0 || !*(_QWORD *)(a1 + 8));
}
