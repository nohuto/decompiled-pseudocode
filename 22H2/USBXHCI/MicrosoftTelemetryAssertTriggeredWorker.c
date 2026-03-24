/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00505B8
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0050588 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C0050538 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1C0050C4C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1C0050C8C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0050CB8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  KIRQL v7; // al
  __int64 *v8; // rcx
  KIRQL v9; // r14
  __int64 *v10; // rdi
  __int64 *PoolWithTag; // rax
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int ImageTuple; // eax
  __int64 v19; // r10
  __int64 v20; // r12
  int v21; // r15d
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // edi
  const char *v25; // r14
  __int64 v26; // r8
  const char *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 CurrentIrql; // al
  const char *v31; // rdx
  int v32; // r8d
  int v33; // r9d
  int v34; // edi
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  ULONG v40; // r10d
  KIRQL v41; // al
  __int64 *v42; // rcx
  unsigned int v43; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v44; // [rsp+54h] [rbp-ACh] BYREF
  int v45; // [rsp+58h] [rbp-A8h] BYREF
  int v46; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v47; // [rsp+60h] [rbp-A0h] BYREF
  int v48; // [rsp+64h] [rbp-9Ch] BYREF
  int v49; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v50; // [rsp+6Ch] [rbp-94h] BYREF
  int v51; // [rsp+70h] [rbp-90h] BYREF
  int v52; // [rsp+74h] [rbp-8Ch] BYREF
  int v53; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v54; // [rsp+7Ch] [rbp-84h] BYREF
  int v55; // [rsp+80h] [rbp-80h] BYREF
  int v56; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v57; // [rsp+88h] [rbp-78h] BYREF
  int v58; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+A0h] [rbp-60h] BYREF
  int *v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  int *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  int *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  int *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  char v69[16]; // [rsp+100h] [rbp+0h] BYREF
  int *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  int *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  int *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+140h] [rbp+40h] BYREF
  int *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  int *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  int *v81; // [rsp+180h] [rbp+80h]
  __int64 v82; // [rsp+188h] [rbp+88h]
  int *v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  char v85[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v86; // [rsp+1B0h] [rbp+B0h]
  __int64 v87; // [rsp+1B8h] [rbp+B8h]
  int *v88; // [rsp+1C0h] [rbp+C0h]
  __int64 v89; // [rsp+1C8h] [rbp+C8h]
  int *v90; // [rsp+1D0h] [rbp+D0h]
  __int64 v91; // [rsp+1D8h] [rbp+D8h]
  char v92[16]; // [rsp+1E0h] [rbp+E0h] BYREF

  v59 = a6;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v7 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v8 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v9 = v7;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74727341u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_37:
      KeReleaseSpinLock(&g_AssertSpinLock, v9);
      return;
    }
    v12 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
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
  v44 = 0;
  v43 = 0;
  v17 = v16 * KeQueryTimeIncrement();
  if ( (unsigned __int64)(v17 / 10000 - v10[1]) <= 0xEA60 )
    goto LABEL_37;
  ImageTuple = GetImageTuple(v17, &v44, &v43);
  v20 = v43;
  v21 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v43 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v43 )
  {
    v22 = a1 - 0xC0000000;
  }
  else
  {
    v22 = 0;
  }
  v43 = *((_DWORD *)v10 + 4);
  v23 = *((_DWORD *)v10 + 5);
  v10[1] = v19;
  v24 = *((_DWORD *)v10 + 6);
  v45 = v23;
  KeReleaseSpinLock(&g_AssertSpinLock, v9);
  v25 = "<unknown>";
  if ( (unsigned int)dword_1C0069040 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0069040, 0x400000000000LL) )
  {
    v46 = 10;
    v77 = &v46;
    v27 = "<unknown>";
    v78 = 4LL;
    v79 = (int *)&v47;
    v47 = v22;
    v80 = 4LL;
    v81 = &v48;
    v48 = v21 != 0 ? v44 : 0;
    v82 = 4LL;
    v83 = &v49;
    v49 = v21 != 0 ? v20 : 0;
    v84 = 4LL;
    if ( g_ModuleName )
      v27 = (const char *)g_ModuleName;
    tlgCreate1Sz_char(v85, v27, v26, 0LL);
    v86 = (int *)&v50;
    v51 = v45;
    v88 = &v51;
    v50 = v43;
    v87 = 4LL;
    v89 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v31 = "<unknown>";
    v52 = CurrentIrql;
    v90 = &v52;
    v91 = 4LL;
    if ( v59 )
      v31 = (const char *)v59;
    tlgCreate1Sz_char(v92, v31, v28, v29);
    tlgWriteTransfer_EtwWriteTransfer((int)&v76, (int)&dword_1C0054723, v32, v33, 0xBu, &v76);
  }
  if ( dword_1C0069078 && !v24 && !KeGetCurrentIrql() )
  {
    v34 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v22, g_ModuleName, v44, v20, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C0069040 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0069040, 0x400000000000LL) )
    {
      v62 = 4LL;
      v61 = &v53;
      v53 = 10;
      v63 = (int *)&v54;
      v54 = v22;
      v64 = 4LL;
      v65 = &v55;
      v55 = v21 != 0 ? v44 : 0;
      v66 = 4LL;
      v68 = 4LL;
      v56 = v21 != 0 ? v20 : 0;
      v67 = &v56;
      if ( g_ModuleName )
        v25 = (const char *)g_ModuleName;
      tlgCreate1Sz_char(v69, v25, v35, v36);
      v57 = v43;
      v70 = (int *)&v57;
      v72 = &v45;
      v74 = &v58;
      v71 = 4LL;
      v73 = 4LL;
      v58 = v34;
      v75 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v37, (int)&dword_1C0054790, v38, v39, v40, &v60);
    }
    if ( !v34 )
    {
      v41 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v42 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v9 = v41;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v42 - 4) != a1 )
        {
          v42 = (__int64 *)*v42;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v42 )
            goto LABEL_37;
        }
        ++*((_DWORD *)v42 - 2);
      }
      goto LABEL_37;
    }
  }
}
