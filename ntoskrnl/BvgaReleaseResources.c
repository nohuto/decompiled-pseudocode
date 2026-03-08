/*
 * XREFs of BvgaReleaseResources @ 0x1403A4BD0
 * Callers:
 *     <none>
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x1403A4C40 (InbvIsBootDriverInstalled.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void BvgaReleaseResources()
{
  unsigned __int64 v0; // rbx
  _DWORD *v1; // rsi
  PVOID *v2; // rdi

  v0 = 1LL;
  v1 = &ResourceSize;
  v2 = (PVOID *)&ResourceList;
  do
  {
    if ( *v2 && (!(unsigned __int8)InbvIsBootDriverInstalled() || v0 != 3 && v0 != 5) )
    {
      ExFreePoolWithTag(*v2, 0);
      *v2 = 0LL;
      *v1 = 0;
    }
    ++v0;
    ++v2;
    ++v1;
  }
  while ( v0 < 7 );
}
