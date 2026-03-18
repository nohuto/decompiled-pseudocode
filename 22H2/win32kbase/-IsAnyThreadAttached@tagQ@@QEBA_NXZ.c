/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C003869C
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0038040 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C012DDE0 (zzzDestroyQueue.c)
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
