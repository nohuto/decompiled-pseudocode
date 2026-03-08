/*
 * XREFs of PspIoRateEntryActivate @ 0x140753428
 * Callers:
 *     PspSetJobIoRateControl @ 0x140752E58 (PspSetJobIoRateControl.c)
 *     PspSetJobIoRateControlForVolume @ 0x1409AFB14 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStartDiskIoAttributionForContext @ 0x1402C4114 (IoStartDiskIoAttributionForContext.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402C4224 (IoStopDiskIoAttributionForContext.c)
 *     IoStartIoRateControl @ 0x1402C42F8 (IoStartIoRateControl.c)
 *     IoStopIoRateControl @ 0x1402C454C (IoStopIoRateControl.c)
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateFile @ 0x140412DB0 (ZwCreateFile.c)
 *     IoDiskIoAttributionAllocate @ 0x1407532F4 (IoDiskIoAttributionAllocate.c)
 *     PspIoRateEntryDeactivate @ 0x1407552BC (PspIoRateEntryDeactivate.c)
 */

__int64 __fastcall PspIoRateEntryActivate(__int64 a1, unsigned __int64 a2, __int64 a3, _BYTE *a4)
{
  int v4; // eax
  struct _EX_RUNDOWN_REF *v5; // rbx
  const WCHAR *v10; // rdx
  __int64 v11; // r8
  int started; // edi
  __int64 v13; // rcx
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  __int64 v20; // [rsp+100h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = 0;
  v16 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a4 )
    *a4 = 0;
  v10 = *(const WCHAR **)(a3 + 24);
  if ( v10 )
  {
    RtlInitUnicodeString(&DestinationString, v10);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    started = ZwCreateFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( started < 0 )
      goto LABEL_11;
    v15 = IoDiskIoAttributionAllocate(a2, *(_QWORD *)(a2 + 1568));
    v5 = v15;
    if ( !v15 )
    {
      started = -1073741670;
      goto LABEL_11;
    }
    IoStartDiskIoAttributionForContext((unsigned __int64)v15);
    v4 = (int)Handle;
    v11 = (__int64)v5;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 1568);
  }
  started = IoStartIoRateControl(a3, v4, v11, (__int64)&v20, (__int64)&v16);
  if ( started < 0 )
  {
    if ( v5 )
    {
      IoStopDiskIoAttributionForContext(v5);
      IoDiskIoAttributionDereference((__int64)v5);
    }
    v13 = v20;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      PspIoRateEntryDeactivate(a1);
      *a4 = 1;
    }
    v13 = 0LL;
    *(_QWORD *)(a1 + 40) = v20;
    *(_QWORD *)(a1 + 24) = v16;
    *(_QWORD *)(a1 + 48) = v5;
    started = 0;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
  }
  if ( v13 )
    IoStopIoRateControl(v13);
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)started;
}
