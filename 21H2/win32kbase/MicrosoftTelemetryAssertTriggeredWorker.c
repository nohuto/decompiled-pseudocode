/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0241364
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0241304 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     TakeTelemetryAssertsLock @ 0x1C00C0A34 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C02412B4 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C02418D0 (_tlgCreate1Sz_char.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
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
  int v22; // eax
  int v23; // edi
  const char *v24; // r12
  __int64 v25; // r13
  const char *v26; // rdx
  KIRQL CurrentIrql; // al
  __int64 v28; // r8
  const char *v29; // rax
  int v30; // edi
  const GUID *v31; // r8
  ULONG v32; // r10d
  __int64 *v33; // rcx
  unsigned int v34; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-ACh] BYREF
  int v36; // [rsp+60h] [rbp-A8h]
  int v37; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v38; // [rsp+68h] [rbp-A0h] BYREF
  int v39; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v40; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+74h] [rbp-94h] BYREF
  int v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v44; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+84h] [rbp-84h] BYREF
  int v46; // [rsp+88h] [rbp-80h] BYREF
  int v47; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v48; // [rsp+90h] [rbp-78h] BYREF
  int v49; // [rsp+94h] [rbp-74h] BYREF
  int v50; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+A8h] [rbp-60h] BYREF
  int *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  int *v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  int *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  int *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  char v61[16]; // [rsp+108h] [rbp+0h] BYREF
  int *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  int *v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  int *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+148h] [rbp+40h] BYREF
  int *v69; // [rsp+168h] [rbp+60h]
  __int64 v70; // [rsp+170h] [rbp+68h]
  int *v71; // [rsp+178h] [rbp+70h]
  __int64 v72; // [rsp+180h] [rbp+78h]
  int *v73; // [rsp+188h] [rbp+80h]
  __int64 v74; // [rsp+190h] [rbp+88h]
  int *v75; // [rsp+198h] [rbp+90h]
  __int64 v76; // [rsp+1A0h] [rbp+98h]
  char v77[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v78; // [rsp+1B8h] [rbp+B0h]
  __int64 v79; // [rsp+1C0h] [rbp+B8h]
  int *v80; // [rsp+1C8h] [rbp+C0h]
  __int64 v81; // [rsp+1D0h] [rbp+C8h]
  int *v82; // [rsp+1D8h] [rbp+D0h]
  int v83; // [rsp+1E0h] [rbp+D8h]
  int v84; // [rsp+1E4h] [rbp+DCh]
  char v85[16]; // [rsp+1E8h] [rbp+E0h] BYREF

  v51 = a6;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) || (unsigned int)TakeTelemetryAssertsLock() )
    return;
  v7 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_6:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL);
    v8 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_39:
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
    goto LABEL_39;
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
  v34 = *((_DWORD *)v8 + 4);
  v22 = *((_DWORD *)v8 + 5);
  v8[1] = v17;
  v23 = *((_DWORD *)v8 + 6);
  v36 = v22;
  ExReleaseFastMutex(v21);
  v24 = "<unknown>";
  v25 = v35;
  if ( (unsigned int)dword_1C02C7040 > 5 && tlgKeywordOn((__int64)&dword_1C02C7040, 0x400000000000LL) )
  {
    v37 = 10;
    v69 = &v37;
    v26 = "<unknown>";
    v70 = 4LL;
    v71 = (int *)&v38;
    v38 = v20;
    v72 = 4LL;
    v73 = &v39;
    v74 = 4LL;
    v39 = v19 != 0 ? v25 : 0;
    v76 = 4LL;
    v75 = &v40;
    v40 = v19 != 0 ? v18 : 0;
    if ( g_ModuleName )
      v26 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(v77, v26, 0LL);
    v78 = (int *)&v41;
    v42 = v36;
    v80 = &v42;
    v41 = v34;
    v79 = 4LL;
    v81 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v84 = 0;
    v43 = CurrentIrql;
    v82 = &v43;
    v29 = (const char *)v51;
    v83 = 4;
    if ( !v51 )
      v29 = "<unknown>";
    tlgCreate1Sz_char(v85, v29, v28);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C02C7040,
      (unsigned __int8 *)dword_1C0266957,
      0LL,
      0LL,
      0xBu,
      &v68);
  }
  if ( dword_1C02C7078 && !v23 && !KeGetCurrentIrql() )
  {
    v30 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v20, g_ModuleName, v25, v18, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C02C7040 > 5 && tlgKeywordOn((__int64)&dword_1C02C7040, 0x400000000000LL) )
    {
      v54 = 4LL;
      v53 = &v44;
      v44 = 10;
      v55 = (int *)&v45;
      v45 = v20;
      v56 = 4LL;
      v57 = &v46;
      v58 = 4LL;
      v46 = v19 != 0 ? v25 : 0;
      v60 = 4LL;
      v47 = v19 != 0 ? v18 : 0;
      v59 = &v47;
      if ( g_ModuleName )
        v24 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v61, v24, 0LL);
      v48 = v34;
      v63 = 4LL;
      v62 = (int *)&v48;
      v49 = v36;
      v64 = &v49;
      v66 = &v50;
      v65 = 4LL;
      v50 = v30;
      v67 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02C7040,
        (unsigned __int8 *)dword_1C02669C4,
        v31,
        0LL,
        v32,
        &v52);
    }
    if ( !v30 && !(unsigned int)TakeTelemetryAssertsLock() )
    {
      v33 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v33 - 4) != a1 )
        {
          v33 = (__int64 *)*v33;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v33 )
            goto LABEL_39;
        }
        ++*((_DWORD *)v33 - 2);
      }
      goto LABEL_39;
    }
  }
}
