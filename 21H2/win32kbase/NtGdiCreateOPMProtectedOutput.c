/*
 * XREFs of NtGdiCreateOPMProtectedOutput @ 0x1C0140140
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00B4680 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00BFD68 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutput(_OWORD *a1, void **a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  int v6; // edi
  int v7; // [rsp+30h] [rbp-38h] BYREF
  void *v8; // [rsp+38h] [rbp-30h] BYREF
  struct _LUID v9[2]; // [rsp+40h] [rbp-28h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    *(_OWORD *)&v9[0].LowPart = 0LL;
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v9[0].LowPart = *a1;
    v7 = 0;
    v8 = (void *)-1LL;
    v6 = OPMCreateProtectedOutput((COPM *)(unsigned int)v9[1].HighPart, v9, v9[1].LowPart, &v8, &v7);
    if ( v7 && v6 >= 0 )
      v6 = -1073741198;
    if ( (unsigned __int64)(a2 + 1) > MmUserProbeAddress || a2 + 1 <= a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v8;
    UserSessionSwitchLeaveCrit();
    if ( v6 < 0 )
      return (unsigned int)v6;
    return v5;
  }
  return result;
}
