/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x140806A2C
 * Callers:
 *     PiSwStartCreate @ 0x140806E88 (PiSwStartCreate.c)
 *     PiSwIrpStartCreate @ 0x1408085B8 (PiSwIrpStartCreate.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140204F00 (PsGetCurrentThreadProcessId.c)
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402451A0 (RtlInsertElementGenericTableAvl.c)
 *     RtlStringCbLengthW @ 0x140246920 (RtlStringCbLengthW.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     IoInvalidateDeviceRelations @ 0x1402F4FC0 (IoInvalidateDeviceRelations.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405613D4 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405614A4 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zzqq_EtwWriteTransfer @ 0x140561674 (McTemplateK0zzqq_EtwWriteTransfer.c)
 *     McTemplateK0zztt_EtwWriteTransfer @ 0x140561768 (McTemplateK0zztt_EtwWriteTransfer.c)
 *     McTemplateK0zzzdzzq_EtwWriteTransfer @ 0x140561AB8 (McTemplateK0zzzdzzq_EtwWriteTransfer.c)
 *     PnpFreeDevPropertyArray @ 0x1406CC480 (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwPropertySet @ 0x140785B60 (PiSwPropertySet.c)
 *     PiSwDeviceCreate @ 0x140806D94 (PiSwDeviceCreate.c)
 *     PiSwInstanceInfoInit @ 0x140806E00 (PiSwInstanceInfoInit.c)
 *     PiSwPnPInfoInit @ 0x140806FB0 (PiSwPnPInfoInit.c)
 *     PnpCopyDevPropertyArray @ 0x140807540 (PnpCopyDevPropertyArray.c)
 *     PiSwBusRelationAdd @ 0x1408076A8 (PiSwBusRelationAdd.c)
 *     PiSwValidateCreateData @ 0x14080780C (PiSwValidateCreateData.c)
 *     PiSwFreeInterfaceList @ 0x140807ACC (PiSwFreeInterfaceList.c)
 *     PiSwIrpCleanup @ 0x140807E94 (PiSwIrpCleanup.c)
 *     PiSwDeviceDereference @ 0x140807FA4 (PiSwDeviceDereference.c)
 *     PiSwFindPdoAssociation @ 0x140847170 (PiSwFindPdoAssociation.c)
 *     PiSwBusRelationRemove @ 0x140964098 (PiSwBusRelationRemove.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140964328 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwPnPInfoFree @ 0x1409646D4 (PiSwPnPInfoFree.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140964A90 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x140964BA0 (PiSwQueuedCreateInfoFree.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  struct _DEVICE_OBJECT *v3; // r14
  struct _DEVICE_OBJECT *v4; // r12
  char v5; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  int Data; // ebx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  PVOID *inserted; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  void *v16; // r11
  const wchar_t **v17; // rcx
  BOOLEAN v18; // bl
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 Pool2; // rax
  char *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  _DWORD *v28; // rcx
  char *v29; // rdx
  void *v30; // rcx
  struct _DEVICE_OBJECT *v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rbx
  void *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  char *v38; // rcx
  char *v39; // rdx
  __int64 v40; // rax
  void *v41; // rcx
  int CurrentThreadProcessId; // eax
  char *Buffer; // [rsp+50h] [rbp-30h] BYREF
  __int64 v44; // [rsp+58h] [rbp-28h] BYREF
  size_t pcbLength; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  BOOLEAN NewElement; // [rsp+C8h] [rbp+48h] BYREF
  int v48; // [rsp+D0h] [rbp+50h]
  PVOID P; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  Buffer = 0LL;
  P = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  pcbLength = 0LL;
  DestinationString = 0LL;
  Data = PiSwValidateCreateData();
  if ( Data < 0 )
    goto LABEL_29;
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzzdzzq_EtwWriteTransfer(
      v9,
      v8,
      v11,
      *(const wchar_t **)a1,
      *(const wchar_t **)(a1 + 16),
      *(const wchar_t **)(a1 + 8),
      *(_DWORD *)(a1 + 64),
      *(const wchar_t **)(a1 + 72),
      *(const wchar_t **)(a1 + 80),
      *(_DWORD *)(a1 + 104));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 184);
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL) )
    {
      Data = -1073741637;
      goto LABEL_27;
    }
  }
  Data = PiSwDeviceCreate(&Buffer);
  if ( Data >= 0 )
  {
    Data = PiSwInstanceInfoInit(Buffer + 8, a1);
    if ( Data >= 0 )
    {
      inserted = (PVOID *)RtlInsertElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer, 8u, &NewElement);
      LOBYTE(v16) = 0;
      if ( !inserted )
        goto LABEL_99;
      v17 = (const wchar_t **)*inserted;
      v18 = NewElement;
      P = *inserted;
      if ( (byte_140C0E10C & 8) != 0 )
      {
        McTemplateK0zzd_EtwWriteTransfer(
          (__int64)v17,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Add,
          v15,
          v17[1],
          v17[2],
          NewElement == 0);
        v17 = (const wchar_t **)P;
      }
      if ( v18 )
      {
        Buffer = 0LL;
        _InterlockedIncrement((volatile signed __int32 *)v17);
        v19 = PiSwPnPInfoInit((char *)P + 24, a1);
        LOBYTE(v16) = 0;
        Data = v19;
        if ( v19 < 0 )
          goto LABEL_100;
        *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
        if ( !*(_QWORD *)(a1 + 96) )
          goto LABEL_13;
        Pool2 = ExAllocatePool2(256LL, *(unsigned int *)(a1 + 88), 1466986064LL);
        LOBYTE(v16) = 0;
        *((_QWORD *)P + 19) = Pool2;
        v14 = (_QWORD *)*((_QWORD *)P + 19);
        if ( v14 )
        {
          memmove(v14, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
LABEL_13:
          v20 = PnpCopyDevPropertyArray(*(unsigned int *)(a1 + 104), (__int64)P + 168);
          LOBYTE(v16) = 0;
          Data = v20;
          if ( v20 < 0 )
            goto LABEL_100;
          v21 = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8));
          LOBYTE(v16) = 0;
          Data = v21;
          if ( v21 < 0 )
            goto LABEL_100;
          *((_DWORD *)P + 41) = PsGetCurrentThreadProcessId();
LABEL_16:
          v3 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
LABEL_17:
          v5 = 1;
LABEL_18:
          v16 = 0LL;
          goto LABEL_19;
        }
LABEL_99:
        Data = -1073741670;
        goto LABEL_100;
      }
      _InterlockedIncrement((volatile signed __int32 *)v17);
      v24 = (char *)P;
      if ( (*((_DWORD *)P + 1) & 1) != 0 )
      {
        Data = -1073741771;
        goto LABEL_27;
      }
      if ( (byte_140C0E10C & 8) != 0 )
      {
        McTemplateK0zztt_EtwWriteTransfer(
          (*((_DWORD *)P + 1) >> 1) & 1,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_EnumerationStatus,
          (__int64)P,
          *((const wchar_t **)P + 1),
          *((const wchar_t **)P + 2),
          (*((_DWORD *)P + 1) & 2) != 0,
          *((_QWORD *)P + 15) != 0LL);
        v24 = (char *)P;
      }
      if ( (*((_DWORD *)v24 + 1) & 2) == 0 )
      {
        v25 = *((_QWORD *)v24 + 15);
        if ( v25 )
        {
          v26 = *(unsigned int *)(*(_QWORD *)(v25 + 64) + 8LL);
          if ( (v26 & 2) == 0 )
          {
            if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(v24, a1) )
            {
              v48 = 0;
              v44 = 0LL;
              if ( (byte_140C0E10C & 8) != 0 )
                McTemplateK0zz_EtwWriteTransfer(
                  v26,
                  (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_PropertyUpdate,
                  v27,
                  *((const wchar_t **)P + 1),
                  *((const wchar_t **)P + 2));
              Data = PnpCopyDevPropertyArray(*(unsigned int *)(a1 + 104), (__int64)&v44);
              if ( Data < 0 )
                goto LABEL_27;
              v28 = P;
              v29 = (char *)*((_QWORD *)P + 21);
              if ( v29 )
              {
                PnpFreeDevPropertyArray(*((_DWORD *)P + 44), v29, 0x57706E50u);
                v28 = P;
              }
              v28[44] = v48;
              v14 = P;
              *((_QWORD *)P + 21) = v44;
              goto LABEL_18;
            }
            v24 = (char *)P;
          }
          if ( (byte_140C0E10C & 8) != 0 )
          {
            McTemplateK0zz_EtwWriteTransfer(
              v26,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_QueueCreate,
              (__int64)v24,
              *((const wchar_t **)v24 + 1),
              *((const wchar_t **)v24 + 2));
            v24 = (char *)P;
          }
          v30 = (void *)*((_QWORD *)v24 + 11);
          if ( v30 )
          {
            PiSwQueuedCreateInfoFree(v30);
            *((_QWORD *)P + 11) = 0LL;
            v24 = (char *)P;
          }
          Data = PiSwQueuedCreateInfoCreate(v24 + 88, a1);
          if ( Data < 0 )
            goto LABEL_27;
          *((_DWORD *)P + 1) |= 2u;
          goto LABEL_16;
        }
      }
      v31 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)v24 + 14), 0x746C6644u);
      v33 = P;
      v3 = v31;
      if ( v31 )
      {
        LOBYTE(v32) = 1;
        if ( PiSwFindPdoAssociation(P, v31, v32) )
        {
          ObfDereferenceObject(v34);
          v3 = 0LL;
          if ( (byte_140C0E10C & 8) != 0 )
            McTemplateK0zz_EtwWriteTransfer(
              v35,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_QueueCreate,
              v36,
              *((const wchar_t **)P + 1),
              *((const wchar_t **)P + 2));
          v37 = PiSwQueuedCreateInfoCreate((char *)P + 88, a1);
          v16 = 0LL;
          Data = v37;
          if ( v37 < 0 )
            goto LABEL_27;
          v5 = 1;
LABEL_19:
          if ( !a2 )
            goto LABEL_20;
          if ( v5 )
          {
            _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)PiSwIrpCancelStartCreate);
            if ( !*(_BYTE *)(a2 + 68) )
            {
              *((_QWORD *)P + 18) = a2;
              *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
              goto LABEL_20;
            }
            Data = -1073741536;
          }
          else
          {
            Data = RtlStringCbCopyW(
                     *(NTSTRSAFE_PWSTR *)(a2 + 24),
                     *(unsigned int *)(v2 + 8),
                     *((NTSTRSAFE_PCWSTR *)P + 10));
            if ( Data >= 0 )
            {
              Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v2 + 8), &pcbLength);
              if ( Data >= 0 )
              {
LABEL_20:
                *((_DWORD *)P + 1) |= 1u;
                if ( a2 )
                {
                  v14 = *(_QWORD **)(v2 + 48);
                  v14[4] = P;
                  P = v16;
                }
                if ( v3 )
                {
                  IoInvalidateDeviceRelations(v3, SingleBusRelations);
                  LOBYTE(v16) = 0;
                }
                if ( v4 )
                {
                  IoInvalidateDeviceRelations(v4, SingleBusRelations);
                  LOBYTE(v16) = 0;
                }
                if ( Data >= 0 )
                  goto LABEL_27;
              }
            }
          }
LABEL_100:
          if ( NewElement != (_BYTE)v16 )
          {
            if ( (byte_140C0E10C & 8) != 0 )
              McTemplateK0zz_EtwWriteTransfer(
                (__int64)v14,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
                v15,
                *((const wchar_t **)P + 1),
                *((const wchar_t **)P + 2));
            RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &P);
            PiSwDeviceDereference(P);
            if ( *((_QWORD *)P + 14) )
              PiSwBusRelationRemove(P);
          }
          goto LABEL_27;
        }
      }
      if ( wcsicmp(*(const wchar_t **)(v33[14] + 8LL), *(const wchar_t **)(a1 + 8)) )
      {
        RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
        v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      }
      *((_DWORD *)P + 1) &= ~4u;
      PiSwBusRelationRemove(P);
      PiSwPnPInfoFree((char *)P + 24);
      v38 = (char *)P;
      if ( *((_QWORD *)P + 19) )
      {
        ExFreePoolWithTag(*((PVOID *)P + 19), 0x57706E50u);
        *((_QWORD *)P + 19) = 0LL;
        *((_DWORD *)P + 40) = 0;
        v38 = (char *)P;
      }
      v39 = (char *)*((_QWORD *)v38 + 21);
      if ( v39 )
      {
        PnpFreeDevPropertyArray(*((_DWORD *)v38 + 44), v39, 0x57706E50u);
        *((_DWORD *)P + 44) = 0;
        *((_QWORD *)P + 21) = 0LL;
        v38 = (char *)P;
      }
      PiSwFreeInterfaceList(v38 + 184);
      Data = PiSwPnPInfoInit((char *)P + 24, a1);
      if ( Data < 0 )
        goto LABEL_27;
      *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
      if ( *(_QWORD *)(a1 + 96) )
      {
        v40 = ExAllocatePool2(256LL, *(unsigned int *)(a1 + 88), 1466986064LL);
        *((_QWORD *)P + 19) = v40;
        v41 = (void *)*((_QWORD *)P + 19);
        if ( !v41 )
        {
          Data = -1073741670;
          goto LABEL_27;
        }
        memmove(v41, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
      }
      Data = PnpCopyDevPropertyArray(*(unsigned int *)(a1 + 104), (__int64)P + 168);
      if ( Data >= 0 )
      {
        Data = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8));
        if ( Data >= 0 )
        {
          CurrentThreadProcessId = PsGetCurrentThreadProcessId();
          v14 = P;
          *((_DWORD *)P + 41) = CurrentThreadProcessId;
          *((_DWORD *)P + 1) &= ~2u;
          goto LABEL_17;
        }
      }
    }
  }
LABEL_27:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( Data >= 0 && !v5 )
  {
    v11 = *(_QWORD *)(a1 + 112);
    if ( v11 )
    {
      Data = PiSwPropertySet(*(const WCHAR **)(a2 + 24), 1u, v11, *(_DWORD *)(a1 + 104));
      if ( Data == -1073741772 )
        Data = 0;
    }
  }
LABEL_29:
  if ( a2 )
  {
    if ( Data < 0 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    else
    {
      if ( v5 )
      {
        Data = 259;
        goto LABEL_34;
      }
      *(_QWORD *)(a2 + 56) = pcbLength + 2;
    }
    *(_DWORD *)(a2 + 48) = Data;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( Data >= 0 )
  {
    if ( (byte_140C0E10C & 8) != 0 )
      McTemplateK0zzqq_EtwWriteTransfer(
        v9,
        v8,
        v11,
        *((const wchar_t **)P + 1),
        *((const wchar_t **)P + 2),
        *((_DWORD *)P + 45),
        1);
    *((_DWORD *)P + 45) = 1;
    PiSwIrpCleanup(P);
  }
LABEL_34:
  if ( P )
    PiSwDeviceDereference(P);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
