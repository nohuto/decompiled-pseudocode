/*
 * XREFs of C3IdleCheck @ 0x1C000DE80
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00086DC (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00089F8 (WriteGenAddr.c)
 */

__int64 C3IdleCheck()
{
  unsigned int v0; // ebx
  unsigned __int8 GenAddr; // r11
  unsigned __int8 v2; // al

  v0 = 0;
  GenAddr = ReadGenAddr((__int64)&dword_1C001CE74);
  v2 = 0;
  if ( qword_1C001CE84 )
    v2 = ReadGenAddr((__int64)&dword_1C001CE80);
  if ( ((GenAddr | v2) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C001CE74, 16LL);
    if ( qword_1C001CE84 )
      WriteGenAddr(&dword_1C001CE80, 16LL);
    return (unsigned int)-1073741823;
  }
  return v0;
}
