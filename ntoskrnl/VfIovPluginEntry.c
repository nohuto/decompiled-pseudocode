/*
 * XREFs of VfIovPluginEntry @ 0x1405CF810
 * Callers:
 *     DifRegisterKernelPlugin @ 0x1405D2B20 (DifRegisterKernelPlugin.c)
 *     VfInitVerifierComponents @ 0x140ABFE40 (VfInitVerifierComponents.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     DifRegisterPlugin @ 0x1405D2C50 (DifRegisterPlugin.c)
 *     ViIovInitialization @ 0x140AD9358 (ViIovInitialization.c)
 */

__int64 VfIovPluginEntry()
{
  int v0; // ebx
  const char *v2; // [rsp+20h] [rbp-E0h] BYREF
  int v3; // [rsp+28h] [rbp-D8h]
  __int64 (__fastcall *v4)(); // [rsp+30h] [rbp-D0h]
  __int64 v5; // [rsp+38h] [rbp-C8h]
  const char *v6; // [rsp+40h] [rbp-C0h]
  int v7; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v8)(); // [rsp+50h] [rbp-B0h]
  __int64 v9; // [rsp+58h] [rbp-A8h]
  const char *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v12)(); // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  const char *v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v16)(); // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  const char *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v20)(); // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  const char *v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v24)(); // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  const char *v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v29)(); // [rsp+F8h] [rbp-8h]
  const char *v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v33)(); // [rsp+118h] [rbp+18h]
  const char *v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v37)(); // [rsp+138h] [rbp+38h]
  const char *v38; // [rsp+140h] [rbp+40h]
  int v39; // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v40)(); // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]
  const char *v42; // [rsp+160h] [rbp+60h]
  int v43; // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v44)(); // [rsp+170h] [rbp+70h]
  __int64 v45; // [rsp+178h] [rbp+78h]
  const char *v46; // [rsp+180h] [rbp+80h]
  int v47; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v48)(); // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+198h] [rbp+98h]

  v3 = 187;
  v5 = 0LL;
  qword_140C365E8 = (__int64)ViIovPluginUnload;
  v7 = 132;
  v2 = "IoInitializeRemoveLockEx";
  v9 = 0LL;
  v4 = ViGenericVerifyNewRequest;
  v11 = 209;
  v6 = "IoAcquireRemoveLockEx";
  v13 = 0LL;
  v8 = ViGenericVerifyNewRequest;
  v10 = "IoReleaseRemoveLockEx";
  v12 = ViGenericVerifyNewRequest;
  v14 = "IoReleaseRemoveLockAndWaitEx";
  v16 = ViGenericVerifyNewRequest;
  v18 = "ExFreePool";
  v20 = ViIovExFreePool_Entry;
  v22 = "ExFreePoolWithTag";
  v24 = ViIovExFreePoolWithTag_Entry;
  v26 = "IoBuildAsynchronousFsdRequest";
  v29 = ViIovIoBuildAsynchronousFsdRequest_Exit;
  v30 = "IoBuildDeviceIoControlRequest";
  v33 = ViIovIoBuildDeviceIoControlRequest_Exit;
  v34 = "IoBuildSynchronousFsdRequest";
  v37 = ViIovIoBuildSynchronousFsdRequest_Exit;
  v38 = "IoAllocateIrp";
  v40 = ViGenericVerifyNewRequest;
  v42 = "IoAllocateIrpEx";
  v44 = ViGenericVerifyNewRequest;
  v46 = "IoFreeIrp";
  v48 = ViGenericVerifyNewRequest;
  v15 = 208;
  v17 = 0LL;
  v19 = 39;
  v21 = 0LL;
  v23 = 40;
  v25 = 0LL;
  v27 = 144;
  v28 = 0LL;
  v31 = 145;
  v32 = 0LL;
  v35 = 146;
  v36 = 0LL;
  v39 = 138;
  v41 = 0LL;
  v43 = 137;
  v45 = 0LL;
  v47 = 169;
  v49 = 0LL;
  v0 = ((__int64 (__fastcall *)(const char **, __int64, __int64, void *))DifRegisterPlugin)(
         &v2,
         12LL,
         4LL,
         &ViIovPluginSetting);
  if ( v0 >= 0 )
    ViIovInitialization();
  return (unsigned int)v0;
}
