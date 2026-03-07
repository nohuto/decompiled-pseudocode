void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const char *a6)
{
  KIRQL v7; // al
  __int64 *v8; // rcx
  KIRQL v9; // r14
  __int64 *v10; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int16 v18; // cx
  unsigned int v19; // r13d
  unsigned int v20; // r15d
  unsigned __int64 v21; // rcx
  unsigned int v22; // esi
  int v23; // eax
  __int64 v24; // rbx
  const char *v25; // rdi
  const char *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  KIRQL CurrentIrql; // al
  const char *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  int v33; // r14d
  int v34; // ebx
  KIRQL v35; // al
  __int64 *v36; // rcx
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  int v38; // [rsp+5Ch] [rbp-ACh] BYREF
  int v39; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v42; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v43; // [rsp+70h] [rbp-98h] BYREF
  int v44; // [rsp+74h] [rbp-94h]
  int v45; // [rsp+78h] [rbp-90h]
  int v46; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v47; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v48; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v49; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+98h] [rbp-70h] BYREF
  int *v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  int *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  int *v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  int *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  const char *v59; // [rsp+F8h] [rbp-10h]
  int v60; // [rsp+100h] [rbp-8h]
  int v61; // [rsp+104h] [rbp-4h]
  int *v62; // [rsp+108h] [rbp+0h]
  __int64 v63; // [rsp+110h] [rbp+8h]
  int *v64; // [rsp+118h] [rbp+10h]
  __int64 v65; // [rsp+120h] [rbp+18h]
  int *v66; // [rsp+128h] [rbp+20h]
  __int64 v67; // [rsp+130h] [rbp+28h]
  const char *v68; // [rsp+138h] [rbp+30h]
  __int64 v69; // [rsp+140h] [rbp+38h]
  int *v70; // [rsp+148h] [rbp+40h]
  __int64 v71; // [rsp+150h] [rbp+48h]
  int *v72; // [rsp+158h] [rbp+50h]
  __int64 v73; // [rsp+160h] [rbp+58h]
  const char *v74; // [rsp+168h] [rbp+60h]
  int v75; // [rsp+170h] [rbp+68h]
  int v76; // [rsp+174h] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+178h] [rbp+70h] BYREF
  int *v78; // [rsp+198h] [rbp+90h]
  __int64 v79; // [rsp+1A0h] [rbp+98h]
  int *v80; // [rsp+1A8h] [rbp+A0h]
  __int64 v81; // [rsp+1B0h] [rbp+A8h]
  int *v82; // [rsp+1B8h] [rbp+B0h]
  __int64 v83; // [rsp+1C0h] [rbp+B8h]
  int *v84; // [rsp+1C8h] [rbp+C0h]
  __int64 v85; // [rsp+1D0h] [rbp+C8h]
  const char *v86; // [rsp+1D8h] [rbp+D0h]
  int v87; // [rsp+1E0h] [rbp+D8h]
  int v88; // [rsp+1E4h] [rbp+DCh]
  int *v89; // [rsp+1E8h] [rbp+E0h]
  __int64 v90; // [rsp+1F0h] [rbp+E8h]
  int *v91; // [rsp+1F8h] [rbp+F0h]
  __int64 v92; // [rsp+200h] [rbp+F8h]
  int *v93; // [rsp+208h] [rbp+100h]
  __int64 v94; // [rsp+210h] [rbp+108h]

  v40 = a4;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v7 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v8 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v9 = v7;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v10 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_56:
      KeReleaseSpinLock(&g_AssertSpinLock, v9);
      return;
    }
    v12 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v10 + 4) = 0;
    *((_DWORD *)v10 + 5) = 0;
    *((_DWORD *)v10 + 6) = 0;
    v10[1] = ((__int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v14 = v10 + 4;
    v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v14 = g_MicrosoftTelemetryAssertsTriggeredList;
    v10[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v15 + 8) = v14;
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
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v10 + 4);
  ++*((_DWORD *)v10 + 5);
  v16 = MEMORY[0xFFFFF78000000320];
  v17 = v16 * KeQueryTimeIncrement() / 10000;
  if ( (unsigned __int64)(v17 - v10[1]) <= 0xEA60 )
    goto LABEL_56;
  v18 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v18 == 267 || v18 == 523 )
  {
    v19 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
    v20 = *(_DWORD *)(0x1C0000050LL + MEMORY[0x1C000003C]);
  }
  else
  {
    v19 = 0;
    v20 = 0;
  }
  if ( a1 < 0x1C0000000LL || (v21 = 0x1C0000000LL + v20, v21 <= 0x1C0000000LL) || a1 > v21 )
    v22 = 0;
  else
    v22 = a1 - 0xC0000000;
  v44 = *((_DWORD *)v10 + 4);
  v45 = *((_DWORD *)v10 + 5);
  v23 = *((_DWORD *)v10 + 6);
  v10[1] = v17;
  v43 = v23;
  KeReleaseSpinLock(&g_AssertSpinLock, v9);
  v24 = -1LL;
  v25 = "<unknown>";
  if ( (unsigned int)dword_1C0074040 > 5
    && (qword_1C0074050 & 0x400000000000LL) != 0
    && (qword_1C0074058 & 0x400000000000LL) == qword_1C0074058 )
  {
    v46 = 10;
    v51 = &v46;
    v52 = 4LL;
    v53 = (int *)&v47;
    v26 = "<unknown>";
    v47 = v22;
    v55 = (int *)&v48;
    v57 = (int *)&v49;
    v54 = 4LL;
    v48 = v19;
    if ( g_ModuleName )
      v26 = (const char *)g_ModuleName;
    v56 = 4LL;
    v49 = v20;
    v58 = 4LL;
    if ( v26 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( v26[v27] );
      v28 = v27 + 1;
    }
    else
    {
      v26 = File;
      v28 = 1;
    }
    v60 = v28;
    v37 = v44;
    v62 = &v37;
    v38 = v45;
    v64 = &v38;
    v59 = v26;
    v61 = 0;
    v63 = 4LL;
    v65 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v30 = "<unknown>";
    v67 = 4LL;
    v39 = CurrentIrql;
    v66 = &v39;
    v68 = "usbhub3.sys";
    v41 = v40;
    v70 = (int *)&v41;
    v42 = a5;
    v72 = (int *)&v42;
    v69 = 12LL;
    v71 = 4LL;
    if ( a6 )
      v30 = a6;
    v73 = 4LL;
    if ( v30 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( v30[v31] );
      v32 = v31 + 1;
    }
    else
    {
      v30 = File;
      v32 = 1;
    }
    v75 = v32;
    v74 = v30;
    v76 = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C0074040,
      (unsigned __int8 *)dword_1C0065DA5,
      0LL,
      0LL,
      0xEu,
      &v50);
  }
  if ( dword_1C0074078 && !v43 && !KeGetCurrentIrql() )
  {
    v33 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v22, g_ModuleName, v19, v20, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C0074040 > 5
      && (qword_1C0074050 & 0x400000000000LL) != 0
      && (qword_1C0074058 & 0x400000000000LL) == qword_1C0074058 )
    {
      v79 = 4LL;
      v78 = &v43;
      v42 = v22;
      v80 = (int *)&v42;
      v43 = 10;
      v82 = (int *)&v41;
      v84 = (int *)&v40;
      v81 = 4LL;
      v41 = v19;
      if ( g_ModuleName )
        v25 = (const char *)g_ModuleName;
      v83 = 4LL;
      v40 = v20;
      v85 = 4LL;
      if ( v25 )
      {
        do
          ++v24;
        while ( v25[v24] );
        v34 = v24 + 1;
      }
      else
      {
        v25 = File;
        v34 = 1;
      }
      v39 = v44;
      v88 = 0;
      v89 = &v39;
      v38 = v45;
      v91 = &v38;
      v93 = &v37;
      v86 = v25;
      v87 = v34;
      v90 = 4LL;
      v92 = 4LL;
      v37 = v33;
      v94 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0074040,
        (unsigned __int8 *)dword_1C0065EBC,
        0LL,
        0LL,
        0xAu,
        &v77);
    }
    if ( !v33 )
    {
      v35 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v36 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v9 = v35;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v36 - 4) != a1 )
        {
          v36 = (__int64 *)*v36;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v36 )
            goto LABEL_56;
        }
        ++*((_DWORD *)v36 - 2);
      }
      goto LABEL_56;
    }
  }
}
