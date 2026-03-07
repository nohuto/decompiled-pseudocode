__int64 __fastcall DpiPdoHandleOpmIoctlsInternal(
        struct _FDO_CONTEXT *RenderAdapterForSession,
        struct _PDO_CONTEXT *a2,
        int a3,
        char *a4,
        unsigned int a5,
        void **a6,
        unsigned int a7,
        unsigned __int64 *a8)
{
  int v9; // ecx
  struct _PDO_CONTEXT *v12; // r15
  __int64 v13; // rsi
  unsigned int v14; // r12d
  int v15; // eax
  int v16; // r13d
  int v17; // r13d
  int v18; // r13d
  int v19; // r13d
  int v20; // r13d
  int v21; // r13d
  int v22; // r13d
  int v23; // r13d
  char v24; // r13
  int v25; // ecx
  int v26; // r8d
  void *v27; // r14
  int v28; // eax
  void *v29; // rdx
  unsigned int v30; // r13d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 (__fastcall *v34)(__int64, void **, char *, _QWORD, char *); // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  char v37; // r13
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // eax
  __int64 (__fastcall *v42)(__int64, void *, char *, void **); // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  char v45; // r13
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  __int64 (__fastcall *v49)(__int64, void *, char *, void **); // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  void *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  unsigned int v56; // r13d
  char v57; // r13
  int v58; // ecx
  int v59; // r8d
  void *v60; // r14
  int v61; // eax
  char v62; // r13
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  unsigned int v66; // ecx
  unsigned int v68; // r14d
  __int64 v69; // rcx
  __int64 v70; // r8
  unsigned int v71; // r14d
  __int64 v72; // rcx
  __int64 v73; // r8
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-C1h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-C1h]
  void **v76; // [rsp+28h] [rbp-B9h]
  void **v77; // [rsp+28h] [rbp-B9h]
  __int64 v78; // [rsp+30h] [rbp-B1h]
  __int64 v79; // [rsp+30h] [rbp-B1h]
  int v80; // [rsp+50h] [rbp-91h]
  int v81; // [rsp+54h] [rbp-8Dh]
  unsigned int v82; // [rsp+54h] [rbp-8Dh]
  unsigned int v83; // [rsp+54h] [rbp-8Dh]
  unsigned int v84; // [rsp+54h] [rbp-8Dh]
  void **v85; // [rsp+58h] [rbp-89h] BYREF
  void *v86; // [rsp+60h] [rbp-81h] BYREF
  unsigned int v87; // [rsp+68h] [rbp-79h]
  int v88; // [rsp+6Ch] [rbp-75h]
  void *v89; // [rsp+70h] [rbp-71h] BYREF
  struct _FDO_CONTEXT *v90; // [rsp+78h] [rbp-69h] BYREF
  void *v91; // [rsp+80h] [rbp-61h] BYREF
  void *v92; // [rsp+88h] [rbp-59h] BYREF
  void *v93; // [rsp+90h] [rbp-51h] BYREF
  void **v94; // [rsp+98h] [rbp-49h]
  unsigned __int64 *v95; // [rsp+A0h] [rbp-41h]
  __int128 v96; // [rsp+A8h] [rbp-39h] BYREF
  __int128 v97; // [rsp+B8h] [rbp-29h] BYREF
  __int128 v98; // [rsp+C8h] [rbp-19h] BYREF

  v95 = a8;
  v9 = (int)a6;
  v85 = a6;
  *a8 = 0LL;
  v12 = a2;
  LODWORD(v13) = -1073741637;
  v14 = 0;
  v88 = 0;
  v81 = 1;
  v91 = a2;
  v90 = RenderAdapterForSession;
  if ( *((_BYTE *)RenderAdapterForSession + 1159) )
  {
    v15 = *((_DWORD *)RenderAdapterForSession + 291);
    if ( v15 == 2 )
    {
      v12 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = (struct _FDO_CONTEXT *)DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_130:
        _InterlockedExchange64(&qword_1C013B4D8, 0LL);
        KeReleaseMutex(Mutex, 0);
        return (unsigned int)v13;
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)RenderAdapterForSession + 484) )
        DpiCheckForOutstandingD3Requests((__int64)RenderAdapterForSession);
      ExAcquireResourceSharedLite(*((PERESOURCE *)RenderAdapterForSession + 21), 1u);
      v14 = 1;
      if ( a3 == 2303115 )
      {
        v88 = 1;
      }
      else
      {
        _InterlockedExchange64(&qword_1C013B4D8, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      v9 = (int)v85;
    }
    else
    {
      if ( v15 != 1 )
      {
        WdLogSingleEntry1(2LL, -1073741637LL);
        return (unsigned int)v13;
      }
      v81 = 0;
    }
  }
  if ( *((_QWORD *)RenderAdapterForSession + 384) )
  {
    v16 = a3 - 2303107;
    if ( !v16 )
    {
      v80 = 4;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303107, (_DWORD)a4, a5, v9, a7, 4, 4);
      if ( (int)v13 < 0 )
        goto LABEL_125;
      v71 = *(_DWORD *)a4;
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_125;
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489), 1LL);
      v13 = (*((int (__fastcall **)(_QWORD, _QWORD, void **))RenderAdapterForSession + 384))(
              *((_QWORD *)RenderAdapterForSession + 6),
              v71,
              v85);
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v79) = *(_DWORD *)v85;
        LODWORD(v77) = v71;
        LODWORD(Timeouta) = v14;
        McTemplateK0pqtqq_EtwWriteTransfer(
          v72,
          &EventOpmGetCertificateSize,
          v73,
          *((_QWORD *)RenderAdapterForSession + 6),
          Timeouta,
          v77,
          v79,
          v13);
      }
      v44 = v13;
      goto LABEL_163;
    }
    v17 = v16 - 4;
    if ( !v17 )
    {
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303111, (_DWORD)a4, a5, v9, a7, 4, a7);
      if ( (int)v13 < 0 )
        goto LABEL_125;
      v68 = *(_DWORD *)a4;
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_125;
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489), 1LL);
      v56 = a7;
      v13 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))RenderAdapterForSession + 385))(
              *((_QWORD *)RenderAdapterForSession + 6),
              v68,
              a7,
              v85);
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v78) = a7;
        LODWORD(v76) = v68;
        LODWORD(Timeout) = v14;
        McTemplateK0pqtqq_EtwWriteTransfer(
          v69,
          &EventOpmGetCertificate,
          v70,
          *((_QWORD *)RenderAdapterForSession + 6),
          Timeout,
          v76,
          v78,
          v13);
      }
      WdLogSingleEntry4(4LL, v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
LABEL_165:
      if ( (int)v13 >= 0 )
      {
        *v95 = v56;
        goto LABEL_126;
      }
      goto LABEL_125;
    }
    v18 = v17 - 4;
    if ( v18 )
    {
      v19 = v18 - 4;
      if ( v19 )
      {
        v20 = v19 - 4;
        if ( !v20 )
        {
          v24 = 0;
          v91 = 0LL;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303123, (_DWORD)a4, a5, v9, a7, 264, 0);
          if ( (int)v13 >= 0 )
          {
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_125;
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489), 1LL);
            v55 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 489), *(void **)a4, &v91);
            v24 = (char)v91;
            LODWORD(v13) = v55;
            if ( v55 >= 0 )
              LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *, char *))RenderAdapterForSession + 388))(
                               *((_QWORD *)RenderAdapterForSession + 6),
                               v91,
                               a4 + 8);
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v29 = &EventOPMSetSigningKeyAndSequenceNumbers;
            goto LABEL_107;
          }
LABEL_108:
          WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
LABEL_109:
          v56 = 0;
          goto LABEL_165;
        }
        v21 = v20 - 4;
        if ( v21 )
        {
          v22 = v21 - 4;
          if ( v22 )
          {
            v23 = v22 - 4;
            if ( v23 )
            {
              if ( v23 == 4 )
              {
                v24 = 0;
                v90 = 0LL;
                LODWORD(v13) = DpiPdoVerifyOpmParameters(2303139, (_DWORD)a4, a5, v9, a7, 8, 0);
                if ( (int)v13 < 0 )
                  goto LABEL_29;
                v27 = *(void **)a4;
                LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
                if ( (int)v13 >= 0 )
                {
                  DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
                  if ( v12 )
                    KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
                  DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489), 1LL);
                  v28 = DxgkOpmTranslateAndDestroyHandle(
                          *((DXGADAPTER **)RenderAdapterForSession + 489),
                          v27,
                          (void **)&v90);
                  v24 = (char)v90;
                  LODWORD(v13) = v28;
                  if ( v28 >= 0 )
                    LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, struct _FDO_CONTEXT *))RenderAdapterForSession
                                    + 392))(
                                     *((_QWORD *)RenderAdapterForSession + 6),
                                     v90);
                  DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489));
                  if ( v12 )
                    KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
                  DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
                  DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
LABEL_29:
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  {
                    v29 = &EventOPMDestroyProtectedOutput;
LABEL_107:
                    McTemplateK0ptpq_EtwWriteTransfer(
                      v25,
                      (_DWORD)v29,
                      v26,
                      *((_QWORD *)RenderAdapterForSession + 6),
                      v14,
                      v24,
                      v13);
                    goto LABEL_108;
                  }
                  goto LABEL_108;
                }
              }
LABEL_125:
              WdLogSingleEntry1(3LL, (int)v13);
              goto LABEL_126;
            }
            v96 = 0LL;
            v30 = -1;
            v85 = 0LL;
            LOBYTE(v82) = 0;
            LODWORD(v13) = DpiPdoVerifyOpmParameters(2303135, (_DWORD)a4, a5, v9, a7, 4112, 0);
            if ( (int)v13 >= 0 )
            {
              v82 = *((_DWORD *)a4 + 1026);
              LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
              if ( (int)v13 < 0 )
                goto LABEL_125;
              v30 = *((_DWORD *)a4 + 6);
              DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
              if ( v12 )
                KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489), 1LL);
              LODWORD(v13) = DxgkOpmTranslateHandle(
                               *((DXGADAPTER **)RenderAdapterForSession + 489),
                               *(void **)a4,
                               (void **)&v85);
              if ( (int)v13 >= 0 )
              {
                v34 = (__int64 (__fastcall *)(__int64, void **, char *, _QWORD, char *))*((_QWORD *)RenderAdapterForSession
                                                                                        + 391);
                v35 = *((_QWORD *)RenderAdapterForSession + 6);
                v96 = *(_OWORD *)(a4 + 24);
                LODWORD(v13) = v34(v35, v85, a4 + 8, v82, a4 + 4108);
              }
              DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489));
              if ( v12 )
                KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
              DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
              v36 = *((_QWORD *)a4 + 3) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
              if ( !v36 )
                v36 = *((_QWORD *)a4 + 4) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
              if ( !v36 && *((_DWORD *)a4 + 11) >= 0x10u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0ptpqqq_EtwWriteTransfer(
                    v32,
                    (unsigned int)&EventOPMSetProtectionLevel,
                    v33,
                    *((_QWORD *)RenderAdapterForSession + 6),
                    v14,
                    (char)v85,
                    *((_DWORD *)a4 + 12),
                    *((_DWORD *)a4 + 13),
                    v13);
                WdLogSingleEntry4(
                  4LL,
                  (int)v13,
                  *((_QWORD *)RenderAdapterForSession + 6),
                  v14,
                  *((unsigned int *)a4 + 12));
                DpiOpmLogSetLevel(v13, *((_DWORD *)a4 + 12), *((_DWORD *)a4 + 13));
              }
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0ptpjqq_EtwWriteTransfer(
                v32,
                v31,
                v33,
                *((_QWORD *)RenderAdapterForSession + 6),
                v14,
                (char)v85,
                (__int64)&v96,
                v82,
                v13);
            WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, v30);
            goto LABEL_109;
          }
          v80 = 4096;
          v37 = 0;
          v92 = 0LL;
          v97 = 0LL;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303131, (_DWORD)a4, a5, v9, a7, 4104, 4096);
          if ( (int)v13 >= 0 )
          {
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_125;
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489), 1LL);
            v41 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 489), *(void **)a4, &v92);
            v37 = (char)v92;
            LODWORD(v13) = v41;
            if ( v41 >= 0 )
            {
              v42 = (__int64 (__fastcall *)(__int64, void *, char *, void **))*((_QWORD *)RenderAdapterForSession + 390);
              v43 = *((_QWORD *)RenderAdapterForSession + 6);
              v97 = *(_OWORD *)(a4 + 24);
              LODWORD(v13) = v42(v43, v92, a4 + 8, v85);
            }
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ptpjq_EtwWriteTransfer(
              v39,
              v38,
              v40,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v37,
              (__int64)&v97,
              v13);
          goto LABEL_63;
        }
        v83 = -1;
        v80 = 4096;
        v45 = 0;
        v86 = 0LL;
        v98 = 0LL;
        LODWORD(v13) = DpiPdoVerifyOpmParameters(2303127, (_DWORD)a4, a5, v9, a7, 4120, 4096);
        if ( (int)v13 >= 0 )
        {
          LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          if ( (int)v13 < 0 )
            goto LABEL_125;
          v83 = *((_DWORD *)a4 + 10);
          DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
          if ( v12 )
            KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489), 1LL);
          LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 489), *(void **)a4, &v86);
          if ( (int)v13 >= 0 )
          {
            v49 = (__int64 (__fastcall *)(__int64, void *, char *, void **))*((_QWORD *)RenderAdapterForSession + 389);
            v50 = *((_QWORD *)RenderAdapterForSession + 6);
            v98 = *(_OWORD *)(a4 + 40);
            LODWORD(v13) = v49(v50, v86, a4 + 8, v85);
          }
          DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489));
          if ( v12 )
            KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
          DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          v51 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
          if ( !v51 )
            v51 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
          if ( !v51 && *((_DWORD *)v85 + 4) >= 0x20u )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
            {
LABEL_95:
              WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, v83);
LABEL_164:
              v56 = v80;
              goto LABEL_165;
            }
            v52 = &EventOPMGetConnectorType;
LABEL_78:
            McTemplateK0ptpqq_EtwWriteTransfer(
              v47,
              (_DWORD)v52,
              v48,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              (char)v86,
              *((_DWORD *)v85 + 10),
              v13);
            goto LABEL_95;
          }
          v53 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
          if ( !v53 )
            v53 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
          if ( !v53 && *((_DWORD *)v85 + 4) >= 0x20u )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
              goto LABEL_95;
            v52 = &EventOPMGetSupportedProtectionTypes;
            goto LABEL_78;
          }
          v54 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
          if ( !v54 )
            v54 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
          if ( !v54 && *((_DWORD *)a4 + 15) >= 4u && *((_DWORD *)v85 + 4) >= 0x20u )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0ptpqqq_EtwWriteTransfer(
                v47,
                (unsigned int)&EventOPMGetActualProtectionLevel,
                v48,
                *((_QWORD *)RenderAdapterForSession + 6),
                v14,
                (char)v86,
                *((_DWORD *)a4 + 16),
                *((_DWORD *)v85 + 10),
                v13);
            goto LABEL_95;
          }
          v45 = (char)v86;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ptpjq_EtwWriteTransfer(
            v47,
            v46,
            v48,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            v45,
            (__int64)&v98,
            v13);
        goto LABEL_95;
      }
      v57 = 0;
      v93 = 0LL;
      v80 = 16;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303119, (_DWORD)a4, a5, v9, a7, 8, 16);
      if ( (int)v13 >= 0 )
      {
        v60 = *(void **)a4;
        LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (int)v13 < 0 )
          goto LABEL_125;
        DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
        if ( v12 )
          KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489), 1LL);
        v61 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 489), v60, &v93);
        v57 = (char)v93;
        LODWORD(v13) = v61;
        if ( v61 >= 0 )
          LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *, void **))RenderAdapterForSession + 387))(
                           *((_QWORD *)RenderAdapterForSession + 6),
                           v93,
                           v85);
        DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489));
        if ( v12 )
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptpq_EtwWriteTransfer(
          v58,
          (unsigned int)&EventOPMGetRandomNumber,
          v59,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v57,
          v13);
    }
    else
    {
      v62 = -1;
      v89 = 0LL;
      v94 = 0LL;
      v80 = 8;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303115, (_DWORD)a4, a5, v9, a7, 4, 8);
      if ( (int)v13 >= 0 )
      {
        v66 = *(_DWORD *)a4;
        v87 = *(_DWORD *)a4;
        if ( v81 && v66 == 2 )
        {
          LODWORD(v13) = -1073741198;
          WdLogSingleEntry4(4LL, -1073741198LL, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
          goto LABEL_125;
        }
        v94 = v85;
        if ( v14 )
        {
          v84 = *((_DWORD *)v91 + 126);
          LODWORD(v13) = CreateProtectedOutputIndirectDisplay(RenderAdapterForSession, v90, v66, v84, v85, &v89);
        }
        else
        {
          LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          if ( (int)v13 < 0 )
            goto LABEL_125;
          DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
          if ( v12 )
            KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489), 1LL);
          v84 = *((_DWORD *)v12 + 126);
          LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))RenderAdapterForSession + 386))(
                           *((_QWORD *)RenderAdapterForSession + 6),
                           v84,
                           v87,
                           &v89);
          if ( (int)v13 >= 0 )
          {
            LODWORD(v13) = DxgkOpmCreateHandle(*((DXGADAPTER **)RenderAdapterForSession + 489), v89, v85);
            if ( (int)v13 < 0 )
            {
              (*((void (__fastcall **)(_QWORD, void *))RenderAdapterForSession + 392))(
                *((_QWORD *)RenderAdapterForSession + 6),
                v89);
              if ( (_DWORD)v13 == -1073741198 )
                LODWORD(v13) = -1073741637;
            }
          }
          DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 489));
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 489));
          DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        }
        DpiOpmLogCreateContext(v13, v87);
        v62 = v84;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptqppq_EtwWriteTransfer(
          v64,
          v63,
          v65,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v62,
          (char)v89,
          (char)*v94,
          v13);
    }
LABEL_63:
    v44 = (int)v13;
LABEL_163:
    WdLogSingleEntry4(4LL, v44, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
    goto LABEL_164;
  }
LABEL_126:
  if ( v14 )
  {
    if ( *((_BYTE *)RenderAdapterForSession + 484) )
      DpiEnableD3Requests(*((_QWORD *)RenderAdapterForSession + 3));
    ExReleaseResourceLite(*((PERESOURCE *)RenderAdapterForSession + 21));
    KeLeaveCriticalRegion();
    if ( v88 )
      goto LABEL_130;
  }
  return (unsigned int)v13;
}
