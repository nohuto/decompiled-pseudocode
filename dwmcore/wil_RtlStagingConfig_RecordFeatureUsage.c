/*
 * XREFs of wil_RtlStagingConfig_RecordFeatureUsage @ 0x1801109F0
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180197240 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180100B20 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_RtlStagingConfig_RecordFeatureUsage(int a1, __int16 a2, int a3)
{
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax
  int v6; // [rsp+48h] [rbp+20h] BYREF
  __int16 v7; // [rsp+4Ch] [rbp+24h]
  __int16 v8; // [rsp+4Eh] [rbp+26h]

  v8 = 0;
  v6 = a1;
  v7 = a2;
  if ( a3 )
    v8 |= 1u;
  ProcAddress = (FARPROC)g_wil_details_pfnRtlNotifyFeatureUsage;
  if ( g_wil_details_pfnRtlNotifyFeatureUsage )
    return ((__int64 (__fastcall *)(int *))ProcAddress)(&v6);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlNotifyFeatureUsage");
  g_wil_details_pfnRtlNotifyFeatureUsage = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(int *))ProcAddress)(&v6);
  else
    return 3221225785LL;
}
