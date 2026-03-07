char __fastcall AddDecodeGuidToSessions(__int64 a1)
{
  unsigned __int8 v1; // si
  char v3; // di
  unsigned int v5; // edx
  unsigned int *v7; // rbx

  v1 = *(_BYTE *)(a1 + 100);
  v3 = 1;
  do
  {
    if ( !_BitScanForward(&v5, v1) )
      break;
    v1 &= v1 - 1;
    v7 = EtwpAcquireLoggerContextByLoggerId(
           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 392LL),
           *(unsigned __int16 *)(32LL * v5 + *(_QWORD *)(a1 + 32) + 134),
           0);
    v3 = EtwpTrackDecodeGuidForSession(v7, a1);
    EtwpReleaseLoggerContext(v7, 0);
  }
  while ( v3 );
  return v3;
}
