__int64 __fastcall CKeyframeAnimation::UpdatePlaybackState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int v4; // ebx

  if ( *(_QWORD *)(a1 + 392) )
  {
    if ( a2 > 2 )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x2D4u, 0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 564) = a2;
      if ( !*(_DWORD *)(a1 + 560) && a2 )
      {
        if ( a3 )
          a4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL);
        *(_QWORD *)(a1 + 496) = a4;
        *(_QWORD *)(a1 + 504) = a4;
      }
      v4 = 0;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 448LL) |= 2u;
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147467259, 0x2CDu, 0LL);
  }
  return v4;
}
