__int64 __fastcall PnpProcessQueryRemoveAndEject(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  PVOID *v3; // r12
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r15
  unsigned int v7; // eax
  __int64 v8; // r9
  __int64 TargetDeviceNode; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 VetoBuffer; // rax
  PVOID v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rcx
  PVOID v22; // rbx
  int v23; // ebx
  __int64 v24; // r8
  int v25; // r9d
  PVOID v27; // rbx
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rcx
  unsigned int *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rbx
  _QWORD *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 PendingEjectRelations; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rbx
  int LightestSystemStateForEject; // eax
  PVOID P; // [rsp+40h] [rbp-39h] BYREF
  PVOID v55; // [rsp+48h] [rbp-31h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp-29h] BYREF
  PVOID v57; // [rsp+58h] [rbp-21h] BYREF
  PVOID Object; // [rsp+60h] [rbp-19h]
  __int64 v59; // [rsp+68h] [rbp-11h] BYREF
  PVOID v60; // [rsp+70h] [rbp-9h] BYREF
  __int64 v61; // [rsp+78h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  char v64; // [rsp+E0h] [rbp+67h]
  char v65; // [rsp+E8h] [rbp+6Fh] BYREF
  int v66; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v67; // [rsp+F8h] [rbp+7Fh] BYREF
  int v68; // [rsp+FCh] [rbp+83h]

  v1 = *a1;
  v2 = 0LL;
  v55 = 0LL;
  v3 = 0LL;
  SourceString = 0LL;
  v67 = 0;
  v4 = *(_QWORD **)(v1 + 152);
  v5 = 7;
  v61 = 0LL;
  v57 = 0LL;
  P = 0LL;
  v60 = 0LL;
  v59 = 0LL;
  v65 = 0;
  LOBYTE(v66) = 0;
  Object = v4;
  DestinationString = 0LL;
  if ( v4 )
    v6 = *(_QWORD *)(v4[39] + 40LL);
  else
    v6 = 0LL;
  PpDevNodeLockTree(1);
  if ( (unsigned int)(*(_DWORD *)(v6 + 300) - 789) <= 1 )
  {
    v18 = -1073741738;
    goto LABEL_50;
  }
  v7 = PiDetermineDeleteType(v1);
  v5 = v7;
  if ( v7 != 4 )
  {
    LOBYTE(v8) = 1;
    PnpRecordBlackboxPnpEventInformation(v1, v7, 0LL, v8);
  }
  TargetDeviceNode = PiGetTargetDeviceNode(v1);
  v13 = TargetDeviceNode;
  if ( (v5 & 0xFFFFFFFB) != 0 )
    goto LABEL_7;
  if ( (*(_DWORD *)(TargetDeviceNode + 396) & 0x1000) != 0 )
  {
    v31 = (unsigned int *)(TargetDeviceNode + 40);
    v32 = 1LL;
    goto LABEL_74;
  }
  if ( !v5 )
  {
    if ( *(_DWORD *)(v1 + 16) != 22 || !*(_DWORD *)(TargetDeviceNode + 600) )
    {
      if ( !(unsigned int)PipAreDriversLoaded(v6, v10, TargetDeviceNode, v12) )
      {
        v18 = PiProcessQueryRemoveNoFdo(v1);
        goto LABEL_50;
      }
      goto LABEL_7;
    }
    v31 = (unsigned int *)(TargetDeviceNode + 40);
    v32 = 10LL;
LABEL_74:
    PnpFinalizeVetoedRemove(v11, v32, v31);
LABEL_78:
    v18 = -2147483608;
    goto LABEL_50;
  }
  if ( v5 == 4 )
  {
    if ( (*(_DWORD *)(v6 + 396) & 0x80000) != 0 || (unsigned int)(*(_DWORD *)(v6 + 568) - 3) <= 1 )
    {
LABEL_49:
      v18 = 0;
      goto LABEL_50;
    }
    if ( (*(_DWORD *)(v6 + 560) & 0x10) == 0 )
    {
      v18 = -2147483608;
      v33 = v6 + 40;
      v34 = 8LL;
      goto LABEL_66;
    }
  }
LABEL_7:
  VetoBuffer = PiEventAllocateVetoBuffer(v5, v10, v13);
  v3 = (PVOID *)VetoBuffer;
  if ( !VetoBuffer )
  {
LABEL_70:
    v31 = 0LL;
    v32 = 0LL;
LABEL_73:
    v11 = v1;
    goto LABEL_74;
  }
  if ( (int)PnpBuildRemovalRelationList(v4, v5, VetoBuffer, &v57) < 0 )
    goto LABEL_72;
  v15 = v57;
  v18 = PiEventBuildPdoList((_DWORD)v57, v5, v1, (unsigned int)&v67, (__int64)&v55, (__int64)&v65, (__int64)&v66);
  if ( v18 >= 0 )
  {
    v19 = PnpResizeTargetDeviceBlock(a1, v5);
    v1 = *a1;
    v18 = v19;
    if ( v19 >= 0 )
    {
      LOBYTE(v20) = PiEventAreDeviceRelationsExcluded(v5);
      v18 = PnpCompileDeviceInstancePaths(v21, v15, v20, &P);
      if ( v5 == 3 )
        PnpBuildUnsafeRemovalDeviceList(v17, v15, &v60);
    }
  }
  if ( v18 < 0 )
  {
    IopFreeRelationList(v15);
    if ( v18 == -2147483608 )
      goto LABEL_50;
    v33 = 0LL;
    v11 = v1;
    v34 = 0LL;
LABEL_66:
    PnpFinalizeVetoedRemove(v11, v34, v33);
    goto LABEL_50;
  }
  if ( v65 )
  {
    LOBYTE(v17) = v66;
    PpProfileBeginHardwareProfileTransition(v17);
    v36 = (int)(v67 - 1);
    if ( (int)(v67 - 1) >= 0 )
    {
      v37 = v55;
      do
      {
        v38 = v37[v36];
        if ( v38 )
          v39 = *(_QWORD *)(*(_QWORD *)(v38 + 312) + 40LL);
        else
          v39 = 0LL;
        if ( *(_DWORD *)(v39 + 568) == 1 )
          PpProfileIncludeInHardwareProfileTransition(v39, 3LL);
        --v36;
      }
      while ( v36 >= 0 );
      v15 = v57;
    }
    if ( v5 == 4 )
    {
      if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, v3) >= 0 && *(_DWORD *)v3 )
      {
        PpProfileCancelHardwareProfileTransition();
        IopFreeRelationList(v15);
        v41 = *(_DWORD **)(v1 + 48);
        if ( v41 )
          *v41 = *(_DWORD *)v3;
        if ( *(_QWORD *)(v1 + 56) )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          RtlCopyUnicodeString(*(PUNICODE_STRING *)(v1 + 56), &DestinationString);
        }
        ExFreePoolWithTag((PVOID)SourceString, 0);
        SourceString = 0LL;
        goto LABEL_78;
      }
      LOBYTE(v40) = v66;
      if ( (int)PpProfileQueryHardwareProfileChange(v40, 0LL, v3, v3 + 1) >= 0 )
      {
LABEL_99:
        LOBYTE(v16) = 1;
        PnpTrackQueryRemoveDevices(v15, v16);
        v18 = PiProcessQueryAndCancelRemoval(v5, v1, (_DWORD)v15, v67, (__int64)v55, (__int64)v3, (__int64)&P);
        if ( v18 < 0 )
        {
          if ( v65 )
            PpProfileCancelHardwareProfileTransition();
          PnpTrackQueryRemoveDevices(v15, 0LL);
          IopFreeRelationList(v15);
LABEL_50:
          PpDevNodeUnlockTree(1);
          if ( v18 == -1073741738 )
          {
LABEL_51:
            if ( !v3 )
              goto LABEL_32;
            goto LABEL_30;
          }
          goto LABEL_27;
        }
        goto LABEL_18;
      }
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(v15);
LABEL_72:
      v32 = *(unsigned int *)v3;
      v31 = (unsigned int *)(v3 + 1);
      goto LABEL_73;
    }
  }
  if ( (v5 & 0xFFFFFFFB) == 0 )
    goto LABEL_99;
  if ( ((v5 - 3) & 0xFFFFFFFD) != 0 )
  {
LABEL_37:
    PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_DEVICE_REMOVE_PENDING, 0LL, 0LL, 0LL);
    goto LABEL_22;
  }
  PiLogSurpriseRemoveEvent(v1, v5, v15);
  PnpDeleteLockedDeviceNodes((int)Object, (int)v15, 3, 0, 0, 0, 0LL, 0LL);
LABEL_18:
  if ( v5 != 3 )
    goto LABEL_37;
  v22 = v60;
  if ( v60 )
  {
    PnpNotifyUserModeDeviceRemoval(v1, v60, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL, 0LL);
    ExFreePoolWithTag(v22, 0x4B706E50u);
  }
  PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
LABEL_22:
  v23 = v67;
  PiSendTargetDeviceRemoveCompleteNotification((_QWORD **)v55, v67);
  if ( (*(_DWORD *)(v6 + 704) & 0x8000) != 0 && (*(_DWORD *)(v6 + 396) & 0x10) != 0 )
    PnpFinalizeDeviceRemovalForReset(v6, v15);
  if ( ((v5 - 2) & 0xFFFFFFFC) != 0
    || v5 == 4
    || (LOBYTE(v24) = 1,
        PnpInvalidateRelationsInList(v15, v5, v24, 0LL),
        IopRemoveDeviceRelationsFromList(v15),
        ((v5 - 3) & 0xFFFFFFFD) != 0) )
  {
    v27 = Object;
    if ( *(_DWORD *)(v6 + 568) )
    {
      IopQueryDockRemovalInterface(Object, &v59);
      v2 = v59;
      if ( v59 )
        (*(void (__fastcall **)(_QWORD, __int64))(v59 + 32))(*(_QWORD *)(v59 + 8), 3LL);
    }
    if ( v5 )
    {
      if ( v5 != 4 )
      {
        LOBYTE(v25) = 0;
LABEL_42:
        PnpDeleteLockedDeviceNodes((int)v27, (int)v15, 2, v25, *(_DWORD *)(v1 + 16), *(_DWORD *)(v1 + 20), 0LL, 0LL);
        v28 = *(_DWORD *)(v6 + 560) >> 3;
        LOBYTE(v28) = (*(_DWORD *)(v6 + 560) & 8) != 0;
        v29 = HIWORD(*(_DWORD *)(v6 + 560)) & 1;
        v66 = v28;
        v64 = v29;
        if ( v5 != 4 )
        {
          PiRestartRemovalRelations(v1, (int)v15, (__int64)v27);
          PnpUnlinkDeviceRemovalRelations(v30, v15);
          if ( !v5 )
            PnpTrackQueryRemoveDevices(v15, 0LL);
          IopFreeRelationList(v15);
          if ( v5 == 2 )
          {
            PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
          }
          else if ( !v5
                 && (*(_DWORD *)(v1 + 144) & 2) == 0
                 && (*(_DWORD *)(v6 + 396) & 0x2000) != 0
                 && *(_DWORD *)(v6 + 404) == 18 )
          {
            PipClearDevNodeProblem(v6);
            PnpRestartDeviceNode(v6);
            PnpRequestDeviceAction(*(PVOID *)(v6 + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
          }
          goto LABEL_47;
        }
        if ( !(_BYTE)v28 && !v29 )
        {
          PnpUnlinkDeviceRemovalRelations(v28, v15);
          PnpTrackQueryRemoveDevices(v15, 0LL);
          IopFreeRelationList(v15);
LABEL_47:
          if ( v2 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
            (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
          }
          goto LABEL_49;
        }
        v68 = 0;
        v67 = 1;
        while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v15, (unsigned int)&v67, (unsigned int)&v61, 0, 0LL) )
        {
          if ( v61 )
          {
            v43 = *(_QWORD *)(v61 + 312);
            v44 = *(_QWORD *)(v43 + 40);
            if ( v44 )
            {
              PipSetDevNodeFlags(*(_QWORD *)(v43 + 40), 0x80000);
              v45 = *(_QWORD *)(v44 + 696);
              v59 = v45;
              if ( v45 )
              {
                IopFreeRelationList(*(PVOID *)(v45 + 64));
                *(_QWORD *)(v59 + 64) = 0LL;
                *(_QWORD *)(v44 + 696) = 0LL;
              }
            }
          }
        }
        PnpUnlinkDeviceRemovalRelations(v42, v15);
        LOBYTE(v46) = v65;
        PendingEjectRelations = PiEventAllocatePendingEjectRelations(v1, v15, v46, v2);
        v52 = (_QWORD *)PendingEjectRelations;
        if ( PendingEjectRelations )
        {
          LOBYTE(v50) = v64;
          LOBYTE(v48) = v66;
          LOBYTE(v49) = v65;
          *(_QWORD *)(v6 + 696) = PendingEjectRelations;
          LightestSystemStateForEject = PoGetLightestSystemStateForEject(v49, v48, v50, PendingEjectRelations + 92);
          if ( LightestSystemStateForEject >= 0 )
          {
            PpDevNodeUnlockTree(1);
            IopEjectDevice(Object);
            v18 = 259;
            goto LABEL_30;
          }
          v35 = 0LL;
          if ( LightestSystemStateForEject == -1073741090 )
            v35 = 9LL;
          PnpFinalizeVetoedRemove(v1, v35, 0LL);
          v52[6] = 0LL;
          *((_BYTE *)v52 + 89) = 0;
          v52[1] = v52;
          *v52 = v52;
          PnpProcessCompletedEject(v52);
          goto LABEL_78;
        }
        if ( v2 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
          (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
        }
        if ( v65 )
          PpProfileCancelHardwareProfileTransition();
        LOBYTE(v51) = 1;
        PnpInvalidateRelationsInList(v15, 4LL, 0LL, v51);
        PnpTrackQueryRemoveDevices(v15, 0LL);
        IopFreeRelationList(v15);
        goto LABEL_70;
      }
    }
    else
    {
      PipSetDevNodeFlags(v6, 0x2000000);
    }
    LOBYTE(v25) = 1;
    goto LABEL_42;
  }
  PiEventRemovalPostSurpriseRemove(v1, v5, &v57);
  PpDevNodeUnlockTree(1);
  PnpIsChainDereferenced(v55, v23, 0, 1u, 0LL);
  v18 = 0;
LABEL_27:
  if ( v5 == 4 )
    goto LABEL_51;
  if ( !v3 )
  {
    PnpRecordBlackboxPnpEventInformation(v1, v5, 0LL, 0LL);
    goto LABEL_32;
  }
  PnpRecordBlackboxPnpEventInformation(v1, v5, v3, 0LL);
LABEL_30:
  if ( !PnpShutdownEvent.Header.SignalState )
  {
    ExFreePoolWithTag(v3[2], 0x4D706E50u);
    v3[2] = 0LL;
    ExFreePoolWithTag(v3, 0x4D706E50u);
  }
LABEL_32:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v55 )
    ExFreePoolWithTag(v55, 0);
  return (unsigned int)v18;
}
