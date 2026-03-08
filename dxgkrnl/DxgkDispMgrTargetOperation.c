/*
 * XREFs of DxgkDispMgrTargetOperation @ 0x1C02F9D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C0177D00 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F89E0 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1C02F8C7C (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C02F90F0 (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C02F92B8 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C02F96CC (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 */

__int64 __fastcall DxgkDispMgrTargetOperation(ULONG64 a1)
{
  ULONG64 v2; // rcx
  int OwnedSourceFromTarget; // ebx
  __int64 v4; // r9
  DXGDISPLAYMANAGEROBJECT *v5; // r10
  _QWORD *v6; // r8
  int v8; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-48h]
  struct _LUID v10[2]; // [rsp+50h] [rbp-38h]
  HANDLE v11[2]; // [rsp+60h] [rbp-28h]
  HANDLE v12; // [rsp+70h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+10h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v15; // [rsp+A8h] [rbp+20h] BYREF

  v12 = 0LL;
  v2 = a1 + 56;
  if ( v2 < a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *(_OWORD *)a1;
  *(_OWORD *)&v10[0].LowPart = *(_OWORD *)(a1 + 16);
  *(_OWORD *)v11 = *(_OWORD *)(a1 + 32);
  v12 = *(HANDLE *)(a1 + 48);
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
    WdLogSingleEntry1(3LL, Handle[1]);
    goto LABEL_24;
  }
  v5 = *(DXGDISPLAYMANAGEROBJECT **)Object;
  if ( !*(_QWORD *)Object )
  {
    WdLogSingleEntry1(3LL, 936LL);
    goto LABEL_23;
  }
  switch ( LODWORD(Handle[0]) )
  {
    case 1:
      v8 = DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership((__int64)v5, *(_QWORD *)v10, v10[1].LowPart, v4, (int)v11[0]);
      goto LABEL_28;
    case 2:
      v8 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnership(*(DXGDISPLAYMANAGEROBJECT **)Object, v10[0], v10[1].LowPart);
LABEL_28:
      OwnedSourceFromTarget = v8;
      goto LABEL_24;
    case 3:
      v15 = 0LL;
      OwnedSourceFromTarget = ObReferenceObjectByHandleWithTag(
                                v11[0],
                                0x20000u,
                                g_pDxgkDisplayManagerObjectType,
                                1,
                                0x4B677844u,
                                &v15,
                                0LL);
      if ( OwnedSourceFromTarget >= 0 )
      {
        if ( !*(_QWORD *)v15 )
        {
          WdLogSingleEntry1(3LL, 959LL);
          NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&v15);
          goto LABEL_23;
        }
        OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::TransferTargetOwnership(
                                  *(DXGDISPLAYMANAGEROBJECT **)Object,
                                  v10[0],
                                  v10[1].LowPart,
                                  *(struct DXGDISPLAYMANAGEROBJECT **)v15);
      }
      else
      {
        WdLogSingleEntry1(3LL, Handle[1]);
      }
      NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&v15);
      goto LABEL_24;
  }
  if ( LODWORD(Handle[0]) != 4 )
  {
LABEL_23:
    OwnedSourceFromTarget = -1073741811;
    goto LABEL_24;
  }
  v13 = -1;
  OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::GetOwnedSourceFromTarget(v5, v10[0], v10[1].LowPart, &v13);
  if ( OwnedSourceFromTarget >= 0 )
  {
    OwnedSourceFromTarget = DXGDISPLAYMANAGEROBJECT::CreateSourceObject(
                              *(DXGDISPLAYMANAGEROBJECT **)Object,
                              v10[0],
                              v13,
                              (struct _OBJECT_ATTRIBUTES *)v11[0],
                              (ACCESS_MASK)v11[1],
                              &v12);
    if ( OwnedSourceFromTarget >= 0 )
    {
      v6 = (_QWORD *)(a1 + 48);
      if ( a1 + 48 >= MmUserProbeAddress )
        v6 = (_QWORD *)MmUserProbeAddress;
      *v6 = v12;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 972LL);
  }
LABEL_24:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)OwnedSourceFromTarget;
}
