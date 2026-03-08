/*
 * XREFs of EtwpTraceRegistryTransaction @ 0x1409E3FF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogTxREvent @ 0x1409E344C (EtwpLogTxREvent.c)
 */

void __fastcall EtwpTraceRegistryTransaction(unsigned __int8 a1, __int64 a2, __int128 *a3, int a4, int a5, __int64 a6)
{
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  _DWORD *v13; // rcx

  v10 = *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    v13 = (_DWORD *)(32LL * (unsigned int)v12 + EtwpHostSiloState + 4284);
    if ( v13 )
    {
      if ( (*v13 & 0x20000) != 0 )
        EtwpLogTxREvent(
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4232),
          a1,
          a3,
          a4,
          a5,
          (__int64 *)(a2 + 8 * (*(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4233) - 1LL)),
          a6);
    }
  }
}
