/*
 * XREFs of EditionInitializeWppLogging @ 0x1C012DD20
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C012DE54 (RtlStringCopyWorkerA.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     WppInitKm @ 0x1C037A974 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C037AA28 (WppLoadTracingSupport.c)
 */

__int64 __fastcall EditionInitializeWppLogging(__int64 a1, __int64 a2)
{
  size_t v4; // rdx
  size_t *v5; // r8
  STRSAFE_PCNZCH v6; // r9
  __int64 result; // rax
  size_t v8; // [rsp+20h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  char pszDest[16]; // [rsp+58h] [rbp-18h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kFullTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(a1, a2);
  v9 = 8LL;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v9);
  v10 = 48LL;
  v11 = 0xC800000400LL;
  *(_OWORD *)pszDest = 0LL;
  pszDest[0] = 0;
  v12 = 0LL;
  v13 = 0x1000000000LL;
  RtlStringCopyWorkerA(pszDest, v4, v5, v6, v8);
  LODWORD(v11) = 512;
  result = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v10, &gFullLog);
  if ( (int)result < 0 )
    gFullLog = 0LL;
  return result;
}
