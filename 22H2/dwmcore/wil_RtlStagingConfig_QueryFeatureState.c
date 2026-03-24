/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x1800E9230
 * Callers:
 *     wil_QueryFeatureState @ 0x1800E91B0 (wil_QueryFeatureState.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800DA514 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  BOOL v8; // r14d
  unsigned int v9; // ebp
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax
  int v12; // edx
  unsigned int v13; // ecx
  _BYTE v15[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  int v17; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v8 = a3 == 0;
  v9 = 0;
  v16 = 0LL;
  v17 = 0;
  ProcAddress = (FARPROC)g_wil_details_pfnRtlQueryFeatureConfiguration;
  if ( g_wil_details_pfnRtlQueryFeatureConfiguration
    || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
        ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlQueryFeatureConfiguration"),
        (g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)ProcAddress) != 0) )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD, BOOL, _BYTE *, __int64 *))ProcAddress)(a2, v8, v15, &v16);
  }
  else
  {
    v12 = -1073741511;
  }
  if ( v12 )
  {
    if ( v12 != 279 )
      goto LABEL_10;
    v13 = HIDWORD(v16);
  }
  else
  {
    v13 = HIDWORD(v16);
    v9 = 1;
    *(_DWORD *)a1 = (HIDWORD(v16) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v13) & 0x3F;
    *(_DWORD *)(a1 + 12) = v17;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v13 >> 14;
    *(_DWORD *)(a1 + 20) = (v13 >> 6) & 1;
  }
  *(_DWORD *)(a1 + 16) = (v13 >> 7) & 1;
LABEL_10:
  if ( a4 )
  {
    LOBYTE(v4) = v12 != -2147483614;
    *a4 = v4;
  }
  return v9;
}
