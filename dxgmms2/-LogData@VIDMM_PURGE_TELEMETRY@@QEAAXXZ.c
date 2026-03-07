void __fastcall VIDMM_PURGE_TELEMETRY::LogData(VIDMM_PURGE_TELEMETRY *this)
{
  __int64 v2; // rsi
  char *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]

  DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
    (DXGAUTOPUSHLOCKFASTSHARED *)&v7,
    (VIDMM_PURGE_TELEMETRY *)((char *)this + 3112));
  v2 = 0x2000000LL;
  v3 = (char *)this + 1032;
  v4 = 0x160000000LL;
  v5 = 1207959552LL;
  v6 = 32LL;
  do
  {
    VIDMM_PURGE_TELEMETRY::LogBucket(
      this,
      (const struct VIDMM_PURGE_TELEMETRY::VIDMM_PURGE_TELEMETRY_BUCKET *)(v3 - 1024));
    VIDMM_PURGE_TELEMETRY::LogBucket(this, (const struct VIDMM_PURGE_TELEMETRY::VIDMM_PURGE_TELEMETRY_BUCKET *)v3);
    VIDMM_PURGE_TELEMETRY::LogBucket(
      this,
      (const struct VIDMM_PURGE_TELEMETRY::VIDMM_PURGE_TELEMETRY_BUCKET *)(v3 + 1024));
    v2 += 0x2000000LL;
    v5 += 0x8000000LL;
    v4 += 0x20000000LL;
    v3 += 32;
    --v6;
  }
  while ( v6 );
  VIDMM_PURGE_TELEMETRY::LogBucket(this, (VIDMM_PURGE_TELEMETRY *)((char *)this + 3080));
  if ( v8 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 16));
    ExReleasePushLockSharedEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
}
