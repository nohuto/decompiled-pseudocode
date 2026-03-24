/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C020015C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C020012C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     TakeTelemetryAssertsLock @ 0x1C00B30F0 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C02000DC (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C0200858 (_tlgCreate1Sz_char.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1, int a2, PVOID a3, int a4, int a5)
{
  __int64 *v7; // rcx
  __int64 *v8; // rdi
  __int64 *PoolWithTag; // rax
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
  __int64 v22; // rdi
  const char *v23; // r12
  const char *v24; // r8
  const char *v25; // rdx
  unsigned __int8 CurrentIrql; // al
  const GUID *v27; // r9
  __int64 v28; // r11
  const char *v29; // r8
  const char *v30; // rdx
  unsigned __int8 v31; // al
  const GUID *v32; // r9
  __int64 v33; // r11
  int v34; // edi
  ULONG v35; // r9d
  __int64 *v36; // rcx
  unsigned int v37; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-ACh] BYREF
  int v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+5Ch] [rbp-A4h]
  int v41; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v42; // [rsp+64h] [rbp-9Ch] BYREF
  int v43; // [rsp+68h] [rbp-98h] BYREF
  int v44; // [rsp+6Ch] [rbp-94h] BYREF
  int v45; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v46; // [rsp+74h] [rbp-8Ch] BYREF
  int v47; // [rsp+78h] [rbp-88h] BYREF
  int v48; // [rsp+7Ch] [rbp-84h]
  int v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+84h] [rbp-7Ch] BYREF
  int v51; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v52; // [rsp+8Ch] [rbp-74h] BYREF
  int v53; // [rsp+90h] [rbp-70h] BYREF
  int v54; // [rsp+94h] [rbp-6Ch] BYREF
  int v55; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v56; // [rsp+9Ch] [rbp-64h] BYREF
  int v57; // [rsp+A0h] [rbp-60h] BYREF
  int v58; // [rsp+A4h] [rbp-5Ch]
  int v59; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v60; // [rsp+ACh] [rbp-54h] BYREF
  int v61; // [rsp+B0h] [rbp-50h] BYREF
  int v62; // [rsp+B4h] [rbp-4Ch] BYREF
  int v63; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v64; // [rsp+BCh] [rbp-44h] BYREF
  int v65; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+D0h] [rbp-30h] BYREF
  int *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  int *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  int *v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  int *v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  char v75[16]; // [rsp+130h] [rbp+30h] BYREF
  int *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  int *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  int *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+170h] [rbp+70h] BYREF
  int *v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  int *v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  int *v87; // [rsp+1B0h] [rbp+B0h]
  __int64 v88; // [rsp+1B8h] [rbp+B8h]
  int *v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  char v91[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v92; // [rsp+1E0h] [rbp+E0h]
  __int64 v93; // [rsp+1E8h] [rbp+E8h]
  int *v94; // [rsp+1F0h] [rbp+F0h]
  __int64 v95; // [rsp+1F8h] [rbp+F8h]
  int *v96; // [rsp+200h] [rbp+100h]
  __int64 v97; // [rsp+208h] [rbp+108h]
  char v98[16]; // [rsp+210h] [rbp+110h] BYREF
  int *v99; // [rsp+220h] [rbp+120h]
  __int64 v100; // [rsp+228h] [rbp+128h]
  int *v101; // [rsp+230h] [rbp+130h]
  __int64 v102; // [rsp+238h] [rbp+138h]
  char v103[16]; // [rsp+240h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+250h] [rbp+150h] BYREF
  int *v105; // [rsp+270h] [rbp+170h]
  __int64 v106; // [rsp+278h] [rbp+178h]
  int *v107; // [rsp+280h] [rbp+180h]
  __int64 v108; // [rsp+288h] [rbp+188h]
  int *v109; // [rsp+290h] [rbp+190h]
  __int64 v110; // [rsp+298h] [rbp+198h]
  int *v111; // [rsp+2A0h] [rbp+1A0h]
  __int64 v112; // [rsp+2A8h] [rbp+1A8h]
  char v113[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v114; // [rsp+2C0h] [rbp+1C0h]
  __int64 v115; // [rsp+2C8h] [rbp+1C8h]
  int *v116; // [rsp+2D0h] [rbp+1D0h]
  __int64 v117; // [rsp+2D8h] [rbp+1D8h]
  int *v118; // [rsp+2E0h] [rbp+1E0h]
  __int64 v119; // [rsp+2E8h] [rbp+1E8h]
  char v120[16]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v48 = a4;
  v40 = a2;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) || (unsigned int)TakeTelemetryAssertsLock() )
    return;
  v7 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_6:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x74727341u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_45:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v10 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
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
  v38 = 0;
  v37 = 0;
  if ( (unsigned __int64)(v15 / 10000 - v8[1]) <= 0xEA60 )
    goto LABEL_45;
  ImageTuple = GetImageTuple(v15, &v38, &v37);
  v18 = v37;
  v19 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v37 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v37 )
  {
    v20 = a1 - 0xC0000000;
  }
  else
  {
    v20 = 0;
  }
  v21 = g_AssertFastMutex;
  v39 = *((_DWORD *)v8 + 4);
  v37 = *((_DWORD *)v8 + 5);
  v58 = *((_DWORD *)v8 + 6);
  v8[1] = v17;
  ExReleaseFastMutex(v21);
  v22 = v38;
  v23 = "<unknown>";
  if ( !a3 )
    a3 = g_ModuleName;
  if ( v40 )
  {
    if ( (unsigned int)dword_1C027E040 > 5 && tlgKeywordOn((__int64)&dword_1C027E040, 0x400000000000LL) )
    {
      v41 = 10;
      v83 = &v41;
      v25 = "<unknown>";
      v84 = 4LL;
      v85 = (int *)&v42;
      v42 = v20;
      v86 = 4LL;
      v87 = &v43;
      v88 = 4LL;
      v43 = v19 != 0 ? v22 : 0;
      v90 = 4LL;
      v89 = &v44;
      v44 = v19 != 0 ? v18 : 0;
      if ( v24 )
        v25 = v24;
      tlgCreate1Sz_char(v91, v25);
      v92 = &v45;
      v46 = v37;
      v94 = (int *)&v46;
      v45 = v39;
      v93 = 4LL;
      v95 = 4LL;
      CurrentIrql = KeGetCurrentIrql();
      v47 = CurrentIrql;
      v96 = &v47;
      v97 = 4LL;
      tlgCreate1Sz_char(v98, a3);
      v99 = &v49;
      v50 = a5;
      v49 = v48;
      v101 = &v50;
      v100 = 4LL;
      v102 = 4LL;
      tlgCreate1Sz_char(v103, "<unknown>");
      tlgWriteTransfer_EtwWriteTransfer(v28, (unsigned __int8 *)dword_1C02237AE, 0LL, v27, 0xEu, &v82);
    }
  }
  else if ( (unsigned int)dword_1C027E040 > 5 && tlgKeywordOn((__int64)&dword_1C027E040, 0x400000000000LL) )
  {
    v51 = 10;
    v105 = &v51;
    v30 = "<unknown>";
    v106 = 4LL;
    v107 = (int *)&v52;
    v52 = v20;
    v108 = 4LL;
    v109 = &v53;
    v110 = 4LL;
    v53 = v19 != 0 ? v22 : 0;
    v112 = 4LL;
    v111 = &v54;
    v54 = v19 != 0 ? v18 : 0;
    if ( v29 )
      v30 = v29;
    tlgCreate1Sz_char(v113, v30);
    v114 = &v55;
    v56 = v37;
    v116 = (int *)&v56;
    v55 = v39;
    v115 = 4LL;
    v117 = 4LL;
    v31 = KeGetCurrentIrql();
    v57 = v31;
    v118 = &v57;
    v119 = 4LL;
    tlgCreate1Sz_char(v120, "<unknown>");
    tlgWriteTransfer_EtwWriteTransfer(v33, byte_1C0223741, 0LL, v32, 0xBu, &v104);
  }
  if ( dword_1C027E078 && !v58 && !KeGetCurrentIrql() )
  {
    v34 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v20, g_ModuleName, v22, v18, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C027E040 > 5 && tlgKeywordOn((__int64)&dword_1C027E040, 0x400000000000LL) )
    {
      v68 = 4LL;
      v67 = &v59;
      v59 = 10;
      v69 = (int *)&v60;
      v60 = v20;
      v70 = 4LL;
      v71 = &v61;
      v61 = v19 != 0 ? v38 : 0;
      v72 = 4LL;
      v74 = 4LL;
      v62 = v19 != 0 ? v18 : 0;
      v73 = &v62;
      if ( g_ModuleName )
        v23 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v75, v23);
      v63 = v39;
      v77 = 4LL;
      v76 = &v63;
      v64 = v37;
      v78 = (int *)&v64;
      v80 = &v65;
      v79 = 4LL;
      v65 = v34;
      v81 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C027E040,
        (unsigned __int8 *)dword_1C0223858,
        0LL,
        0LL,
        v35,
        &v66);
    }
    if ( !v34 && !(unsigned int)TakeTelemetryAssertsLock() )
    {
      v36 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v36 - 4) != a1 )
        {
          v36 = (__int64 *)*v36;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v36 )
            goto LABEL_45;
        }
        ++*((_DWORD *)v36 - 2);
      }
      goto LABEL_45;
    }
  }
}
