void __fastcall VIDMM_GLOBAL::LogTeardownTelemetry(struct DXGADAPTER **this)
{
  VIDMM_PURGE_TELEMETRY::LogData((VIDMM_PURGE_TELEMETRY *)(this + 5156));
  if ( *this )
    VIDMM_TELEMETRY_PAGING_COSTS::LogData((struct DXGADAPTER *)((char *)*this + 416), this[3]);
}
