__int64 BgpFwLibraryDestroy()
{
  BgpFoDestroy(0LL);
  if ( qword_140C0E458 )
  {
    BgpFoDestroy(qword_140C0E458);
    if ( *(_QWORD *)qword_140C0E458 && (*(_DWORD *)(qword_140C0E458 + 12) & 1) == 0 )
      BgpFwFreeMemory(*(_QWORD *)qword_140C0E458);
    BgpFwFreeMemory(qword_140C0E458);
    qword_140C0E458 = 0LL;
  }
  if ( qword_140C0E3E0 )
  {
    BgpFwFreeMemory(qword_140C0E3E0);
    qword_140C0E3E0 = 0LL;
    BgpFwInitializeReservePool(0LL, 0, 0LL);
    qword_140C0E460 = 0LL;
    qword_140C0E478 = 0LL;
    qword_140C0E470 = 0LL;
  }
  BgpFwLibraryDisable();
  ResFwBackgroundTransition(2LL);
  dword_140C0E3B0 = 0;
  return 0LL;
}
