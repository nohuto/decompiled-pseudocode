/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x18003D300
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x18003A790 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlWinModule__()
{
  if ( ATL::_AtlWinModule == 72 )
  {
    if ( qword_18004F5F8 )
    {
      free(qword_18004F5F8);
      qword_18004F5F8 = 0LL;
    }
    dword_18004F600 = 0;
    dword_18004F604 = 0;
    DeleteCriticalSection(&stru_18004F5C8);
    ATL::_AtlWinModule = 0;
  }
  if ( qword_18004F5F8 )
  {
    free(qword_18004F5F8);
    qword_18004F5F8 = 0LL;
  }
  dword_18004F600 = 0;
  dword_18004F604 = 0;
}
