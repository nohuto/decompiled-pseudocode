/*
 * XREFs of MiSetPteTimeStamp @ 0x14020E59C
 * Callers:
 *     MiInitializeTbFlushStamps @ 0x14020E538 (MiInitializeTbFlushStamps.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiSetPteTimeStamp(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = 0;
  if ( a1 )
  {
    if ( qword_140C657C0 )
    {
      if ( (a1 & 0x10) != 0 )
        LODWORD(a1) = a1 & 0xFFFFFFEF;
      else
        LODWORD(a1) = ~(_DWORD)qword_140C657C0 & a1;
    }
    v2 = a1;
  }
  return MiSwizzleInvalidPte((a2 << 32) | v2);
}
