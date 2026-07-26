/*
 * XREFs of NdisMIndicateStatus @ 0x1C00721A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     NdisMIndicateStatusEx @ 0x1C0019C90 (NdisMIndicateStatusEx.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001A70C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001A7A0 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

void __stdcall NdisMIndicateStatus(
        NDIS_HANDLE MiniportHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        UINT StatusBufferSize)
{
  char v5; // di
  struct _NDIS_MINIPORT_BLOCK *v9; // rcx
  int v10; // eax
  int v11; // eax
  KIRQL v12; // dl
  __int64 *v13; // rax
  KIRQL v14; // dl
  __int64 v15; // [rsp+30h] [rbp-99h]
  KIRQL NewIrql[4]; // [rsp+40h] [rbp-89h] BYREF
  int v17; // [rsp+44h] [rbp-85h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-79h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-9h] BYREF
  int v20; // [rsp+C8h] [rbp-1h]
  int v21; // [rsp+CCh] [rbp+3h]
  __int64 v22; // [rsp+D0h] [rbp+7h]
  __int64 v23; // [rsp+D8h] [rbp+Fh]
  int v24; // [rsp+E0h] [rbp+17h]
  int v25; // [rsp+E4h] [rbp+1Bh]

  NewIrql[0] = 0;
  v5 = 0;
  v17 = 0;
  HIDWORD(v19) = 0;
  v21 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xB0u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)MiniportHandle,
      GeneralStatus);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v20 = *((_DWORD *)MiniportHandle + 87);
  v9 = (struct _NDIS_MINIPORT_BLOCK *)MiniportHandle;
  v22 = *((_QWORD *)MiniportHandle + 345);
  v23 = *((_QWORD *)MiniportHandle + 346);
  v10 = *((_DWORD *)MiniportHandle + 203);
  StatusIndication.StatusBuffer = StatusBuffer;
  v24 = v10;
  v11 = *((_DWORD *)MiniportHandle + 204);
  StatusIndication.StatusBufferSize = StatusBufferSize;
  v25 = v11;
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = MiniportHandle;
  StatusIndication.StatusCode = GeneralStatus;
  v19 = 2621824LL;
  v21 = 0;
  if ( !*((_QWORD *)MiniportHandle + 3) )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NewIrql);
    if ( GeneralStatus == 1073807372 )
    {
      *((_BYTE *)MiniportHandle + 88) |= 8u;
      v5 = 1;
      *((_DWORD *)MiniportHandle + 86) = 2;
      HIDWORD(v19) = 2;
    }
    if ( GeneralStatus == 1073807371 )
    {
      *((_BYTE *)MiniportHandle + 88) |= 8u;
      v5 = 1;
      *((_DWORD *)MiniportHandle + 86) = 1;
      HIDWORD(v19) = 1;
    }
    if ( v5 )
    {
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBuffer = &v19;
      StatusIndication.StatusBufferSize = 40;
    }
    v12 = NewIrql[0];
    *((_QWORD *)MiniportHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v12);
    v9 = (struct _NDIS_MINIPORT_BLOCK *)MiniportHandle;
    goto LABEL_11;
  }
  if ( GeneralStatus == 1073807379 )
  {
LABEL_11:
    ndisMAcquireStInLockWithSpinLock(v9, NewIrql);
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, &StatusIndication);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NewIrql[0]);
    goto LABEL_25;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NewIrql);
  if ( GeneralStatus == 1073807371 )
  {
    if ( *((_DWORD *)MiniportHandle + 86) == 1
      && !*((_DWORD *)MiniportHandle + 459)
      && *((_DWORD *)MiniportHandle + 458) == 1 )
    {
      StatusIndication.Flags |= 4u;
      v13 = (__int64 *)&v17;
      StatusIndication.StatusCode = 1073807384;
      v17 = 1;
      StatusIndication.StatusBufferSize = 4;
      goto LABEL_23;
    }
    HIDWORD(v19) = 1;
    v5 = 1;
  }
  if ( GeneralStatus == 1073807372 )
  {
    HIDWORD(v19) = 2;
    v5 = 1;
  }
  if ( !v5 )
    goto LABEL_24;
  StatusIndication.StatusCode = 1073807383;
  v13 = &v19;
  StatusIndication.StatusBufferSize = 40;
LABEL_23:
  StatusIndication.StatusBuffer = v13;
LABEL_24:
  v14 = NewIrql[0];
  *((_QWORD *)MiniportHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v14);
  NdisMIndicateStatusEx(MiniportHandle, &StatusIndication);
LABEL_25:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = GeneralStatus;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xB1u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)MiniportHandle,
      v15);
  }
}
