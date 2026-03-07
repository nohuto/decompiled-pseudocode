void __fastcall write_string(wchar_t *string, int len, _iobuf *f, int *pnumwritten)
{
  int v6; // ebx

  v6 = len;
  if ( (f->_flag & 0x40) == 0 || f->_base )
  {
    if ( len > 0 )
    {
      do
      {
        --v6;
        write_char(*string++, f, pnumwritten);
      }
      while ( *pnumwritten != -1 && v6 > 0 );
    }
  }
  else
  {
    *pnumwritten += len;
  }
}
