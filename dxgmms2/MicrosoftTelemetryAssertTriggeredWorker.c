/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C004C6F4
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C004C6C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C004C674 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C004CC18 (_tlgCreate1Sz_char.c)
 *     TakeTelemetryAssertsLock @ 0x1C004CC4C (TakeTelemetryAssertsLock.c)
 */

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
  __int64 v13; // r15
  int v14; // r14d
  unsigned int v15; // ebx
  unsigned int v16; // eax
  int v17; // r13d
  struct _FAST_MUTEX *v18; // rcx
  int v19; // edi
  KIRQL CurrentIrql; // al
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // r8
  char v26; // al
  const GUID *v27; // r8
  ULONG v28; // r10d
  __int64 *v29; // rcx
  unsigned int v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-ACh] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+64h] [rbp-9Ch] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v37; // [rsp+6Ch] [rbp-94h] BYREF
  int v38; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v40; // [rsp+78h] [rbp-88h] BYREF
  int v41; // [rsp+7Ch] [rbp-84h] BYREF
  int v42; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v44; // [rsp+88h] [rbp-78h] BYREF
  int v45; // [rsp+8Ch] [rbp-74h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+90h] [rbp-70h] BYREF
  int *v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  int *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  int *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  int *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  char v55[16]; // [rsp+F0h] [rbp-10h] BYREF
  int *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  int *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  int *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+130h] [rbp+30h] BYREF
  int *v63; // [rsp+150h] [rbp+50h]
  __int64 v64; // [rsp+158h] [rbp+58h]
  int *v65; // [rsp+160h] [rbp+60h]
  __int64 v66; // [rsp+168h] [rbp+68h]
  int *v67; // [rsp+170h] [rbp+70h]
  __int64 v68; // [rsp+178h] [rbp+78h]
  int *v69; // [rsp+180h] [rbp+80h]
  __int64 v70; // [rsp+188h] [rbp+88h]
  char v71[16]; // [rsp+190h] [rbp+90h] BYREF
  int *v72; // [rsp+1A0h] [rbp+A0h]
  __int64 v73; // [rsp+1A8h] [rbp+A8h]
  int *v74; // [rsp+1B0h] [rbp+B0h]
  __int64 v75; // [rsp+1B8h] [rbp+B8h]
  int *v76; // [rsp+1C0h] [rbp+C0h]
  int v77; // [rsp+1C8h] [rbp+C8h]
  int v78; // [rsp+1CCh] [rbp+CCh]
  char v79[16]; // [rsp+1D0h] [rbp+D0h] BYREF

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
LABEL_33:
      ExReleaseFastMutex(g_AssertFastMutex);
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
  v31 = 0;
  v30 = 0;
  v10 = v9 * KeQueryTimeIncrement();
  if ( (unsigned __int64)(v10 / 10000 - v3[1]) <= 0xEA60 )
    goto LABEL_33;
  ImageTuple = GetImageTuple(v10, &v31, &v30);
  v13 = v30;
  v14 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v30 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v30 )
  {
    v15 = a1 - 0xC0000000;
  }
  else
  {
    v15 = 0;
  }
  v16 = *((_DWORD *)v3 + 5);
  v17 = *((_DWORD *)v3 + 4);
  v18 = g_AssertFastMutex;
  v3[1] = v12;
  v19 = *((_DWORD *)v3 + 6);
  v30 = v16;
  ExReleaseFastMutex(v18);
  if ( (unsigned int)dword_1C0084040 > 5 && tlgKeywordOn((__int64)&dword_1C0084040, 0x400000000000LL) )
  {
    v32 = 10;
    v63 = &v32;
    v64 = 4LL;
    v65 = (int *)&v33;
    v33 = v15;
    v66 = 4LL;
    v67 = &v34;
    v34 = v14 != 0 ? v31 : 0;
    v68 = 4LL;
    v69 = &v35;
    v70 = 4LL;
    v35 = v14 != 0 ? v13 : 0;
    tlgCreate1Sz_char(v71, "<unknown>", 0LL);
    v36 = v17;
    v72 = &v36;
    v37 = v30;
    v74 = (int *)&v37;
    v73 = 4LL;
    v75 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v78 = 0;
    v38 = CurrentIrql;
    v76 = &v38;
    v77 = 4;
    tlgCreate1Sz_char(v79, "<unknown>", v21);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C0084040,
      (unsigned __int8 *)dword_1C00572AD,
      0LL,
      0LL,
      0xBu,
      &v62);
  }
  if ( dword_1C0084078 && !v19 && !KeGetCurrentIrql() )
  {
    v24 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v15, 0LL, v31, v13, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C0084040 > 5 )
    {
      v26 = tlgKeywordOn((__int64)&dword_1C0084040, 0x400000000000LL);
      v25 = 0LL;
      if ( v26 )
      {
        v48 = 4LL;
        v47 = &v39;
        v39 = 10;
        v49 = (int *)&v40;
        v40 = v15;
        v50 = 4LL;
        v52 = 4LL;
        v51 = &v41;
        v41 = v14 != 0 ? v31 : 0;
        v54 = 4LL;
        v42 = v14 != 0 ? v13 : 0;
        v53 = &v42;
        tlgCreate1Sz_char(v55, "<unknown>", 0LL);
        v43 = v17;
        v56 = &v43;
        v44 = v30;
        v57 = 4LL;
        v58 = (int *)&v44;
        v60 = &v45;
        v59 = 4LL;
        v45 = v24;
        v61 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0084040,
          (unsigned __int8 *)dword_1C005731A,
          v27,
          0LL,
          v28,
          &v46);
      }
    }
    if ( !v24 && !(unsigned int)TakeTelemetryAssertsLock(v23, v22, v25) )
    {
      v29 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v29 - 4) != a1 )
        {
          v29 = (__int64 *)*v29;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v29 )
            goto LABEL_33;
        }
        ++*((_DWORD *)v29 - 2);
      }
      goto LABEL_33;
    }
  }
}
