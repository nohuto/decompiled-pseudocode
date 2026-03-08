/*
 * XREFs of HalpRestoreNvsArea @ 0x14051A1F0
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void *HalpRestoreNvsArea()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  unsigned int *v2; // rdi
  void *result; // rax

  v0 = 0;
  if ( !HalpDisableNvsSaveRestore && HalpNvsRegionCount )
  {
    v1 = (unsigned int)HalpNvsRegionCount;
    v2 = (unsigned int *)(HalpNvsRegionData + 8);
    do
    {
      result = memmove(*((void **)v2 + 1), (const void *)(HalpNvsPreservedData + v0), *v2);
      v0 += *v2;
      v2 += 6;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
