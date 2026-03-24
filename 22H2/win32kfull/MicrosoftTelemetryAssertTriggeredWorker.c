/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C02DF120
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF0F0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     TakeTelemetryAssertsLock @ 0x1C0132154 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1C24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     GetImageTuple @ 0x1C02DF0A0 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C02DF848 (_tlgCreate1Sz_char.c)
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
  unsigned int v18; // r15d
  int v19; // r14d
  unsigned int v20; // ebx
  struct _FAST_MUTEX *v21; // rcx
  const char *v22; // r13
  const char *v23; // rdx
  unsigned __int8 CurrentIrql; // al
  const GUID *v25; // r9
  const char *v26; // rdx
  unsigned __int8 v27; // al
  const GUID *v28; // r9
  int v29; // edi
  ULONG v30; // r9d
  __int64 *v31; // rcx
  unsigned int v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh] BYREF
  int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+6Ch] [rbp-94h] BYREF
  int v40; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v41; // [rsp+74h] [rbp-8Ch] BYREF
  int v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+7Ch] [rbp-84h]
  int v44; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+84h] [rbp-7Ch] BYREF
  int v46; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v47; // [rsp+8Ch] [rbp-74h] BYREF
  int v48; // [rsp+90h] [rbp-70h] BYREF
  int v49; // [rsp+94h] [rbp-6Ch] BYREF
  int v50; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v51; // [rsp+9Ch] [rbp-64h] BYREF
  int v52; // [rsp+A0h] [rbp-60h] BYREF
  int v53; // [rsp+A4h] [rbp-5Ch]
  int v54; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v55; // [rsp+ACh] [rbp-54h] BYREF
  int v56; // [rsp+B0h] [rbp-50h] BYREF
  int v57; // [rsp+B4h] [rbp-4Ch] BYREF
  int v58; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v59; // [rsp+BCh] [rbp-44h] BYREF
  int v60; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+D0h] [rbp-30h] BYREF
  int *v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  int *v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  int *v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  int *v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  char v70[16]; // [rsp+130h] [rbp+30h] BYREF
  int *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  int *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  int *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+170h] [rbp+70h] BYREF
  int *v78; // [rsp+190h] [rbp+90h]
  __int64 v79; // [rsp+198h] [rbp+98h]
  int *v80; // [rsp+1A0h] [rbp+A0h]
  __int64 v81; // [rsp+1A8h] [rbp+A8h]
  int *v82; // [rsp+1B0h] [rbp+B0h]
  __int64 v83; // [rsp+1B8h] [rbp+B8h]
  int *v84; // [rsp+1C0h] [rbp+C0h]
  __int64 v85; // [rsp+1C8h] [rbp+C8h]
  char v86[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v87; // [rsp+1E0h] [rbp+E0h]
  __int64 v88; // [rsp+1E8h] [rbp+E8h]
  int *v89; // [rsp+1F0h] [rbp+F0h]
  __int64 v90; // [rsp+1F8h] [rbp+F8h]
  int *v91; // [rsp+200h] [rbp+100h]
  __int64 v92; // [rsp+208h] [rbp+108h]
  char v93[16]; // [rsp+210h] [rbp+110h] BYREF
  int *v94; // [rsp+220h] [rbp+120h]
  __int64 v95; // [rsp+228h] [rbp+128h]
  int *v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  char v98[16]; // [rsp+240h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+250h] [rbp+150h] BYREF
  int *v100; // [rsp+270h] [rbp+170h]
  __int64 v101; // [rsp+278h] [rbp+178h]
  int *v102; // [rsp+280h] [rbp+180h]
  __int64 v103; // [rsp+288h] [rbp+188h]
  int *v104; // [rsp+290h] [rbp+190h]
  __int64 v105; // [rsp+298h] [rbp+198h]
  int *v106; // [rsp+2A0h] [rbp+1A0h]
  __int64 v107; // [rsp+2A8h] [rbp+1A8h]
  char v108[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v109; // [rsp+2C0h] [rbp+1C0h]
  __int64 v110; // [rsp+2C8h] [rbp+1C8h]
  int *v111; // [rsp+2D0h] [rbp+1D0h]
  __int64 v112; // [rsp+2D8h] [rbp+1D8h]
  int *v113; // [rsp+2E0h] [rbp+1E0h]
  __int64 v114; // [rsp+2E8h] [rbp+1E8h]
  char v115[16]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v43 = a4;
  v35 = a2;
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
LABEL_48:
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
  v33 = 0;
  v32 = 0;
  if ( (unsigned __int64)(v15 / 10000 - v8[1]) <= 0xEA60 )
    goto LABEL_48;
  ImageTuple = GetImageTuple(v15, &v33, &v32);
  v18 = v32;
  v19 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v32 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v32 )
  {
    v20 = a1 - 0xC0000000;
  }
  else
  {
    v20 = 0;
  }
  v21 = g_AssertFastMutex;
  v34 = *((_DWORD *)v8 + 4);
  v32 = *((_DWORD *)v8 + 5);
  v53 = *((_DWORD *)v8 + 6);
  v8[1] = v17;
  ExReleaseFastMutex(v21);
  v22 = "<unknown>";
  if ( !a3 )
    a3 = g_ModuleName;
  if ( v35 )
  {
    if ( (unsigned int)dword_1C0379040 > 5
      && (qword_1C0379050 & 0x400000000000LL) != 0
      && (qword_1C0379058 & 0x400000000000LL) == qword_1C0379058 )
    {
      v36 = 10;
      v78 = &v36;
      v23 = "<unknown>";
      v79 = 4LL;
      v80 = (int *)&v37;
      v37 = v20;
      v81 = 4LL;
      v82 = &v38;
      v83 = 4LL;
      v38 = v19 != 0 ? v33 : 0;
      v85 = 4LL;
      v84 = &v39;
      v39 = v19 != 0 ? v18 : 0;
      if ( g_ModuleName )
        v23 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v86, v23);
      v87 = &v40;
      v41 = v32;
      v89 = (int *)&v41;
      v40 = v34;
      v88 = 4LL;
      v90 = 4LL;
      CurrentIrql = KeGetCurrentIrql();
      v42 = CurrentIrql;
      v91 = &v42;
      v92 = 4LL;
      tlgCreate1Sz_char(v93, a3);
      v94 = &v44;
      v45 = a5;
      v44 = v43;
      v96 = &v45;
      v95 = 4LL;
      v97 = 4LL;
      tlgCreate1Sz_char(v98, "<unknown>");
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0379040,
        (unsigned __int8 *)dword_1C02F4226,
        0LL,
        v25,
        0xEu,
        &v77);
    }
  }
  else if ( (unsigned int)dword_1C0379040 > 5
         && (qword_1C0379050 & 0x400000000000LL) != 0
         && (qword_1C0379058 & 0x400000000000LL) == qword_1C0379058 )
  {
    v46 = 10;
    v101 = 4LL;
    v100 = &v46;
    v26 = "<unknown>";
    v47 = v20;
    v102 = (int *)&v47;
    v103 = 4LL;
    v105 = 4LL;
    v104 = &v48;
    v107 = 4LL;
    v48 = v19 != 0 ? v33 : 0;
    v106 = &v49;
    v49 = v19 != 0 ? v18 : 0;
    if ( g_ModuleName )
      v26 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(v108, v26);
    v109 = &v50;
    v51 = v32;
    v111 = (int *)&v51;
    v50 = v34;
    v110 = 4LL;
    v112 = 4LL;
    v27 = KeGetCurrentIrql();
    v52 = v27;
    v113 = &v52;
    v114 = 4LL;
    tlgCreate1Sz_char(v115, "<unknown>");
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0379040, byte_1C02F41B9, 0LL, v28, 0xBu, &v99);
  }
  if ( dword_1C0379078 && !v53 && !KeGetCurrentIrql() )
  {
    v29 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v20);
    if ( (unsigned int)dword_1C0379040 > 5
      && (qword_1C0379050 & 0x400000000000LL) != 0
      && (qword_1C0379058 & 0x400000000000LL) == qword_1C0379058 )
    {
      v63 = 4LL;
      v62 = &v54;
      v54 = 10;
      v64 = (int *)&v55;
      v55 = v20;
      v65 = 4LL;
      v66 = &v56;
      v56 = v19 != 0 ? v33 : 0;
      v67 = 4LL;
      v69 = 4LL;
      v57 = v19 != 0 ? v18 : 0;
      v68 = &v57;
      if ( g_ModuleName )
        v22 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v70, v22);
      v58 = v34;
      v72 = 4LL;
      v71 = &v58;
      v59 = v32;
      v73 = (int *)&v59;
      v75 = &v60;
      v74 = 4LL;
      v60 = v29;
      v76 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0379040,
        (unsigned __int8 *)dword_1C02F42D0,
        0LL,
        0LL,
        v30,
        &v61);
    }
    if ( !v29 && !(unsigned int)TakeTelemetryAssertsLock() )
    {
      v31 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v31 - 4) != a1 )
        {
          v31 = (__int64 *)*v31;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v31 )
            goto LABEL_48;
        }
        ++*((_DWORD *)v31 - 2);
      }
      goto LABEL_48;
    }
  }
}
