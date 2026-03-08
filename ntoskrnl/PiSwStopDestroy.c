/*
 * XREFs of PiSwStopDestroy @ 0x140867198
 * Callers:
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x140561860 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x140561988 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PiSwFindChildren @ 0x140688518 (PiSwFindChildren.c)
 *     PnpConcatPWSTR @ 0x14069EE54 (PnpConcatPWSTR.c)
 *     PiSwFindPdoAssociation @ 0x140847170 (PiSwFindPdoAssociation.c)
 *     PiSwCloseDevice @ 0x140964150 (PiSwCloseDevice.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD **Children; // r14
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  const wchar_t *v16; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *Str2; // [rsp+98h] [rbp+20h] BYREF

  Str2 = 0LL;
  DestinationString = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren();
  if ( Children )
  {
    if ( (byte_140C0E10C & 8) != 0 )
      McTemplateK0zzz_EtwWriteTransfer(
        v7,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelClose_Start,
        v8,
        a2,
        L"DRIVERENUM",
        0LL);
    v6 = 1;
    v10 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&Str2, 2uLL);
    if ( v10 >= 0 )
    {
      v14 = *Children;
      while ( v14 != Children )
      {
        v15 = (__int64)(v14 - 12);
        v16 = (const wchar_t *)*(v14 - 11);
        v14 = (_QWORD *)*v14;
        if ( !wcsicmp(v16, Str2) && (*(_DWORD *)(v15 + 4) & 1) == 0 && PiSwFindPdoAssociation(v15, a3, 1) )
          PiSwCloseDevice(v15);
      }
    }
    if ( Str2 )
      ExFreePoolWithTag(Str2, 0x57706E50u);
  }
  else
  {
    v10 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( v6 && (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      v11,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelClose_Stop,
      v12,
      a2,
      L"DRIVERENUM",
      0LL,
      v10);
  return (unsigned int)v10;
}
