_QWORD *__fastcall sub_14007E540(_QWORD *a1)
{
  __int64 v2; // rdi
  const wchar_t **v3; // rbx
  wchar_t *v4; // rcx
  _QWORD v6[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v8[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v9[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall **v10)(PVOID); // [rsp+68h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+70h] [rbp-98h]
  __int64 v12; // [rsp+78h] [rbp-90h]
  __int64 v13; // [rsp+80h] [rbp-88h]
  __int64 v14; // [rsp+88h] [rbp-80h]
  int v15; // [rsp+90h] [rbp-78h]
  const wchar_t *v16; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v17)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  __int64 v20; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-48h]
  int v22; // [rsp+C8h] [rbp-40h] BYREF
  const wchar_t *v23; // [rsp+D0h] [rbp-38h]
  __int64 v24; // [rsp+D8h] [rbp-30h]
  int v25; // [rsp+E0h] [rbp-28h]
  const wchar_t *v26; // [rsp+E8h] [rbp-20h] BYREF
  const wchar_t *v27; // [rsp+F0h] [rbp-18h]
  __int64 v28; // [rsp+F8h] [rbp-10h]
  const wchar_t *v29; // [rsp+100h] [rbp-8h]
  int v30; // [rsp+108h] [rbp+0h]
  const wchar_t *v31; // [rsp+110h] [rbp+8h]
  __int64 v32; // [rsp+118h] [rbp+10h]
  int v33; // [rsp+120h] [rbp+18h]
  int v34; // [rsp+128h] [rbp+20h]
  const wchar_t *v35; // [rsp+130h] [rbp+28h]
  __int64 v36; // [rsp+138h] [rbp+30h]
  int v37; // [rsp+140h] [rbp+38h]
  const wchar_t *v38; // [rsp+148h] [rbp+40h]
  const wchar_t *v39; // [rsp+150h] [rbp+48h]
  __int64 v40; // [rsp+158h] [rbp+50h]
  const wchar_t *v41; // [rsp+160h] [rbp+58h]
  int v42; // [rsp+168h] [rbp+60h]
  const wchar_t *v43; // [rsp+170h] [rbp+68h]
  __int64 v44; // [rsp+178h] [rbp+70h]
  int v45; // [rsp+180h] [rbp+78h]
  int v46; // [rsp+188h] [rbp+80h]
  const wchar_t *v47; // [rsp+190h] [rbp+88h]
  int v48; // [rsp+198h] [rbp+90h]
  int v49; // [rsp+19Ch] [rbp+94h]
  int v50; // [rsp+1A0h] [rbp+98h]
  const wchar_t *v51; // [rsp+1A8h] [rbp+A0h]
  const wchar_t *v52; // [rsp+1B0h] [rbp+A8h]
  __int64 v53; // [rsp+1B8h] [rbp+B0h]
  const wchar_t *v54; // [rsp+1C0h] [rbp+B8h]
  int v55; // [rsp+1C8h] [rbp+C0h]
  const wchar_t *v56; // [rsp+1D0h] [rbp+C8h]
  __int64 v57; // [rsp+1D8h] [rbp+D0h]
  int v58; // [rsp+1E0h] [rbp+D8h]
  _QWORD v59[2]; // [rsp+1E8h] [rbp+E0h] BYREF

  v37 = -1;
  *a1 = &off_1400D4D68;
  v22 = 1703960;
  v25 = 4;
  a1[1] = 0xA5A5A5A5A5000043uLL;
  LODWORD(v26) = 3145774;
  v24 = 3LL;
  v23 = L"*FlowControl";
  v27 = L"*TCPChecksumOffloadIPv4";
  v31 = L"ITR";
  v2 = 2LL;
  v28 = 3LL;
  LODWORD(v29) = 3;
  v35 = L"IdleTimeoutMs";
  v30 = 524294;
  v39 = L"*SpeedDuplex";
  v43 = L"WaitAutoNegComplete";
  v47 = L"*JumboPacket";
  v48 = 1514;
  v49 = 1514;
  v52 = L"LatencyToleranceReporting";
  v56 = L"DynamicLtrIntervalCheckMsec";
  v6[0] = &v22;
  v6[1] = v59;
  v32 = 64LL;
  v33 = 0x1FFF;
  v34 = 1835034;
  v36 = 0LL;
  LODWORD(v38) = 1703960;
  v40 = 0LL;
  LODWORD(v41) = 2500;
  v42 = 2621478;
  v44 = 2LL;
  v45 = 2;
  v46 = 1703960;
  v50 = 9014;
  LODWORD(v51) = 3407922;
  v53 = 1LL;
  LODWORD(v54) = 2;
  v55 = 3670070;
  v57 = 0xA0000044CLL;
  v58 = 5000;
  sub_14000CF40(a1 + 2, v6);
  v22 = 2752552;
  v23 = L"*InterruptModeration";
  v26 = L"*RSS";
  v29 = L"*PMARPOffload";
  v32 = (__int64)L"*PMNSOffload";
  LOBYTE(v24) = 1;
  v25 = 655368;
  LOBYTE(v27) = 0;
  LODWORD(v28) = 1835034;
  LOBYTE(v30) = 1;
  LODWORD(v31) = 1703960;
  LOBYTE(v33) = 1;
  v34 = 655368;
  LOBYTE(v36) = 0;
  v37 = 3145774;
  v35 = L"*EEE";
  LOBYTE(v39) = 1;
  v38 = L"WakeOnMagicPacketFromS5";
  LODWORD(v40) = 2228256;
  v41 = L"EnableD3ColdInS0";
  v44 = (__int64)L"SurpriseRemovalSupport";
  v47 = L"LogLinkStateEvent";
  v51 = L"LogWolEvent";
  v54 = L"PollPhyId";
  v57 = (__int64)L"ForceEnablePme";
  v7[0] = (__int64)&v22;
  v7[1] = (__int64)v59;
  LOBYTE(v42) = 1;
  LODWORD(v43) = 3014700;
  LOBYTE(v45) = 0;
  v46 = 2359330;
  LOBYTE(v48) = 1;
  v50 = 1572886;
  LOBYTE(v52) = 0;
  LODWORD(v53) = 1310738;
  LOBYTE(v55) = 0;
  LODWORD(v56) = 1966108;
  LOBYTE(v58) = 0;
  sub_14000CE8C(a1 + 6, v7);
  LODWORD(v9[0]) = 2359330;
  v9[1] = L"DataCollectorPath";
  v10 = &off_1400D41D0;
  LOWORD(v11) = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  sub_1400011A8(&v10, (__int64)L"c:\\temp", 7uLL);
  v15 = 1441812;
  v16 = L"DriverDesc";
  v17 = &off_1400D41D0;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  sub_1400011A8(&v17, (__int64)L"Intel(R) Ethernet", 0x11uLL);
  v8[0] = v9;
  v8[1] = &v22;
  sub_14007E358(a1 + 10, v8);
  v3 = &v26;
  do
  {
    v3 -= 7;
    --v2;
    v4 = (wchar_t *)*v3;
    *(v3 - 2) = (const wchar_t *)&off_1400D41D0;
    if ( v4 )
      ExFreePool(v4);
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
  }
  while ( v2 );
  return a1;
}
