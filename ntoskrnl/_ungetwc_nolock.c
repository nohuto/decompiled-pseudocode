/*
 * XREFs of _ungetwc_nolock @ 0x1403DD704
 * Callers:
 *     ReadString_0 @ 0x1403DC78C (ReadString_0.c)
 *     _winput_s @ 0x1403DCC54 (_winput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 */

wint_t __cdecl ungetwc_nolock(wint_t Ch, FILE *File)
{
  int flag; // r9d
  char *ptr; // rax
  wint_t *v5; // r10
  int v6; // eax

  if ( !File )
  {
    xHalTimerWatchdogStop();
    return -1;
  }
  if ( Ch == 0xFFFF )
    return -1;
  flag = File->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  ptr = File->_ptr;
  if ( File->_ptr < File->_base + 2 )
  {
    if ( File->_cnt || File->_bufsiz < 2u )
      return -1;
    ptr = File->_base + 2;
  }
  v5 = (wint_t *)(ptr - 2);
  File->_ptr = ptr - 2;
  if ( (flag & 0x40) != 0 )
  {
    if ( *v5 != Ch )
    {
      File->_ptr = ptr;
      return -1;
    }
  }
  else
  {
    *v5 = Ch;
  }
  v6 = File->_flag;
  File->_cnt += 2;
  File->_flag = v6 & 0xFFFFFFEE | 1;
  return Ch;
}
