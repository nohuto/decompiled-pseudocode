void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        int a2,
        PVOID a3,
        int a4,
        int a5,
        __int64 a6)
{
  __int64 *v8; // rcx
  unsigned __int64 *Pool2; // rax
  __int64 *v10; // rdi
  __int64 v11; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  int ImageTuple; // eax
  __int64 v18; // r10
  __int64 v19; // r15
  int v20; // r14d
  unsigned int v21; // ebx
  struct _FAST_MUTEX *v22; // rcx
  const char *v23; // r12
  __int64 v24; // rdi
  const char *v25; // r8
  int v26; // r11d
  const char *v27; // rdx
  KIRQL v28; // al
  const char *v29; // rax
  const char *v30; // r8
  int v31; // r11d
  const char *v32; // rdx
  KIRQL CurrentIrql; // al
  __int64 v34; // r8
  const char *v35; // rax
  int v36; // edi
  ULONG v37; // r9d
  __int64 *v38; // rcx
  unsigned int v39; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+5Ch] [rbp-A4h]
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v44; // [rsp+64h] [rbp-9Ch] BYREF
  int v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+6Ch] [rbp-94h] BYREF
  int v47; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v48; // [rsp+74h] [rbp-8Ch] BYREF
  int v49; // [rsp+78h] [rbp-88h] BYREF
  int v50; // [rsp+7Ch] [rbp-84h]
  int v51; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+84h] [rbp-7Ch] BYREF
  int v53; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+8Ch] [rbp-74h] BYREF
  int v55; // [rsp+90h] [rbp-70h] BYREF
  int v56; // [rsp+94h] [rbp-6Ch] BYREF
  int v57; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v58; // [rsp+9Ch] [rbp-64h] BYREF
  int v59; // [rsp+A0h] [rbp-60h] BYREF
  int v60; // [rsp+A4h] [rbp-5Ch]
  int v61; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v62; // [rsp+ACh] [rbp-54h] BYREF
  int v63; // [rsp+B0h] [rbp-50h] BYREF
  int v64; // [rsp+B4h] [rbp-4Ch] BYREF
  int v65; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v66; // [rsp+BCh] [rbp-44h] BYREF
  int v67; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+D0h] [rbp-30h] BYREF
  int *v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  int *v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  int *v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  int *v76; // [rsp+120h] [rbp+20h]
  __int64 v77; // [rsp+128h] [rbp+28h]
  char v78[16]; // [rsp+130h] [rbp+30h] BYREF
  int *v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  int *v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  int *v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+170h] [rbp+70h] BYREF
  int *v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+198h] [rbp+98h]
  int *v88; // [rsp+1A0h] [rbp+A0h]
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  int *v90; // [rsp+1B0h] [rbp+B0h]
  __int64 v91; // [rsp+1B8h] [rbp+B8h]
  int *v92; // [rsp+1C0h] [rbp+C0h]
  __int64 v93; // [rsp+1C8h] [rbp+C8h]
  char v94[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v95; // [rsp+1E0h] [rbp+E0h]
  __int64 v96; // [rsp+1E8h] [rbp+E8h]
  int *v97; // [rsp+1F0h] [rbp+F0h]
  __int64 v98; // [rsp+1F8h] [rbp+F8h]
  int *v99; // [rsp+200h] [rbp+100h]
  int v100; // [rsp+208h] [rbp+108h]
  int v101; // [rsp+20Ch] [rbp+10Ch]
  char v102[16]; // [rsp+210h] [rbp+110h] BYREF
  int *v103; // [rsp+220h] [rbp+120h]
  __int64 v104; // [rsp+228h] [rbp+128h]
  int *v105; // [rsp+230h] [rbp+130h]
  __int64 v106; // [rsp+238h] [rbp+138h]
  char v107[16]; // [rsp+240h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+250h] [rbp+150h] BYREF
  int *v109; // [rsp+270h] [rbp+170h]
  __int64 v110; // [rsp+278h] [rbp+178h]
  int *v111; // [rsp+280h] [rbp+180h]
  __int64 v112; // [rsp+288h] [rbp+188h]
  int *v113; // [rsp+290h] [rbp+190h]
  __int64 v114; // [rsp+298h] [rbp+198h]
  int *v115; // [rsp+2A0h] [rbp+1A0h]
  __int64 v116; // [rsp+2A8h] [rbp+1A8h]
  char v117[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v118; // [rsp+2C0h] [rbp+1C0h]
  __int64 v119; // [rsp+2C8h] [rbp+1C8h]
  int *v120; // [rsp+2D0h] [rbp+1D0h]
  __int64 v121; // [rsp+2D8h] [rbp+1D8h]
  int *v122; // [rsp+2E0h] [rbp+1E0h]
  __int64 v123; // [rsp+2E8h] [rbp+1E8h]
  char v124[16]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v68 = a6;
  v50 = a4;
  v42 = a2;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) || (unsigned int)TakeTelemetryAssertsLock() )
    return;
  v8 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_4:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v10 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_52:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v11 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v10[2] = 0LL;
    *((_DWORD *)v10 + 6) = 0;
    v10[1] = ((__int64)((unsigned __int128)(v11 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v11 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v13 = v10 + 4;
    v14 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v13 = g_MicrosoftTelemetryAssertsTriggeredList;
    v10[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v14 + 8) = v13;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v10 + 4);
  }
  else
  {
    while ( 1 )
    {
      v10 = v8 - 4;
      if ( *(v8 - 4) == a1 )
        break;
      v8 = (__int64 *)*v8;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v8 )
        goto LABEL_4;
    }
  }
  ++*((_DWORD *)v10 + 4);
  ++*((_DWORD *)v10 + 5);
  v15 = MEMORY[0xFFFFF78000000320];
  v16 = v15 * KeQueryTimeIncrement();
  v40 = 0;
  v39 = 0;
  if ( (unsigned __int64)(v16 / 10000 - v10[1]) <= 0xEA60 )
    goto LABEL_52;
  ImageTuple = GetImageTuple(v16, &v40, &v39);
  v19 = v39;
  v20 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v39 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v39 )
  {
    v21 = a1 - 0xC0000000;
  }
  else
  {
    v21 = 0;
  }
  v22 = g_AssertFastMutex;
  v41 = *((_DWORD *)v10 + 4);
  v39 = *((_DWORD *)v10 + 5);
  v60 = *((_DWORD *)v10 + 6);
  v10[1] = v18;
  ExReleaseFastMutex(v22);
  v23 = "<unknown>";
  v24 = v40;
  if ( !a3 )
    a3 = g_ModuleName;
  if ( v42 )
  {
    if ( (unsigned int)dword_1C0300040 > 5 && tlgKeywordOn((__int64)&dword_1C0300040, 0x400000000000LL) )
    {
      v43 = v31;
      v86 = &v43;
      v32 = "<unknown>";
      v87 = 4LL;
      v88 = (int *)&v44;
      v44 = v21;
      v89 = 4LL;
      v90 = &v45;
      v91 = 4LL;
      v45 = v20 != 0 ? v24 : 0;
      v93 = 4LL;
      v92 = &v46;
      v46 = v20 != 0 ? v19 : 0;
      if ( v30 )
        v32 = v30;
      tlgCreate1Sz_char(v94, v32);
      v95 = &v47;
      v48 = v39;
      v97 = (int *)&v48;
      v47 = v41;
      v96 = 4LL;
      v98 = 4LL;
      CurrentIrql = KeGetCurrentIrql();
      v101 = 0;
      v49 = CurrentIrql;
      v100 = 4;
      v99 = &v49;
      tlgCreate1Sz_char(v102, a3);
      v103 = &v51;
      v52 = a5;
      v105 = &v52;
      v35 = (const char *)v68;
      v51 = v50;
      v104 = v34;
      if ( !v68 )
        v35 = "<unknown>";
      v106 = v34;
      tlgCreate1Sz_char(v107, v35);
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0300040, byte_1C029FE67, 0LL, 0LL, 0xEu, &v85);
    }
  }
  else if ( (unsigned int)dword_1C0300040 > 5 && tlgKeywordOn((__int64)&dword_1C0300040, 0x400000000000LL) )
  {
    v53 = v26;
    v109 = &v53;
    v27 = "<unknown>";
    v110 = 4LL;
    v111 = (int *)&v54;
    v54 = v21;
    v112 = 4LL;
    v113 = &v55;
    v114 = 4LL;
    v55 = v20 != 0 ? v24 : 0;
    v116 = 4LL;
    v115 = &v56;
    v56 = v20 != 0 ? v19 : 0;
    if ( v25 )
      v27 = v25;
    tlgCreate1Sz_char(v117, v27);
    v118 = &v57;
    v58 = v39;
    v120 = (int *)&v58;
    v57 = v41;
    v119 = 4LL;
    v121 = 4LL;
    v28 = KeGetCurrentIrql();
    v123 = 4LL;
    v59 = v28;
    v122 = &v59;
    v29 = (const char *)v68;
    if ( !v68 )
      v29 = "<unknown>";
    tlgCreate1Sz_char(v124, v29);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C0300040,
      (unsigned __int8 *)dword_1C029FF11,
      0LL,
      0LL,
      0xBu,
      &v108);
  }
  if ( dword_1C0300078 && !v60 && !KeGetCurrentIrql() )
  {
    v36 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v21, g_ModuleName, v24, v19, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C0300040 > 5 && tlgKeywordOn((__int64)&dword_1C0300040, 0x400000000000LL) )
    {
      v71 = 4LL;
      v70 = &v61;
      v61 = 10;
      v72 = (int *)&v62;
      v62 = v21;
      v73 = 4LL;
      v74 = &v63;
      v63 = v20 != 0 ? v40 : 0;
      v75 = 4LL;
      v77 = 4LL;
      v64 = v20 != 0 ? v19 : 0;
      v76 = &v64;
      if ( g_ModuleName )
        v23 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v78, v23);
      v65 = v41;
      v80 = 4LL;
      v79 = &v65;
      v66 = v39;
      v81 = (int *)&v66;
      v83 = &v67;
      v82 = 4LL;
      v67 = v36;
      v84 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0300040,
        (unsigned __int8 *)dword_1C029FF7E,
        0LL,
        0LL,
        v37,
        &v69);
    }
    if ( !v36 && !(unsigned int)TakeTelemetryAssertsLock() )
    {
      v38 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v38 - 4) != a1 )
        {
          v38 = (__int64 *)*v38;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v38 )
            goto LABEL_52;
        }
        ++*((_DWORD *)v38 - 2);
      }
      goto LABEL_52;
    }
  }
}
