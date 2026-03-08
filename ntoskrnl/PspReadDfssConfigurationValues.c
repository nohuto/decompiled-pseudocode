/*
 * XREFs of PspReadDfssConfigurationValues @ 0x1405A12D4
 * Callers:
 *     PspIsDfssEnabled @ 0x140812B34 (PspIsDfssEnabled.c)
 *     PspDfssConfigurationChangeHandler @ 0x1409A95A0 (PspDfssConfigurationChangeHandler.c)
 * Callees:
 *     KeUpdateGroupSchedulingConstants @ 0x1403AA794 (KeUpdateGroupSchedulingConstants.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwNotifyChangeKey @ 0x140414730 (ZwNotifyChangeKey.c)
 *     RtlQueryImageFileKeyOption @ 0x140709A50 (RtlQueryImageFileKeyOption.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void PspReadDfssConfigurationValues()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  int ImageFileKeyOption; // eax
  _DWORD *v3; // rcx
  PIO_APC_ROUTINE v4; // r8
  HANDLE v5; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( PspDfssConfigurationKey )
  {
    KeyHandle = PspDfssConfigurationKey;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x11u, &ObjectAttributes) < 0 )
      return;
  }
  v0 = &PspDfssConfigValues;
  v1 = 4LL;
  do
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
    v3 = *(_DWORD **)v0;
    if ( ImageFileKeyOption >= 0 )
    {
      if ( !*v3 )
        *v3 = 1;
    }
    else
    {
      *v3 = v0[4];
    }
    v0 += 6;
    --v1;
  }
  while ( v1 );
  if ( PspDfssConfigurationNotify )
  {
    KeUpdateGroupSchedulingConstants(0);
  }
  else
  {
    PspDfssConfigurationNotify = (PIO_APC_ROUTINE)ExAllocatePool2(64LL, 48LL, 1936942660LL);
    if ( !PspDfssConfigurationNotify )
    {
      ZwClose(KeyHandle);
      return;
    }
    PspDfssConfigurationKey = KeyHandle;
  }
  v4 = PspDfssConfigurationNotify;
  v5 = PspDfssConfigurationKey;
  *((_QWORD *)PspDfssConfigurationNotify + 2) = PspDfssConfigurationChangeHandler;
  *((_QWORD *)v4 + 3) = 0LL;
  *(_QWORD *)v4 = 0LL;
  if ( ZwNotifyChangeKey(v5, 0LL, v4, (PVOID)1, (PIO_STATUS_BLOCK)v4 + 2, 4u, 0, 0LL, 0, 1u) < 0 )
  {
    ZwClose(PspDfssConfigurationKey);
    PspDfssConfigurationKey = 0LL;
    ExFreePoolWithTag(PspDfssConfigurationNotify, 0x73736644u);
    PspDfssConfigurationNotify = 0LL;
  }
}
