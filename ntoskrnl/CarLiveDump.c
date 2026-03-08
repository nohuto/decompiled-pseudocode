/*
 * XREFs of CarLiveDump @ 0x1405D3670
 * Callers:
 *     CarDoLiveDump @ 0x1405D35B0 (CarDoLiveDump.c)
 * Callees:
 *     CarEtwWriteLiveDumpEvent @ 0x1405D0A70 (CarEtwWriteLiveDumpEvent.c)
 *     CarDeleteTelemetryData @ 0x1405D16C4 (CarDeleteTelemetryData.c)
 *     DifiDbgPrint @ 0x1405D3224 (DifiDbgPrint.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CarLiveDump(PVOID P)
{
  int v2; // eax
  int v3; // edx
  int v4; // r8d

  v2 = DbgkWerCaptureLiveKernelDump(
         (unsigned int)L"VerifierExt",
         452,
         qword_140C34AE8,
         qword_140C34AF0,
         qword_140C34AF8,
         qword_140C34B00,
         CarLiveDumpData,
         (__int64)CarLiveDumpCallBack,
         0);
  if ( v2 >= 0 )
  {
    if ( CarLiveDumpData )
      CarEtwWriteLiveDumpEvent((int *)CarLiveDumpData, v3, v4);
    CarPreviousDumpTime = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    DifiDbgPrint("Livedump failed with Status code: 0x%X \n", v2);
  }
  if ( qword_140C34B08 )
  {
    ExFreePoolWithTag(qword_140C34B08, 0x4E726143u);
    qword_140C34B08 = 0LL;
  }
  CarDeleteTelemetryData((void **)&CarLiveDumpData);
  if ( P )
    ExFreePoolWithTag(P, 0x4E726143u);
  _InterlockedExchange(&CarLkdInProgress, 0);
}
