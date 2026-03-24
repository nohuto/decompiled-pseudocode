/*
 * XREFs of DxgkDispMgrTargetOperation @ 0x1C02B27C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C00E58E4 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B15D0 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1C02B17F8 (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C02B1C34 (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C02B1E38 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C02B215C (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 */

__int64 __fastcall DxgkDispMgrTargetOperation(ULONG64 a1)
{
  ULONG64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int OwnedSourceFromTarget; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  struct DXGFASTMUTEX *const *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  int v21; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-48h]
  struct _LUID v23[2]; // [rsp+50h] [rbp-38h]
  HANDLE v24[2]; // [rsp+60h] [rbp-28h]
  HANDLE v25; // [rsp+70h] [rbp-18h] BYREF
  unsigned int v26; // [rsp+98h] [rbp+10h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v28; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a1 + 56;
  if ( v2 < a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *(_OWORD *)a1;
  *(_OWORD *)&v23[0].LowPart = *(_OWORD *)(a1 + 16);
  *(_OWORD *)v24 = *(_OWORD *)(a1 + 32);
  v25 = *(HANDLE *)(a1 + 48);
  Object = 0LL;
  OwnedSourceFromTarget = ObReferenceObjectByHandleWithTag(
                            Handle[1],
                            0x20000u,
                            g_pDxgkDisplayManagerObjectType,
                            1,
                            0x4B677844u,
                            &Object,
                            0LL);
  if ( OwnedSourceFromTarget < 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(v4, v3, v6);
    *(HANDLE *)(v8 + 24) = Handle[1];
LABEL_14:
    WdLogEvent5_WdWarning(v8);
    goto LABEL_25;
  }
  v9 = *(struct DXGFASTMUTEX *const **)Object;
  if ( !*(_QWORD *)Object )
  {
    v10 = WdLogNewEntry5_WdWarning(v4, v3, v6);
    *(_QWORD *)(v10 + 24) = 933LL;
    WdLogEvent5_WdWarning(v10);
    goto LABEL_24;
  }
  switch ( LODWORD(Handle[0]) )
  {
    case 1:
      v21 = DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership(
              (__int64)v9,
              *(void (__fastcall ***)(_QWORD, __int64))v23,
              v23[1].LowPart,
              v7,
              (int)v24[0]);
      goto LABEL_29;
    case 2:
      v21 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(
              *(struct DXGFASTMUTEX *const **)Object,
              v23[0],
              v23[1].LowPart);
LABEL_29:
      OwnedSourceFromTarget = v21;
      goto LABEL_25;
    case 3:
      v28 = 0LL;
      OwnedSourceFromTarget = ObReferenceObjectByHandleWithTag(
                                v24[0],
                                0x20000u,
                                g_pDxgkDisplayManagerObjectType,
                                1,
                                0x4B677844u,
                                &v28,
                                0LL);
      if ( OwnedSourceFromTarget >= 0 )
      {
        if ( !*(_QWORD *)v28 )
        {
          v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
          *(_QWORD *)(v19 + 24) = 956LL;
          WdLogEvent5_WdWarning(v19);
          NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&v28);
          goto LABEL_24;
        }
        OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
                                  *(struct DXGFASTMUTEX *const **)Object,
                                  v23[0],
                                  v23[1].LowPart,
                                  *(struct DXGFASTMUTEX *const **)v28);
      }
      else
      {
        v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(HANDLE *)(v18 + 24) = Handle[1];
        WdLogEvent5_WdWarning(v18);
      }
      NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&v28);
      goto LABEL_25;
  }
  if ( LODWORD(Handle[0]) != 4 )
  {
LABEL_24:
    OwnedSourceFromTarget = -1073741811;
    goto LABEL_25;
  }
  v26 = -1;
  OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::GetOwnedSourceFromTarget(v9, v23[0], v23[1].LowPart, &v26);
  if ( OwnedSourceFromTarget < 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v8 + 24) = 969LL;
    goto LABEL_14;
  }
  OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::CreateSourceObject(
                            *(DXGDISPLAYMANAGEROBJECT **)Object,
                            v23[0],
                            v26,
                            (struct _OBJECT_ATTRIBUTES *)v24[0],
                            (ACCESS_MASK)v24[1],
                            &v25);
  if ( OwnedSourceFromTarget >= 0 )
  {
    v14 = (_QWORD *)(a1 + 48);
    if ( a1 + 48 >= MmUserProbeAddress )
      v14 = (_QWORD *)MmUserProbeAddress;
    *v14 = v25;
  }
LABEL_25:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)OwnedSourceFromTarget;
}
