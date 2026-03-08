/*
 * XREFs of EtwKernelMemoryRundown @ 0x1409E2228
 * Callers:
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 */

char EtwKernelMemoryRundown()
{
  __int64 v0; // rax
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned int v5; // ecx
  _OWORD v7[2]; // [rsp+38h] [rbp-30h] BYREF

  LOBYTE(v0) = EtwpHostSiloState;
  memset(v7, 0, sizeof(v7));
  DWORD1(v7[0]) = 8;
  v1 = *(_DWORD *)(EtwpHostSiloState + 4248);
  while ( _BitScanForward(&v5, v1) )
  {
    v1 &= v1 - 1;
    v2 = v5;
    v0 = 32LL * v5;
    v3 = v0 + EtwpHostSiloState + 4284;
    if ( v3 )
    {
      LODWORD(v0) = *(_DWORD *)(v3 + 20);
      if ( (v0 & 1) != 0 )
        LOBYTE(v0) = EtwpKernelTraceRundown(
                       (unsigned int *)v7,
                       EtwpHostSiloState,
                       *(unsigned __int8 *)(EtwpHostSiloState + 2 * v2 + 4232),
                       0,
                       0LL,
                       0);
    }
  }
  return v0;
}
