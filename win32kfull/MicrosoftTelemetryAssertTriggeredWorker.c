void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1, int a2, PVOID a3, int a4, int a5)
{
  __int64 *v7; // rcx
  __int64 *v8; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v10; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int ImageTuple; // eax
  __int64 v17; // r10
  __int64 v18; // r15
  int v19; // r14d
  unsigned int v20; // ebx
  struct _FAST_MUTEX *v21; // rcx
  const char *v22; // r12
  __int64 v23; // rdi
  const char *v24; // r9
  const char *v25; // rdx
  KIRQL CurrentIrql; // al
  __int64 v27; // r8
  const char *v28; // r9
  const char *v29; // rdx
  KIRQL v30; // al
  int v31; // edi
  ULONG v32; // r9d
  __int64 *v33; // rcx
  unsigned int v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-ACh] BYREF
  int v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+5Ch] [rbp-A4h]
  int v38; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v39; // [rsp+64h] [rbp-9Ch] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+6Ch] [rbp-94h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v43; // [rsp+74h] [rbp-8Ch] BYREF
  int v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h]
  int v46; // [rsp+80h] [rbp-80h] BYREF
  int v47; // [rsp+84h] [rbp-7Ch] BYREF
  int v48; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v49; // [rsp+8Ch] [rbp-74h] BYREF
  int v50; // [rsp+90h] [rbp-70h] BYREF
  int v51; // [rsp+94h] [rbp-6Ch] BYREF
  int v52; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v53; // [rsp+9Ch] [rbp-64h] BYREF
  int v54; // [rsp+A0h] [rbp-60h] BYREF
  int v55; // [rsp+A4h] [rbp-5Ch]
  int v56; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v57; // [rsp+ACh] [rbp-54h] BYREF
  int v58; // [rsp+B0h] [rbp-50h] BYREF
  int v59; // [rsp+B4h] [rbp-4Ch] BYREF
  int v60; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v61; // [rsp+BCh] [rbp-44h] BYREF
  int v62; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+D0h] [rbp-30h] BYREF
  int *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  int *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  int *v68; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+118h] [rbp+18h]
  int *v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  char v72[16]; // [rsp+130h] [rbp+30h] BYREF
  int *v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  int *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  int *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+170h] [rbp+70h] BYREF
  int *v80; // [rsp+190h] [rbp+90h]
  __int64 v81; // [rsp+198h] [rbp+98h]
  int *v82; // [rsp+1A0h] [rbp+A0h]
  __int64 v83; // [rsp+1A8h] [rbp+A8h]
  int *v84; // [rsp+1B0h] [rbp+B0h]
  __int64 v85; // [rsp+1B8h] [rbp+B8h]
  int *v86; // [rsp+1C0h] [rbp+C0h]
  __int64 v87; // [rsp+1C8h] [rbp+C8h]
  char v88[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v89; // [rsp+1E0h] [rbp+E0h]
  __int64 v90; // [rsp+1E8h] [rbp+E8h]
  int *v91; // [rsp+1F0h] [rbp+F0h]
  __int64 v92; // [rsp+1F8h] [rbp+F8h]
  int *v93; // [rsp+200h] [rbp+100h]
  int v94; // [rsp+208h] [rbp+108h]
  int v95; // [rsp+20Ch] [rbp+10Ch]
  char v96[16]; // [rsp+210h] [rbp+110h] BYREF
  int *v97; // [rsp+220h] [rbp+120h]
  __int64 v98; // [rsp+228h] [rbp+128h]
  int *v99; // [rsp+230h] [rbp+130h]
  __int64 v100; // [rsp+238h] [rbp+138h]
  char v101[16]; // [rsp+240h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+250h] [rbp+150h] BYREF
  int *v103; // [rsp+270h] [rbp+170h]
  __int64 v104; // [rsp+278h] [rbp+178h]
  int *v105; // [rsp+280h] [rbp+180h]
  __int64 v106; // [rsp+288h] [rbp+188h]
  int *v107; // [rsp+290h] [rbp+190h]
  __int64 v108; // [rsp+298h] [rbp+198h]
  int *v109; // [rsp+2A0h] [rbp+1A0h]
  __int64 v110; // [rsp+2A8h] [rbp+1A8h]
  char v111[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v112; // [rsp+2C0h] [rbp+1C0h]
  __int64 v113; // [rsp+2C8h] [rbp+1C8h]
  int *v114; // [rsp+2D0h] [rbp+1D0h]
  __int64 v115; // [rsp+2D8h] [rbp+1D8h]
  int *v116; // [rsp+2E0h] [rbp+1E0h]
  __int64 v117; // [rsp+2E8h] [rbp+1E8h]
  char v118[16]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v45 = a4;
  v37 = a2;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) || (unsigned int)TakeTelemetryAssertsLock() )
    return;
  v7 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_6:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v8 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_45:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v10 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v8[2] = 0LL;
    *((_DWORD *)v8 + 6) = 0;
    v8[1] = ((__int64)((unsigned __int128)(v10 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v10 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v12 = v8 + 4;
    v13 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v12 = g_MicrosoftTelemetryAssertsTriggeredList;
    v8[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v13 + 8) = v12;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v8 + 4);
  }
  else
  {
    while ( 1 )
    {
      v8 = v7 - 4;
      if ( *(v7 - 4) == a1 )
        break;
      v7 = (__int64 *)*v7;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v7 )
        goto LABEL_6;
    }
  }
  ++*((_DWORD *)v8 + 4);
  ++*((_DWORD *)v8 + 5);
  v14 = MEMORY[0xFFFFF78000000320];
  v15 = v14 * KeQueryTimeIncrement();
  v35 = 0;
  v34 = 0;
  if ( (unsigned __int64)(v15 / 10000 - v8[1]) <= 0xEA60 )
    goto LABEL_45;
  ImageTuple = GetImageTuple(v15, &v35, &v34);
  v18 = v34;
  v19 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v34 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v34 )
  {
    v20 = a1 - 0xC0000000;
  }
  else
  {
    v20 = 0;
  }
  v21 = g_AssertFastMutex;
  v36 = *((_DWORD *)v8 + 4);
  v34 = *((_DWORD *)v8 + 5);
  v55 = *((_DWORD *)v8 + 6);
  v8[1] = v17;
  ExReleaseFastMutex(v21);
  v22 = "<unknown>";
  v23 = v35;
  if ( !a3 )
    a3 = g_ModuleName;
  if ( v37 )
  {
    if ( (unsigned int)dword_1C039B040 > 5 && tlgKeywordOn((__int64)&dword_1C039B040, 0x400000000000LL) )
    {
      v38 = 10;
      v80 = &v38;
      v25 = "<unknown>";
      v81 = 4LL;
      v82 = (int *)&v39;
      v39 = v20;
      v83 = 4LL;
      v84 = &v40;
      v85 = 4LL;
      v40 = v19 != 0 ? v23 : 0;
      v87 = 4LL;
      v86 = &v41;
      v41 = v19 != 0 ? v18 : 0;
      if ( v24 )
        v25 = v24;
      tlgCreate1Sz_char(v88, v25);
      v89 = &v42;
      v43 = v34;
      v91 = (int *)&v43;
      v42 = v36;
      v90 = 4LL;
      v92 = 4LL;
      CurrentIrql = KeGetCurrentIrql();
      v95 = 0;
      v44 = CurrentIrql;
      v94 = 4;
      v93 = &v44;
      tlgCreate1Sz_char(v96, a3);
      v97 = &v46;
      v47 = a5;
      v46 = v45;
      v99 = &v47;
      v98 = v27;
      v100 = v27;
      tlgCreate1Sz_char(v101, "<unknown>");
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C039B040,
        (unsigned __int8 *)dword_1C03202BB,
        0LL,
        0LL,
        0xEu,
        &v79);
    }
  }
  else if ( (unsigned int)dword_1C039B040 > 5 && tlgKeywordOn((__int64)&dword_1C039B040, 0x400000000000LL) )
  {
    v48 = 10;
    v103 = &v48;
    v29 = "<unknown>";
    v104 = 4LL;
    v105 = (int *)&v49;
    v49 = v20;
    v106 = 4LL;
    v107 = &v50;
    v108 = 4LL;
    v50 = v19 != 0 ? v23 : 0;
    v110 = 4LL;
    v109 = &v51;
    v51 = v19 != 0 ? v18 : 0;
    if ( v28 )
      v29 = v28;
    tlgCreate1Sz_char(v111, v29);
    v112 = &v52;
    v53 = v34;
    v114 = (int *)&v53;
    v52 = v36;
    v113 = 4LL;
    v115 = 4LL;
    v30 = KeGetCurrentIrql();
    v117 = 4LL;
    v54 = v30;
    v116 = &v54;
    tlgCreate1Sz_char(v118, "<unknown>");
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C039B040, byte_1C0320365, 0LL, 0LL, 0xBu, &v102);
  }
  if ( dword_1C039B078 && !v55 && !KeGetCurrentIrql() )
  {
    v31 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v20, g_ModuleName, v23, v18, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C039B040 > 5 && tlgKeywordOn((__int64)&dword_1C039B040, 0x400000000000LL) )
    {
      v65 = 4LL;
      v64 = &v56;
      v56 = 10;
      v66 = (int *)&v57;
      v57 = v20;
      v67 = 4LL;
      v68 = &v58;
      v58 = v19 != 0 ? v35 : 0;
      v69 = 4LL;
      v71 = 4LL;
      v59 = v19 != 0 ? v18 : 0;
      v70 = &v59;
      if ( g_ModuleName )
        v22 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v72, v22);
      v60 = v36;
      v74 = 4LL;
      v73 = &v60;
      v61 = v34;
      v75 = (int *)&v61;
      v77 = &v62;
      v76 = 4LL;
      v62 = v31;
      v78 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C039B040,
        (unsigned __int8 *)dword_1C03203D2,
        0LL,
        0LL,
        v32,
        &v63);
    }
    if ( !v31 && !(unsigned int)TakeTelemetryAssertsLock() )
    {
      v33 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v33 - 4) != a1 )
        {
          v33 = (__int64 *)*v33;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v33 )
            goto LABEL_45;
        }
        ++*((_DWORD *)v33 - 2);
      }
      goto LABEL_45;
    }
  }
}
