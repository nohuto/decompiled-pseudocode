/*
 * XREFs of PpmPerfUpdateQosDisableReasons @ 0x1402246C0
 * Callers:
 *     PpmCheckResumePpmEngineFromSx @ 0x140399068 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140399140 (PpmCheckPausePpmEngineForSx.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14069DDE8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmPerfTelemetryWorker @ 0x14080BBA0 (PpmPerfTelemetryWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfUpdateQosDisableReasons(int *a1)
{
  char v1; // dl
  __int64 v3; // r11
  __int64 v4; // r8
  unsigned int v5; // r9d
  _QWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  if ( !byte_140D07398 )
  {
    v4 = MEMORY[0xFFFFF78000000008] - PpmPerfQosDisableAccounting;
    qword_140D072E8 += MEMORY[0xFFFFF78000000008] - PpmPerfQosDisableAccounting;
    if ( PpmPerfQosEnabled )
      qword_140D072F8 += v4;
    v5 = 0;
    v6 = &unk_140D07308;
    do
    {
      v7 = PpmPerfQosDisableReasons;
      if ( _bittest(&v7, v5) )
        *v6 += v4;
      ++v5;
      ++v6;
    }
    while ( v5 < 9 );
  }
  if ( a1 )
  {
    if ( !PpmPerfQosDisableAccounting || (v8 = *a1, PpmPerfQosDisableReasons != *a1) )
    {
      v8 = *a1;
      v1 = 1;
    }
    PpmPerfQosDisableReasons = v8;
  }
  PpmPerfQosDisableAccounting = v3;
  return v1;
}
