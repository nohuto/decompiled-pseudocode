/*
 * XREFs of sub_180068620 @ 0x180068620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void sub_180068620()
{
  void (*v0)(void); // rbx

  if ( qword_18019E7A0 )
  {
    EnterCriticalSection(&stru_18019F7F0);
    v0 = 0LL;
    if ( qword_18019F7E8 )
      v0 = (void (*)(void))qword_18019E7A0;
    LeaveCriticalSection(&stru_18019F7F0);
    if ( v0 )
      v0();
  }
}
