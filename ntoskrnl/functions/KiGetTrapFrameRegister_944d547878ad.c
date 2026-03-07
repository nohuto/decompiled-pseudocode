__int64 __fastcall KiGetTrapFrameRegister(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx

  if ( a2 <= 7 )
  {
    if ( a2 == 7 )
      return *(_QWORD *)(a1 + 328);
    if ( !a2 )
      return *(_QWORD *)(a1 + 48);
    v2 = a2 - 1;
    if ( !v2 )
      return *(_QWORD *)(a1 + 56);
    v3 = v2 - 1;
    if ( !v3 )
      return *(_QWORD *)(a1 + 64);
    v4 = v3 - 1;
    if ( !v4 )
      return *(_QWORD *)(a1 + 320);
    v5 = v4 - 1;
    if ( !v5 )
      return *(_QWORD *)(a1 + 384);
    v6 = v5 - 1;
    if ( !v6 )
      return *(_QWORD *)(a1 + 344);
    if ( v6 == 1 )
      return *(_QWORD *)(a1 + 336);
    return 0LL;
  }
  v8 = a2 - 8;
  if ( !v8 )
    return *(_QWORD *)(a1 + 72);
  v9 = v8 - 1;
  if ( !v9 )
    return *(_QWORD *)(a1 + 80);
  v10 = v9 - 1;
  if ( !v10 )
    return *(_QWORD *)(a1 + 88);
  v11 = v10 - 1;
  if ( !v11 )
    return *(_QWORD *)(a1 + 96);
  v12 = v11 - 5;
  if ( !v12 )
    return *(_QWORD *)(a1 + 360);
  if ( v12 != 1 )
    return 0LL;
  return *(unsigned int *)(a1 + 376);
}
