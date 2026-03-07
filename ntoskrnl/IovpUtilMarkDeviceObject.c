void __fastcall IovpUtilMarkDeviceObject(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = *(_QWORD *)(a1 + 312);
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            if ( v6 == 1 )
              *(_DWORD *)(v2 + 32) |= 0x1000000u;
          }
          else
          {
            *(_DWORD *)(v2 + 32) |= 0x2000000u;
          }
        }
        else
        {
          *(_DWORD *)(v2 + 32) |= 0x8000000u;
        }
      }
      else
      {
        *(_DWORD *)(v2 + 32) |= 0x20000000u;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 32) |= 0x10000000u;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 32) |= 0x4000000u;
  }
}
