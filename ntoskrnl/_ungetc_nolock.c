/*
 * XREFs of _ungetc_nolock @ 0x1403DD628
 * Callers:
 *     ReadString @ 0x1403DBB04 (ReadString.c)
 *     _input_s @ 0x1403DBE54 (_input_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 */

int __cdecl ungetc_nolock(int Ch, FILE *File)
{
  int flag; // r8d
  char *base; // r9
  char *ptr; // rax
  char *v5; // r9
  int v6; // eax

  if ( !File )
    goto LABEL_14;
  if ( Ch == -1 )
    return -1;
  flag = File->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  base = File->_base;
  if ( !base )
  {
LABEL_14:
    xHalTimerWatchdogStop();
    return -1;
  }
  ptr = File->_ptr;
  if ( File->_ptr != base )
  {
LABEL_9:
    v5 = ptr - 1;
    File->_ptr = ptr - 1;
    if ( (flag & 0x40) != 0 )
    {
      if ( *v5 != (_BYTE)Ch )
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
    ++File->_cnt;
    File->_flag = v6 & 0xFFFFFFEE | 1;
    return (unsigned __int8)Ch;
  }
  if ( !File->_cnt )
  {
    ++ptr;
    goto LABEL_9;
  }
  return -1;
}
