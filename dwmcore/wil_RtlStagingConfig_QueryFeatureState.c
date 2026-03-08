/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x1801108C4
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x1800FCCF0 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     wil_QueryFeatureState @ 0x1801108A0 (wil_QueryFeatureState.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180100B20 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  BOOL v8; // ebp
  unsigned int v9; // edi
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  _BYTE v16[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  int v18; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v8 = a3 == 0;
  v9 = 0;
  v17 = 0LL;
  v18 = 0;
  ProcAddress = (FARPROC)g_wil_details_pfnRtlQueryFeatureConfiguration;
  if ( !g_wil_details_pfnRtlQueryFeatureConfiguration )
  {
    NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
    ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlQueryFeatureConfiguration");
    g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)ProcAddress;
    if ( !ProcAddress )
    {
      v12 = -1073741511;
      goto LABEL_9;
    }
  }
  v13 = ((__int64 (__fastcall *)(_QWORD, BOOL, _BYTE *, __int64 *))ProcAddress)(a2, v8, v16, &v17);
  v12 = v13;
  if ( v13 )
  {
    if ( v13 != 279 )
      goto LABEL_9;
    v14 = HIDWORD(v17);
    v9 = 1;
  }
  else
  {
    v14 = HIDWORD(v17);
    v9 = 1;
    *(_DWORD *)a1 = (HIDWORD(v17) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v14) & 0x3F;
    *(_DWORD *)(a1 + 12) = v18;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v14 >> 14;
    *(_DWORD *)(a1 + 20) = (v14 >> 6) & 1;
  }
  *(_DWORD *)(a1 + 16) = (v14 >> 7) & 1;
LABEL_9:
  if ( a4 )
  {
    LOBYTE(v4) = v12 != -2147483614;
    *a4 = v4;
  }
  return v9;
}
