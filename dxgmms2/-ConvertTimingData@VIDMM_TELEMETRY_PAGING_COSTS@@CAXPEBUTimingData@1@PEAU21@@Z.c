void __fastcall VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
        const struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *a1,
        struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *a2)
{
  unsigned __int64 *v2; // r8
  __int64 v3; // r10
  struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v2 = (unsigned __int64 *)((char *)a1 + 88);
  v3 = a2 - a1;
  v4 = a2;
  v5 = a1 - a2;
  v6 = 22LL;
  do
  {
    v7 = *v2;
    if ( *v2 )
      v7 = 10000000 * v7 / VIDMM_GLOBAL::_QpcFrequency.QuadPart;
    *(unsigned __int64 *)((char *)v2 + v3) = v7;
    v8 = v2[22];
    if ( v8 )
      v8 = 10000000 * v8 / VIDMM_GLOBAL::_QpcFrequency.QuadPart;
    *(unsigned __int64 *)((char *)v2++ + v3 + 176) = v8;
    *(_DWORD *)v4 = *(_DWORD *)((char *)v4 + v5);
    v4 = (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)((char *)v4 + 4);
    --v6;
  }
  while ( v6 );
}
