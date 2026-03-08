/*
 * XREFs of ?BuildVendorDefinedCL@@YAHPEAEKPEAK@Z @ 0x1C01C6808
 * Callers:
 *     ?SetCollectionLabel@@YAHPEAEKPEAK@Z @ 0x1C01C696C (-SetCollectionLabel@@YAHPEAEKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildVendorDefinedCL(unsigned __int8 *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = 0;
  v5 = *a3;
  if ( (int)v5 + 4 < a2 )
  {
    a1[v5] = 9;
    v4 = 1;
    v6 = (unsigned int)(v5 + 1);
    a1[v6] = 127;
    *a3 = v6 + 1;
  }
  return v4;
}
