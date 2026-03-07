__int64 __fastcall PpmIdleEvaluateConstraints(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  int v4; // eax
  char v5; // al
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 33600);
  v7 = 0LL;
  *a2 = RtlGetInterruptTimePrecise(&v7);
  *(_QWORD *)(v2 + 696) = v7;
  *(_QWORD *)(v2 + 704) = *(_QWORD *)(a1 + 33624) + *(_QWORD *)(a1 + 33808);
  *(_BYTE *)(v2 + 738) = *(_BYTE *)(a1 + 34060);
  *(_BYTE *)(v2 + 736) = *(_BYTE *)(a1 + 33664);
  *(_BYTE *)(v2 + 737) = *(_BYTE *)(a1 + 33665);
  *(_BYTE *)(v2 + 739) = 1;
  if ( *(_BYTE *)(a1 + 33) && (unsigned __int8)PoAllProcessorsDeepIdle() )
  {
    *(_BYTE *)(v2 + 740) = 1;
    *(_WORD *)(v2 + 56) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v2 + 740) = 0;
  }
  if ( *(_BYTE *)(v2 + 1) )
  {
    *(_WORD *)(v2 + 56) |= 0x100u;
    v4 = *(_DWORD *)(v2 + 36);
  }
  else
  {
    v4 = -1;
  }
  *(_DWORD *)(v2 + 728) = v4;
  if ( PpmIdleRespectIdleStateMax )
  {
    v5 = BYTE6(PpmCurrentProfile[55 * dword_140C3D48C + 24]);
    *(_BYTE *)(v2 + 742) = v5;
    if ( v5 )
      *(_WORD *)(v2 + 56) |= 0x4000u;
  }
  else
  {
    *(_BYTE *)(v2 + 742) = 0;
  }
  return v7;
}
