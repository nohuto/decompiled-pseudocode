/*
 * XREFs of CmpMachineHiveListInitialize @ 0x1408187E8
 * Callers:
 *     CmInitSystem2 @ 0x140B54728 (CmInitSystem2.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140733370 (CmpQueryHiveRedirectionFileList.c)
 *     CmpBuildMachineHiveMountPoint @ 0x1408189C8 (CmpBuildMachineHiveMountPoint.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char CmpMachineHiveListInitialize()
{
  unsigned int v0; // edi
  UNICODE_STRING *v1; // rbx
  __int64 Pool2; // rax
  wchar_t *v3; // rsi
  char result; // al
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-A8h] BYREF
  char v6; // [rsp+40h] [rbp-98h] BYREF

  v0 = 0;
  v1 = &Destination;
  do
  {
    KeInitializeEvent((PRKEVENT)&v1[-7].Buffer, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)&v1[-5], SynchronizationEvent, 0);
    *(_QWORD *)&ValueName.Length = 0x800000LL;
    ValueName.Buffer = (wchar_t *)&v6;
    CmpBuildMachineHiveMountPoint(v0, &ValueName);
    Pool2 = ExAllocatePool2(256LL, 128LL, 842419523LL);
    v3 = (wchar_t *)Pool2;
    if ( !Pool2 )
      KeBugCheckEx(0x74u, 2uLL, 5uLL, v0, 0LL);
    *(_QWORD *)&v1->Length = 0LL;
    v1->MaximumLength = 128;
    v1->Buffer = (wchar_t *)Pool2;
    result = CmpQueryHiveRedirectionFileList(&ValueName, v1);
    if ( !result || v1->Length == 2 )
    {
      *(_QWORD *)&v1->Length = 0LL;
      v1->MaximumLength = 128;
      v1->Buffer = v3;
      RtlAppendUnicodeToString(v1, L"\\SystemRoot\\System32\\Config\\");
      result = RtlAppendUnicodeToString(v1, v1[-11].Buffer);
    }
    ++v0;
    v1 = (UNICODE_STRING *)((char *)v1 + 184);
  }
  while ( v0 < 7 );
  return result;
}
