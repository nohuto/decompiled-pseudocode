/*
 * XREFs of SmpAsyncMemoryConfiguration @ 0x14000A1C0
 * Callers:
 *     <none>
 * Callees:
 *     SmpPagefileInitialize @ 0x140008088 (SmpPagefileInitialize.c)
 *     SmpNtSerializeBoot @ 0x1400095C4 (SmpNtSerializeBoot.c)
 *     SmpCheckMemoryCoolingCompatibility @ 0x14000A0F0 (SmpCheckMemoryCoolingCompatibility.c)
 *     SmpCreatePagingFiles @ 0x14000ABCC (SmpCreatePagingFiles.c)
 *     SmpIsRamdiskBoot @ 0x140014C7C (SmpIsRamdiskBoot.c)
 */

char SmpAsyncMemoryConfiguration()
{
  char v0; // bl
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  _DWORD SystemInformation[6]; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+58h] [rbp+20h] BYREF

  SystemInformation[0] = 0;
  v0 = 1;
  v1 = SmpPagefileInitialize();
  if ( v1 >= 0 )
  {
    SmpNtSerializeBoot();
    LOBYTE(v1) = SmpHostSmss;
    if ( !SmpHostSmss )
      goto LABEL_6;
    if ( !SmpUseDedicatedDumpFile )
    {
      NtSetSystemInformation(SystemCrashDumpStateInformation, SystemInformation, 4u);
      LOBYTE(v1) = SmpHostSmss;
    }
    if ( !(_BYTE)v1 )
    {
LABEL_6:
      v0 = 0;
      SmpPagefileOnOsVolume = 0;
    }
    if ( SmpMiniNTBoot == 1 )
    {
      v5 = 0;
      LOBYTE(v1) = SmpIsRamdiskBoot(&v5);
      if ( v5 == 1 )
        v0 = 0;
      else
        SmpPagefileOnOsVolume = 1;
    }
    if ( !SmpMiniNTBoot )
      LOBYTE(v1) = SmpCheckMemoryCoolingCompatibility();
    if ( v0 == 1 )
    {
      SmpCreatePagingFiles(v2);
      LOBYTE(v1) = NtInitializeRegistry(2u);
    }
    if ( SmpCrashDumpKey )
      LOBYTE(v1) = NtClose(SmpCrashDumpKey);
  }
  return v1;
}
