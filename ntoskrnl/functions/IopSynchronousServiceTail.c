__int64 __fastcall IopSynchronousServiceTail(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned __int8 a6,
        unsigned int a7)
{
  __int64 v8; // rdx
  _QWORD *v10; // rdi
  int v12; // eax
  bool v13; // r12
  char v14; // r8
  _DWORD *v15; // rax
  struct _KTHREAD *v16; // rax
  unsigned int v17; // eax
  _DWORD *v18; // r15
  __int64 v19; // rcx
  struct _KTHREAD *v20; // rdx
  int v21; // ecx
  unsigned __int64 v22; // r8
  int v23; // edi
  unsigned int v24; // eax
  int v25; // edi
  _BYTE *v26; // rax
  PDEVICE_OBJECT v27; // rdi
  unsigned int v28; // esi
  __int64 result; // rax
  __int64 FileObjectExtension; // rsi
  _BYTE *v31; // rsi
  int v32; // edi
  KPROCESSOR_MODE v33; // al
  NTSTATUS v34; // eax
  unsigned __int8 CurrentIrql; // di
  unsigned int DeviceType; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // eax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r10
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  __int64 (__fastcall *v46)(PDEVICE_OBJECT, __int64, _QWORD, PVOID, unsigned int *); // rax
  char v47; // al
  struct _LIST_ENTRY *v48; // rdi
  ULONG v49; // eax
  KPRIORITY v50; // eax
  unsigned __int8 v51; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v54; // eax
  bool v55; // zf
  unsigned int v56; // [rsp+30h] [rbp-31h] BYREF
  PVOID Object; // [rsp+38h] [rbp-29h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-21h] BYREF
  __int64 v59; // [rsp+48h] [rbp-19h] BYREF
  __int64 v60; // [rsp+50h] [rbp-11h]
  struct _LIST_ENTRY v61; // [rsp+58h] [rbp-9h] BYREF

  v8 = *(_QWORD *)(a2 + 88);
  v10 = (_QWORD *)a3;
  DeviceObject = a1;
  Object = (PVOID)a3;
  v56 = 0;
  if ( (v8 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 71) |= 0x10u;
    v8 &= ~1uLL;
    *(_QWORD *)(a2 + 88) = v8;
  }
  v60 = *(_QWORD *)(a3 + 176);
  v12 = *(_DWORD *)(a2 + 16);
  v13 = (v12 & 0x200000) != 0;
  if ( (a6 || v8) && (v12 & 0x200000) == 0 )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      *(_BYTE *)(a2 + 71) |= 2u;
    goto LABEL_15;
  }
  if ( (v12 & 0x200000) != 0 )
  {
    v14 = 0;
LABEL_10:
    if ( IopQueueIrpToFileObject(a2, (__int64)v10, v14) )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( *(_QWORD *)(a2 + 96) && !*(_QWORD *)(a2 + 80) && *(_QWORD *)(a3 + 176) )
  {
    v14 = 1;
    goto LABEL_10;
  }
  if ( (v12 & 0x10) != 0
    || *(_QWORD *)(a3 + 176)
    || !*(_QWORD *)(a3 + 208)
    || (FileObjectExtension = IopGetFileObjectExtension(a3, 2, 0LL)) == 0 )
  {
LABEL_15:
    IopQueueThreadIrp(a2);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v42 = *(_QWORD *)(a2 + 72);
    if ( v42 >= *(_QWORD *)FileObjectExtension && v42 + 16 <= *(_QWORD *)(FileObjectExtension + 8) )
    {
      v10 = Object;
      if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
      {
        if ( IopQueueIrpToFileObject(a2, (__int64)Object, 0) )
          break;
      }
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_15;
  }
  *(_QWORD *)(a2 + 72) += *(_QWORD *)(FileObjectExtension + 24) - *(_QWORD *)FileObjectExtension;
LABEL_16:
  v15 = (_DWORD *)v10[26];
  if ( v15 && (*v15 & 4) != 0 && PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process) )
  {
    v56 = -1073739504;
    *(_DWORD *)(a2 + 48) = -1073739504;
    IofCompleteRequest((PIRP)a2, 0);
    v28 = v56;
    v18 = Object;
    v27 = DeviceObject;
  }
  else
  {
    if ( a7 <= 1 )
    {
      DeviceType = a1->DeviceType;
      if ( DeviceType < 0xA || DeviceType >= 0x24 )
      {
        v38 = DeviceType - 7;
        if ( !v38 || (v39 = v38 - 1) == 0 || (v41 = v39 - 1) == 0 || v41 == 27 )
          IoSetDiskIoAttributionFromThread(a2, KeGetCurrentThread());
      }
      CurrentThread = KeGetCurrentThread();
      if ( a7 )
      {
        ++CurrentThread->WriteOperationCount;
        v17 = 12000;
      }
      else
      {
        ++CurrentThread->ReadOperationCount;
        v17 = 11996;
      }
    }
    else
    {
      v16 = KeGetCurrentThread();
      ++v16->OtherOperationCount;
      v17 = 12004;
    }
    __incgsdword(v17);
    v18 = Object;
    if ( (*((_DWORD *)Object + 20) & 0x800000) == 0
      || a7
      || (*(_BYTE *)(*((_QWORD *)Object + 2) + 4LL) & 0x40) != 0
      || (v43 = *((_QWORD *)Object + 3)) == 0
      || (*(_BYTE *)(v43 + 6) & 0x20) != 0
      || (IopSetIrpPriorityHintFromFileObject((__int64)Object, a2), IoGetIoPriorityHint((PIRP)a2) < IoPriorityNormal)
      || (BYTE12(xmmword_140D1EAD0) & 4) != 0 )
    {
      if ( !a6 )
        ObfReferenceObject(Object);
      v19 = v10[26];
      if ( v19 && *(_DWORD *)(v19 + 88) )
      {
        v24 = *(_DWORD *)(a2 + 16) & 0xFFF1FFFF;
        *(_DWORD *)(a2 + 16) = v24;
        v23 = *(_DWORD *)(v19 + 88);
      }
      else
      {
        v20 = KeGetCurrentThread();
        v21 = (*((_DWORD *)&v20[1].SwapListEntry + 2) >> 9) & 7;
        v22 = v20->Process[1].Affinity.StaticBitmap[16];
        if ( v22 && v21 >= *(_DWORD *)(v22 + 1068) )
          v21 = *(_DWORD *)(v22 + 1068);
        if ( v21 < 2 && v20 == KeGetCurrentThread() && LODWORD(v20[1].Timer.TimerListEntry.Flink) )
          v21 = 2;
        v23 = v21 + 1;
        v18 = Object;
        v24 = *(_DWORD *)(a2 + 16) & 0xFFF1FFFF;
      }
      v25 = v24 | (v23 << 17);
      *(_DWORD *)(a2 + 16) = v25;
      if ( IoGetIoPriorityHint((PIRP)a2) < IoPriorityNormal )
      {
        if ( *(_BYTE *)(a2 + 64)
          || (v40 = *(_QWORD *)(a2 + 152)) != 0
          && ((*(_DWORD *)(v40 + 116) & 0x400) != 0 || (*(_DWORD *)(v40 + 1380) & 0x80u) != 0) )
        {
          if ( a7 )
          {
            if ( a7 == 1 )
              ++IoLowPriorityWriteOperationCount;
          }
          else
          {
            ++IoLowPriorityReadOperationCount;
          }
        }
        else
        {
          ++IoKernelIssuedIoBoostedCount;
          *(_DWORD *)(a2 + 16) = v25 & 0xFFF1FFFF | 0x60000;
        }
      }
      if ( *(char *)(a2 + 71) >= 0 && (v26 = *(_BYTE **)(a2 + 200)) != 0LL && (*v26 & 2) != 0 )
      {
        v61 = 0LL;
        v61 = *(struct _LIST_ENTRY *)(*(_QWORD *)(a2 + 200) + 24LL);
        v48 = IoSetActivityIdThread(&v61);
        v28 = IofCallDriver(DeviceObject, (PIRP)a2);
        IoSetActivityIdThread(v48);
        v27 = DeviceObject;
      }
      else
      {
        v27 = DeviceObject;
        v28 = IofCallDriver(DeviceObject, (PIRP)a2);
      }
      if ( !a6 )
        ObDereferenceObjectDeferDelete(v18);
      v56 = v28;
    }
    else
    {
      BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject((PFILE_OBJECT)Object);
      FastIoDispatch = BaseFileSystemDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch->SizeOfFastIoDispatch >= 0xF0
        && (v46 = *(__int64 (__fastcall **)(PDEVICE_OBJECT, __int64, _QWORD, PVOID, unsigned int *))&FastIoDispatch[1].SizeOfFastIoDispatch) != 0LL )
      {
        v47 = v46(BaseFileSystemDeviceObject, a2, a6, Object, &v56);
        v27 = DeviceObject;
        if ( v47 )
        {
          v28 = v56;
        }
        else
        {
          v28 = IopCallDriverReference(DeviceObject, (PIRP)a2, a6, v18, 0);
          v56 = v28;
        }
      }
      else
      {
        v27 = DeviceObject;
        v28 = IopCallDriverReference(DeviceObject, (PIRP)a2, a6, Object, 0);
        v56 = v28;
      }
    }
  }
  if ( a4 && v28 != 259 )
  {
    if ( v13 )
    {
      v49 = v27->DeviceType;
      v50 = v49 == 8 || v49 == 20;
      IopIoRingCompleteIrp((PIRP)a2, (ULONG_PTR)v18, v50);
    }
    else
    {
      v59 = 0LL;
      DeviceObject = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      IopCompleteRequest((char **)(a2 + 120), (__int64)&v59, &DeviceObject, (ULONG_PTR *)&Object, &DeviceObject);
      if ( KiIrqlFlags )
      {
        v51 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v51 <= 0xFu && CurrentIrql <= 0xFu && v51 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v55 = (v54 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v54;
          if ( v55 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v18 = Object;
        }
      }
      __writecr8(CurrentIrql);
    }
    v28 = v56;
  }
  if ( a6 )
  {
    if ( v28 == 259 )
    {
      v31 = v18 + 38;
      v32 = v18[20] & 4;
      while ( (*v31 & 0x7F) != 0 || !v18[39] )
      {
        v33 = v32 ? a5 : 0;
        v34 = KeWaitForSingleObject(v31, Executive, v33, 1u, 0LL);
        if ( v34 != 257 && v34 != 192 )
          break;
        if ( v32 )
          goto LABEL_131;
        if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
          || IopCheckIrpCancelled((__int64)v31, a2) )
        {
          v18 = Object;
LABEL_131:
          IopCancelAlertedRequest(v18 + 38, (PIRP)a2);
          break;
        }
        v18 = Object;
      }
      v56 = v18[14];
    }
    IopReleaseFileObjectLock(v18);
    return v56;
  }
  else
  {
    if ( v13 )
      return 259LL;
    result = v28;
    if ( !v60 )
      return result;
    if ( (v28 & 0xC0000000) == 0x80000000 )
      return 259LL;
    return v28;
  }
}
