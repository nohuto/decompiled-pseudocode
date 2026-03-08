/*
 * XREFs of VfSpecialPoolEntry @ 0x140679C24
 * Callers:
 *     DifRegisterKernelPlugin @ 0x1405D2B20 (DifRegisterKernelPlugin.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     DifRegisterPlugin @ 0x1405D2C50 (DifRegisterPlugin.c)
 */

__int64 VfSpecialPoolEntry()
{
  const char *v1; // [rsp+20h] [rbp-E0h] BYREF
  int v2; // [rsp+28h] [rbp-D8h]
  __int64 (__fastcall *v3)(); // [rsp+30h] [rbp-D0h]
  __int64 v4; // [rsp+38h] [rbp-C8h]
  const char *v5; // [rsp+40h] [rbp-C0h]
  int v6; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v7)(); // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  const char *v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v11)(); // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  const char *v13; // [rsp+80h] [rbp-80h]
  int v14; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v15)(); // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  const char *v17; // [rsp+A0h] [rbp-60h]
  int v18; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v19)(); // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  const char *v21; // [rsp+C0h] [rbp-40h]
  int v22; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v23)(); // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  const char *v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v27)(); // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  const char *v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v31)(); // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  const char *v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v35)(); // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  const char *v37; // [rsp+140h] [rbp+40h]
  int v38; // [rsp+148h] [rbp+48h]
  __int64 v39; // [rsp+150h] [rbp+50h]
  __int64 (__fastcall *v40)(); // [rsp+158h] [rbp+58h]
  const char *v41; // [rsp+160h] [rbp+60h]
  int v42; // [rsp+168h] [rbp+68h]
  __int64 v43; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v44)(); // [rsp+178h] [rbp+78h]
  const char *v45; // [rsp+180h] [rbp+80h]
  int v46; // [rsp+188h] [rbp+88h]
  __int64 v47; // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v48)(); // [rsp+198h] [rbp+98h]
  const char *v49; // [rsp+1A0h] [rbp+A0h]
  int v50; // [rsp+1A8h] [rbp+A8h]
  __int64 v51; // [rsp+1B0h] [rbp+B0h]
  __int64 (__fastcall *v52)(); // [rsp+1B8h] [rbp+B8h]
  const char *v53; // [rsp+1C0h] [rbp+C0h]
  int v54; // [rsp+1C8h] [rbp+C8h]
  __int64 v55; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v56)(); // [rsp+1D8h] [rbp+D8h]
  const char *v57; // [rsp+1E0h] [rbp+E0h]
  int v58; // [rsp+1E8h] [rbp+E8h]
  __int64 v59; // [rsp+1F0h] [rbp+F0h]
  __int64 (__fastcall *v60)(); // [rsp+1F8h] [rbp+F8h]
  const char *v61; // [rsp+200h] [rbp+100h]
  int v62; // [rsp+208h] [rbp+108h]
  __int64 v63; // [rsp+210h] [rbp+110h]
  __int64 (__fastcall *v64)(); // [rsp+218h] [rbp+118h]
  const char *v65; // [rsp+220h] [rbp+120h]
  int v66; // [rsp+228h] [rbp+128h]
  __int64 v67; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v68)(); // [rsp+238h] [rbp+138h]
  const char *v69; // [rsp+240h] [rbp+140h]
  int v70; // [rsp+248h] [rbp+148h]
  __int64 v71; // [rsp+250h] [rbp+150h]
  __int64 (__fastcall *v72)(); // [rsp+258h] [rbp+158h]
  const char *v73; // [rsp+260h] [rbp+160h]
  int v74; // [rsp+268h] [rbp+168h]
  __int64 v75; // [rsp+270h] [rbp+170h]
  __int64 (__fastcall *v76)(); // [rsp+278h] [rbp+178h]
  const char *v77; // [rsp+280h] [rbp+180h]
  int v78; // [rsp+288h] [rbp+188h]
  __int64 v79; // [rsp+290h] [rbp+190h]
  __int64 (__fastcall *v80)(); // [rsp+298h] [rbp+198h]
  const char *v81; // [rsp+2A0h] [rbp+1A0h]
  int v82; // [rsp+2A8h] [rbp+1A8h]
  __int64 v83; // [rsp+2B0h] [rbp+1B0h]
  __int64 (__fastcall *v84)(); // [rsp+2B8h] [rbp+1B8h]
  const char *v85; // [rsp+2C0h] [rbp+1C0h]
  int v86; // [rsp+2C8h] [rbp+1C8h]
  __int64 v87; // [rsp+2D0h] [rbp+1D0h]
  __int64 (__fastcall *v88)(); // [rsp+2D8h] [rbp+1D8h]
  const char *v89; // [rsp+2E0h] [rbp+1E0h]
  int v90; // [rsp+2E8h] [rbp+1E8h]
  __int64 v91; // [rsp+2F0h] [rbp+1F0h]
  __int64 (__fastcall *v92)(); // [rsp+2F8h] [rbp+1F8h]
  const char *v93; // [rsp+300h] [rbp+200h]
  int v94; // [rsp+308h] [rbp+208h]
  __int64 v95; // [rsp+310h] [rbp+210h]
  __int64 (__fastcall *v96)(); // [rsp+318h] [rbp+218h]
  const char *v97; // [rsp+320h] [rbp+220h]
  int v98; // [rsp+328h] [rbp+228h]
  __int64 v99; // [rsp+330h] [rbp+230h]
  __int64 (__fastcall *v100)(); // [rsp+338h] [rbp+238h]

  v2 = 27;
  v4 = 0LL;
  v1 = "ExAllocatePool";
  v3 = ViGenericVerifyNewRequest;
  v5 = "ExAllocatePool2";
  v6 = 21;
  v7 = ViGenericVerifyNewRequest;
  v9 = "ExAllocatePool3";
  v11 = ViGenericVerifyNewRequest;
  v13 = "ExAllocatePoolWithTag";
  v15 = ViGenericVerifyNewRequest;
  v17 = "ExAllocatePoolWithTagPriority";
  v19 = ViGenericVerifyNewRequest;
  v21 = "ExAllocatePoolWithQuota";
  v23 = ViGenericVerifyNewRequest;
  v25 = "ExAllocatePoolWithQuotaTag";
  v27 = ViGenericVerifyNewRequest;
  v29 = "ExFreePool";
  v31 = ViGenericVerifyNewRequest;
  v33 = "ExFreePoolWithTag";
  v35 = ViGenericVerifyNewRequest;
  v37 = "RtlAnsiStringToUnicodeString";
  v40 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v41 = "RtlUnicodeStringToAnsiString";
  v44 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v45 = "RtlUpcaseUnicodeStringToAnsiString";
  v48 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v49 = "RtlOemStringToUnicodeString";
  v52 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v8 = 0LL;
  v10 = 22;
  v12 = 0LL;
  v14 = 26;
  v16 = 0LL;
  v18 = 25;
  v20 = 0LL;
  v22 = 24;
  v24 = 0LL;
  v26 = 23;
  v28 = 0LL;
  v30 = 39;
  v32 = 0LL;
  v34 = 40;
  v36 = 0LL;
  v38 = 413;
  v39 = 0LL;
  v42 = 435;
  v43 = 0LL;
  v46 = 441;
  v47 = 0LL;
  v50 = 429;
  v51 = 0LL;
  v53 = "RtlUnicodeStringToOemString";
  v56 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v57 = "RtlUpcaseUnicodeStringToOemString";
  v60 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v61 = "RtlOemStringToCountedUnicodeString";
  v64 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v65 = "RtlUnicodeStringToCountedOemString";
  v68 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v69 = "RtlUpcaseUnicodeStringToCountedOemString";
  v72 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v73 = "RtlUpcaseUnicodeString";
  v76 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v77 = "RtlDowncaseUnicodeString";
  v80 = VfSpRtlUnicodeStringToAnsiString_Exit;
  v81 = "RtlCreateUnicodeString";
  v84 = VfSpRtlCreateUnicodeString_Exit;
  v85 = "RtlDuplicateUnicodeString";
  v88 = VfSpRtlDuplicateUnicodeString_Exit;
  v89 = "IoAllocateIrp";
  v92 = ViGenericVerifyNewRequest;
  v93 = "IoAllocateMdl";
  v96 = ViGenericVerifyNewRequest;
  v97 = "IoSetCompletionRoutineEx";
  v100 = VfSpIoSetCompletionRoutineEx_Exit;
  v54 = 437;
  v55 = 0LL;
  v58 = 443;
  v59 = 0LL;
  v62 = 428;
  v63 = 0LL;
  v66 = 436;
  v67 = 0LL;
  v70 = 442;
  v71 = 0LL;
  v74 = 440;
  v75 = 0LL;
  v78 = 421;
  v79 = 0LL;
  v82 = 418;
  v83 = 0LL;
  v86 = 422;
  v87 = 0LL;
  v90 = 138;
  v91 = 0LL;
  v94 = 139;
  v95 = 0LL;
  v98 = 217;
  v99 = 0LL;
  return DifRegisterPlugin((__int64)&v1, 0x19u, 0, 0LL);
}
