__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi

  result = 0LL;
  if ( *(__int64 *)(a1 + 40) >= 0 )
  {
    v3 = (_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(a1 + 16) & 6) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 34) & 8) == 0 )
      {
        result = MiCapturePageFileInfoInline(a1 + 16, 1LL, 1LL);
        *v3 &= ~2uLL;
      }
      *(_BYTE *)(a1 + 34) |= 0x10u;
    }
  }
  return result;
}
