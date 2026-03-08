/*
 * XREFs of DpiFdoGetInterruptIrql @ 0x1C01F0F98
 * Callers:
 *     DpiFdoConnectInterrupt @ 0x1C01F0E70 (DpiFdoConnectInterrupt.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1C03A38A0 (DpiLdaGetInterruptIrqlForChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetInterruptIrql(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // al
  unsigned int v3; // r9d
  unsigned int v5; // r8d
  __int64 v6; // r10
  unsigned __int8 *v7; // rcx

  v2 = 0;
  v3 = -1073741275;
  if ( a1 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 )
    {
      v6 = v5;
      v7 = (unsigned __int8 *)(a1 + 24);
      do
      {
        if ( *(v7 - 4) == 2 && v2 < *v7 )
        {
          v2 = *v7;
          v3 = 0;
        }
        v7 += 20;
        --v6;
      }
      while ( v6 );
    }
    *a2 = v2;
  }
  return v3;
}
