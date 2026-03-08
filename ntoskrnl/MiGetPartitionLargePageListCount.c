/*
 * XREFs of MiGetPartitionLargePageListCount @ 0x140370F84
 * Callers:
 *     MmCreatePartition @ 0x1403A6A3C (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x140B3A0B8 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 MiGetPartitionLargePageListCount()
{
  unsigned int v0; // ecx
  int *v1; // rdx
  __int64 v2; // r8
  int v3; // eax

  v0 = dword_140C66F60;
  if ( !dword_140C66F60 )
  {
    v1 = dword_140C65800;
    v2 = 3LL;
    do
    {
      v3 = *v1++;
      v0 += v3 << 6;
      --v2;
    }
    while ( v2 );
    v0 *= (unsigned __int16)KeNumberNodes;
    dword_140C66F60 = v0;
  }
  return v0;
}
