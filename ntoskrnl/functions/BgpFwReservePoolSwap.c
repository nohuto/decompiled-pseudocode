void __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140C709D0 = qword_140D1AE48;
      dword_140C709F0 = dword_140D1AE44;
      HintIndex = dword_140D1AE40;
      stru_140C709E0 = (RTL_BITMAP)xmmword_140D1AE50;
    }
  }
  else
  {
    dword_140D1AE40 = HintIndex;
    qword_140D1AE48 = qword_140C709D0;
    dword_140D1AE44 = dword_140C709F0;
    xmmword_140D1AE50 = (__int128)stru_140C709E0;
    BgpFwInitializeReservePool(a2, a3, a4);
  }
}
