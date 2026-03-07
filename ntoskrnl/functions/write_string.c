__int16 __fastcall write_string(wchar_t *a1, int a2, FILE *a3, _DWORD *a4)
{
  int flag; // eax
  int v7; // ebx

  flag = a3->_flag;
  v7 = a2;
  if ( (flag & 0x40) == 0 || a3->_base )
  {
    if ( a2 > 0 )
    {
      do
      {
        --v7;
        LOWORD(flag) = write_char(*a1++, a3, a4);
      }
      while ( *a4 != -1 && v7 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return flag;
}
