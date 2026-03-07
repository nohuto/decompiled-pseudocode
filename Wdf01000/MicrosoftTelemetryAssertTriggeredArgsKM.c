void __fastcall MicrosoftTelemetryAssertTriggeredArgsKM(
        const char *BucketArg1,
        unsigned int BucketArg2,
        unsigned int OriginatingBinary)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 1u, "wdf01000.sys", BucketArg2, OriginatingBinary, 0LL);
}
