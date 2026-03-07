void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        int a2,
        _BYTE *a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  KIRQL v8; // al
  __int64 *v9; // rcx
  KIRQL v10; // r15
  __int64 *v11; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v13; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  int ImageTuple; // eax
  __int64 v20; // r10
  __int64 v21; // r12
  int v22; // r14d
  unsigned int v23; // ebx
  unsigned int v24; // eax
  int v25; // edi
  char *v26; // r15
  __int64 v27; // r13
  char *v28; // r9
  char *v29; // rdx
  char *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  char *v33; // r9
  char *v34; // rdx
  char *v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // edi
  __int64 v39; // r8
  __int64 v40; // r9
  ULONG v41; // r10d
  KIRQL v42; // al
  __int64 *v43; // rcx
  unsigned int v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v46; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v47; // [rsp+5Ch] [rbp-A4h] BYREF
  int CurrentIrql; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v49; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v50; // [rsp+68h] [rbp-98h] BYREF
  int v51; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v52; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v53; // [rsp+74h] [rbp-8Ch]
  int v54; // [rsp+78h] [rbp-88h] BYREF
  int v55; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h]
  _BYTE *v57; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+90h] [rbp-70h] BYREF
  int *v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  unsigned int *v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  int *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  int *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  _BYTE v67[16]; // [rsp+F0h] [rbp-10h] BYREF
  int *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  int *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  int *p_CurrentIrql; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  _BYTE v74[16]; // [rsp+130h] [rbp+30h] BYREF
  int *v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  int *v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]
  char v79[16]; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+170h] [rbp+70h] BYREF
  int *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  int *v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  int *v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]
  int *v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1C8h] [rbp+C8h]
  char v89[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v90; // [rsp+1E0h] [rbp+E0h]
  __int64 v91; // [rsp+1E8h] [rbp+E8h]
  int *v92; // [rsp+1F0h] [rbp+F0h]
  __int64 v93; // [rsp+1F8h] [rbp+F8h]
  int *v94; // [rsp+200h] [rbp+100h]
  __int64 v95; // [rsp+208h] [rbp+108h]

  v56 = a6;
  v49 = a4;
  v54 = a2;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v8 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v9 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v10 = v8;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v11 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_47:
      KeReleaseSpinLock(&g_AssertSpinLock, v10);
      return;
    }
    v13 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v11[2] = 0LL;
    *((_DWORD *)v11 + 6) = 0;
    v11[1] = ((__int64)((unsigned __int128)(v13 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v13 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v15 = v11 + 4;
    v16 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    v11[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v16 + 8) = v15;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v11 + 4);
  }
  else
  {
    while ( 1 )
    {
      v11 = v9 - 4;
      if ( *(v9 - 4) == a1 )
        break;
      v9 = (__int64 *)*v9;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v9 )
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v11 + 4);
  ++*((_DWORD *)v11 + 5);
  v17 = MEMORY[0xFFFFF78000000320];
  v18 = v17 * KeQueryTimeIncrement();
  v52 = 0;
  v44 = 0;
  if ( (unsigned __int64)(v18 / 10000 - v11[1]) <= 0xEA60 )
    goto LABEL_47;
  ImageTuple = GetImageTuple(v18, &v52, &v44);
  v21 = v44;
  v22 = ImageTuple;
  if ( ImageTuple
    && a1 >= 0x1C0000000LL
    && 0x1C0000000LL + (unsigned __int64)v44 > 0x1C0000000LL
    && a1 <= 0x1C0000000LL + (unsigned __int64)v44 )
  {
    v23 = a1 - 0xC0000000;
  }
  else
  {
    v23 = 0;
  }
  v53 = *((_DWORD *)v11 + 4);
  v24 = *((_DWORD *)v11 + 5);
  v11[1] = v20;
  v25 = *((_DWORD *)v11 + 6);
  v44 = v24;
  KeReleaseSpinLock(&g_AssertSpinLock, v10);
  v26 = "<unknown>";
  if ( !a3 )
    a3 = g_ModuleName;
  v57 = a3;
  v27 = v52;
  if ( v54 )
  {
    if ( (unsigned int)dword_1C006C040 > 5 && tlgKeywordOn((__int64)&dword_1C006C040, 0x400000000000LL) )
    {
      v54 = 10;
      v59 = &v54;
      v29 = "<unknown>";
      v60 = 4LL;
      v61 = &v52;
      v52 = v23;
      v62 = 4LL;
      v63 = &v55;
      v64 = 4LL;
      v55 = v22 != 0 ? v27 : 0;
      v66 = 4LL;
      v65 = &v45;
      v45 = v22 != 0 ? v21 : 0;
      if ( v28 )
        v29 = v28;
      tlgCreate1Sz_char((__int64)v67, v29);
      v68 = (int *)&v46;
      v47 = v44;
      v70 = (int *)&v47;
      v46 = v53;
      v69 = 4LL;
      v71 = 4LL;
      CurrentIrql = KeGetCurrentIrql();
      p_CurrentIrql = &CurrentIrql;
      v73 = 4LL;
      tlgCreate1Sz_char((__int64)v74, v57);
      v75 = (int *)&v50;
      v51 = a5;
      v77 = &v51;
      v30 = (char *)v56;
      v50 = v49;
      v76 = 4LL;
      if ( !v56 )
        v30 = "<unknown>";
      v78 = 4LL;
      tlgCreate1Sz_char((__int64)v79, v30);
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C006C040, byte_1C00580DD, v31, v32, 0xEu, &v58);
    }
  }
  else if ( (unsigned int)dword_1C006C040 > 5 && tlgKeywordOn((__int64)&dword_1C006C040, 0x400000000000LL) )
  {
    v51 = 10;
    v59 = &v51;
    v34 = "<unknown>";
    v60 = 4LL;
    v61 = &v50;
    v50 = v23;
    v62 = 4LL;
    v63 = (int *)&v49;
    v64 = 4LL;
    v49 = v22 != 0 ? v27 : 0;
    v66 = 4LL;
    v65 = &CurrentIrql;
    CurrentIrql = v22 != 0 ? v21 : 0;
    if ( v33 )
      v34 = v33;
    tlgCreate1Sz_char((__int64)v67, v34);
    v68 = (int *)&v47;
    v46 = v44;
    v70 = (int *)&v46;
    v47 = v53;
    v69 = 4LL;
    v71 = 4LL;
    v45 = KeGetCurrentIrql();
    p_CurrentIrql = &v45;
    v35 = (char *)v56;
    v73 = 4LL;
    if ( !v56 )
      v35 = "<unknown>";
    tlgCreate1Sz_char((__int64)v74, v35);
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_1C006C040,
      (unsigned __int8 *)dword_1C0058187,
      v36,
      v37,
      0xBu,
      &v58);
  }
  if ( dword_1C006C078 && !v25 && !KeGetCurrentIrql() )
  {
    v38 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v23, g_ModuleName, v27, v21, 0LL, 0LL, 0);
    if ( (unsigned int)dword_1C006C040 > 5 && tlgKeywordOn((__int64)&dword_1C006C040, 0x400000000000LL) )
    {
      v82 = 4LL;
      v81 = &v51;
      v51 = 10;
      v83 = (int *)&v50;
      v50 = v23;
      v84 = 4LL;
      v85 = (int *)&v49;
      v86 = 4LL;
      v49 = v22 != 0 ? v27 : 0;
      v88 = 4LL;
      CurrentIrql = v22 != 0 ? v21 : 0;
      v87 = &CurrentIrql;
      if ( g_ModuleName )
        v26 = (char *)g_ModuleName;
      tlgCreate1Sz_char((__int64)v89, v26);
      v47 = v53;
      v91 = 4LL;
      v90 = (int *)&v47;
      v46 = v44;
      v92 = (int *)&v46;
      v94 = &v45;
      v93 = 4LL;
      v45 = v38;
      v95 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C006C040,
        (unsigned __int8 *)dword_1C00581F4,
        v39,
        v40,
        v41,
        &v80);
    }
    if ( !v38 )
    {
      v42 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v43 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v10 = v42;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v43 - 4) != a1 )
        {
          v43 = (__int64 *)*v43;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v43 )
            goto LABEL_47;
        }
        ++*((_DWORD *)v43 - 2);
      }
      goto LABEL_47;
    }
  }
}
