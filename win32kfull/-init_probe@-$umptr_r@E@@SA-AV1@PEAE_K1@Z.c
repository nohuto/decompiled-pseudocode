__int64 __fastcall umptr_r<unsigned char>::init_probe(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  if ( is_mul_ok(a3, 1uLL) )
  {
    if ( a3 )
    {
      if ( ((a4 - 1) & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + a2 > MmUserProbeAddress || a3 + a2 < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
  }
  return a1;
}
