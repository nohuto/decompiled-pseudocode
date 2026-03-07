void __fastcall CitLastInputUpdate(int a1, unsigned int a2, __int64 a3, char a4)
{
  int v4; // ecx
  unsigned __int16 v5; // ax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  v4 = a1 - 1;
  if ( v4 )
  {
    v6 = v4 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 6;
          if ( v9 )
          {
            v10 = v9 - 2;
            if ( v10 )
            {
              if ( v10 == 4 )
              {
                if ( (a4 & 8) != 0 )
                  v5 = 0x4000;
                else
                  v5 = 256;
              }
              else
              {
                v5 = 0;
              }
            }
            else
            {
              v5 = 8;
              if ( (a4 & 8) != 0 )
              {
                v5 = 0x2000;
              }
              else if ( a4 < 0 )
              {
                v5 = 0x8000;
              }
            }
          }
          else if ( (a4 & 8) != 0 )
          {
            v5 = 4096;
          }
          else
          {
            v5 = 4;
          }
        }
        else
        {
          v5 = 32;
        }
      }
      else
      {
        v5 = 16;
      }
    }
    else if ( (a4 & 8) != 0 )
    {
      v5 = 2048;
    }
    else
    {
      v5 = 2;
    }
  }
  else if ( (a4 & 0x40) != 0 )
  {
    v5 = 512;
  }
  else
  {
    v5 = 1024;
    if ( (a4 & 8) == 0 )
      v5 = 1;
  }
  CitpLastInputUpdate(v5, a2);
}
