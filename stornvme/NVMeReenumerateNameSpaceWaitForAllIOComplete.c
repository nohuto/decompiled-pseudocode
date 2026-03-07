char __fastcall NVMeReenumerateNameSpaceWaitForAllIOComplete(__int64 a1)
{
  char v1; // bl
  __int64 v3; // r9
  unsigned int v4; // eax
  _QWORD *v5; // rsi
  unsigned int v6; // ebp
  unsigned int i; // r14d
  unsigned int v8; // ecx

  v1 = 1;
  StorPortPause(a1, 120LL);
  LOWORD(v4) = *(_WORD *)(a1 + 336);
  v5 = (_QWORD *)(a1 + 872);
  *(_DWORD *)(a1 + 32) |= 0x100u;
  v6 = 0;
  if ( (_WORD)v4 )
  {
    do
    {
      for ( i = 0; i < 0x3E8; ++i )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL, v3);
        if ( !*(_WORD *)(*v5 + 136LL * v6 + 128) )
          break;
      }
      v4 = *(unsigned __int16 *)(a1 + 336);
      ++v6;
    }
    while ( v6 < v4 );
  }
  v8 = 0;
  if ( (_WORD)v4 )
  {
    while ( !*(_WORD *)(136LL * v8 + *v5 + 128) )
    {
      if ( ++v8 >= (unsigned __int16)v4 )
        return v1;
    }
    v1 = 0;
    if ( *(_BYTE *)(a1 + 24) )
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  }
  return v1;
}
