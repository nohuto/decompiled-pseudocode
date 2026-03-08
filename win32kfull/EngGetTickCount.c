/*
 * XREFs of EngGetTickCount @ 0x1C028BBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 EngGetTickCount()
{
  return (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
}
