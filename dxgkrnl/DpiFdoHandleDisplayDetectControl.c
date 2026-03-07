__int64 __fastcall DpiFdoHandleDisplayDetectControl(__int64 a1, unsigned int *a2)
{
  int v2; // ebx
  unsigned __int64 v4; // rcx
  int v5; // esi
  int v6; // esi
  bool v8; // zf
  _QWORD *v9; // rax
  _BYTE *v10; // rcx
  _QWORD *v11; // r13
  int v12; // eax
  __int64 v13; // r8
  int v14; // r9d
  char v15; // al
  _BYTE *v16; // rdx
  _QWORD *v17; // r15
  _BYTE *v18; // r12
  bool v20; // r14
  int IsChildConnected; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  int ConnectionChanges; // eax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // [rsp+48h] [rbp-28h]
  _QWORD *v30; // [rsp+50h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  char v32; // [rsp+B8h] [rbp+48h] BYREF
  char v33; // [rsp+C0h] [rbp+50h] BYREF
  char v34; // [rsp+C8h] [rbp+58h]

  v2 = 0;
  v4 = *a2;
  v5 = *a2;
  v32 = 0;
  v6 = v5 & 0xF000000;
  v33 = 0;
  v8 = v6 == 50331648;
  if ( v6 == 50331648 )
  {
LABEL_15:
    v20 = v8;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3504), &LockHandle);
    if ( v6 == 50331648 && *(_QWORD *)(a1 + 3512) != a1 + 3512 )
      v2 = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
    *(_BYTE *)(a1 + 3528) = v20;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return (unsigned int)v2;
  }
  if ( v6 != 0x2000000 )
  {
    if ( v6 != 0x4000000 )
    {
      if ( v6 != 0x1000000 )
      {
        v2 = -1073741811;
        WdLogSingleEntry2(2LL, (v4 >> 24) & 0xF, -1073741811LL);
        return (unsigned int)v2;
      }
      v18 = (char *)a2 + 17;
      v17 = (_QWORD *)(a1 + 24);
      IsChildConnected = DpiPdoIsChildConnected(
                           *(_QWORD *)(a1 + 24),
                           v4 & 0xFFFFFF,
                           *((_BYTE *)a2 + 17),
                           (v4 & 0x10000000) != 0,
                           (__int64)&v32,
                           (__int64)&v33);
      v2 = IsChildConnected;
      if ( IsChildConnected >= 0 )
      {
        if ( (IsChildConnected == 1075708975 || IsChildConnected == 1075708988)
          && (int)DpiAcquireCoreSyncAccessSafe(*v17, 0LL) >= 0 )
        {
          v23 = DmmSetTargetForceableState(*(void *const *)(a1 + 3912), *a2 & 0xFFFFFF, v2 == 1075708975);
          if ( v23 < 0 )
            WdLogSingleEntry3(2LL, v23, v2 == 1075708975, 0LL);
          DpiReleaseCoreSyncAccessSafe(*v17, 0LL);
        }
        if ( !v33 && ((v15 = 0, v16 = v18, v11 = (_QWORD *)(a1 + 24), !v32) || !*((_BYTE *)a2 + 16))
          || (v15 = 0, v16 = v18, v11 = (_QWORD *)(a1 + 24), v2 == 1075708975) )
        {
LABEL_12:
          v17 = v11;
          v18 = v16;
          if ( v2 < 0 )
            goto LABEL_44;
          if ( !v15 )
            return (unsigned int)v2;
LABEL_40:
          if ( *((_BYTE *)a2 + 18) )
          {
            LOBYTE(v14) = *v18;
            LOBYTE(v13) = *((_BYTE *)a2 + 16);
            ConnectionChanges = DxgkQueryConnectionChanges(*v17, 0, v13, v14, 0, 0);
            v2 = ConnectionChanges;
            if ( ConnectionChanges >= 0 )
              return (unsigned int)v2;
            v22 = ConnectionChanges;
            goto LABEL_43;
          }
          LOBYTE(v13) = 1;
          v2 = DpiFdoQueueConnectionChangePackage(a1, 0LL, v13);
          if ( v2 >= 0 )
            return (unsigned int)v2;
LABEL_44:
          _InterlockedAnd((volatile signed __int32 *)(a1 + 3660), 0xFFFFFFFE);
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 152), BusRelations);
          return (unsigned int)v2;
        }
        v24 = DpiFdoInitializeConnectionChangePackage(
                *((_QWORD *)a2 + 1),
                *a2 & 0xFFFFFF,
                v32 != 0 ? 10 : 8,
                -2,
                *((_BYTE *)a2 + 16),
                0,
                0,
                1);
        if ( v24 )
        {
          v2 = DpiFdoQueueConnectionChangePackage(a1, v24, 0LL);
          if ( v2 >= 0 )
            goto LABEL_40;
        }
        else
        {
          v2 = -1073741670;
        }
        v22 = v2;
      }
      else
      {
        v22 = IsChildConnected;
      }
LABEL_43:
      WdLogSingleEntry1(2LL, v22);
      goto LABEL_44;
    }
    v8 = 0;
    goto LABEL_15;
  }
  v34 = 0;
  v9 = *(_QWORD **)(a1 + 3480);
  if ( v9 != (_QWORD *)(a1 + 3480) )
  {
    v10 = (char *)a2 + 17;
    v11 = (_QWORD *)(a1 + 24);
    while ( 1 )
    {
      v29 = v9;
      v30 = (_QWORD *)*v9;
      v12 = DpiPdoIsChildConnected(
              *v11,
              *((_DWORD *)v9 - 2),
              *v10,
              (*a2 & 0x10000000) != 0,
              (__int64)&v32,
              (__int64)&v33);
      v2 = v12;
      if ( v12 < 0 )
        break;
      if ( v12 != 1075708975 && v12 != 1075708988 )
        goto LABEL_63;
      if ( (int)DpiAcquireCoreSyncAccessSafe(*v11, 0LL) >= 0 )
      {
        v26 = DmmSetTargetForceableState(*(void *const *)(a1 + 3912), *((_DWORD *)v29 - 2), v2 == 1075708975);
        if ( v26 < 0 )
          WdLogSingleEntry3(2LL, v26, v2 == 1075708975, 0LL);
        DpiReleaseCoreSyncAccessSafe(*v11, 0LL);
      }
      if ( v2 != 1075708975 )
      {
LABEL_63:
        if ( v33 || v32 && *((_BYTE *)a2 + 16) )
        {
          v27 = DpiFdoInitializeConnectionChangePackage(
                  *((_QWORD *)a2 + 1),
                  *((_DWORD *)v29 - 2),
                  v32 != 0 ? 10 : 8,
                  -2,
                  *((_BYTE *)a2 + 16),
                  0,
                  0,
                  1);
          if ( !v27 )
          {
            v2 = -1073741670;
LABEL_57:
            v28 = v2;
            goto LABEL_59;
          }
          v2 = DpiFdoQueueConnectionChangePackage(a1, v27, 0LL);
          if ( v2 < 0 )
            goto LABEL_57;
          v34 = 1;
        }
      }
      v9 = v30;
      if ( v30 == (_QWORD *)(a1 + 3480) )
        goto LABEL_11;
      v10 = (char *)a2 + 17;
    }
    v28 = v12;
LABEL_59:
    WdLogSingleEntry1(2LL, v28);
LABEL_11:
    v15 = v34;
    v16 = (char *)a2 + 17;
    goto LABEL_12;
  }
  return (unsigned int)v2;
}
