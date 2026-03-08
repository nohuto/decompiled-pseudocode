/*
 * XREFs of MiInitializeTbFlushing @ 0x140B5CBA8
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     KeGetTbSize @ 0x140B5CBF8 (KeGetTbSize.c)
 *     MiInitializeTbFlush @ 0x140B5CD2C (MiInitializeTbFlush.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140C65810 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140C65810 == TbSize && TbSize != 2048 )
  {
    qword_140C65810 = -1LL;
    return MiInitializeTbFlush(2048LL);
  }
  return result;
}
