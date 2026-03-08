/*
 * XREFs of IoGetDriverDirectory @ 0x140952490
 * Callers:
 *     DifIoGetDriverDirectoryWrapper @ 0x1405DD6A0 (DifIoGetDriverDirectoryWrapper.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiGetServiceNameInfo @ 0x140870010 (PiGetServiceNameInfo.c)
 *     PiGetDriverImageDirectory @ 0x140952F88 (PiGetDriverImageDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x1409530D4 (PiGetDriverMutableStateDirectory.c)
 */

__int64 __fastcall IoGetDriverDirectory(__int64 a1, int a2, int a3, _QWORD *a4)
{
  void *v6; // rdi
  __int64 v9; // rax
  int v10; // ebx
  int ServiceNameInfo; // ebx
  __int64 v12; // r8
  const wchar_t *v13; // rdx
  int DriverMutableStateDirectory; // eax
  void *v16; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  char v18; // [rsp+70h] [rbp+30h] BYREF

  v16 = 0LL;
  v18 = 0;
  DestinationString = 0LL;
  v6 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a1 )
    goto LABEL_22;
  v9 = *(_QWORD *)(a1 + 48);
  if ( !v9 || !*(_QWORD *)(v9 + 32) || !*(_WORD *)(v9 + 24) || a3 || !a4 )
    goto LABEL_22;
  if ( a2 )
  {
    v10 = a2 - 1;
    if ( !v10 )
    {
      ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v18);
      if ( ServiceNameInfo < 0 )
        goto LABEL_23;
      v13 = L"Data";
      if ( v18 )
        v13 = L"UniqueData";
      v12 = 0LL;
      goto LABEL_13;
    }
    if ( v10 == 1 )
    {
      ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v18);
      if ( ServiceNameInfo < 0 )
        goto LABEL_23;
      v13 = L"SharedData";
      LOBYTE(v12) = 1;
      if ( v18 )
        v13 = L"UniqueSharedData";
LABEL_13:
      DriverMutableStateDirectory = PiGetDriverMutableStateDirectory(&DestinationString, v13, v12, &v16);
      goto LABEL_19;
    }
LABEL_22:
    ServiceNameInfo = -1073741811;
    goto LABEL_23;
  }
  DriverMutableStateDirectory = PiGetDriverImageDirectory(a1, &v16);
LABEL_19:
  ServiceNameInfo = DriverMutableStateDirectory;
  if ( DriverMutableStateDirectory < 0 )
    v6 = v16;
  else
    *a4 = v16;
LABEL_23:
  RtlFreeUnicodeString(&DestinationString);
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)ServiceNameInfo;
}
