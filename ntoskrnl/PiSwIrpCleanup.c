/*
 * XREFs of PiSwIrpCleanup @ 0x140807E94
 * Callers:
 *     PiSwDispatch @ 0x140785720 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405613D4 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405614A4 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwCloseDescendants @ 0x1408672DC (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x14086740C (PiSwFindSwDevice.c)
 *     PiSwCloseDevice @ 0x140964150 (PiSwCloseDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  IRP *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  char v7; // si
  const wchar_t *v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 SwDevice; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  DestinationString = 0LL;
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_IrpClose_Start,
      a3,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( !*(_DWORD *)(a1 + 180) )
    goto LABEL_15;
  v6 = *(_QWORD *)(a1 + 112);
  v7 = 0;
  while ( 1 )
  {
    v8 = *(const wchar_t **)(v6 + 8);
    if ( wcsnicmp(v8, L"SWD\\", 4uLL) )
      break;
    SwDevice = PiSwFindSwDevice(v8);
    if ( !SwDevice )
      goto LABEL_15;
    if ( !*(_DWORD *)(SwDevice + 180) && (*(_DWORD *)(SwDevice + 4) & 2) == 0 )
      goto LABEL_8;
    v6 = *(_QWORD *)(SwDevice + 112);
  }
  RtlInitUnicodeString(&DestinationString, v8);
  v9 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
  if ( v9 )
    ObfDereferenceObject(v9);
  else
LABEL_15:
    v7 = 1;
LABEL_8:
  v10 = *(_QWORD *)(a1 + 144);
  if ( v10 && _InterlockedExchange64((volatile __int64 *)(v10 + 104), 0LL) )
  {
    v3 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v7 )
  {
    PiSwCloseDescendants(a1 + 72, 0LL);
    PiSwCloseDevice(a1);
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( v3 )
  {
    v3->IoStatus.Information = 0LL;
    v3->IoStatus.Status = -1073741536;
    IofCompleteRequest(v3, 0);
  }
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v11,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_IrpClose_Stop,
      v12,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16),
      v7);
}
