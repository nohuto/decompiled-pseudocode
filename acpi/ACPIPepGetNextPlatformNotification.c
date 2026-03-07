char __fastcall ACPIPepGetNextPlatformNotification(__int64 a1, _DWORD *a2, char *a3)
{
  int *v3; // rax
  bool v4; // zf
  char v7; // cl
  int v8; // r9d
  int v9; // r11d
  int v10; // r8d
  char v11; // di
  int v12; // eax
  int v13; // r8d
  int v14; // r8d

  v3 = (int *)(a1 + 252);
  v4 = *(_BYTE *)(a1 + 256) == 0;
  *a2 = -1;
  if ( v4 || (v4 = *v3 == 0, *(_BYTE *)(a1 + 256) = 0, v4) )
  {
    v8 = *(_DWORD *)(a1 + 248);
    v9 = *v3;
    if ( v8 == *v3 )
    {
      return 0;
    }
    else
    {
      v7 = 1;
      if ( v8 >= v9 )
      {
        v10 = v8;
        v11 = 0;
      }
      else
      {
        v10 = v8 + 1;
        v11 = 1;
      }
      v12 = 1;
      if ( v8 >= v9 )
        v12 = -1;
      *(_DWORD *)(a1 + 248) = v8 + v12;
      *a3 = v11;
      v13 = v10 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
            *a2 = 0;
          else
            *a2 = -1;
        }
        else
        {
          *a2 = 2;
        }
      }
      else
      {
        *a2 = 1;
      }
    }
  }
  else
  {
    v7 = 1;
    *a2 = 3;
    *a3 = 1;
  }
  return v7;
}
