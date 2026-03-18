/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0147EB4
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     TakeTelemetryAssertsLock @ 0x1C011CAD0 (TakeTelemetryAssertsLock.c)
 *     GetImageTuple @ 0x1C01480FC (GetImageTuple.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _tlgCreate1Sz_char @ 0x1C02DCAE4 (_tlgCreate1Sz_char.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  __int64 *v2; // rcx
  unsigned __int64 *Pool2; // rax
  __int64 *v4; // rdi
  __int64 v5; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  int ImageTuple; // eax
  __int64 v12; // r10
  __int64 v13; // r14
  int v14; // r15d
  unsigned int v15; // ebx
  struct _FAST_MUTEX *v16; // rcx
  int v17; // eax
  int v18; // edi
  const char *v19; // r13
  const char *v20; // rdx
  KIRQL CurrentIrql; // al
  __int64 v22; // r8
  int v23; // edi
  const GUID *v24; // r8
  ULONG v25; // r10d
  __int64 *v26; // rcx
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-ACh] BYREF
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+64h] [rbp-9Ch] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-94h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+74h] [rbp-8Ch] BYREF
  int v37; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v38; // [rsp+7Ch] [rbp-84h] BYREF
  int v39; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v41; // [rsp+88h] [rbp-78h] BYREF
  int v42; // [rsp+8Ch] [rbp-74h] BYREF
  int v43; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+A0h] [rbp-60h] BYREF
  int *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  int *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  int *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  int *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  char v53[16]; // [rsp+100h] [rbp+0h] BYREF
  int *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  int *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  int *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+140h] [rbp+40h] BYREF
  int *v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+168h] [rbp+68h]
  int *v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+178h] [rbp+78h]
  int *v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+188h] [rbp+88h]
  int *v67; // [rsp+190h] [rbp+90h]
  __int64 v68; // [rsp+198h] [rbp+98h]
  char v69[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v70; // [rsp+1B0h] [rbp+B0h]
  __int64 v71; // [rsp+1B8h] [rbp+B8h]
  int *v72; // [rsp+1C0h] [rbp+C0h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]
  int *v74; // [rsp+1D0h] [rbp+D0h]
  int v75; // [rsp+1D8h] [rbp+D8h]
  int v76; // [rsp+1DCh] [rbp+DCh]
  char v77[16]; // [rsp+1E0h] [rbp+E0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) || (unsigned int)TakeTelemetryAssertsLock() )
    return;
  v2 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_4:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v4 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_40:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v5 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 6) = 0;
    v4[1] = ((__int64)((unsigned __int128)(v5 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v5 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v7 = v4 + 4;
    v8 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v7 = g_MicrosoftTelemetryAssertsTriggeredList;
    v4[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v8 + 8) = v7;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v4 + 4);
  }
  else
  {
    while ( 1 )
    {
      v4 = v2 - 4;
      if ( *(v2 - 4) == a1 )
        break;
      v2 = (__int64 *)*v2;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v2 )
        goto LABEL_4;
    }
  }
  ++*((_DWORD *)v4 + 4);
  ++*((_DWORD *)v4 + 5);
  v9 = MEMORY[0xFFFFF78000000320];
  v28 = 0;
  v27 = 0;
  v10 = v9 * KeQueryTimeIncrement();
  if ( (unsigned __int64)(v10 / 10000 - v4[1]) <= 0xEA60 )
    goto LABEL_40;
  ImageTuple = GetImageTuple(v10, &v28, &v27);
  v13 = v27;
  v14 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v27 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v27 )
  {
    v15 = a1 - 0xC0000000;
  }
  else
  {
    v15 = 0;
  }
  v16 = g_AssertFastMutex;
  v27 = *((_DWORD *)v4 + 4);
  v17 = *((_DWORD *)v4 + 5);
  v4[1] = v12;
  v18 = *((_DWORD *)v4 + 6);
  v29 = v17;
  ExReleaseFastMutex(v16);
  v19 = "<unknown>";
  if ( (unsigned int)dword_1C0376040 > 5 && tlgKeywordOn((__int64)&dword_1C0376040, 0x400000000000LL) )
  {
    v30 = 10;
    v61 = &v30;
    v20 = "<unknown>";
    v62 = 4LL;
    v63 = (int *)&v31;
    v31 = v15;
    v64 = 4LL;
    v65 = &v32;
    v32 = v14 != 0 ? v28 : 0;
    v66 = 4LL;
    v67 = &v33;
    v33 = v14 != 0 ? v13 : 0;
    v68 = 4LL;
    if ( g_ModuleName )
      v20 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(v69, v20, 0LL);
    v70 = (int *)&v34;
    v35 = v29;
    v72 = &v35;
    v34 = v27;
    v71 = 4LL;
    v73 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v76 = 0;
    v36 = CurrentIrql;
    v74 = &v36;
    v75 = 4;
    tlgCreate1Sz_char(v77, "<unknown>", v22);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C0376040,
      (unsigned __int8 *)dword_1C02F27B5,
      0LL,
      0LL,
      0xBu,
      &v60);
  }
  if ( dword_1C0376078 && !v18 && !KeGetCurrentIrql() )
  {
    v23 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v15, g_ModuleName, v28, v13, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C0376040 > 5 && tlgKeywordOn((__int64)&dword_1C0376040, 0x400000000000LL) )
    {
      v46 = 4LL;
      v45 = &v37;
      v37 = 10;
      v47 = (int *)&v38;
      v38 = v15;
      v48 = 4LL;
      v49 = &v39;
      v39 = v14 != 0 ? v28 : 0;
      v50 = 4LL;
      v52 = 4LL;
      v40 = v14 != 0 ? v13 : 0;
      v51 = &v40;
      if ( g_ModuleName )
        v19 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v53, v19, 0LL);
      v41 = v27;
      v55 = 4LL;
      v54 = (int *)&v41;
      v42 = v29;
      v56 = &v42;
      v58 = &v43;
      v57 = 4LL;
      v43 = v23;
      v59 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0376040,
        (unsigned __int8 *)dword_1C02F2822,
        v24,
        0LL,
        v25,
        &v44);
    }
    if ( !v23 && !(unsigned int)TakeTelemetryAssertsLock() )
    {
      v26 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v26 - 4) != a1 )
        {
          v26 = (__int64 *)*v26;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v26 )
            goto LABEL_40;
        }
        ++*((_DWORD *)v26 - 2);
      }
      goto LABEL_40;
    }
  }
}
