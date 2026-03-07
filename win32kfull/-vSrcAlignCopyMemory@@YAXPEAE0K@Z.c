void __fastcall vSrcAlignCopyMemory(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3)
{
  int v3; // eax
  __int16 v4; // ax
  unsigned __int8 v5; // al

  if ( a2 >= a1 || a1 >= &a2[a3] )
  {
    while ( a3 )
    {
      if ( ((unsigned __int8)a2 & 7) != 0 || a3 < 8 )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 || a3 < 4 )
        {
          if ( ((unsigned __int8)a2 & 1) != 0 || a3 < 2 )
          {
            v5 = *a2++;
            *a1++ = v5;
            --a3;
          }
          else
          {
            v4 = *(_WORD *)a2;
            a2 += 2;
            *(_WORD *)a1 = v4;
            a1 += 2;
            a3 -= 2;
          }
        }
        else
        {
          v3 = *(_DWORD *)a2;
          a2 += 4;
          *(_DWORD *)a1 = v3;
          a1 += 4;
          a3 -= 4;
        }
      }
      else
      {
        do
        {
          a3 -= 8;
          *(_QWORD *)a1 = *(_QWORD *)a2;
          a2 += 8;
          a1 += 8;
        }
        while ( a3 >= 8 );
      }
    }
  }
  else
  {
    memmove(a1, a2, a3);
  }
}
