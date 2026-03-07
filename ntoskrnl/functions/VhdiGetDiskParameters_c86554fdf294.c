__int64 __fastcall VhdiGetDiskParameters(_DWORD *a1, _DWORD *a2, _QWORD *a3, char *a4, _QWORD *a5)
{
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  int v10; // eax
  _DWORD *v11; // r14
  char v12; // bp
  _DWORD *v13; // rax
  int v14; // eax

  v8 = -1073741811;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        if ( a5 )
        {
          if ( a1[1] == 6 && a1[9] == 6 )
          {
            v9 = a1[3];
            if ( v9 >= 0x5C && v9 >= a1[17] + 56 && !a1[15] && a1[19] == 5 && a1[22] == 5 )
            {
              v10 = a1[23];
              v11 = a1 + 27;
              if ( !v10 && *v11 == 3 )
              {
                v12 = 1;
                memset(a2, 0, 0x90uLL);
                v13 = 0LL;
LABEL_22:
                *a3 = v13;
                *a5 = (char *)a1 + (unsigned int)a1[25] + 92;
                v8 = 0;
                *a4 = v12;
                return v8;
              }
              if ( v10 == 6 )
              {
                v12 = 0;
                if ( !a1[31] )
                {
                  memset(a2, 0, 0x90uLL);
                  a2[6] = *a1;
                  v14 = a1[32];
                  if ( v14 == 1 )
                  {
                    *((_QWORD *)a2 + 1) = *(_QWORD *)v11;
LABEL_21:
                    v13 = a1 + 33;
                    goto LABEL_22;
                  }
                  if ( !v14 )
                  {
                    *a2 = 1;
                    *((_OWORD *)a2 + 3) = *(_OWORD *)v11;
                    goto LABEL_21;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v8;
}
