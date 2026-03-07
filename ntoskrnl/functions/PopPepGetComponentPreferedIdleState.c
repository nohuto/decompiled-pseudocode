__int64 __fastcall PopPepGetComponentPreferedIdleState(_DWORD *a1)
{
  int v1; // r9d
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  unsigned int *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  bool v10; // cl
  int v11; // eax

  v1 = 0;
  v3 = a1[47] - 1;
  if ( v3 >= a1[41] )
    v3 = a1[41];
  v4 = v3;
  if ( v3 )
  {
    v5 = a1 + 38;
    v6 = 6LL;
    do
    {
      v7 = *v5;
      v8 = *v5++;
      if ( v7 >= v4 )
        v8 = v4;
      v4 = v8;
      v9 = v1 + 1;
      if ( v7 != v3 )
        v9 = v1;
      v1 = v9;
      --v6;
    }
    while ( v6 );
    v10 = 0;
    if ( v9 == 5 )
      v10 = a1[40] < v3;
    v11 = a1[1];
    if ( (v11 & 4) != 0 )
    {
      if ( !v10 )
      {
        a1[1] = v11 & 0xFFFFFFFB;
        _InterlockedDecrement(&PopPepPoweredIdleComponentCount);
      }
    }
    else if ( v10 )
    {
      a1[1] = v11 | 4;
      if ( !_InterlockedExchangeAdd(&PopPepPoweredIdleComponentCount, 1u) )
        PopPepArmIdleTimer(0);
    }
  }
  return v4;
}
