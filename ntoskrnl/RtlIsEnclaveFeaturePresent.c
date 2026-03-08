/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x1409BC368
 * Callers:
 *     NtCreateEnclave @ 0x140A3BE40 (NtCreateEnclave.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 */

unsigned __int8 __fastcall RtlIsEnclaveFeaturePresent(unsigned int a1)
{
  __int64 v1; // rdx
  int v3; // eax
  unsigned __int8 v4; // bl

  v1 = a1 & 0x1F;
  v3 = *(_DWORD *)(4 * ((unsigned __int64)a1 >> 8) - 0x87FFFFFFC94LL);
  v4 = _bittest(&v3, v1);
  if ( PsIsCurrentThreadInServerSilo(0xFFFFF7800000036CuLL, v1) && a1 == 8 )
    return 0;
  return v4;
}
