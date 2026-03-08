/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C00706D8
 * Callers:
 *     UserDeleteW32Thread @ 0x1C00702A0 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C01553C0 (zzzDestroyQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall tagQ::IsAnyThreadAttached(tagQ *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 60) || *((_QWORD *)this + 61) )
    return 1;
  return result;
}
