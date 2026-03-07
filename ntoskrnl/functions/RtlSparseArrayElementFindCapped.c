unsigned __int64 __fastcall RtlSparseArrayElementFindCapped(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 BitSetCapped; // rax

  BitSetCapped = RtlCSparseBitmapFindBitSetCapped(
                   a1 + 16,
                   8 * ((a2 + 1) << *(_DWORD *)(a1 + 8)) - 1,
                   8 * (a3 << *(_DWORD *)(a1 + 8)));
  if ( BitSetCapped == -1LL )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (BitSetCapped >> 3 >> *(_DWORD *)(a1 + 8) << *(_DWORD *)(a1 + 8));
}
