void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  __int64 *v2; // rcx
  __int64 *v3; // rdi
  unsigned __int64 *Pool2; // rax
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // r8
  char v27; // al
  const GUID *v28; // r8
  ULONG v29; // r10d
  __int64 *v30; // rcx
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+6Ch] [rbp-94h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+74h] [rbp-8Ch] BYREF
  int v41; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v42; // [rsp+7Ch] [rbp-84h] BYREF
  int v43; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v45; // [rsp+88h] [rbp-78h] BYREF
  int v46; // [rsp+8Ch] [rbp-74h] BYREF
  int v47; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+A0h] [rbp-60h] BYREF
  int *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  int *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  int *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  int *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char v57[16]; // [rsp+100h] [rbp+0h] BYREF
  int *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  int *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  int *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+140h] [rbp+40h] BYREF
  int *v65; // [rsp+160h] [rbp+60h]
  __int64 v66; // [rsp+168h] [rbp+68h]
  int *v67; // [rsp+170h] [rbp+70h]
  __int64 v68; // [rsp+178h] [rbp+78h]
  int *v69; // [rsp+180h] [rbp+80h]
  __int64 v70; // [rsp+188h] [rbp+88h]
  int *v71; // [rsp+190h] [rbp+90h]
  __int64 v72; // [rsp+198h] [rbp+98h]
  char v73[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v74; // [rsp+1B0h] [rbp+B0h]
  __int64 v75; // [rsp+1B8h] [rbp+B8h]
  int *v76; // [rsp+1C0h] [rbp+C0h]
  __int64 v77; // [rsp+1C8h] [rbp+C8h]
  int *v78; // [rsp+1D0h] [rbp+D0h]
  int v79; // [rsp+1D8h] [rbp+D8h]
  int v80; // [rsp+1DCh] [rbp+DCh]
  char v81[16]; // [rsp+1E0h] [rbp+E0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0)
    || (unsigned int)((__int64 (*)(void))TakeTelemetryAssertsLock)() )
  {
    return;
  }
  v2 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_6:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v3 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_37:
      ExReleaseFastMutex((PFAST_MUTEX)g_AssertFastMutex);
      return;
    }
    v5 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    *((_DWORD *)v3 + 4) = 0;
    *((_DWORD *)v3 + 5) = 0;
    *((_DWORD *)v3 + 6) = 0;
    v3[1] = ((__int64)((unsigned __int128)(v5 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v5 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v7 = v3 + 4;
    v8 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v7 = g_MicrosoftTelemetryAssertsTriggeredList;
    v3[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v8 + 8) = v7;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v3 + 4);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2 - 4;
      if ( *(v2 - 4) == a1 )
        break;
      v2 = (__int64 *)*v2;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v2 )
        goto LABEL_6;
    }
  }
  ++*((_DWORD *)v3 + 4);
  ++*((_DWORD *)v3 + 5);
  v9 = MEMORY[0xFFFFF78000000320];
  v32 = 0;
  v31 = 0;
  v10 = v9 * KeQueryTimeIncrement();
  if ( (unsigned __int64)(v10 / 10000 - v3[1]) <= 0xEA60 )
    goto LABEL_37;
  ImageTuple = GetImageTuple(v10, &v32, &v31);
  v13 = v31;
  v14 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v31 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v31 )
  {
    v15 = a1 - 0xC0000000;
  }
  else
  {
    v15 = 0;
  }
  v16 = (struct _FAST_MUTEX *)g_AssertFastMutex;
  v31 = *((_DWORD *)v3 + 4);
  v17 = *((_DWORD *)v3 + 5);
  v3[1] = v12;
  v18 = *((_DWORD *)v3 + 6);
  v33 = v17;
  ExReleaseFastMutex(v16);
  v19 = "<unknown>";
  if ( (unsigned int)dword_1C0161040 > 5 && tlgKeywordOn((__int64)&dword_1C0161040, 0x400000000000LL) )
  {
    v34 = 10;
    v65 = &v34;
    v20 = "<unknown>";
    v66 = 4LL;
    v67 = (int *)&v35;
    v35 = v15;
    v68 = 4LL;
    v69 = &v36;
    v36 = v14 != 0 ? v32 : 0;
    v70 = 4LL;
    v71 = &v37;
    v37 = v14 != 0 ? v13 : 0;
    v72 = 4LL;
    if ( g_ModuleName )
      v20 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(v73, v20, 0LL);
    v74 = (int *)&v38;
    v39 = v33;
    v76 = &v39;
    v38 = v31;
    v75 = 4LL;
    v77 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v80 = 0;
    v40 = CurrentIrql;
    v78 = &v40;
    v79 = 4;
    tlgCreate1Sz_char(v81, "<unknown>", v22);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C0161040,
      (unsigned __int8 *)dword_1C00A219F,
      0LL,
      0LL,
      0xBu,
      &v64);
  }
  if ( dword_1C0161078 && !v18 && !KeGetCurrentIrql() )
  {
    v25 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v15, g_ModuleName, v32, v13, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C0161040 > 5 )
    {
      v27 = tlgKeywordOn((__int64)&dword_1C0161040, 0x400000000000LL);
      v26 = 0LL;
      if ( v27 )
      {
        v50 = 4LL;
        v49 = &v41;
        v41 = 10;
        v51 = (int *)&v42;
        v42 = v15;
        v52 = 4LL;
        v53 = &v43;
        v43 = v14 != 0 ? v32 : 0;
        v54 = 4LL;
        v56 = 4LL;
        v44 = v14 != 0 ? v13 : 0;
        v55 = &v44;
        if ( g_ModuleName )
          v19 = (const char *)g_ModuleName;
        tlgCreate1Sz_char(v57, v19, 0LL);
        v45 = v31;
        v59 = 4LL;
        v58 = (int *)&v45;
        v46 = v33;
        v60 = &v46;
        v62 = &v47;
        v61 = 4LL;
        v47 = v25;
        v63 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0161040,
          (unsigned __int8 *)dword_1C00A220C,
          v28,
          0LL,
          v29,
          &v48);
      }
    }
    if ( !v25 && !(unsigned int)TakeTelemetryAssertsLock(v24, v23, v26) )
    {
      v30 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v30 - 4) != a1 )
        {
          v30 = (__int64 *)*v30;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v30 )
            goto LABEL_37;
        }
        ++*((_DWORD *)v30 - 2);
      }
      goto LABEL_37;
    }
  }
}
