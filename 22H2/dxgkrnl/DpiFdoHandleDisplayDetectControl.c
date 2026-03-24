/*
 * XREFs of DpiFdoHandleDisplayDetectControl @ 0x1C00203C8
 * Callers:
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0178308 (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DxgkQueryConnectionChanges @ 0x1C00205E0 (DxgkQueryConnectionChanges.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C0020FA8 (DpiFdoQueueConnectionChangePackage.c)
 *     DpiFdoInitializeConnectionChangePackage @ 0x1C0021064 (DpiFdoInitializeConnectionChangePackage.c)
 *     DpIndicateConnectorChange @ 0x1C0050ED0 (DpIndicateConnectorChange.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C012E130 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012E3AC (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x1C0178364 (DpiPdoIsChildConnected.c)
 *     ?DmmSetTargetForceableState@@YAJQEAXIE@Z @ 0x1C02DF41C (-DmmSetTargetForceableState@@YAJQEAXIE@Z.c)
 */

__int64 __fastcall DpiFdoHandleDisplayDetectControl(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  int v6; // esi
  char v7; // r13
  _QWORD *v8; // r12
  _QWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  int ConnectionChanges; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rax
  int IsChildConnected; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r12
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+40h] [rbp-30h]
  _QWORD *v36; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  char v38; // [rsp+B8h] [rbp+48h] BYREF
  char v39; // [rsp+C0h] [rbp+50h] BYREF
  char v40; // [rsp+C8h] [rbp+58h]

  LODWORD(v2) = 0;
  v4 = *a2;
  v38 = 0;
  v6 = v4 & 0xF000000;
  v39 = 0;
  if ( (((v4 & 0xF000000) - 50331648) & 0xFEFFFFFF) != 0 )
  {
    if ( ((v6 - 0x1000000) & 0xFEFFFFFF) != 0 )
    {
      LODWORD(v2) = -1073741811;
      v22 = WdLogNewEntry5_WdError(4278190079LL, v4);
      *(_QWORD *)(v22 + 24) = HIBYTE(*a2) & 0xF;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v22);
      return (unsigned int)v2;
    }
    v7 = 0;
    v40 = 0;
    if ( v6 != 0x2000000 )
    {
      IsChildConnected = DpiPdoIsChildConnected(
                           *(_QWORD *)(a1 + 24),
                           v4 & 0xFFFFFF,
                           *((_BYTE *)a2 + 17),
                           (v4 & 0x10000000) != 0,
                           (__int64)&v38,
                           (__int64)&v39);
      v2 = IsChildConnected;
      if ( IsChildConnected >= 0 )
      {
        if ( (IsChildConnected == 1075708975 || IsChildConnected == 1075708988)
          && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
        {
          v28 = DmmSetTargetForceableState(*(void *const *)(a1 + 3896), *a2 & 0xFFFFFF, (_DWORD)v2 == 1075708975);
          v31 = v28;
          if ( v28 < 0 )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
            v32[5] = 0LL;
            v32[4] = (_DWORD)v2 == 1075708975;
            v32[3] = v31;
            WdLogEvent5_WdError(v32);
          }
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
        }
        if ( !v39 && (!v38 || !*((_BYTE *)a2 + 16)) || (_DWORD)v2 == 1075708975 )
        {
LABEL_12:
          if ( (int)v2 >= 0 )
          {
            if ( v7 )
            {
              if ( *((_BYTE *)a2 + 18) )
              {
                LOBYTE(v14) = *((_BYTE *)a2 + 17);
                LOBYTE(v13) = *((_BYTE *)a2 + 16);
                ConnectionChanges = DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), 0, v13, v14, 0);
                v2 = ConnectionChanges;
                if ( ConnectionChanges >= 0 )
                  return (unsigned int)v2;
                v34 = WdLogNewEntry5_WdError(v17, v16);
                *(_QWORD *)(v34 + 24) = v2;
                WdLogEvent5_WdError(v34);
              }
              else
              {
                LOBYTE(v13) = 1;
                LODWORD(v2) = DpiFdoQueueConnectionChangePackage(a1, 0LL, v13);
              }
            }
            if ( (int)v2 >= 0 )
              return (unsigned int)v2;
          }
          _InterlockedAnd((volatile signed __int32 *)(a1 + 3644), 0xFFFFFFFE);
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 152), BusRelations);
          return (unsigned int)v2;
        }
        v33 = DpiFdoInitializeConnectionChangePackage(
                *((_QWORD *)a2 + 1),
                *a2 & 0xFFFFFF,
                v38 != 0 ? 10 : 8,
                -2,
                *((_BYTE *)a2 + 16),
                0,
                0,
                1);
        if ( v33 )
          LODWORD(v2) = DpiFdoQueueConnectionChangePackage(a1, v33, 0LL);
        else
          LODWORD(v2) = -1073741670;
        if ( (int)v2 >= 0 )
        {
          v7 = 1;
          goto LABEL_12;
        }
LABEL_51:
        v26 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v26 + 24) = (int)v2;
LABEL_52:
        WdLogEvent5_WdError(v26);
        goto LABEL_12;
      }
LABEL_34:
      v26 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v26 + 24) = v2;
      goto LABEL_52;
    }
    v8 = *(_QWORD **)(a1 + 3464);
    if ( v8 != (_QWORD *)(a1 + 3464) )
    {
      while ( 1 )
      {
        v9 = v8;
        v8 = (_QWORD *)*v8;
        v36 = v9;
        v10 = DpiPdoIsChildConnected(
                *(_QWORD *)(a1 + 24),
                *((_DWORD *)v9 - 2),
                *((_BYTE *)a2 + 17),
                (*a2 & 0x10000000) != 0,
                (__int64)&v38,
                (__int64)&v39);
        v2 = v10;
        if ( v10 < 0 )
          goto LABEL_34;
        if ( (v10 == 1075708975 || v10 == 1075708988)
          && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
        {
          v35 = DmmSetTargetForceableState(*(void *const *)(a1 + 3896), *((_DWORD *)v36 - 2), (_DWORD)v2 == 1075708975);
          if ( v35 < 0 )
          {
            v25 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
            v25[5] = 0LL;
            v25[3] = v35;
            v25[4] = (_DWORD)v2 == 1075708975;
            WdLogEvent5_WdError(v25);
          }
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
          v7 = v40;
        }
        if ( (_DWORD)v2 != 1075708975 && (v39 || v38 && *((_BYTE *)a2 + 16)) )
        {
          v19 = DpiFdoInitializeConnectionChangePackage(
                  *((_QWORD *)a2 + 1),
                  *((_DWORD *)v36 - 2),
                  v38 != 0 ? 10 : 8,
                  -2,
                  *((_BYTE *)a2 + 16),
                  0,
                  0,
                  1);
          if ( v19 )
            LODWORD(v2) = DpiFdoQueueConnectionChangePackage(a1, v19, 0LL);
          else
            LODWORD(v2) = -1073741670;
          if ( (int)v2 < 0 )
            goto LABEL_51;
          v7 = 1;
          v40 = 1;
        }
        if ( v8 == (_QWORD *)(a1 + 3464) )
          goto LABEL_12;
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3488), &LockHandle);
    if ( v6 == 50331648 && *(_QWORD *)(a1 + 3496) != a1 + 3496 )
      LODWORD(v2) = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
    *(_BYTE *)(a1 + 3512) = v6 == 50331648;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return (unsigned int)v2;
}
