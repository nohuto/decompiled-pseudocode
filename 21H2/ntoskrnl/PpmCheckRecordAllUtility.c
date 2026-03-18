/*
 * XREFs of PpmCheckRecordAllUtility @ 0x14021BC70
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfRecordUtility @ 0x14021BD70 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x14021C050 (PpmParkRecordNodeStatistics.c)
 */

char PpmCheckRecordAllUtility()
{
  unsigned __int64 v0; // rbx
  unsigned __int16 v1; // di
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 i; // rdi
  unsigned int j; // ebx
  __int64 v7; // rcx

  v0 = qword_140C0B8E8[0];
  v1 = 0;
  while ( v0 )
  {
LABEL_3:
    _BitScanForward64(&v2, v0);
    v0 &= ~(1LL << v2);
    v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v1 + (unsigned __int8)v2];
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
      v4 = 0LL;
    else
      v4 = KiProcessorBlock[v3];
    PpmPerfRecordUtility(v4 + 33968);
  }
  while ( ++v1 < (unsigned int)(unsigned __int16)PpmCheckRegistered )
  {
    v0 = qword_140C0B8E8[v1];
    if ( v0 )
      goto LABEL_3;
  }
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
    {
      v7 = *(_QWORD *)(i + 312) + 136LL * j;
      if ( *(_DWORD *)(v7 + 16) == 1 )
        PpmPerfRecordUtility(*(_QWORD *)v7);
    }
  }
  PpmParkRecordNodeStatistics();
  return 1;
}
