/*
 * XREFs of _fgetwc_nolock @ 0x1403DD6B8
 * Callers:
 *     ReadString_0 @ 0x1403DC78C (ReadString_0.c)
 *     _whiteout @ 0x1403DCBFC (_whiteout.c)
 *     _winput_s @ 0x1403DCC54 (_winput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _filwbuf_s @ 0x1403DD7A8 (_filwbuf_s.c)
 */

wint_t __cdecl fgetwc_nolock(FILE *File)
{
  wint_t result; // ax
  bool v3; // sf
  char *ptr; // rcx

  if ( File )
  {
    v3 = File->_cnt - 2 < 0;
    File->_cnt -= 2;
    if ( v3 )
    {
      return filwbuf_s(File, File);
    }
    else
    {
      ptr = File->_ptr;
      result = *(_WORD *)ptr;
      File->_ptr = ptr + 2;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
  return result;
}
