/*
 * XREFs of EditionInitializeWppLogging @ 0x1C00ECAC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C00ECC0C (RtlStringCopyWorkerA.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     WppInitKm @ 0x1C039CA7C (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C039CB30 (WppLoadTracingSupport.c)
 */

__int64 __fastcall EditionInitializeWppLogging(__int64 a1, __int64 a2)
{
  size_t v4; // rdx
  size_t *v5; // r8
  STRSAFE_PCNZCH v6; // r9
  __int64 result; // rax
  size_t v8; // [rsp+20h] [rbp-60h]
  int v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+34h] [rbp-4Ch]
  int v11; // [rsp+3Ch] [rbp-44h]
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  char pszDest[16]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h]

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
  v9 = 16;
  v11 = 2;
  v10 = 0x200000000LL;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v9);
  v12 = 56LL;
  v13 = 0xC800000400LL;
  *(_OWORD *)pszDest = 0LL;
  pszDest[0] = 0;
  v14 = 0LL;
  v15 = 0x1000000000LL;
  v17 = 0LL;
  RtlStringCopyWorkerA(pszDest, v4, v5, v6, v8);
  v17 = 0x200000002LL;
  LODWORD(v13) = 512;
  result = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v12, &gFullLog);
  if ( (int)result < 0 )
    gFullLog = 0LL;
  return result;
}
