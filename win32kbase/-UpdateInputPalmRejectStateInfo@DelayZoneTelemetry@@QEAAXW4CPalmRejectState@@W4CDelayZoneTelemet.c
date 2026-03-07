void __fastcall DelayZoneTelemetry::UpdateInputPalmRejectStateInfo(
        DelayZoneTelemetry *a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int i; // r10d
  __int64 v8; // r8
  __int64 v9; // rcx

  for ( i = 0; i < a5; ++i )
  {
    v8 = *((_DWORD *)a1 + 2) % 0xD5u;
    v9 = 6 * v8;
    *((_DWORD *)a1 + 2 * v9 + 524) = 0;
    *((_DWORD *)a1 + 2 * v9 + 522) = a2;
    *((_DWORD *)a1 + 2 * v9 + 523) = a3;
    ++*((_DWORD *)a1 + 2);
    if ( *((_DWORD *)a1 + 12 * v8 + 520) == 3 )
      break;
  }
  DelayZoneTelemetry::UploadTelemetryData(a1, 0);
}
