void __fastcall DbgkpConvertKernelToUserStateChange(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rdx
  int v9; // eax

  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 40);
  v2 = *(_DWORD *)(a2 + 128);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      *(_DWORD *)a1 = 2;
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 136);
      return;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      *(_DWORD *)a1 = 3;
      *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 136);
      *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 152);
      *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 168);
      *(_QWORD *)(a2 + 144) = 0LL;
      return;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
          {
            *(_DWORD *)a1 = 10;
            *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 136);
          }
        }
        else
        {
          *(_DWORD *)a1 = 9;
          *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 136);
          *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 152);
          *(_QWORD *)(a2 + 136) = 0LL;
        }
        return;
      }
      *(_DWORD *)a1 = 5;
    }
    else
    {
      *(_DWORD *)a1 = 4;
    }
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 136);
    return;
  }
  v8 = a2 + 136;
  if ( *(_DWORD *)v8 == -2147483645 )
  {
    *(_DWORD *)a1 = 7;
  }
  else
  {
    v9 = 8;
    if ( *(_DWORD *)v8 != -2147483644 )
      v9 = 6;
    *(_DWORD *)a1 = v9;
  }
  *(_OWORD *)(a1 + 24) = *(_OWORD *)v8;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(v8 + 16);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(v8 + 32);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(v8 + 48);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(v8 + 64);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(v8 + 80);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(v8 + 96);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(v8 + 112);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(v8 + 128);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(v8 + 144);
}
