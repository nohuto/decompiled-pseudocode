/*
 * XREFs of FsRtlAddDiskIOCounterInstance @ 0x14093BBDC
 * Callers:
 *     FsRtlDiskIOCounterSetCallback @ 0x14093BCB0 (FsRtlDiskIOCounterSetCallback.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x14086B690 (PcwAddInstance.c)
 */

NTSTATUS __fastcall FsRtlAddDiskIOCounterInstance(PPCW_BUFFER Buffer)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // edi
  __int64 Prcb; // rax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-18h]

  DestinationString = 0LL;
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v8 = 0LL;
  v9 = 0LL;
  if ( ActiveProcessorCount )
  {
    do
    {
      Prcb = KeGetPrcb(v2++);
      v8 += *(_QWORD *)(Prcb + 35200);
      v9 += *(_QWORD *)(Prcb + 35208);
    }
    while ( v2 < ActiveProcessorCount );
  }
  RtlInitUnicodeString(&DestinationString, L"default");
  Data.Size = 16;
  Data.Data = &v8;
  return PcwAddInstance(Buffer, &DestinationString, 0, 1u, &Data);
}
