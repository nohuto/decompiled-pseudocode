__int64 __fastcall Edgy::_GetRectForLocation(__int64 a1, _OWORD *a2, int a3, int a4)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // ecx
  int v8; // ecx

  *(_OWORD *)a1 = *a2;
  if ( a3 )
  {
    v5 = a3 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          v7 = *(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 4) = v7 - a4;
          *(_DWORD *)(a1 + 12) = v7 + 1;
        }
        else
        {
          *(_QWORD *)a1 = 0LL;
          *(_QWORD *)(a1 + 8) = 0LL;
        }
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)a1 = v8 - a4;
        *(_DWORD *)(a1 + 8) = v8 + 1;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 12) = a4 + *(_DWORD *)(a1 + 4);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a4 + *(_DWORD *)a1;
  }
  return a1;
}
