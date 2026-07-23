/*
 * XREFs of PspReadDfssConfigurationValues @ 0x140580FF8
 * Callers:
 *     PspIsDfssEnabled @ 0x1407A8EA0 (PspIsDfssEnabled.c)
 *     PspDfssConfigurationChangeHandler @ 0x140905B70 (PspDfssConfigurationChangeHandler.c)
 * Callees:
 *     KeUpdateGroupSchedulingConstants @ 0x1403CC3FC (KeUpdateGroupSchedulingConstants.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwNotifyChangeKey @ 0x1403FC8C0 (ZwNotifyChangeKey.c)
 *     RtlQueryImageFileKeyOption @ 0x14060D7A0 (RtlQueryImageFileKeyOption.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void PspReadDfssConfigurationValues()
{
  NTSTATUS v0; // ecx
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  int ImageFileKeyOption; // eax
  _DWORD *v4; // rcx
  PIO_APC_ROUTINE v5; // r8
  HANDLE v6; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( PspDfssConfigurationKey )
  {
    v0 = 0;
    KeyHandle = PspDfssConfigurationKey;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v0 = ZwOpenKey(&KeyHandle, 0x11u, &ObjectAttributes);
  }
  if ( v0 >= 0 )
  {
    v1 = &PspDfssConfigValues;
    v2 = 4LL;
    do
    {
      ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
      v4 = *(_DWORD **)v1;
      if ( ImageFileKeyOption >= 0 )
      {
        if ( !*v4 )
          *v4 = 1;
      }
      else
      {
        *v4 = v1[4];
      }
      v1 += 6;
      --v2;
    }
    while ( v2 );
    if ( PspDfssConfigurationNotify )
    {
      KeUpdateGroupSchedulingConstants(0);
    }
    else
    {
      PspDfssConfigurationNotify = (PIO_APC_ROUTINE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x73736644u);
      if ( !PspDfssConfigurationNotify )
      {
        ZwClose(KeyHandle);
        return;
      }
      PspDfssConfigurationKey = KeyHandle;
    }
    v5 = PspDfssConfigurationNotify;
    v6 = PspDfssConfigurationKey;
    *((_QWORD *)PspDfssConfigurationNotify + 2) = PspDfssConfigurationChangeHandler;
    *((_QWORD *)v5 + 3) = 0LL;
    *(_QWORD *)v5 = 0LL;
    if ( ZwNotifyChangeKey(v6, 0LL, v5, (PVOID)1, (PIO_STATUS_BLOCK)v5 + 2, 4u, 0, 0LL, 0, 1u) < 0 )
    {
      ZwClose(PspDfssConfigurationKey);
      PspDfssConfigurationKey = 0LL;
      ExFreePoolWithTag(PspDfssConfigurationNotify, 0x73736644u);
      PspDfssConfigurationNotify = 0LL;
    }
  }
}
