/*
 * XREFs of ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0307228
 * Callers:
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0307B34 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AAA0 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C003F868 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003F8DC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1C0307BE4 (-ProcessNextFile@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 */

void __fastcall CDriverStoreCopy::EnumDirectory(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a2)
{
  void **v2; // rsi
  bool v3; // zf
  void *Pool2; // rax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  v2 = (void **)((char *)this + 16);
  v3 = *((_QWORD *)this + 2) == -1LL;
  IoStatusBlock = 0LL;
  if ( !v3 )
    goto LABEL_14;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = *(_QWORD *)this == 0LL;
  DestinationString = 0LL;
  if ( v3 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, *((unsigned int *)this + 2), 1265072196LL);
    *(_QWORD *)this = Pool2;
    if ( !Pool2 )
    {
      *((_DWORD *)a2 + 4) = -1073741801;
      return;
    }
    memset(Pool2, 0, *((unsigned int *)this + 2));
  }
  v7 = RtlStringCbCopyW((unsigned __int16 *)this + 272, 0x208uLL, (size_t *)((char *)a2 + 60));
  *((_DWORD *)a2 + 4) = v7;
  if ( v7 < 0 )
    goto LABEL_11;
  v8 = RtlStringCbCopyW((unsigned __int16 *)this + 532, 0x208uLL, (size_t *)this + 3);
  *((_DWORD *)a2 + 4) = v8;
  if ( v8 < 0 )
    goto LABEL_11;
  v10 = RtlStringCbCatW((unsigned __int16 *)this + 532, v9, (size_t *)((char *)a2 + 60));
  *((_DWORD *)a2 + 4) = v10;
  if ( v10 < 0 )
    goto LABEL_11;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)this + 532);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenFile(v2, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u);
  *((_DWORD *)a2 + 4) = v11;
  if ( v11 >= 0 )
  {
LABEL_14:
    CDriverStoreCopy::ProcessNextFile(this, a2);
    return;
  }
  WdLogSingleEntry1(3LL, v11);
LABEL_11:
  if ( *((int *)a2 + 4) < 0 && *v2 != (void *)-1LL )
  {
    ZwClose(*v2);
    *v2 = (void *)-1LL;
  }
}
