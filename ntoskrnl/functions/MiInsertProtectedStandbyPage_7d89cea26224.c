void __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  _OWORD v4[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(v4, 0, 0x68uLL);
  if ( MiIsPageEligibleForProtectedStandby(a1, a2) )
  {
    DWORD2(v4[0]) = 0;
    v4[1] = _mm_load_si128((const __m128i *)&_xmm);
    LODWORD(v4[6]) = 3;
    *((_QWORD *)&v4[5] + 1) = a1;
    MiAddPageToInsertList((__int64)v4, 0LL, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
    MiInsertPagesInList((__int64)v4, 0);
  }
  else
  {
    MiPfnReferenceCountIsZero(a2, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  }
}
