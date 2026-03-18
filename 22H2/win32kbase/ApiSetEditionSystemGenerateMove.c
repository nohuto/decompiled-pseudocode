/*
 * XREFs of ApiSetEditionSystemGenerateMove @ 0x1C0207A40
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C012DDE0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionSystemGenerateMove(unsigned int a1))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296CB0;
  if ( qword_1C0296CB0 )
  {
    result = (__int64 (*)(void))qword_1C0296CB0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296CB8;
      if ( qword_1C0296CB8 )
        return (__int64 (*)(void))qword_1C0296CB8(a1);
    }
  }
  return result;
}
