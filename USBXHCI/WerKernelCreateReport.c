/*
 * XREFs of WerKernelCreateReport @ 0x1C0053E44
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C007AF58 (TelemetryData_SubmitReport.c)
 * Callees:
 *     CheckSpaceAvailable @ 0x1C0053C40 (CheckSpaceAvailable.c)
 *     WerpCreateRegistryKey @ 0x1C00549D4 (WerpCreateRegistryKey.c)
 */

__int64 __fastcall WerKernelCreateReport(__int64 a1, __int64 a2, HANDLE *a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  int RegistryKey; // eax
  int v10; // ebx
  __int64 v11; // r9
  const CHAR *v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+20h] [rbp-40h]
  _BYTE v15[8]; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v19[2]; // [rsp+50h] [rbp-10h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  v18 = 0LL;
  v19[0] = 0LL;
  v15[0] = 0;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a1 + 2 * v7) );
  if ( v7 >= 0x10 )
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Key key length exceeded\n", 573LL);
    return 3221225485LL;
  }
  do
    ++v6;
  while ( *(_WORD *)(a2 + 2 * v6) );
  if ( v6 >= 0x28 )
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Key id length exceeded\n", 581LL);
    return 3221225485LL;
  }
  RegistryKey = WerpCreateRegistryKey(
                  0LL,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\\\LiveKernelReports",
                  131076LL,
                  0LL,
                  &Handle,
                  0LL);
  v10 = RegistryKey;
  if ( RegistryKey < 0 )
  {
    v11 = 599LL;
    v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwCreateKey failed with scode 0x%x for the root\n";
LABEL_14:
    LODWORD(v14) = RegistryKey;
    DbgPrintEx(0x96u, 0, v12, v11, v14);
    goto LABEL_28;
  }
  RegistryKey = WerpCreateRegistryKey(Handle, a1, 131101LL, 0LL, &KeyHandle, 0LL);
  v10 = RegistryKey;
  if ( RegistryKey < 0 )
  {
    v11 = 616LL;
LABEL_18:
    v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwCreateKey failed with scode 0x%x for the report type\n";
    goto LABEL_14;
  }
  if ( (unsigned int)CheckSpaceAvailable(KeyHandle) )
  {
    RegistryKey = WerpCreateRegistryKey(KeyHandle, a2, 131076LL, 0LL, &v18, v15);
    v10 = RegistryKey;
    if ( RegistryKey < 0 )
    {
      v11 = 644LL;
      v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwCreateKey failed with scode 0x%x for the report id\n";
      goto LABEL_14;
    }
    if ( v15[0] )
    {
      LOBYTE(v13) = 1;
      RegistryKey = WerpCreateRegistryKey(v18, L"Busy", 131076LL, v13, v19, 0LL);
      v10 = RegistryKey;
      if ( RegistryKey < 0 )
      {
        v11 = 672LL;
        goto LABEL_18;
      }
      ZwFlushKey(KeyHandle);
      v10 = 0;
    }
    else
    {
      v10 = -1073741771;
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Report id %S already exists\n", 654LL, a2);
    }
  }
  else
  {
    v10 = -1073741671;
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR CheckSpaceAvailable returned no more space available\n", 626);
  }
LABEL_28:
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v18 )
  {
    if ( v10 >= 0 )
    {
      *a3 = v18;
    }
    else
    {
      ZwClose(v18);
      v18 = 0LL;
    }
  }
  if ( v19[0] )
    ZwClose(v19[0]);
  return (unsigned int)v10;
}
