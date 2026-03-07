__int64 __fastcall VidSchDestroySyncObject(_VIDSCH_SYNC_OBJECT *P, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  const EVENT_DESCRIPTOR *v6; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // [rsp+40h] [rbp-21h]
  __int64 v20; // [rsp+40h] [rbp-21h]
  __int64 v21; // [rsp+48h] [rbp-19h]
  __int64 v22; // [rsp+48h] [rbp-19h]
  int v23; // [rsp+48h] [rbp-19h]
  int v24; // [rsp+48h] [rbp-19h]
  int v25; // [rsp+50h] [rbp-11h]
  int v26; // [rsp+50h] [rbp-11h]
  __int64 v27; // [rsp+58h] [rbp-9h]
  _QWORD v28[10]; // [rsp+68h] [rbp+7h] BYREF

  if ( P )
  {
    if ( *((int *)P + 9) > 1 )
      VidSchTimeoutSyncObject(P);
    v3 = *((_QWORD *)P + 2);
    if ( v3 )
    {
      if ( !bTracingEnabled )
        goto LABEL_15;
      v4 = *(_QWORD *)(*((_QWORD *)P + 1) + 16LL);
      if ( *(_DWORD *)(v3 + 200) != 1 )
      {
        if ( *(_DWORD *)(v3 + 200) != 2 )
        {
          if ( *(_DWORD *)(v3 + 200) != 3 )
          {
            if ( *(_DWORD *)(v3 + 200) != 4 )
            {
              if ( *(_DWORD *)(v3 + 200) == 5 )
              {
                if ( (byte_1C00769C1 & 1) != 0 )
                {
                  v21 = *(_QWORD *)(v3 + 208);
                  v5 = *(_DWORD *)(v3 + 204);
                  v19 = *(unsigned int *)(v3 + 272);
LABEL_13:
                  v6 = (const EVENT_DESCRIPTOR *)&EventDestroyMonitoredFence;
LABEL_14:
                  McTemplateK0ppqqpx_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    v6,
                    0LL,
                    v4,
                    P,
                    1,
                    v5,
                    v19,
                    v21);
                }
LABEL_15:
                VidSchiReleaseSyncObjectReference(
                  (char *)P,
                  (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)a2);
                return 0LL;
              }
              if ( *(_DWORD *)(v3 + 200) != 6 )
              {
LABEL_42:
                WdLogSingleEntry1(1LL, 1053LL);
                DxgkLogInternalTriageEvent(v18, 262146LL);
                goto LABEL_15;
              }
              if ( (byte_1C00769C1 & 1) == 0 )
                goto LABEL_15;
              v10 = *(unsigned int *)(v3 + 208);
              v11 = *(unsigned int *)(v3 + 272);
              v27 = *(_QWORD *)(v3 + 216);
              v25 = *(_DWORD *)(v3 + 212);
              v12 = *(_DWORD *)(v3 + 204);
LABEL_45:
              McTemplateK0ppqqppqi_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                &EventDestroyPeriodicMonitoredFence,
                0LL,
                v4,
                P,
                1,
                v12,
                v11,
                v10,
                v25,
                v27);
              goto LABEL_15;
            }
            if ( (byte_1C00769C1 & 1) == 0 )
              goto LABEL_15;
            v22 = *(_QWORD *)(v3 + 208);
            v13 = *(_DWORD *)(v3 + 204);
            v20 = *(unsigned int *)(v3 + 272);
            goto LABEL_48;
          }
          if ( (byte_1C00769C1 & 1) == 0 )
            goto LABEL_15;
          v21 = *(_QWORD *)(v3 + 208);
          v5 = *(_DWORD *)(v3 + 204);
          v19 = *(unsigned int *)(v3 + 272);
          goto LABEL_49;
        }
        if ( (byte_1C00769C1 & 1) == 0 )
          goto LABEL_15;
        v14 = *(unsigned int *)(v3 + 272);
        v26 = *(_DWORD *)(v3 + 212);
        v23 = *(_DWORD *)(v3 + 208);
        v15 = *(_DWORD *)(v3 + 204);
        goto LABEL_52;
      }
      if ( (byte_1C00769C1 & 1) == 0 )
        goto LABEL_15;
      v16 = *(unsigned int *)(v3 + 272);
      v24 = *(_DWORD *)(v3 + 208);
      v17 = *(_DWORD *)(v3 + 204);
    }
    else
    {
      memset(v28, 0, sizeof(v28));
      if ( *((_DWORD *)P + 12) == 4 )
      {
        v8 = 4294962295LL;
        a2 = 5LL;
        v28[1] = 4294962295LL;
      }
      else
      {
        v8 = v28[1];
        a2 = 3LL;
      }
      if ( !bTracingEnabled )
        goto LABEL_15;
      v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 1) + 8LL) + 16LL);
      a2 = (unsigned int)(a2 - 1);
      if ( (_DWORD)a2 )
      {
        a2 = (unsigned int)(a2 - 1);
        if ( (_DWORD)a2 )
        {
          a2 = (unsigned int)(a2 - 1);
          if ( (_DWORD)a2 )
          {
            a2 = (unsigned int)(a2 - 1);
            if ( (_DWORD)a2 )
            {
              a2 = (unsigned int)(a2 - 1);
              if ( !(_DWORD)a2 )
              {
                if ( (byte_1C00769C1 & 1) == 0 )
                  goto LABEL_15;
                v21 = v8;
                v19 = LODWORD(v28[9]);
                v5 = HIDWORD(v28[0]);
                goto LABEL_13;
              }
              if ( (_DWORD)a2 != 1 )
                goto LABEL_42;
              if ( (byte_1C00769C1 & 1) == 0 )
                goto LABEL_15;
              v10 = LODWORD(v28[1]);
              v11 = LODWORD(v28[9]);
              v27 = v28[2];
              v25 = HIDWORD(v28[1]);
              v12 = HIDWORD(v28[0]);
              goto LABEL_45;
            }
            if ( (byte_1C00769C1 & 1) == 0 )
              goto LABEL_15;
            v22 = v8;
            v20 = LODWORD(v28[9]);
            v13 = HIDWORD(v28[0]);
LABEL_48:
            McTemplateK0ppqqpx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              &EventDestroyCPUNotification,
              0LL,
              v4,
              P,
              1,
              v13,
              v20,
              v22);
            goto LABEL_15;
          }
          if ( (byte_1C00769C1 & 1) == 0 )
            goto LABEL_15;
          v21 = v8;
          v19 = LODWORD(v28[9]);
          v5 = HIDWORD(v28[0]);
LABEL_49:
          v6 = (const EVENT_DESCRIPTOR *)&EventDestroyFence;
          goto LABEL_14;
        }
        if ( (byte_1C00769C1 & 1) == 0 )
          goto LABEL_15;
        v14 = LODWORD(v28[9]);
        v26 = HIDWORD(v28[1]);
        v23 = v28[1];
        v15 = HIDWORD(v28[0]);
LABEL_52:
        McTemplateK0ppqqpqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventDestroySemaphore,
          0LL,
          v4,
          P,
          1,
          v15,
          v14,
          v23,
          v26);
        goto LABEL_15;
      }
      if ( (byte_1C00769C1 & 1) == 0 )
        goto LABEL_15;
      v16 = LODWORD(v28[9]);
      v24 = v28[1];
      v17 = HIDWORD(v28[0]);
    }
    McTemplateK0ppqqpt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      &EventDestroySynchronizationMutex,
      0LL,
      v4,
      P,
      1,
      v17,
      v16,
      v24);
    goto LABEL_15;
  }
  WdLogSingleEntry1(1LL, -1073741811LL);
  DxgkLogInternalTriageEvent(v9, 0x40000LL);
  return 3221225485LL;
}
